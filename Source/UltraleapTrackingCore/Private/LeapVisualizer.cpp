/******************************************************************************
 * Copyright (C) Ultraleap, Inc. 2011-2024.                                   *
 *                                                                            *
 * Use subject to the terms of the Apache License 2.0 available at            *
 * http://www.apache.org/licenses/LICENSE-2.0, or another agreement           *
 * between Ultraleap and you, your company or other organization.             *
 ******************************************************************************/


#include "LeapVisualizer.h"
#include "LeapUtility.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Modules/ModuleManager.h"

#if WITH_NIAGARA
namespace LeapVisualizerInternal
{
        static UNiagaraSystem* LoadNiagaraSystem(const FSoftObjectPath& SystemPath, const TCHAR* AssetDebugName)
        {
                if (!SystemPath.IsValid())
                {
                        UE_LOG(UltraleapTrackingLog, Warning,
                                TEXT("Invalid Niagara system path provided for %s"), AssetDebugName);
                        return nullptr;
                }

                if (!FModuleManager::Get().IsModuleLoaded(TEXT("Niagara")))
                {
                        FModuleManager::Get().LoadModule(TEXT("Niagara"));
                }

                UObject* const LoadedObject = SystemPath.TryLoad();
                UNiagaraSystem* const NiagaraSystem = Cast<UNiagaraSystem>(LoadedObject);
                if (NiagaraSystem == nullptr)
                {
                        UE_LOG(UltraleapTrackingLog, Error, TEXT("Failed to load Niagara system %s from %s"), AssetDebugName,
                                *SystemPath.ToString());
                }

                return NiagaraSystem;
        }
}
#endif // WITH_NIAGARA

// Sets default values
ALeapVisualizer::ALeapVisualizer()
        : NSPlayerAreaBounds(nullptr)
        , NSPTeleportRing(nullptr)
        , PlayerAreaBoundsSystemPath(TEXT("NiagaraSystem'/UltraleapTracking/InteractionEngine/VFX/Leap_NS_PlayAreaBounds.Leap_NS_PlayAreaBounds'"))
        , TeleportRingSystemPath(TEXT("NiagaraSystem'/UltraleapTracking/InteractionEngine/VFX/Leap_NS_TeleportRing.Leap_NS_TeleportRing'"))
        , Root(nullptr)
	, PlayerAreaBoundsComponent(nullptr)
	, TeleportRingComponent(nullptr)
	, LeapPawn(nullptr)
	, PlayerCameraManager(nullptr)
	, World(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;

        PlayerAreaBoundsComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraAreaBoundsComponent"));
        TeleportRingComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraTeleportRingComponent"));

        if (!PlayerAreaBoundsComponent || !TeleportRingComponent)
        {
                UE_LOG(UltraleapTrackingLog, Error, TEXT("Failed to create Niagara components in ALeapVisualizer()."));
        }

        if (RootComponent)
        {
                PlayerAreaBoundsComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
                TeleportRingComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
        }

}

// Called when the actor components have been created
void ALeapVisualizer::PostInitializeComponents()
{
        Super::PostInitializeComponents();

#if WITH_NIAGARA
        EnsureNiagaraSystemsLoaded();
#endif
}

// Called when the game starts or when spawned
void ALeapVisualizer::BeginPlay()
{
        Super::BeginPlay();

#if WITH_NIAGARA
        EnsureNiagaraSystemsLoaded();
#endif

        FVector2D PlayerArea = UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds();
        FVector PlayerVec = FVector(PlayerArea.X, PlayerArea.Y, 0.0f);

#if WITH_NIAGARA
        if (PlayerAreaBoundsComponent != nullptr)
        {
                PlayerAreaBoundsComponent->SetVariableVec3(TEXT("User.PlayAreaBounds"), PlayerVec);
        }
#endif

	World = GetWorld();
	if (World == nullptr)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("World is nullptr in ALeapVisualizer::BeginPlay"));
		return;
	}

	LeapPawn = UGameplayStatics::GetPlayerPawn(World, 0);
	if (LeapPawn == nullptr)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("LeapPawn is nullptr in ALeapVisualizer::BeginPlay"));
		return;
	}
	PlayerCameraManager = UGameplayStatics::GetPlayerCameraManager(World, 0);
	if (PlayerCameraManager == nullptr)
	{
		UE_LOG(UltraleapTrackingLog, Error, TEXT("PlayerCameraManager is nullptr in ALeapVisualizer::BeginPlay"));
		return;
	}
}

#if WITH_NIAGARA
void ALeapVisualizer::EnsureNiagaraSystemsLoaded()
{
        if (PlayerAreaBoundsComponent != nullptr && NSPlayerAreaBounds == nullptr)
        {
                NSPlayerAreaBounds = LeapVisualizerInternal::LoadNiagaraSystem(
                        PlayerAreaBoundsSystemPath, TEXT("NSPlayerAreaBounds"));
                if (NSPlayerAreaBounds != nullptr)
                {
                        PlayerAreaBoundsComponent->SetAsset(NSPlayerAreaBounds);
                }
        }

        if (TeleportRingComponent != nullptr && NSPTeleportRing == nullptr)
        {
                NSPTeleportRing = LeapVisualizerInternal::LoadNiagaraSystem(
                        TeleportRingSystemPath, TEXT("NSPTeleportRing"));
                if (NSPTeleportRing != nullptr)
                {
                        TeleportRingComponent->SetAsset(NSPTeleportRing);
                }
        }
}
#endif // WITH_NIAGARA
