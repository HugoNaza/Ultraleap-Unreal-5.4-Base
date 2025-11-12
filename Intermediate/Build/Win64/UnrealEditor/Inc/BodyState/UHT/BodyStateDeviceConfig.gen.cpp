// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/BodyStateDeviceConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateDeviceConfig() {}

// Begin Cross Module References
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin Enum EBodyStateDeviceInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBodyStateDeviceInputType;
static UEnum* EBodyStateDeviceInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBodyStateDeviceInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBodyStateDeviceInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("EBodyStateDeviceInputType"));
	}
	return Z_Registration_Info_UEnum_EBodyStateDeviceInputType.OuterSingleton;
}
template<> BODYSTATE_API UEnum* StaticEnum<EBodyStateDeviceInputType>()
{
	return EBodyStateDeviceInputType_StaticEnum();
}
struct Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EXTERNAL_REFERENCE_INPUT_TYPE.Comment", "// e.g. leap motion\n" },
		{ "EXTERNAL_REFERENCE_INPUT_TYPE.Name", "EXTERNAL_REFERENCE_INPUT_TYPE" },
		{ "EXTERNAL_REFERENCE_INPUT_TYPE.ToolTip", "e.g. leap motion" },
		{ "HMD_MOUNTED_INPUT_TYPE.Comment", "// e.g. IMU with direct no external references like a Myo\n" },
		{ "HMD_MOUNTED_INPUT_TYPE.Name", "HMD_MOUNTED_INPUT_TYPE" },
		{ "HMD_MOUNTED_INPUT_TYPE.ToolTip", "e.g. IMU with direct no external references like a Myo" },
		{ "INERTIAL_INPUT_TYPE.Name", "INERTIAL_INPUT_TYPE" },
		{ "MIXED_INPUT_TYPE.Comment", "// e.g. lighthouse\n" },
		{ "MIXED_INPUT_TYPE.Name", "MIXED_INPUT_TYPE" },
		{ "MIXED_INPUT_TYPE.ToolTip", "e.g. lighthouse" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "INERTIAL_INPUT_TYPE", (int64)INERTIAL_INPUT_TYPE },
		{ "HMD_MOUNTED_INPUT_TYPE", (int64)HMD_MOUNTED_INPUT_TYPE },
		{ "EXTERNAL_REFERENCE_INPUT_TYPE", (int64)EXTERNAL_REFERENCE_INPUT_TYPE },
		{ "MIXED_INPUT_TYPE", (int64)MIXED_INPUT_TYPE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	"EBodyStateDeviceInputType",
	"EBodyStateDeviceInputType",
	Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType()
{
	if (!Z_Registration_Info_UEnum_EBodyStateDeviceInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBodyStateDeviceInputType.InnerSingleton, Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBodyStateDeviceInputType.InnerSingleton;
}
// End Enum EBodyStateDeviceInputType

// Begin ScriptStruct FBodyStateDeviceConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig;
class UScriptStruct* FBodyStateDeviceConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateDeviceConfig, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateDeviceConfig"));
	}
	return Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateDeviceConfig>()
{
	return FBodyStateDeviceConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Comment", "/** Name of the device generating this input */" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Name of the device generating this input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[] = {
		{ "Comment", "/** Input type this device uses */" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Input type this device uses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[] = {
		{ "Comment", "/** Any specific tracking tags you may wish to expose to various systems, e.g. Finger Hand Tracking, Full Body Tracking*/" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Any specific tracking tags you may wish to expose to various systems, e.g. Finger Hand Tracking, Full Body Tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerial_MetaData[] = {
		{ "Comment", "/** Serial no. of the device generating this input */" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Serial no. of the device generating this input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateDeviceConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateDeviceConfig, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateDeviceConfig, InputType), Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputType_MetaData), NewProp_InputType_MetaData) }; // 2221628218
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_Inner = { "TrackingTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags = { "TrackingTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateDeviceConfig, TrackingTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingTags_MetaData), NewProp_TrackingTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceSerial = { "DeviceSerial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateDeviceConfig, DeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerial_MetaData), NewProp_DeviceSerial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceSerial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"BodyStateDeviceConfig",
	Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers),
	sizeof(FBodyStateDeviceConfig),
	alignof(FBodyStateDeviceConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig.InnerSingleton, Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig.InnerSingleton;
}
// End ScriptStruct FBodyStateDeviceConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDeviceConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBodyStateDeviceInputType_StaticEnum, TEXT("EBodyStateDeviceInputType"), &Z_Registration_Info_UEnum_EBodyStateDeviceInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2221628218U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBodyStateDeviceConfig::StaticStruct, Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewStructOps, TEXT("BodyStateDeviceConfig"), &Z_Registration_Info_UScriptStruct_BodyStateDeviceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyStateDeviceConfig), 3414202753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDeviceConfig_h_273236222(TEXT("/Script/BodyState"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDeviceConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDeviceConfig_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDeviceConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateDeviceConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
