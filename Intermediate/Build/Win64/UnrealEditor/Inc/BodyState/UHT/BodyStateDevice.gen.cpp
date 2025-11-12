// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/BodyStateDevice.h"
#include "ThirdParty/BodyState/Public/BodyStateDeviceConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateDevice() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDevice();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin ScriptStruct FBodyStateDevice
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyStateDevice;
class UScriptStruct* FBodyStateDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyStateDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateDevice, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateDevice"));
	}
	return Z_Registration_Info_UScriptStruct_BodyStateDevice.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateDevice>()
{
	return FBodyStateDevice::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyStateDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateDevice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateDevice, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateDevice, Config), Z_Construct_UScriptStruct_FBodyStateDeviceConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3414202753
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateDevice, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewProp_Skeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateDevice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"BodyStateDevice",
	Z_Construct_UScriptStruct_FBodyStateDevice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::PropPointers),
	sizeof(FBodyStateDevice),
	alignof(FBodyStateDevice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDevice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyStateDevice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDevice()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateDevice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyStateDevice.InnerSingleton, Z_Construct_UScriptStruct_FBodyStateDevice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyStateDevice.InnerSingleton;
}
// End ScriptStruct FBodyStateDevice

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDevice_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBodyStateDevice::StaticStruct, Z_Construct_UScriptStruct_FBodyStateDevice_Statics::NewStructOps, TEXT("BodyStateDevice"), &Z_Registration_Info_UScriptStruct_BodyStateDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyStateDevice), 1654857395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDevice_h_537855495(TEXT("/Script/BodyState"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDevice_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDevice_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
