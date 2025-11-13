/******************************************************************************
 * Copyright (C) Ultraleap, Inc. 2011-2024.                                   *
 *                                                                            *
 * Use subject to the terms of the Apache License 2.0 available at            *
 * http://www.apache.org/licenses/LICENSE-2.0, or another agreement           *
 * between Ultraleap and you, your company or other organization.             *
 ******************************************************************************/


#include "LeapTeleportComponent.h"
#include "LeapUtility.h"
#include "LeapVisualizer.h"
#include "LeapHandActor.h"
#include "Modules/ModuleManager.h"

// Sets default values for this component's properties
ULeapTeleportComponent::ULeapTeleportComponent()
	: LocalTeleportLaunchSpeed(1000)
	, TeleportTraceSystemPath(TEXT("NiagaraSystem'/UltraleapTracking/InteractionEngine/VFX/Leap_NS_TeleportTrace.Leap_NS_TeleportTrace'"))
	, LeapTeleportTraceNS(nullptr)
	, bValidTeleportationLocation(false)
	, bTeleportTraceActive(false)
	, bTeleportOnce(true)
{
        // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
        // off to improve performance if you don't need them.
        PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void ULeapTeleportComponent::BeginPlay()
{
        Super::BeginPlay();

#if WITH_NIAGARA
        EnsureTeleportTraceSystemLoaded();
#endif

	WorldContextObject = GetWorld();

	if (!WorldContextObject)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("WorldContextObject is nullptr in ULeapTeleportComponent::BeginPlay()"));
		return;
	}
	Owner = GetOwner();
	if (!Owner)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("Owner is nullptr in ULeapTeleportComponent::BeginPlay()"));
		return;
	}

	LeapSubsystem = ULeapSubsystem::Get();
	if (LeapSubsystem == nullptr)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("LeapSubsystem is nullptr in ULeapTeleportComponent::BeginPlay()"));
		return;
	}

	LeapSubsystem->OnLeapGrabActionNative.AddUObject(this, &ULeapTeleportComponent::OnLeapGrabAction);
	LeapSubsystem->OnLeapReleaseNative.AddUObject(this, &ULeapTeleportComponent::OnLeapRelease);

	NavSys = UNavigationSystemV1::GetNavigationSystem(WorldContextObject);
	if (!NavSys)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("NavSys is nullptr in ULeapTeleportComponent::BeginPlay()"));
		return;
	}

	if (!CameraComponent)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("CameraComponent is nullptr in ULeapTeleportComponent::BeginPlay()"));
		return;
	}
	
}

void ULeapTeleportComponent::StartTeleportTrace()
{
#if WITH_NIAGARA
        EnsureTeleportTraceSystemLoaded();
        if (LeapTeleportTraceNS == nullptr)
        {
                UE_LOG(UltraleapTrackingLog, Error, TEXT("Unable to start teleport trace - Niagara system is unavailable."));
                return;
        }

        bTeleportTraceActive = true;

        FVector Location = FVector::ZeroVector;
        FRotator Rotation = FRotator::ZeroRotator;

        TeleportTraceNSComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(WorldContextObject, LeapTeleportTraceNS, Location, Rotation);

	if (!TeleportTraceNSComponent)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("TeleportTraceNSComponent is nullptr in ULeapTeleportComponent::StartTeleportTrace()"));
		return;
	}

	TeleportTraceNSComponent->SetVisibility(true);

	UClass* VisualizerClass = ALeapVisualizer::StaticClass();
	FVector Loc = FVector::ZeroVector;
	FRotator Rot = FRotator::ZeroRotator;
	FActorSpawnParameters SpawnParams = FActorSpawnParameters();
	TeleportVisualizerReference = GetWorld()->SpawnActor(VisualizerClass, &Loc, &Rot, SpawnParams);

	if (!TeleportVisualizerReference)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("TeleportVisualizerReference is nullptr in ULeapTeleportComponent::BeginPlay()"));
		return;
	}

        TeleportVisualizerReference->AttachToActor(Owner, FAttachmentTransformRules::KeepWorldTransform);
#else
        UE_LOG(UltraleapTrackingLog, Warning, TEXT("Niagara is disabled - teleport trace cannot be started."));
#endif
}

bool ULeapTeleportComponent::IsValidTeleportLocation(FHitResult OutHit, FNavLocation &OutLocation)
{
	bool Valid = NavSys->ProjectPointToNavigation(OutHit.Location, OutLocation); 
	return (Valid && OutHit.bBlockingHit);
}

void ULeapTeleportComponent::TeleportTrace(const FVector Location, const FVector Direction)
{
        FHitResult OutHit;
        TArray<FVector> OutPathPositions;
	FVector OutLastTraceDestination;
	FVector StartPos = Location; 
	FVector LaunchVelocity = Direction * LocalTeleportLaunchSpeed;
	float ProjectileRadius = 3.6f;
	TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
	TEnumAsByte<EObjectTypeQuery> ObjectType{UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic)};
	ObjectTypes.Add(ObjectType);
	const TArray<AActor*> ActorsToIgnore;
	EDrawDebugTrace::Type DrawDebugType = EDrawDebugTrace::None;
	float DrawDebugTime = 0.0f;

	UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(WorldContextObject, OutHit, OutPathPositions,
		OutLastTraceDestination, StartPos, LaunchVelocity, true, ProjectileRadius, ObjectTypes, false, ActorsToIgnore,
		DrawDebugType,
		DrawDebugTime);

	OutPathPositions.Insert(StartPos, 0);

	FNavLocation OutLocation;
	bValidTeleportationLocation = IsValidTeleportLocation(OutHit, OutLocation);

	if (bValidTeleportationLocation)
	{
		float LocalNavMeshCellHeight = 8.0f;
		if (USceneComponent* Component = TeleportVisualizerReference->GetRootComponent())
		{
			Component->SetVisibility(bValidTeleportationLocation);
		}
		ProjectedTeleportLocation = FVector(OutLocation.Location.X, OutLocation.Location.Y, OutLocation.Location.Z - LocalNavMeshCellHeight);
	}

        TeleportVisualizerReference->SetActorLocation(ProjectedTeleportLocation);

#if WITH_NIAGARA
        if (TeleportTraceNSComponent != nullptr)
        {
                const FName OverrideName = FName(TEXT("User.PointArray"));
                UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(
                        TeleportTraceNSComponent, OverrideName, OutPathPositions);
        }
#endif
}

void ULeapTeleportComponent::TryTeleport()
{
	if (!bValidTeleportationLocation)
	{
		UE_LOG(UltraleapTrackingLog, Warning, TEXT("not bValidTeleportationLocation in ULeapTeleportComponent::TryTeleport"));
		return;
	}
	bValidTeleportationLocation = false;

	if (!CameraComponent)
	{
		UE_LOG(UltraleapTrackingLog, Warning, TEXT("nullptr CameraComponent in ULeapTeleportComponent::TryTeleport"));
		return;
	}

	FVector Location = FVector(CameraComponent->GetRelativeLocation().X, CameraComponent->GetRelativeLocation().Y, 0.0f);
	FRotator Rotation = FRotator(Owner->GetActorRotation());
	Location = Rotation.RotateVector(Location);
	Location = ProjectedTeleportLocation - Location;
	Owner->TeleportTo(Location, Rotation);

}

void ULeapTeleportComponent::EndTeleportTrace()
{
        bTeleportTraceActive = false;
        if (TeleportTraceNSComponent)
        {
                TeleportTraceNSComponent->DestroyComponent();
        }
        if (TeleportVisualizerReference)
        {
                TeleportVisualizerReference->Destroy();
        }
}

#if WITH_NIAGARA
void ULeapTeleportComponent::EnsureTeleportTraceSystemLoaded()
{
        if (LeapTeleportTraceNS != nullptr)
        {
                return;
        }

        if (!TeleportTraceSystemPath.IsValid())
        {
                UE_LOG(UltraleapTrackingLog, Warning, TEXT("Teleport trace Niagara system path is invalid."));
                return;
        }

        if (!FModuleManager::Get().IsModuleLoaded(TEXT("Niagara")))
        {
                FModuleManager::Get().LoadModule(TEXT("Niagara"));
        }

        UObject* const LoadedObject = TeleportTraceSystemPath.TryLoad();
        LeapTeleportTraceNS = Cast<UNiagaraSystem>(LoadedObject);
        if (LeapTeleportTraceNS == nullptr)
        {
                UE_LOG(UltraleapTrackingLog, Error, TEXT("Failed to load teleport trace Niagara system from %s"),
                        *TeleportTraceSystemPath.ToString());
        }
}
#endif // WITH_NIAGARA


void ULeapTeleportComponent::OnLeapGrabAction(FVector Location, FVector ForwardVec)
{
	if (bTeleportOnce)
	{
		StartTeleportTrace();
		bTeleportOnce = false;
	}
	TeleportTrace(Location, ForwardVec);
}

void ULeapTeleportComponent::OnLeapRelease(
	AActor* ReleasedActor, USkeletalMeshComponent* HandLeft, USkeletalMeshComponent* HandRight, FName BoneName)
{
	if (!ReleasedActor)
	{
		return;
	}
	if (!Cast<ALeapHandActor>(ReleasedActor))
	{
		return;
	}
	if (!bTeleportTraceActive)
	{	
		UE_LOG(UltraleapTrackingLog, Warning, TEXT("bTeleportTraceActive is false in OnLeapRelease"));
		return;
	}
	bTeleportOnce = true;
	EndTeleportTrace();
	TryTeleport();
}
