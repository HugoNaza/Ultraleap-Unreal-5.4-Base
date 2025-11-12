// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/InteractionEngine/NonKinematicGraspedMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonKinematicGraspedMovement() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UGraspedMovementHandler();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UNonKinematicGraspedMovement();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UNonKinematicGraspedMovement_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class UNonKinematicGraspedMovement
void UNonKinematicGraspedMovement::StaticRegisterNativesUNonKinematicGraspedMovement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNonKinematicGraspedMovement);
UClass* Z_Construct_UClass_UNonKinematicGraspedMovement_NoRegister()
{
	return UNonKinematicGraspedMovement::StaticClass();
}
struct Z_Construct_UClass_UNonKinematicGraspedMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractionEngine/NonKinematicGraspedMovement.h" },
		{ "ModuleRelativePath", "Public/InteractionEngine/NonKinematicGraspedMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthByDistance_MetaData[] = {
		{ "Comment", "// Curve for how fast the physics tracks the desired target location\n" },
		{ "ModuleRelativePath", "Public/InteractionEngine/NonKinematicGraspedMovement.h" },
		{ "ToolTip", "Curve for how fast the physics tracks the desired target location" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthByDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNonKinematicGraspedMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::NewProp_StrengthByDistance = { "StrengthByDistance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNonKinematicGraspedMovement, StrengthByDistance), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthByDistance_MetaData), NewProp_StrengthByDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::NewProp_StrengthByDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGraspedMovementHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::ClassParams = {
	&UNonKinematicGraspedMovement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNonKinematicGraspedMovement()
{
	if (!Z_Registration_Info_UClass_UNonKinematicGraspedMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNonKinematicGraspedMovement.OuterSingleton, Z_Construct_UClass_UNonKinematicGraspedMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNonKinematicGraspedMovement.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UNonKinematicGraspedMovement>()
{
	return UNonKinematicGraspedMovement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNonKinematicGraspedMovement);
UNonKinematicGraspedMovement::~UNonKinematicGraspedMovement() {}
// End Class UNonKinematicGraspedMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_NonKinematicGraspedMovement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNonKinematicGraspedMovement, UNonKinematicGraspedMovement::StaticClass, TEXT("UNonKinematicGraspedMovement"), &Z_Registration_Info_UClass_UNonKinematicGraspedMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNonKinematicGraspedMovement), 2675991521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_NonKinematicGraspedMovement_h_2067391790(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_NonKinematicGraspedMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_NonKinematicGraspedMovement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
