// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Private/OpenXRToLeapWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRToLeapWrapper() {}

// Begin Cross Module References
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Enum EHandKeypointUL
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandKeypointUL;
static UEnum* EHandKeypointUL_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandKeypointUL.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandKeypointUL.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("EHandKeypointUL"));
	}
	return Z_Registration_Info_UEnum_EHandKeypointUL.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<EHandKeypointUL>()
{
	return EHandKeypointUL_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transforms that are tracked on the hand with the ultraleap extension (has elbow/forearm).\n *\n */" },
		{ "Elbow.Name", "EHandKeypointUL::Elbow" },
		{ "IndexDistal.Name", "EHandKeypointUL::IndexDistal" },
		{ "IndexIntermediate.Name", "EHandKeypointUL::IndexIntermediate" },
		{ "IndexMetacarpal.Name", "EHandKeypointUL::IndexMetacarpal" },
		{ "IndexProximal.Name", "EHandKeypointUL::IndexProximal" },
		{ "IndexTip.Name", "EHandKeypointUL::IndexTip" },
		{ "LittleDistal.Name", "EHandKeypointUL::LittleDistal" },
		{ "LittleIntermediate.Name", "EHandKeypointUL::LittleIntermediate" },
		{ "LittleMetacarpal.Name", "EHandKeypointUL::LittleMetacarpal" },
		{ "LittleProximal.Name", "EHandKeypointUL::LittleProximal" },
		{ "LittleTip.Name", "EHandKeypointUL::LittleTip" },
		{ "MiddleDistal.Name", "EHandKeypointUL::MiddleDistal" },
		{ "MiddleIntermediate.Name", "EHandKeypointUL::MiddleIntermediate" },
		{ "MiddleMetacarpal.Name", "EHandKeypointUL::MiddleMetacarpal" },
		{ "MiddleProximal.Name", "EHandKeypointUL::MiddleProximal" },
		{ "MiddleTip.Name", "EHandKeypointUL::MiddleTip" },
		{ "ModuleRelativePath", "Private/OpenXRToLeapWrapper.h" },
		{ "Palm.Name", "EHandKeypointUL::Palm" },
		{ "RingDistal.Name", "EHandKeypointUL::RingDistal" },
		{ "RingIntermediate.Name", "EHandKeypointUL::RingIntermediate" },
		{ "RingMetacarpal.Name", "EHandKeypointUL::RingMetacarpal" },
		{ "RingProximal.Name", "EHandKeypointUL::RingProximal" },
		{ "RingTip.Name", "EHandKeypointUL::RingTip" },
		{ "ThumbDistal.Name", "EHandKeypointUL::ThumbDistal" },
		{ "ThumbMetacarpal.Name", "EHandKeypointUL::ThumbMetacarpal" },
		{ "ThumbProximal.Name", "EHandKeypointUL::ThumbProximal" },
		{ "ThumbTip.Name", "EHandKeypointUL::ThumbTip" },
		{ "ToolTip", "Transforms that are tracked on the hand with the ultraleap extension (has elbow/forearm)." },
		{ "Wrist.Name", "EHandKeypointUL::Wrist" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandKeypointUL::Palm", (int64)EHandKeypointUL::Palm },
		{ "EHandKeypointUL::Wrist", (int64)EHandKeypointUL::Wrist },
		{ "EHandKeypointUL::ThumbMetacarpal", (int64)EHandKeypointUL::ThumbMetacarpal },
		{ "EHandKeypointUL::ThumbProximal", (int64)EHandKeypointUL::ThumbProximal },
		{ "EHandKeypointUL::ThumbDistal", (int64)EHandKeypointUL::ThumbDistal },
		{ "EHandKeypointUL::ThumbTip", (int64)EHandKeypointUL::ThumbTip },
		{ "EHandKeypointUL::IndexMetacarpal", (int64)EHandKeypointUL::IndexMetacarpal },
		{ "EHandKeypointUL::IndexProximal", (int64)EHandKeypointUL::IndexProximal },
		{ "EHandKeypointUL::IndexIntermediate", (int64)EHandKeypointUL::IndexIntermediate },
		{ "EHandKeypointUL::IndexDistal", (int64)EHandKeypointUL::IndexDistal },
		{ "EHandKeypointUL::IndexTip", (int64)EHandKeypointUL::IndexTip },
		{ "EHandKeypointUL::MiddleMetacarpal", (int64)EHandKeypointUL::MiddleMetacarpal },
		{ "EHandKeypointUL::MiddleProximal", (int64)EHandKeypointUL::MiddleProximal },
		{ "EHandKeypointUL::MiddleIntermediate", (int64)EHandKeypointUL::MiddleIntermediate },
		{ "EHandKeypointUL::MiddleDistal", (int64)EHandKeypointUL::MiddleDistal },
		{ "EHandKeypointUL::MiddleTip", (int64)EHandKeypointUL::MiddleTip },
		{ "EHandKeypointUL::RingMetacarpal", (int64)EHandKeypointUL::RingMetacarpal },
		{ "EHandKeypointUL::RingProximal", (int64)EHandKeypointUL::RingProximal },
		{ "EHandKeypointUL::RingIntermediate", (int64)EHandKeypointUL::RingIntermediate },
		{ "EHandKeypointUL::RingDistal", (int64)EHandKeypointUL::RingDistal },
		{ "EHandKeypointUL::RingTip", (int64)EHandKeypointUL::RingTip },
		{ "EHandKeypointUL::LittleMetacarpal", (int64)EHandKeypointUL::LittleMetacarpal },
		{ "EHandKeypointUL::LittleProximal", (int64)EHandKeypointUL::LittleProximal },
		{ "EHandKeypointUL::LittleIntermediate", (int64)EHandKeypointUL::LittleIntermediate },
		{ "EHandKeypointUL::LittleDistal", (int64)EHandKeypointUL::LittleDistal },
		{ "EHandKeypointUL::LittleTip", (int64)EHandKeypointUL::LittleTip },
		{ "EHandKeypointUL::Elbow", (int64)EHandKeypointUL::Elbow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"EHandKeypointUL",
	"EHandKeypointUL",
	Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL()
{
	if (!Z_Registration_Info_UEnum_EHandKeypointUL.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandKeypointUL.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_EHandKeypointUL_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandKeypointUL.InnerSingleton;
}
// End Enum EHandKeypointUL

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_OpenXRToLeapWrapper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandKeypointUL_StaticEnum, TEXT("EHandKeypointUL"), &Z_Registration_Info_UEnum_EHandKeypointUL, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 868184497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_OpenXRToLeapWrapper_h_762391268(TEXT("/Script/UltraleapTracking"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_OpenXRToLeapWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_OpenXRToLeapWrapper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
