// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapBlueprintFunctionLibrary.h"
#include "UltraleapTrackingCore/Public/UltraleapTrackingData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapBlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMode();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapStats();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class ULeapBlueprintFunctionLibrary Function AddLeapDeviceHint
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics
{
	struct LeapBlueprintFunctionLibrary_eventAddLeapDeviceHint_Parms
	{
		TArray<FString> DeviceSerials;
		FString Hint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerials" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Used to add leap api hint\n\x09 * @param DeviceSerials - The device serials to add the hint\n\x09 * @param Hint - The device hint\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Used to add leap api hint\n@param DeviceSerials - The device serials to add the hint\n@param Hint - The device hint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerials_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceSerials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::NewProp_DeviceSerials_Inner = { "DeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::NewProp_DeviceSerials = { "DeviceSerials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAddLeapDeviceHint_Parms, DeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerials_MetaData), NewProp_DeviceSerials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAddLeapDeviceHint_Parms, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hint_MetaData), NewProp_Hint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::NewProp_DeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::NewProp_DeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::NewProp_Hint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "AddLeapDeviceHint", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::LeapBlueprintFunctionLibrary_eventAddLeapDeviceHint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::LeapBlueprintFunctionLibrary_eventAddLeapDeviceHint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execAddLeapDeviceHint)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_DeviceSerials);
	P_GET_PROPERTY(FStrProperty,Z_Param_Hint);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::AddLeapDeviceHint(Z_Param_Out_DeviceSerials,Z_Param_Hint);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function AddLeapDeviceHint

// Begin Class ULeapBlueprintFunctionLibrary Function AngleBetweenVectors
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics
{
	struct LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms
	{
		FVector A;
		FVector B;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Angle between vectors - Equivalent of Unity's Vector3.Angle*/" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Angle between vectors - Equivalent of Unity's Vector3.Angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "AngleBetweenVectors", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execAngleBetweenVectors)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ULeapBlueprintFunctionLibrary::AngleBetweenVectors(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function AngleBetweenVectors

// Begin Class ULeapBlueprintFunctionLibrary Function GetAppVersion
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics
{
	struct LeapBlueprintFunctionLibrary_eventGetAppVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/**Get the app version from the game.ini file */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Get the app version from the game.ini file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetAppVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetAppVersion", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::LeapBlueprintFunctionLibrary_eventGetAppVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::LeapBlueprintFunctionLibrary_eventGetAppVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetAppVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULeapBlueprintFunctionLibrary::GetAppVersion();
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function GetAppVersion

// Begin Class ULeapBlueprintFunctionLibrary Function GetAttachedLeapDevices
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics
{
	struct LeapBlueprintFunctionLibrary_eventGetAttachedLeapDevices_Parms
	{
		TArray<FString> Devices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "Comment", "/** List the attached (plugged in) devices */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "List the attached (plugged in) devices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Devices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Devices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices_Inner = { "Devices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices = { "Devices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetAttachedLeapDevices_Parms, Devices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetAttachedLeapDevices", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::LeapBlueprintFunctionLibrary_eventGetAttachedLeapDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::LeapBlueprintFunctionLibrary_eventGetAttachedLeapDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetAttachedLeapDevices)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Devices);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::GetAttachedLeapDevices(Z_Param_Out_Devices);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function GetAttachedLeapDevices

// Begin Class ULeapBlueprintFunctionLibrary Function GetLeapOptions
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics
{
	struct LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms
	{
		FLeapOptions OutOptions;
		FString DeviceSerial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerial" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Gets currently set global options */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets currently set global options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutOptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_OutOptions = { "OutOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms, OutOptions), Z_Construct_UScriptStruct_FLeapOptions, METADATA_PARAMS(0, nullptr) }; // 3728361001
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_DeviceSerial = { "DeviceSerial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms, DeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerial_MetaData), NewProp_DeviceSerial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_OutOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_DeviceSerial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetLeapOptions", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetLeapOptions)
{
	P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_OutOptions);
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceSerial);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::GetLeapOptions(Z_Param_Out_OutOptions,Z_Param_DeviceSerial);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function GetLeapOptions

// Begin Class ULeapBlueprintFunctionLibrary Function GetLeapStats
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics
{
	struct LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms
	{
		FLeapStats OutStats;
		FString DeviceSerial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerial" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Gets Leap read only stats such as api version, frame lookup and device information */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets Leap read only stats such as api version, frame lookup and device information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutStats;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_OutStats = { "OutStats", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms, OutStats), Z_Construct_UScriptStruct_FLeapStats, METADATA_PARAMS(0, nullptr) }; // 762769011
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_DeviceSerial = { "DeviceSerial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms, DeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerial_MetaData), NewProp_DeviceSerial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_OutStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_DeviceSerial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetLeapStats", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetLeapStats)
{
	P_GET_STRUCT_REF(FLeapStats,Z_Param_Out_OutStats);
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceSerial);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::GetLeapStats(Z_Param_Out_OutStats,Z_Param_DeviceSerial);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function GetLeapStats

// Begin Class ULeapBlueprintFunctionLibrary Function RemoveLeapDeviceHint
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics
{
	struct LeapBlueprintFunctionLibrary_eventRemoveLeapDeviceHint_Parms
	{
		TArray<FString> DeviceSerials;
		FString Hint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerials" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Used to remove leap api hint\n\x09 * @param DeviceSerials - The device serials to remove the hint\n\x09 * @param Hint - The device hint\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Used to remove leap api hint\n@param DeviceSerials - The device serials to remove the hint\n@param Hint - The device hint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerials_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceSerials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::NewProp_DeviceSerials_Inner = { "DeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::NewProp_DeviceSerials = { "DeviceSerials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventRemoveLeapDeviceHint_Parms, DeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerials_MetaData), NewProp_DeviceSerials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventRemoveLeapDeviceHint_Parms, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hint_MetaData), NewProp_Hint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::NewProp_DeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::NewProp_DeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::NewProp_Hint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "RemoveLeapDeviceHint", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::LeapBlueprintFunctionLibrary_eventRemoveLeapDeviceHint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::LeapBlueprintFunctionLibrary_eventRemoveLeapDeviceHint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execRemoveLeapDeviceHint)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_DeviceSerials);
	P_GET_PROPERTY(FStrProperty,Z_Param_Hint);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::RemoveLeapDeviceHint(Z_Param_Out_DeviceSerials,Z_Param_Hint);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function RemoveLeapDeviceHint

// Begin Class ULeapBlueprintFunctionLibrary Function SetDebugRotation
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics
{
	struct LeapBlueprintFunctionLibrary_eventSetDebugRotation_Parms
	{
		FRotator Rotator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** For debugging purposes only */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "For debugging purposes only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetDebugRotation_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::NewProp_Rotator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetDebugRotation", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::LeapBlueprintFunctionLibrary_eventSetDebugRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::LeapBlueprintFunctionLibrary_eventSetDebugRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetDebugRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::SetDebugRotation(Z_Param_Out_Rotator);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function SetDebugRotation

// Begin Class ULeapBlueprintFunctionLibrary Function SetLeapDeviceHints
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics
{
	struct LeapBlueprintFunctionLibrary_eventSetLeapDeviceHints_Parms
	{
		TArray<FString> DeviceSerials;
		TArray<FString> Hints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerials" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Used to set leap api hints \n\x09* @param DeviceSerials - The device serials to set the hints\n\x09* @param Hints - The device hints\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Used to set leap api hints\n@param DeviceSerials - The device serials to set the hints\n@param Hints - The device hints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerials_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceSerials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_DeviceSerials_Inner = { "DeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_DeviceSerials = { "DeviceSerials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapDeviceHints_Parms, DeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerials_MetaData), NewProp_DeviceSerials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_Hints_Inner = { "Hints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_Hints = { "Hints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapDeviceHints_Parms, Hints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hints_MetaData), NewProp_Hints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_DeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_DeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_Hints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::NewProp_Hints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetLeapDeviceHints", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::LeapBlueprintFunctionLibrary_eventSetLeapDeviceHints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::LeapBlueprintFunctionLibrary_eventSetLeapDeviceHints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetLeapDeviceHints)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_DeviceSerials);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Hints);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::SetLeapDeviceHints(Z_Param_Out_DeviceSerials,Z_Param_Out_Hints);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function SetLeapDeviceHints

// Begin Class ULeapBlueprintFunctionLibrary Function SetLeapMode
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics
{
	struct LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms
	{
		TEnumAsByte<ELeapMode> Mode;
		TArray<FString> DeviceSerials;
		TEnumAsByte<ELeapTrackingFidelity> Fidelity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerials" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Set basic global leap tracking options */" },
		{ "CPP_Default_Fidelity", "LEAP_NORMAL" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set basic global leap tracking options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceSerials;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Fidelity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms, Mode), Z_Construct_UEnum_UltraleapTracking_ELeapMode, METADATA_PARAMS(0, nullptr) }; // 3348884886
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_DeviceSerials_Inner = { "DeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_DeviceSerials = { "DeviceSerials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms, DeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerials_MetaData), NewProp_DeviceSerials_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Fidelity = { "Fidelity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms, Fidelity), Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity, METADATA_PARAMS(0, nullptr) }; // 3545534406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_DeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_DeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Fidelity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetLeapMode", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetLeapMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
	P_GET_TARRAY_REF(FString,Z_Param_Out_DeviceSerials);
	P_GET_PROPERTY(FByteProperty,Z_Param_Fidelity);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::SetLeapMode(ELeapMode(Z_Param_Mode),Z_Param_Out_DeviceSerials,ELeapTrackingFidelity(Z_Param_Fidelity));
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function SetLeapMode

// Begin Class ULeapBlueprintFunctionLibrary Function SetLeapOptions
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics
{
	struct LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms
	{
		FLeapOptions Options;
		TArray<FString> DeviceSerials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerials" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Set global leap options */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set global leap options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceSerials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms, Options), Z_Construct_UScriptStruct_FLeapOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3728361001
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_DeviceSerials_Inner = { "DeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_DeviceSerials = { "DeviceSerials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms, DeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerials_MetaData), NewProp_DeviceSerials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_DeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_DeviceSerials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetLeapOptions", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetLeapOptions)
{
	P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_Options);
	P_GET_TARRAY_REF(FString,Z_Param_Out_DeviceSerials);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::SetLeapOptions(Z_Param_Out_Options,Z_Param_Out_DeviceSerials);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function SetLeapOptions

// Begin Class ULeapBlueprintFunctionLibrary Function SetLeapPolicy
struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics
{
	struct LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms
	{
		TEnumAsByte<ELeapPolicyFlag> Flag;
		bool Enable;
		TArray<FString> DeviceSerials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DeviceSerials" },
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Change leap policy */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Change leap policy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flag;
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceSerials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms, Flag), Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag, METADATA_PARAMS(0, nullptr) }; // 175806584
void Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms), &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_DeviceSerials_Inner = { "DeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_DeviceSerials = { "DeviceSerials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms, DeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerials_MetaData), NewProp_DeviceSerials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_DeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_DeviceSerials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetLeapPolicy", nullptr, nullptr, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetLeapPolicy)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Flag);
	P_GET_UBOOL(Z_Param_Enable);
	P_GET_TARRAY_REF(FString,Z_Param_Out_DeviceSerials);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULeapBlueprintFunctionLibrary::SetLeapPolicy(ELeapPolicyFlag(Z_Param_Flag),Z_Param_Enable,Z_Param_Out_DeviceSerials);
	P_NATIVE_END;
}
// End Class ULeapBlueprintFunctionLibrary Function SetLeapPolicy

// Begin Class ULeapBlueprintFunctionLibrary
void ULeapBlueprintFunctionLibrary::StaticRegisterNativesULeapBlueprintFunctionLibrary()
{
	UClass* Class = ULeapBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLeapDeviceHint", &ULeapBlueprintFunctionLibrary::execAddLeapDeviceHint },
		{ "AngleBetweenVectors", &ULeapBlueprintFunctionLibrary::execAngleBetweenVectors },
		{ "GetAppVersion", &ULeapBlueprintFunctionLibrary::execGetAppVersion },
		{ "GetAttachedLeapDevices", &ULeapBlueprintFunctionLibrary::execGetAttachedLeapDevices },
		{ "GetLeapOptions", &ULeapBlueprintFunctionLibrary::execGetLeapOptions },
		{ "GetLeapStats", &ULeapBlueprintFunctionLibrary::execGetLeapStats },
		{ "RemoveLeapDeviceHint", &ULeapBlueprintFunctionLibrary::execRemoveLeapDeviceHint },
		{ "SetDebugRotation", &ULeapBlueprintFunctionLibrary::execSetDebugRotation },
		{ "SetLeapDeviceHints", &ULeapBlueprintFunctionLibrary::execSetLeapDeviceHints },
		{ "SetLeapMode", &ULeapBlueprintFunctionLibrary::execSetLeapMode },
		{ "SetLeapOptions", &ULeapBlueprintFunctionLibrary::execSetLeapOptions },
		{ "SetLeapPolicy", &ULeapBlueprintFunctionLibrary::execSetLeapPolicy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeapBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister()
{
	return ULeapBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Useful global blueprint functions for Ultraleap Tracking\n */" },
		{ "IncludePath", "LeapBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Useful global blueprint functions for Ultraleap Tracking" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AddLeapDeviceHint, "AddLeapDeviceHint" }, // 2297753459
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors, "AngleBetweenVectors" }, // 2167025801
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion, "GetAppVersion" }, // 2396848399
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices, "GetAttachedLeapDevices" }, // 4082018632
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions, "GetLeapOptions" }, // 1053176975
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats, "GetLeapStats" }, // 1134663642
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_RemoveLeapDeviceHint, "RemoveLeapDeviceHint" }, // 4258156200
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation, "SetDebugRotation" }, // 4160060812
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapDeviceHints, "SetLeapDeviceHints" }, // 1878795827
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode, "SetLeapMode" }, // 2108211409
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions, "SetLeapOptions" }, // 2313433804
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy, "SetLeapPolicy" }, // 2383077859
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams = {
	&ULeapBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_ULeapBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeapBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeapBlueprintFunctionLibrary.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ULeapBlueprintFunctionLibrary>()
{
	return ULeapBlueprintFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapBlueprintFunctionLibrary);
ULeapBlueprintFunctionLibrary::~ULeapBlueprintFunctionLibrary() {}
// End Class ULeapBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeapBlueprintFunctionLibrary, ULeapBlueprintFunctionLibrary::StaticClass, TEXT("ULeapBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_ULeapBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeapBlueprintFunctionLibrary), 3379763432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapBlueprintFunctionLibrary_h_2814093150(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
