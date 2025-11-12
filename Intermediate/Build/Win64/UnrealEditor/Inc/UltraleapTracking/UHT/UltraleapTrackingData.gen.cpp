// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/UltraleapTrackingData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapTrackingData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_EHandType();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapImageType();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMode();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_EUIInteractionType();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAnalytics();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapBoneData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapDevice();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapDigitData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapPalmData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapStats();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FTelemetry();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Enum EHandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandType;
static UEnum* EHandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_EHandType, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("EHandType"));
	}
	return Z_Registration_Info_UEnum_EHandType.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<EHandType>()
{
	return EHandType_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_EHandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_HAND_LEFT.Name", "LEAP_HAND_LEFT" },
		{ "LEAP_HAND_RIGHT.Name", "LEAP_HAND_RIGHT" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_HAND_LEFT", (int64)LEAP_HAND_LEFT },
		{ "LEAP_HAND_RIGHT", (int64)LEAP_HAND_RIGHT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_EHandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"EHandType",
	"EHandType",
	Z_Construct_UEnum_UltraleapTracking_EHandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_EHandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_EHandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_EHandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_EHandType()
{
	if (!Z_Registration_Info_UEnum_EHandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandType.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_EHandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandType.InnerSingleton;
}
// End Enum EHandType

// Begin Enum EUIInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIInteractionType;
static UEnum* EUIInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUIInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUIInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_EUIInteractionType, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("EUIInteractionType"));
	}
	return Z_Registration_Info_UEnum_EUIInteractionType.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<EUIInteractionType>()
{
	return EUIInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_EUIInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FAR.Name", "FAR" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "NEAR.Name", "NEAR" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FAR", (int64)FAR },
		{ "NEAR", (int64)NEAR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_EUIInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"EUIInteractionType",
	"EUIInteractionType",
	Z_Construct_UEnum_UltraleapTracking_EUIInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_EUIInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_EUIInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_EUIInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_EUIInteractionType()
{
	if (!Z_Registration_Info_UEnum_EUIInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIInteractionType.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_EUIInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUIInteractionType.InnerSingleton;
}
// End Enum EUIInteractionType

// Begin Enum ELeapMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapMode;
static UEnum* ELeapMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapMode, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapMode"));
	}
	return Z_Registration_Info_UEnum_ELeapMode.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapMode>()
{
	return ELeapMode_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_MODE_DESKTOP.Comment", "// The tracking mode optimised for head-mounted devices.\n" },
		{ "LEAP_MODE_DESKTOP.Name", "LEAP_MODE_DESKTOP" },
		{ "LEAP_MODE_DESKTOP.ToolTip", "The tracking mode optimised for head-mounted devices." },
		{ "LEAP_MODE_SCREENTOP.Comment", "// The tracking mode optimised for desktop devices. Also known as 'Below'\n" },
		{ "LEAP_MODE_SCREENTOP.Name", "LEAP_MODE_SCREENTOP" },
		{ "LEAP_MODE_SCREENTOP.ToolTip", "The tracking mode optimised for desktop devices. Also known as 'Below'" },
		{ "LEAP_MODE_VR.Name", "LEAP_MODE_VR" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_MODE_VR", (int64)LEAP_MODE_VR },
		{ "LEAP_MODE_DESKTOP", (int64)LEAP_MODE_DESKTOP },
		{ "LEAP_MODE_SCREENTOP", (int64)LEAP_MODE_SCREENTOP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapMode",
	"ELeapMode",
	Z_Construct_UEnum_UltraleapTracking_ELeapMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMode()
{
	if (!Z_Registration_Info_UEnum_ELeapMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapMode.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapMode.InnerSingleton;
}
// End Enum ELeapMode

// Begin Enum ELeapImageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapImageType;
static UEnum* ELeapImageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapImageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapImageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapImageType, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapImageType"));
	}
	return Z_Registration_Info_UEnum_ELeapImageType.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapImageType>()
{
	return ELeapImageType_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_IMAGE_LEFT.Name", "ELeapImageType::LEAP_IMAGE_LEFT" },
		{ "LEAP_IMAGE_RIGHT.Name", "ELeapImageType::LEAP_IMAGE_RIGHT" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELeapImageType::LEAP_IMAGE_LEFT", (int64)ELeapImageType::LEAP_IMAGE_LEFT },
		{ "ELeapImageType::LEAP_IMAGE_RIGHT", (int64)ELeapImageType::LEAP_IMAGE_RIGHT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapImageType",
	"ELeapImageType",
	Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapImageType()
{
	if (!Z_Registration_Info_UEnum_ELeapImageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapImageType.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapImageType.InnerSingleton;
}
// End Enum ELeapImageType

// Begin Enum ELeapTrackingFidelity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapTrackingFidelity;
static UEnum* ELeapTrackingFidelity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapTrackingFidelity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapTrackingFidelity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapTrackingFidelity"));
	}
	return Z_Registration_Info_UEnum_ELeapTrackingFidelity.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapTrackingFidelity>()
{
	return ELeapTrackingFidelity_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_CUSTOM.Name", "LEAP_CUSTOM" },
		{ "LEAP_LOW_LATENCY.Name", "LEAP_LOW_LATENCY" },
		{ "LEAP_NORMAL.Name", "LEAP_NORMAL" },
		{ "LEAP_SMOOTH.Name", "LEAP_SMOOTH" },
		{ "LEAP_WIRELESS.Name", "LEAP_WIRELESS" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_CUSTOM", (int64)LEAP_CUSTOM },
		{ "LEAP_LOW_LATENCY", (int64)LEAP_LOW_LATENCY },
		{ "LEAP_NORMAL", (int64)LEAP_NORMAL },
		{ "LEAP_SMOOTH", (int64)LEAP_SMOOTH },
		{ "LEAP_WIRELESS", (int64)LEAP_WIRELESS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapTrackingFidelity",
	"ELeapTrackingFidelity",
	Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity()
{
	if (!Z_Registration_Info_UEnum_ELeapTrackingFidelity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapTrackingFidelity.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapTrackingFidelity.InnerSingleton;
}
// End Enum ELeapTrackingFidelity

// Begin Enum ELeapPolicyFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapPolicyFlag;
static UEnum* ELeapPolicyFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapPolicyFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapPolicyFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapPolicyFlag"));
	}
	return Z_Registration_Info_UEnum_ELeapPolicyFlag.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapPolicyFlag>()
{
	return ELeapPolicyFlag_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_POLICY_ALLOW_PAUSE_RESUME.Comment", "// The policy specifying whether to optimize tracking for head-mounted device.\n" },
		{ "LEAP_POLICY_ALLOW_PAUSE_RESUME.Name", "LEAP_POLICY_ALLOW_PAUSE_RESUME" },
		{ "LEAP_POLICY_ALLOW_PAUSE_RESUME.ToolTip", "The policy specifying whether to optimize tracking for head-mounted device." },
		{ "LEAP_POLICY_BACKGROUND_FRAMES.Name", "LEAP_POLICY_BACKGROUND_FRAMES" },
		{ "LEAP_POLICY_IMAGES.Comment", "// The policy allowing an application to receive frames in the background.\n" },
		{ "LEAP_POLICY_IMAGES.Name", "LEAP_POLICY_IMAGES" },
		{ "LEAP_POLICY_IMAGES.ToolTip", "The policy allowing an application to receive frames in the background." },
		{ "LEAP_POLICY_MAP_POINTS.Comment", "// The policy allowing an application to pause or resume service tracking\n" },
		{ "LEAP_POLICY_MAP_POINTS.Name", "LEAP_POLICY_MAP_POINTS" },
		{ "LEAP_POLICY_MAP_POINTS.ToolTip", "The policy allowing an application to pause or resume service tracking" },
		{ "LEAP_POLICY_OPTIMIZE_HMD.Comment", "// The policy specifying whether to automatically stream images from the device.\n" },
		{ "LEAP_POLICY_OPTIMIZE_HMD.Name", "LEAP_POLICY_OPTIMIZE_HMD" },
		{ "LEAP_POLICY_OPTIMIZE_HMD.ToolTip", "The policy specifying whether to automatically stream images from the device." },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_POLICY_BACKGROUND_FRAMES", (int64)LEAP_POLICY_BACKGROUND_FRAMES },
		{ "LEAP_POLICY_IMAGES", (int64)LEAP_POLICY_IMAGES },
		{ "LEAP_POLICY_OPTIMIZE_HMD", (int64)LEAP_POLICY_OPTIMIZE_HMD },
		{ "LEAP_POLICY_ALLOW_PAUSE_RESUME", (int64)LEAP_POLICY_ALLOW_PAUSE_RESUME },
		{ "LEAP_POLICY_MAP_POINTS", (int64)LEAP_POLICY_MAP_POINTS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapPolicyFlag",
	"ELeapPolicyFlag",
	Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag()
{
	if (!Z_Registration_Info_UEnum_ELeapPolicyFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapPolicyFlag.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapPolicyFlag.InnerSingleton;
}
// End Enum ELeapPolicyFlag

// Begin Enum ELeapServiceLogLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapServiceLogLevel;
static UEnum* ELeapServiceLogLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapServiceLogLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapServiceLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapServiceLogLevel"));
	}
	return Z_Registration_Info_UEnum_ELeapServiceLogLevel.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapServiceLogLevel>()
{
	return ELeapServiceLogLevel_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_LOG_ERROR.Name", "LEAP_LOG_ERROR" },
		{ "LEAP_LOG_INFO.Name", "LEAP_LOG_INFO" },
		{ "LEAP_LOG_NONE.Name", "LEAP_LOG_NONE" },
		{ "LEAP_LOG_WARNING.Name", "LEAP_LOG_WARNING" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_LOG_NONE", (int64)LEAP_LOG_NONE },
		{ "LEAP_LOG_ERROR", (int64)LEAP_LOG_ERROR },
		{ "LEAP_LOG_WARNING", (int64)LEAP_LOG_WARNING },
		{ "LEAP_LOG_INFO", (int64)LEAP_LOG_INFO },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapServiceLogLevel",
	"ELeapServiceLogLevel",
	Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel()
{
	if (!Z_Registration_Info_UEnum_ELeapServiceLogLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapServiceLogLevel.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapServiceLogLevel.InnerSingleton;
}
// End Enum ELeapServiceLogLevel

// Begin Enum ELeapMultiDeviceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapMultiDeviceMode;
static UEnum* ELeapMultiDeviceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapMultiDeviceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapMultiDeviceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapMultiDeviceMode"));
	}
	return Z_Registration_Info_UEnum_ELeapMultiDeviceMode.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapMultiDeviceMode>()
{
	return ELeapMultiDeviceMode_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_MULTI_DEVICE_COMBINED.Name", "LEAP_MULTI_DEVICE_COMBINED" },
		{ "LEAP_MULTI_DEVICE_SINGULAR.Name", "LEAP_MULTI_DEVICE_SINGULAR" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_MULTI_DEVICE_SINGULAR", (int64)LEAP_MULTI_DEVICE_SINGULAR },
		{ "LEAP_MULTI_DEVICE_COMBINED", (int64)LEAP_MULTI_DEVICE_COMBINED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapMultiDeviceMode",
	"ELeapMultiDeviceMode",
	Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode()
{
	if (!Z_Registration_Info_UEnum_ELeapMultiDeviceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapMultiDeviceMode.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapMultiDeviceMode.InnerSingleton;
}
// End Enum ELeapMultiDeviceMode

// Begin Enum ELeapDeviceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapDeviceType;
static UEnum* ELeapDeviceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapDeviceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapDeviceType"));
	}
	return Z_Registration_Info_UEnum_ELeapDeviceType.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapDeviceType>()
{
	return ELeapDeviceType_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// see eLeapDevicePID (Blueprint equivalent)\n" },
		{ "LEAP_DEVICE_INVALID.Comment", "/** An invalid device type. Not currently in use. @since 3.1.3 */" },
		{ "LEAP_DEVICE_INVALID.Name", "LEAP_DEVICE_INVALID" },
		{ "LEAP_DEVICE_INVALID.ToolTip", "An invalid device type. Not currently in use. @since 3.1.3" },
		{ "LEAP_DEVICE_TYPE_3DI.Comment", "/** The Ultraleap 3Di hand tracking camera. @since 5.3.0 */" },
		{ "LEAP_DEVICE_TYPE_3DI.Name", "LEAP_DEVICE_TYPE_3DI" },
		{ "LEAP_DEVICE_TYPE_3DI.ToolTip", "The Ultraleap 3Di hand tracking camera. @since 5.3.0" },
		{ "LEAP_DEVICE_TYPE_DRAGONFLY.Comment", "/** Internal research product codename \"Dragonfly\". @since 3.0.0 */" },
		{ "LEAP_DEVICE_TYPE_DRAGONFLY.Name", "LEAP_DEVICE_TYPE_DRAGONFLY" },
		{ "LEAP_DEVICE_TYPE_DRAGONFLY.ToolTip", "Internal research product codename \"Dragonfly\". @since 3.0.0" },
		{ "LEAP_DEVICE_TYPE_LEAP_MOTION_CONTROLLER_2.Comment", "/** The Ultraleap leap motion controller 2 hand tracking module. @since 5.11 */" },
		{ "LEAP_DEVICE_TYPE_LEAP_MOTION_CONTROLLER_2.Name", "LEAP_DEVICE_TYPE_LEAP_MOTION_CONTROLLER_2" },
		{ "LEAP_DEVICE_TYPE_LEAP_MOTION_CONTROLLER_2.ToolTip", "The Ultraleap leap motion controller 2 hand tracking module. @since 5.11" },
		{ "LEAP_DEVICE_TYPE_NIGHTCRAWLER.Comment", "/** Internal research product codename \"Nightcrawler\". @since 3.0.0 */" },
		{ "LEAP_DEVICE_TYPE_NIGHTCRAWLER.Name", "LEAP_DEVICE_TYPE_NIGHTCRAWLER" },
		{ "LEAP_DEVICE_TYPE_NIGHTCRAWLER.ToolTip", "Internal research product codename \"Nightcrawler\". @since 3.0.0" },
		{ "LEAP_DEVICE_TYPE_PERIPHERAL.Comment", "/** The Leap Motion Controller (the first consumer peripheral). @since 3.0.0 */" },
		{ "LEAP_DEVICE_TYPE_PERIPHERAL.Name", "LEAP_DEVICE_TYPE_PERIPHERAL" },
		{ "LEAP_DEVICE_TYPE_PERIPHERAL.ToolTip", "The Leap Motion Controller (the first consumer peripheral). @since 3.0.0" },
		{ "LEAP_DEVICE_TYPE_RIGEL.Comment", "/** Research product codename \"Rigel\". @since 4.0.0 */" },
		{ "LEAP_DEVICE_TYPE_RIGEL.Name", "LEAP_DEVICE_TYPE_RIGEL" },
		{ "LEAP_DEVICE_TYPE_RIGEL.ToolTip", "Research product codename \"Rigel\". @since 4.0.0" },
		{ "LEAP_DEVICE_TYPE_SIR170.Comment", "/** The Ultraleap Stereo IR 170 (SIR170) hand tracking module. @since 5.3.0 */" },
		{ "LEAP_DEVICE_TYPE_SIR170.Name", "LEAP_DEVICE_TYPE_SIR170" },
		{ "LEAP_DEVICE_TYPE_SIR170.ToolTip", "The Ultraleap Stereo IR 170 (SIR170) hand tracking module. @since 5.3.0" },
		{ "LEAP_DEVICE_TYPE_UNKNOWN.Comment", "/** An unknown device that is compatible with the tracking software. @since 3.1.3 */" },
		{ "LEAP_DEVICE_TYPE_UNKNOWN.Name", "LEAP_DEVICE_TYPE_UNKNOWN" },
		{ "LEAP_DEVICE_TYPE_UNKNOWN.ToolTip", "An unknown device that is compatible with the tracking software. @since 3.1.3" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "see eLeapDevicePID (Blueprint equivalent)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_DEVICE_TYPE_UNKNOWN", (int64)LEAP_DEVICE_TYPE_UNKNOWN },
		{ "LEAP_DEVICE_TYPE_PERIPHERAL", (int64)LEAP_DEVICE_TYPE_PERIPHERAL },
		{ "LEAP_DEVICE_TYPE_DRAGONFLY", (int64)LEAP_DEVICE_TYPE_DRAGONFLY },
		{ "LEAP_DEVICE_TYPE_NIGHTCRAWLER", (int64)LEAP_DEVICE_TYPE_NIGHTCRAWLER },
		{ "LEAP_DEVICE_TYPE_RIGEL", (int64)LEAP_DEVICE_TYPE_RIGEL },
		{ "LEAP_DEVICE_TYPE_SIR170", (int64)LEAP_DEVICE_TYPE_SIR170 },
		{ "LEAP_DEVICE_TYPE_3DI", (int64)LEAP_DEVICE_TYPE_3DI },
		{ "LEAP_DEVICE_TYPE_LEAP_MOTION_CONTROLLER_2", (int64)LEAP_DEVICE_TYPE_LEAP_MOTION_CONTROLLER_2 },
		{ "LEAP_DEVICE_INVALID", (int64)LEAP_DEVICE_INVALID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapDeviceType",
	"ELeapDeviceType",
	Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType()
{
	if (!Z_Registration_Info_UEnum_ELeapDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapDeviceType.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapDeviceType.InnerSingleton;
}
// End Enum ELeapDeviceType

// Begin Enum ELeapDeviceCombinerClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapDeviceCombinerClass;
static UEnum* ELeapDeviceCombinerClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapDeviceCombinerClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapDeviceCombinerClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapDeviceCombinerClass"));
	}
	return Z_Registration_Info_UEnum_ELeapDeviceCombinerClass.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapDeviceCombinerClass>()
{
	return ELeapDeviceCombinerClass_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEAP_DEVICE_COMBINER_ANGULAR.Name", "LEAP_DEVICE_COMBINER_ANGULAR" },
		{ "LEAP_DEVICE_COMBINER_CONFIDENCE.Name", "LEAP_DEVICE_COMBINER_CONFIDENCE" },
		{ "LEAP_DEVICE_COMBINER_UNKNOWN.Name", "LEAP_DEVICE_COMBINER_UNKNOWN" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEAP_DEVICE_COMBINER_UNKNOWN", (int64)LEAP_DEVICE_COMBINER_UNKNOWN },
		{ "LEAP_DEVICE_COMBINER_CONFIDENCE", (int64)LEAP_DEVICE_COMBINER_CONFIDENCE },
		{ "LEAP_DEVICE_COMBINER_ANGULAR", (int64)LEAP_DEVICE_COMBINER_ANGULAR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapDeviceCombinerClass",
	"ELeapDeviceCombinerClass",
	Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass()
{
	if (!Z_Registration_Info_UEnum_ELeapDeviceCombinerClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapDeviceCombinerClass.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapDeviceCombinerClass.InnerSingleton;
}
// End Enum ELeapDeviceCombinerClass

// Begin ScriptStruct FLeapDevice
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapDevice;
class UScriptStruct* FLeapDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapDevice, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapDevice"));
	}
	return Z_Registration_Info_UScriptStruct_LeapDevice.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapDevice>()
{
	return FLeapDevice::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PID_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "Comment", "/** One of the eLeapDevicePID members as a string. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "One of the eLeapDevicePID members as a string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Baseline_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "Comment", "/**\n\x09 * The device baseline, in micrometers.\n\x09 *\n\x09 * The baseline is defined as the distance between the center axis of each lens in a stereo camera\n\x09 * system.  For other camera systems, this value is set to zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The device baseline, in micrometers.\n\nThe baseline is defined as the distance between the center axis of each lens in a stereo camera\nsystem.  For other camera systems, this value is set to zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Serial_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "Comment", "/** Serial number string */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Serial number string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalFOV_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "Comment", "/** The horizontal field of view of this device in radians. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The horizontal field of view of this device in radians." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFOV_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "Comment", "/** The vertical field of view of this device in radians. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The vertical field of view of this device in radians." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "Comment", "/** The maximum range for this device, in micrometers. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The maximum range for this device, in micrometers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Baseline;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Serial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalFOV;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapDevice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID = { "PID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDevice, PID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PID_MetaData), NewProp_PID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline = { "Baseline", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDevice, Baseline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Baseline_MetaData), NewProp_Baseline_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial = { "Serial", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDevice, Serial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Serial_MetaData), NewProp_Serial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV = { "HorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDevice, HorizontalFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalFOV_MetaData), NewProp_HorizontalFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV = { "VerticalFOV", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDevice, VerticalFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalFOV_MetaData), NewProp_VerticalFOV_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDevice, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapDevice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapDevice",
	Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers),
	sizeof(FLeapDevice),
	alignof(FLeapDevice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapDevice()
{
	if (!Z_Registration_Info_UScriptStruct_LeapDevice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapDevice.InnerSingleton, Z_Construct_UScriptStruct_FLeapDevice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapDevice.InnerSingleton;
}
// End ScriptStruct FLeapDevice

// Begin ScriptStruct FLeapStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapStats;
class UScriptStruct* FLeapStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapStats, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapStats"));
	}
	return Z_Registration_Info_UScriptStruct_LeapStats.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapStats>()
{
	return FLeapStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Read only stats from the plugin such as version and prediction interval. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Read only stats from the plugin such as version and prediction interval." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeapAPIVersion_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInfo_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameExtrapolationInMS_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeapAPIVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameExtrapolationInMS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion = { "LeapAPIVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapStats, LeapAPIVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeapAPIVersion_MetaData), NewProp_LeapAPIVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo = { "DeviceInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapStats, DeviceInfo), Z_Construct_UScriptStruct_FLeapDevice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceInfo_MetaData), NewProp_DeviceInfo_MetaData) }; // 3777224382
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS = { "FrameExtrapolationInMS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapStats, FrameExtrapolationInMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameExtrapolationInMS_MetaData), NewProp_FrameExtrapolationInMS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapStats",
	Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers),
	sizeof(FLeapStats),
	alignof(FLeapStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapStats()
{
	if (!Z_Registration_Info_UScriptStruct_LeapStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapStats.InnerSingleton, Z_Construct_UScriptStruct_FLeapStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapStats.InnerSingleton;
}
// End ScriptStruct FLeapStats

// Begin ScriptStruct FLeapOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapOptions;
class UScriptStruct* FLeapOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapOptions, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapOptions"));
	}
	return Z_Registration_Info_UScriptStruct_LeapOptions.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapOptions>()
{
	return FLeapOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Optimize for desktop facing upward or VR facing outward? */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Optimize for desktop facing upward or VR facing outward?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingFidelity_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Set your tracking fidelity from low latency to smooth. If not set to custom, some of the low level settings may be\n\x09 * overwritten */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Set your tracking fidelity from low latency to smooth. If not set to custom, some of the low level settings may be\noverwritten" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeapServiceLogLevel_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Verbosity of additional log updates from the leap service */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Verbosity of additional log updates from the leap service" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimeWarp_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Should leap use Temporal warping to align HMD rotation with leap samples */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Should leap use Temporal warping to align HMD rotation with leap samples" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Whether leap should use frame interpolation for smooth tracking */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Whether leap should use frame interpolation for smooth tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformOriginToHMD_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Should all leap data be transported to HMD space? */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Should all leap data be transported to HMD space?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimewarpOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Timewarp offset sampling in microseconds. The higher, the further back in time. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Timewarp offset sampling in microseconds. The higher, the further back in time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimewarpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Linear factor, useful for inverting timewarp effects for certain platforms (e.g. Oculus)*/" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Linear factor, useful for inverting timewarp effects for certain platforms (e.g. Oculus)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandInterpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Number of frames we should predict forward (positive) or back (negative) from right now for hands */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Number of frames we should predict forward (positive) or back (negative) from right now for hands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerInterpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Number of frames we should predict forward (positive) or back (negative) from right now for fingers */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Number of frames we should predict forward (positive) or back (negative) from right now for fingers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HMDPositionOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HMDRotationOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFrameBasedGestureDetection_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "Comment", "/** Enable or disable the use of frame based gesture detection (old system)*/" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Enable or disable the use of frame based gesture detection (old system)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGrabThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndGrabThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPinchThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPinchThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTimeout_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchTimeout_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOpenXRAsSource_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Experimental: Pull tracking data from OpenXR instead of LeapC.dll. Note that Pinch and Grasp events and strength are not yet\n\x09 * implemented  */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Experimental: Pull tracking data from OpenXR instead of LeapC.dll. Note that Pinch and Grasp events and strength are not yet\nimplemented" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeapHints_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingFidelity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeapServiceLogLevel;
	static void NewProp_bUseTimeWarp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimeWarp;
	static void NewProp_bUseInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
	static void NewProp_bTransformOriginToHMD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformOriginToHMD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimewarpOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimewarpFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandInterpFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerInterpFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HMDPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HMDRotationOffset;
	static void NewProp_bUseFrameBasedGestureDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFrameBasedGestureDetection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartGrabThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndGrabThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPinchThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndPinchThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabTimeout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinchTimeout;
	static void NewProp_bUseOpenXRAsSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOpenXRAsSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeapHints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeapHints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, Mode), Z_Construct_UEnum_UltraleapTracking_ELeapMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3348884886
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity = { "TrackingFidelity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, TrackingFidelity), Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingFidelity_MetaData), NewProp_TrackingFidelity_MetaData) }; // 3545534406
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel = { "LeapServiceLogLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, LeapServiceLogLevel), Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeapServiceLogLevel_MetaData), NewProp_LeapServiceLogLevel_MetaData) }; // 944353673
void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_SetBit(void* Obj)
{
	((FLeapOptions*)Obj)->bUseTimeWarp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp = { "bUseTimeWarp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTimeWarp_MetaData), NewProp_bUseTimeWarp_MetaData) };
void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
{
	((FLeapOptions*)Obj)->bUseInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInterpolation_MetaData), NewProp_bUseInterpolation_MetaData) };
void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_SetBit(void* Obj)
{
	((FLeapOptions*)Obj)->bTransformOriginToHMD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD = { "bTransformOriginToHMD", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformOriginToHMD_MetaData), NewProp_bTransformOriginToHMD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset = { "TimewarpOffset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, TimewarpOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimewarpOffset_MetaData), NewProp_TimewarpOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor = { "TimewarpFactor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, TimewarpFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimewarpFactor_MetaData), NewProp_TimewarpFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor = { "HandInterpFactor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, HandInterpFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandInterpFactor_MetaData), NewProp_HandInterpFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor = { "FingerInterpFactor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, FingerInterpFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerInterpFactor_MetaData), NewProp_FingerInterpFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset = { "HMDPositionOffset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, HMDPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HMDPositionOffset_MetaData), NewProp_HMDPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset = { "HMDRotationOffset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, HMDRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HMDRotationOffset_MetaData), NewProp_HMDRotationOffset_MetaData) };
void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection_SetBit(void* Obj)
{
	((FLeapOptions*)Obj)->bUseFrameBasedGestureDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection = { "bUseFrameBasedGestureDetection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFrameBasedGestureDetection_MetaData), NewProp_bUseFrameBasedGestureDetection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartGrabThreshold = { "StartGrabThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, StartGrabThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGrabThreshold_MetaData), NewProp_StartGrabThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndGrabThreshold = { "EndGrabThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, EndGrabThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndGrabThreshold_MetaData), NewProp_EndGrabThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartPinchThreshold = { "StartPinchThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, StartPinchThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPinchThreshold_MetaData), NewProp_StartPinchThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndPinchThreshold = { "EndPinchThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, EndPinchThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPinchThreshold_MetaData), NewProp_EndPinchThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_GrabTimeout = { "GrabTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, GrabTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTimeout_MetaData), NewProp_GrabTimeout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_PinchTimeout = { "PinchTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, PinchTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchTimeout_MetaData), NewProp_PinchTimeout_MetaData) };
void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource_SetBit(void* Obj)
{
	((FLeapOptions*)Obj)->bUseOpenXRAsSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource = { "bUseOpenXRAsSource", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOpenXRAsSource_MetaData), NewProp_bUseOpenXRAsSource_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapHints_Inner = { "LeapHints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapHints = { "LeapHints", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapOptions, LeapHints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeapHints_MetaData), NewProp_LeapHints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartGrabThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndGrabThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartPinchThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndPinchThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_GrabTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_PinchTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapHints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapHints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapOptions",
	Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers),
	sizeof(FLeapOptions),
	alignof(FLeapOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions()
{
	if (!Z_Registration_Info_UScriptStruct_LeapOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapOptions.InnerSingleton, Z_Construct_UScriptStruct_FLeapOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapOptions.InnerSingleton;
}
// End ScriptStruct FLeapOptions

// Begin ScriptStruct FLeapBoneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapBoneData;
class UScriptStruct* FLeapBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapBoneData, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_LeapBoneData.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapBoneData>()
{
	return FLeapBoneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevJoint_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextJoint_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevJoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextJoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint = { "PrevJoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapBoneData, PrevJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevJoint_MetaData), NewProp_PrevJoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint = { "NextJoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapBoneData, NextJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextJoint_MetaData), NewProp_NextJoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapBoneData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapBoneData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapBoneData",
	Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers),
	sizeof(FLeapBoneData),
	alignof(FLeapBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_LeapBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapBoneData.InnerSingleton, Z_Construct_UScriptStruct_FLeapBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapBoneData.InnerSingleton;
}
// End ScriptStruct FLeapBoneData

// Begin ScriptStruct FLeapPalmData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapPalmData;
class UScriptStruct* FLeapPalmData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapPalmData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapPalmData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapPalmData, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapPalmData"));
	}
	return Z_Registration_Info_UScriptStruct_LeapPalmData.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapPalmData>()
{
	return FLeapPalmData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapPalmData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StabilizedPosition_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StabilizedPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapPalmData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapPalmData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapPalmData, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapPalmData, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapPalmData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition = { "StabilizedPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapPalmData, StabilizedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StabilizedPosition_MetaData), NewProp_StabilizedPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapPalmData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapPalmData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapPalmData",
	Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers),
	sizeof(FLeapPalmData),
	alignof(FLeapPalmData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapPalmData()
{
	if (!Z_Registration_Info_UScriptStruct_LeapPalmData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapPalmData.InnerSingleton, Z_Construct_UScriptStruct_FLeapPalmData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapPalmData.InnerSingleton;
}
// End ScriptStruct FLeapPalmData

// Begin ScriptStruct FLeapDigitData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapDigitData;
class UScriptStruct* FLeapDigitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapDigitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapDigitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapDigitData, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapDigitData"));
	}
	return Z_Registration_Info_UScriptStruct_LeapDigitData.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapDigitData>()
{
	return FLeapDigitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapDigitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerId_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsExtended_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Distal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FingerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intermediate;
	static void NewProp_IsExtended_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExtended;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metacarpal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Proximal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapDigitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(0, nullptr) }; // 1972668014
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDigitData, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) }; // 1972668014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal = { "Distal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDigitData, Distal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distal_MetaData), NewProp_Distal_MetaData) }; // 1972668014
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId = { "FingerId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDigitData, FingerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerId_MetaData), NewProp_FingerId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDigitData, Intermediate), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intermediate_MetaData), NewProp_Intermediate_MetaData) }; // 1972668014
void Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_SetBit(void* Obj)
{
	((FLeapDigitData*)Obj)->IsExtended = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended = { "IsExtended", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapDigitData), &Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsExtended_MetaData), NewProp_IsExtended_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal = { "Metacarpal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDigitData, Metacarpal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metacarpal_MetaData), NewProp_Metacarpal_MetaData) }; // 1972668014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal = { "Proximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapDigitData, Proximal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proximal_MetaData), NewProp_Proximal_MetaData) }; // 1972668014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapDigitData",
	Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers),
	sizeof(FLeapDigitData),
	alignof(FLeapDigitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapDigitData()
{
	if (!Z_Registration_Info_UScriptStruct_LeapDigitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapDigitData.InnerSingleton, Z_Construct_UScriptStruct_FLeapDigitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapDigitData.InnerSingleton;
}
// End ScriptStruct FLeapDigitData

// Begin ScriptStruct FLeapHandData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapHandData;
class UScriptStruct* FLeapHandData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapHandData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapHandData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapHandData, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapHandData"));
	}
	return Z_Registration_Info_UScriptStruct_LeapHandData.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapHandData>()
{
	return FLeapHandData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapHandData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Digits_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabAngle_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabStrength_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Palm_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchDistance_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchStrength_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleTime_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Arm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Digits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Digits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Middle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Palm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinchDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinchStrength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pinky;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ring;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Thumb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapHandData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Arm), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arm_MetaData), NewProp_Arm_MetaData) }; // 1972668014
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Confidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confidence_MetaData), NewProp_Confidence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_Inner = { "Digits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(0, nullptr) }; // 4207896317
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits = { "Digits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Digits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Digits_MetaData), NewProp_Digits_MetaData) }; // 4207896317
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle = { "GrabAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, GrabAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabAngle_MetaData), NewProp_GrabAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength = { "GrabStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, GrabStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabStrength_MetaData), NewProp_GrabStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, HandType), Z_Construct_UEnum_UltraleapTracking_EHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandType_MetaData), NewProp_HandType_MetaData) }; // 3755288617
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Index), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) }; // 4207896317
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Middle), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Middle_MetaData), NewProp_Middle_MetaData) }; // 4207896317
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm = { "Palm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Palm), Z_Construct_UScriptStruct_FLeapPalmData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Palm_MetaData), NewProp_Palm_MetaData) }; // 3206978850
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance = { "PinchDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, PinchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchDistance_MetaData), NewProp_PinchDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength = { "PinchStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, PinchStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchStrength_MetaData), NewProp_PinchStrength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky = { "Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Pinky), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pinky_MetaData), NewProp_Pinky_MetaData) }; // 4207896317
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Ring), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ring_MetaData), NewProp_Ring_MetaData) }; // 4207896317
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Thumb), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumb_MetaData), NewProp_Thumb_MetaData) }; // 4207896317
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime = { "VisibleTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapHandData, VisibleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleTime_MetaData), NewProp_VisibleTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapHandData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapHandData",
	Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers),
	sizeof(FLeapHandData),
	alignof(FLeapHandData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData()
{
	if (!Z_Registration_Info_UScriptStruct_LeapHandData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapHandData.InnerSingleton, Z_Construct_UScriptStruct_FLeapHandData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapHandData.InnerSingleton;
}
// End ScriptStruct FLeapHandData

// Begin ScriptStruct FLeapFrameData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeapFrameData;
class UScriptStruct* FLeapFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeapFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeapFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapFrameData, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LeapFrameData.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapFrameData>()
{
	return FLeapFrameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeapFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfHandsVisible_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hands_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameId_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandVisible_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandVisible_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Comment", "// int64 not supported by blueprint, so this will only be accessible inside c++\n" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "int64 not supported by blueprint, so this will only be accessible inside c++" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalRotationAdjustment_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfHandsVisible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameId;
	static void NewProp_LeftHandVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftHandVisible;
	static void NewProp_RightHandVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RightHandVisible;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalRotationAdjustment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible = { "NumberOfHandsVisible", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapFrameData, NumberOfHandsVisible), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfHandsVisible_MetaData), NewProp_NumberOfHandsVisible_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapFrameData, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_Inner = { "Hands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLeapHandData, METADATA_PARAMS(0, nullptr) }; // 3241560064
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands = { "Hands", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapFrameData, Hands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hands_MetaData), NewProp_Hands_MetaData) }; // 3241560064
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId = { "FrameId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapFrameData, FrameId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameId_MetaData), NewProp_FrameId_MetaData) };
void Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_SetBit(void* Obj)
{
	((FLeapFrameData*)Obj)->LeftHandVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible = { "LeftHandVisible", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapFrameData), &Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandVisible_MetaData), NewProp_LeftHandVisible_MetaData) };
void Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_SetBit(void* Obj)
{
	((FLeapFrameData*)Obj)->RightHandVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible = { "RightHandVisible", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeapFrameData), &Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandVisible_MetaData), NewProp_RightHandVisible_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapFrameData, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment = { "FinalRotationAdjustment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeapFrameData, FinalRotationAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalRotationAdjustment_MetaData), NewProp_FinalRotationAdjustment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"LeapFrameData",
	Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers),
	sizeof(FLeapFrameData),
	alignof(FLeapFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_LeapFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeapFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLeapFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeapFrameData.InnerSingleton;
}
// End ScriptStruct FLeapFrameData

// Begin Enum ELeapQuatSwizzleAxisB
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB;
static UEnum* ELeapQuatSwizzleAxisB_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapQuatSwizzleAxisB"));
	}
	return Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapQuatSwizzleAxisB>()
{
	return ELeapQuatSwizzleAxisB_StaticEnum();
}
struct Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MinusW.DisplayName", "-W" },
		{ "MinusW.Name", "ELeapQuatSwizzleAxisB::MinusW" },
		{ "MinusX.DisplayName", "-X" },
		{ "MinusX.Name", "ELeapQuatSwizzleAxisB::MinusX" },
		{ "MinusY.DisplayName", "-Y" },
		{ "MinusY.Name", "ELeapQuatSwizzleAxisB::MinusY" },
		{ "MinusZ.DisplayName", "-Z" },
		{ "MinusZ.Name", "ELeapQuatSwizzleAxisB::MinusZ" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "W.DisplayName", "W" },
		{ "W.Name", "ELeapQuatSwizzleAxisB::W" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "ELeapQuatSwizzleAxisB::X" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "ELeapQuatSwizzleAxisB::Y" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "ELeapQuatSwizzleAxisB::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELeapQuatSwizzleAxisB::X", (int64)ELeapQuatSwizzleAxisB::X },
		{ "ELeapQuatSwizzleAxisB::Y", (int64)ELeapQuatSwizzleAxisB::Y },
		{ "ELeapQuatSwizzleAxisB::Z", (int64)ELeapQuatSwizzleAxisB::Z },
		{ "ELeapQuatSwizzleAxisB::W", (int64)ELeapQuatSwizzleAxisB::W },
		{ "ELeapQuatSwizzleAxisB::MinusX", (int64)ELeapQuatSwizzleAxisB::MinusX },
		{ "ELeapQuatSwizzleAxisB::MinusY", (int64)ELeapQuatSwizzleAxisB::MinusY },
		{ "ELeapQuatSwizzleAxisB::MinusZ", (int64)ELeapQuatSwizzleAxisB::MinusZ },
		{ "ELeapQuatSwizzleAxisB::MinusW", (int64)ELeapQuatSwizzleAxisB::MinusW },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	"ELeapQuatSwizzleAxisB",
	"ELeapQuatSwizzleAxisB",
	Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB()
{
	if (!Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB.InnerSingleton, Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB.InnerSingleton;
}
// End Enum ELeapQuatSwizzleAxisB

// Begin ScriptStruct FTelemetry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Telemetry;
class UScriptStruct* FTelemetry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Telemetry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Telemetry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTelemetry, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("Telemetry"));
	}
	return Z_Registration_Info_UScriptStruct_Telemetry.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FTelemetry>()
{
	return FTelemetry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTelemetry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_app_title_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_app_type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_engine_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_engine_version_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_plugin_version_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_installation_source_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_app_title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_app_type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_engine_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_engine_version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_plugin_version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_installation_source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTelemetry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_app_title = { "app_title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTelemetry, app_title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_app_title_MetaData), NewProp_app_title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_app_type = { "app_type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTelemetry, app_type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_app_type_MetaData), NewProp_app_type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_engine_name = { "engine_name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTelemetry, engine_name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_engine_name_MetaData), NewProp_engine_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_engine_version = { "engine_version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTelemetry, engine_version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_engine_version_MetaData), NewProp_engine_version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_plugin_version = { "plugin_version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTelemetry, plugin_version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_plugin_version_MetaData), NewProp_plugin_version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_installation_source = { "installation_source", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTelemetry, installation_source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_installation_source_MetaData), NewProp_installation_source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTelemetry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_app_title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_app_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_engine_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_engine_version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_plugin_version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTelemetry_Statics::NewProp_installation_source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTelemetry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTelemetry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"Telemetry",
	Z_Construct_UScriptStruct_FTelemetry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTelemetry_Statics::PropPointers),
	sizeof(FTelemetry),
	alignof(FTelemetry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTelemetry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTelemetry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTelemetry()
{
	if (!Z_Registration_Info_UScriptStruct_Telemetry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Telemetry.InnerSingleton, Z_Construct_UScriptStruct_FTelemetry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Telemetry.InnerSingleton;
}
// End ScriptStruct FTelemetry

// Begin ScriptStruct FAnalytics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Analytics;
class UScriptStruct* FAnalytics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Analytics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Analytics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnalytics, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("Analytics"));
	}
	return Z_Registration_Info_UScriptStruct_Analytics.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FAnalytics>()
{
	return FAnalytics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnalytics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_telemetry_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_telemetry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnalytics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnalytics_Statics::NewProp_telemetry = { "telemetry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnalytics, telemetry), Z_Construct_UScriptStruct_FTelemetry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_telemetry_MetaData), NewProp_telemetry_MetaData) }; // 59644905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnalytics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnalytics_Statics::NewProp_telemetry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalytics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnalytics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"Analytics",
	Z_Construct_UScriptStruct_FAnalytics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalytics_Statics::PropPointers),
	sizeof(FAnalytics),
	alignof(FAnalytics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalytics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnalytics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnalytics()
{
	if (!Z_Registration_Info_UScriptStruct_Analytics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Analytics.InnerSingleton, Z_Construct_UScriptStruct_FAnalytics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Analytics.InnerSingleton;
}
// End ScriptStruct FAnalytics

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandType_StaticEnum, TEXT("EHandType"), &Z_Registration_Info_UEnum_EHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3755288617U) },
		{ EUIInteractionType_StaticEnum, TEXT("EUIInteractionType"), &Z_Registration_Info_UEnum_EUIInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3803300760U) },
		{ ELeapMode_StaticEnum, TEXT("ELeapMode"), &Z_Registration_Info_UEnum_ELeapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3348884886U) },
		{ ELeapImageType_StaticEnum, TEXT("ELeapImageType"), &Z_Registration_Info_UEnum_ELeapImageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 860195U) },
		{ ELeapTrackingFidelity_StaticEnum, TEXT("ELeapTrackingFidelity"), &Z_Registration_Info_UEnum_ELeapTrackingFidelity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3545534406U) },
		{ ELeapPolicyFlag_StaticEnum, TEXT("ELeapPolicyFlag"), &Z_Registration_Info_UEnum_ELeapPolicyFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 175806584U) },
		{ ELeapServiceLogLevel_StaticEnum, TEXT("ELeapServiceLogLevel"), &Z_Registration_Info_UEnum_ELeapServiceLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 944353673U) },
		{ ELeapMultiDeviceMode_StaticEnum, TEXT("ELeapMultiDeviceMode"), &Z_Registration_Info_UEnum_ELeapMultiDeviceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3927097670U) },
		{ ELeapDeviceType_StaticEnum, TEXT("ELeapDeviceType"), &Z_Registration_Info_UEnum_ELeapDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 689792448U) },
		{ ELeapDeviceCombinerClass_StaticEnum, TEXT("ELeapDeviceCombinerClass"), &Z_Registration_Info_UEnum_ELeapDeviceCombinerClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3579689858U) },
		{ ELeapQuatSwizzleAxisB_StaticEnum, TEXT("ELeapQuatSwizzleAxisB"), &Z_Registration_Info_UEnum_ELeapQuatSwizzleAxisB, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3878223993U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLeapDevice::StaticStruct, Z_Construct_UScriptStruct_FLeapDevice_Statics::NewStructOps, TEXT("LeapDevice"), &Z_Registration_Info_UScriptStruct_LeapDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapDevice), 3777224382U) },
		{ FLeapStats::StaticStruct, Z_Construct_UScriptStruct_FLeapStats_Statics::NewStructOps, TEXT("LeapStats"), &Z_Registration_Info_UScriptStruct_LeapStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapStats), 762769011U) },
		{ FLeapOptions::StaticStruct, Z_Construct_UScriptStruct_FLeapOptions_Statics::NewStructOps, TEXT("LeapOptions"), &Z_Registration_Info_UScriptStruct_LeapOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapOptions), 3728361001U) },
		{ FLeapBoneData::StaticStruct, Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewStructOps, TEXT("LeapBoneData"), &Z_Registration_Info_UScriptStruct_LeapBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapBoneData), 1972668014U) },
		{ FLeapPalmData::StaticStruct, Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewStructOps, TEXT("LeapPalmData"), &Z_Registration_Info_UScriptStruct_LeapPalmData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapPalmData), 3206978850U) },
		{ FLeapDigitData::StaticStruct, Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewStructOps, TEXT("LeapDigitData"), &Z_Registration_Info_UScriptStruct_LeapDigitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapDigitData), 4207896317U) },
		{ FLeapHandData::StaticStruct, Z_Construct_UScriptStruct_FLeapHandData_Statics::NewStructOps, TEXT("LeapHandData"), &Z_Registration_Info_UScriptStruct_LeapHandData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapHandData), 3241560064U) },
		{ FLeapFrameData::StaticStruct, Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewStructOps, TEXT("LeapFrameData"), &Z_Registration_Info_UScriptStruct_LeapFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeapFrameData), 1129174588U) },
		{ FTelemetry::StaticStruct, Z_Construct_UScriptStruct_FTelemetry_Statics::NewStructOps, TEXT("Telemetry"), &Z_Registration_Info_UScriptStruct_Telemetry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTelemetry), 59644905U) },
		{ FAnalytics::StaticStruct, Z_Construct_UScriptStruct_FAnalytics_Statics::NewStructOps, TEXT("Analytics"), &Z_Registration_Info_UScriptStruct_Analytics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnalytics), 1980989763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_1282085828(TEXT("/Script/UltraleapTracking"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTrackingData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
