// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Private/Multileap/JointOcclusionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJointOcclusionActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_AJointOcclusionActor();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_AJointOcclusionActor_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class AJointOcclusionActor Function GetJointOcclusionConfidences
struct Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics
{
	struct JointOcclusionActor_eventGetJointOcclusionConfidences_Parms
	{
		FString DeviceSerial;
		TArray<float> Left;
		TArray<float> Right;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Devices - Joint Occlusion" },
		{ "ModuleRelativePath", "Private/Multileap/JointOcclusionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Left_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Left;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Right;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_DeviceSerial = { "DeviceSerial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JointOcclusionActor_eventGetJointOcclusionConfidences_Parms, DeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerial_MetaData), NewProp_DeviceSerial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Left_Inner = { "Left", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JointOcclusionActor_eventGetJointOcclusionConfidences_Parms, Left), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Right_Inner = { "Right", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JointOcclusionActor_eventGetJointOcclusionConfidences_Parms, Right), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JointOcclusionActor_eventGetJointOcclusionConfidences_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JointOcclusionActor_eventGetJointOcclusionConfidences_Parms), &Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_DeviceSerial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Left_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Right_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJointOcclusionActor, nullptr, "GetJointOcclusionConfidences", nullptr, nullptr, Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::PropPointers), sizeof(Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::JointOcclusionActor_eventGetJointOcclusionConfidences_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::JointOcclusionActor_eventGetJointOcclusionConfidences_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJointOcclusionActor::execGetJointOcclusionConfidences)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceSerial);
	P_GET_TARRAY_REF(float,Z_Param_Out_Left);
	P_GET_TARRAY_REF(float,Z_Param_Out_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetJointOcclusionConfidences(Z_Param_DeviceSerial,Z_Param_Out_Left,Z_Param_Out_Right);
	P_NATIVE_END;
}
// End Class AJointOcclusionActor Function GetJointOcclusionConfidences

// Begin Class AJointOcclusionActor Function SetupColours
struct Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics
{
	struct JointOcclusionActor_eventSetupColours_Parms
	{
		bool DebugSimpleColours;
		bool UseLinearLerp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Devices - Joint Occlusion" },
		{ "ModuleRelativePath", "Private/Multileap/JointOcclusionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSimpleColours_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseLinearLerp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_DebugSimpleColours_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugSimpleColours;
	static void NewProp_UseLinearLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLinearLerp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_DebugSimpleColours_SetBit(void* Obj)
{
	((JointOcclusionActor_eventSetupColours_Parms*)Obj)->DebugSimpleColours = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_DebugSimpleColours = { "DebugSimpleColours", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JointOcclusionActor_eventSetupColours_Parms), &Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_DebugSimpleColours_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSimpleColours_MetaData), NewProp_DebugSimpleColours_MetaData) };
void Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_UseLinearLerp_SetBit(void* Obj)
{
	((JointOcclusionActor_eventSetupColours_Parms*)Obj)->UseLinearLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_UseLinearLerp = { "UseLinearLerp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JointOcclusionActor_eventSetupColours_Parms), &Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_UseLinearLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseLinearLerp_MetaData), NewProp_UseLinearLerp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_DebugSimpleColours,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::NewProp_UseLinearLerp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJointOcclusionActor, nullptr, "SetupColours", nullptr, nullptr, Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::PropPointers), sizeof(Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::JointOcclusionActor_eventSetupColours_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::JointOcclusionActor_eventSetupColours_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJointOcclusionActor_SetupColours()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJointOcclusionActor_SetupColours_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJointOcclusionActor::execSetupColours)
{
	P_GET_UBOOL(Z_Param_DebugSimpleColours);
	P_GET_UBOOL(Z_Param_UseLinearLerp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupColours(Z_Param_DebugSimpleColours,Z_Param_UseLinearLerp);
	P_NATIVE_END;
}
// End Class AJointOcclusionActor Function SetupColours

// Begin Class AJointOcclusionActor
void AJointOcclusionActor::StaticRegisterNativesAJointOcclusionActor()
{
	UClass* Class = AJointOcclusionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetJointOcclusionConfidences", &AJointOcclusionActor::execGetJointOcclusionConfidences },
		{ "SetupColours", &AJointOcclusionActor::execSetupColours },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJointOcclusionActor);
UClass* Z_Construct_UClass_AJointOcclusionActor_NoRegister()
{
	return AJointOcclusionActor::StaticClass();
}
struct Z_Construct_UClass_AJointOcclusionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Multileap/JointOcclusionActor.h" },
		{ "ModuleRelativePath", "Private/Multileap/JointOcclusionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeapComponent_MetaData[] = {
		{ "Category", "Leap Devices - Joint Occlusion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Multileap/JointOcclusionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereColoursLeft_MetaData[] = {
		{ "Category", "Leap Devices - Joint Occlusion" },
		{ "ModuleRelativePath", "Private/Multileap/JointOcclusionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereColoursRight_MetaData[] = {
		{ "Category", "Leap Devices - Joint Occlusion" },
		{ "ModuleRelativePath", "Private/Multileap/JointOcclusionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceToSceneCaptures_MetaData[] = {
		{ "Category", "Leap Devices - Joint Occlusion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Multileap/JointOcclusionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeapComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereColoursLeft_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphereColoursLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereColoursRight_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphereColoursRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeviceToSceneCaptures_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceToSceneCaptures_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceToSceneCaptures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AJointOcclusionActor_GetJointOcclusionConfidences, "GetJointOcclusionConfidences" }, // 2708019569
		{ &Z_Construct_UFunction_AJointOcclusionActor_SetupColours, "SetupColours" }, // 233778580
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJointOcclusionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_LeapComponent = { "LeapComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJointOcclusionActor, LeapComponent), Z_Construct_UClass_ULeapComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeapComponent_MetaData), NewProp_LeapComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursLeft_Inner = { "SphereColoursLeft", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursLeft = { "SphereColoursLeft", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJointOcclusionActor, SphereColoursLeft), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereColoursLeft_MetaData), NewProp_SphereColoursLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursRight_Inner = { "SphereColoursRight", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursRight = { "SphereColoursRight", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJointOcclusionActor, SphereColoursRight), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereColoursRight_MetaData), NewProp_SphereColoursRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_DeviceToSceneCaptures_ValueProp = { "DeviceToSceneCaptures", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_DeviceToSceneCaptures_Key_KeyProp = { "DeviceToSceneCaptures_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_DeviceToSceneCaptures = { "DeviceToSceneCaptures", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJointOcclusionActor, DeviceToSceneCaptures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceToSceneCaptures_MetaData), NewProp_DeviceToSceneCaptures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJointOcclusionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_LeapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursLeft_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursRight_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_SphereColoursRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_DeviceToSceneCaptures_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_DeviceToSceneCaptures_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJointOcclusionActor_Statics::NewProp_DeviceToSceneCaptures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJointOcclusionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJointOcclusionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJointOcclusionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJointOcclusionActor_Statics::ClassParams = {
	&AJointOcclusionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AJointOcclusionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AJointOcclusionActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJointOcclusionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AJointOcclusionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJointOcclusionActor()
{
	if (!Z_Registration_Info_UClass_AJointOcclusionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJointOcclusionActor.OuterSingleton, Z_Construct_UClass_AJointOcclusionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJointOcclusionActor.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<AJointOcclusionActor>()
{
	return AJointOcclusionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJointOcclusionActor);
AJointOcclusionActor::~AJointOcclusionActor() {}
// End Class AJointOcclusionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_JointOcclusionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJointOcclusionActor, AJointOcclusionActor::StaticClass, TEXT("AJointOcclusionActor"), &Z_Registration_Info_UClass_AJointOcclusionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJointOcclusionActor), 2463363490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_JointOcclusionActor_h_1308119012(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_JointOcclusionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_JointOcclusionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
