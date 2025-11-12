// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapComponent.h"
#include "UltraleapTrackingCore/Public/UltraleapTrackingData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapComponent_NoRegister();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapImageType();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMode();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Delegate FLeapEventSignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapEventSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapEventSignature)
{
	LeapEventSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FLeapEventSignature

// Begin Delegate FLeapDeviceSignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapDeviceSignature_Parms
	{
		FString DeviceName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapDeviceSignature_Parms, DeviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::NewProp_DeviceName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapDeviceSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapDeviceSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapDeviceSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapDeviceSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapDeviceSignature, const FString& DeviceName)
{
	struct _Script_UltraleapTracking_eventLeapDeviceSignature_Parms
	{
		FString DeviceName;
	};
	_Script_UltraleapTracking_eventLeapDeviceSignature_Parms Parms;
	Parms.DeviceName=DeviceName;
	LeapDeviceSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapDeviceSignature

// Begin Delegate FLeapVisibilityBoolSignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms
	{
		bool bIsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((_Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms), &Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapVisibilityBoolSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapVisibilityBoolSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapVisibilityBoolSignature, bool bIsVisible)
{
	struct _Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms
	{
		bool bIsVisible;
	};
	_Script_UltraleapTracking_eventLeapVisibilityBoolSignature_Parms Parms;
	Parms.bIsVisible=bIsVisible ? true : false;
	LeapVisibilityBoolSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapVisibilityBoolSignature

// Begin Delegate FLeapFrameSignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapFrameSignature_Parms
	{
		FLeapFrameData Frame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapFrameSignature_Parms, Frame), Z_Construct_UScriptStruct_FLeapFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) }; // 1129174588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::NewProp_Frame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapFrameSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapFrameSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapFrameSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapFrameSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapFrameSignature, FLeapFrameData const& Frame)
{
	struct _Script_UltraleapTracking_eventLeapFrameSignature_Parms
	{
		FLeapFrameData Frame;
	};
	_Script_UltraleapTracking_eventLeapFrameSignature_Parms Parms;
	Parms.Frame=Frame;
	LeapFrameSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapFrameSignature

// Begin Delegate FLeapHandSignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapHandSignature_Parms
	{
		FLeapHandData Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapHandSignature_Parms, Hand), Z_Construct_UScriptStruct_FLeapHandData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hand_MetaData), NewProp_Hand_MetaData) }; // 3241560064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapHandSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapHandSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapHandSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapHandSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapHandSignature, FLeapHandData const& Hand)
{
	struct _Script_UltraleapTracking_eventLeapHandSignature_Parms
	{
		FLeapHandData Hand;
	};
	_Script_UltraleapTracking_eventLeapHandSignature_Parms Parms;
	Parms.Hand=Hand;
	LeapHandSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapHandSignature

// Begin Delegate FLeapPolicySignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapPolicySignature_Parms
	{
		TArray<TEnumAsByte<ELeapPolicyFlag> > Flags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag, METADATA_PARAMS(0, nullptr) }; // 175806584
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapPolicySignature_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 175806584
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapPolicySignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapPolicySignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapPolicySignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapPolicySignature_DelegateWrapper(const FMulticastScriptDelegate& LeapPolicySignature, const TArray<TEnumAsByte<ELeapPolicyFlag> >& Flags)
{
	struct _Script_UltraleapTracking_eventLeapPolicySignature_Parms
	{
		TArray<TEnumAsByte<ELeapPolicyFlag> > Flags;
	};
	_Script_UltraleapTracking_eventLeapPolicySignature_Parms Parms;
	Parms.Flags=Flags;
	LeapPolicySignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapPolicySignature

// Begin Delegate FLeapImageEventSignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapImageEventSignature_Parms
	{
		UTexture2D* Texture;
		ELeapImageType ImageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapImageEventSignature_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapImageEventSignature_Parms, ImageType), Z_Construct_UEnum_UltraleapTracking_ELeapImageType, METADATA_PARAMS(0, nullptr) }; // 860195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapImageEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapImageEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapImageEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapImageEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapImageEventSignature, UTexture2D* Texture, ELeapImageType ImageType)
{
	struct _Script_UltraleapTracking_eventLeapImageEventSignature_Parms
	{
		UTexture2D* Texture;
		ELeapImageType ImageType;
	};
	_Script_UltraleapTracking_eventLeapImageEventSignature_Parms Parms;
	Parms.Texture=Texture;
	Parms.ImageType=ImageType;
	LeapImageEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapImageEventSignature

// Begin Delegate FLeapTrackingModeSignature
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms
	{
		TEnumAsByte<ELeapMode> Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms, Flag), Z_Construct_UEnum_UltraleapTracking_ELeapMode, METADATA_PARAMS(0, nullptr) }; // 3348884886
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapTrackingModeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapTrackingModeSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapTrackingModeSignature, ELeapMode Flag)
{
	struct _Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms
	{
		TEnumAsByte<ELeapMode> Flag;
	};
	_Script_UltraleapTracking_eventLeapTrackingModeSignature_Parms Parms;
	Parms.Flag=Flag;
	LeapTrackingModeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapTrackingModeSignature

// Begin Class ULeapComponent Function AreHandsVisible
struct Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics
{
	struct LeapComponent_eventAreHandsVisible_Parms
	{
		bool LeftIsVisible;
		bool RightIsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "Comment", "/** Utility function to check if a hand is visible and tracked at this moment */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Utility function to check if a hand is visible and tracked at this moment" },
	};
#endif // WITH_METADATA
	static void NewProp_LeftIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftIsVisible;
	static void NewProp_RightIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RightIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible_SetBit(void* Obj)
{
	((LeapComponent_eventAreHandsVisible_Parms*)Obj)->LeftIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible = { "LeftIsVisible", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventAreHandsVisible_Parms), &Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible_SetBit(void* Obj)
{
	((LeapComponent_eventAreHandsVisible_Parms*)Obj)->RightIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible = { "RightIsVisible", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventAreHandsVisible_Parms), &Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "AreHandsVisible", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::LeapComponent_eventAreHandsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::LeapComponent_eventAreHandsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_AreHandsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execAreHandsVisible)
{
	P_GET_UBOOL_REF(Z_Param_Out_LeftIsVisible);
	P_GET_UBOOL_REF(Z_Param_Out_RightIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AreHandsVisible(Z_Param_Out_LeftIsVisible,Z_Param_Out_RightIsVisible);
	P_NATIVE_END;
}
// End Class ULeapComponent Function AreHandsVisible

// Begin Class ULeapComponent Function DoesCurrentGrabStrengthExceedTarget
struct Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics
{
	struct LeapComponent_eventDoesCurrentGrabStrengthExceedTarget_Parms
	{
		float GrabStrength;
		uint8 TargetHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "Comment", "/**\n\x09 * Checks if the hand type can grab, but checking the pinch or grab strength\n\x09 * @param GrabStrength - the grab strength \n\x09 * @param Type - the hand type\n\x09 * @return bool, if we can grab with this hand type (left or right)\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Checks if the hand type can grab, but checking the pinch or grab strength\n@param GrabStrength - the grab strength\n@param Type - the hand type\n@return bool, if we can grab with this hand type (left or right)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetHand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_GrabStrength = { "GrabStrength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventDoesCurrentGrabStrengthExceedTarget_Parms, GrabStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabStrength_MetaData), NewProp_GrabStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventDoesCurrentGrabStrengthExceedTarget_Parms, TargetHand), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LeapComponent_eventDoesCurrentGrabStrengthExceedTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventDoesCurrentGrabStrengthExceedTarget_Parms), &Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_GrabStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_TargetHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "DoesCurrentGrabStrengthExceedTarget", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::LeapComponent_eventDoesCurrentGrabStrengthExceedTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::LeapComponent_eventDoesCurrentGrabStrengthExceedTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execDoesCurrentGrabStrengthExceedTarget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_GrabStrength);
	P_GET_PROPERTY(FByteProperty,Z_Param_TargetHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesCurrentGrabStrengthExceedTarget(Z_Param_GrabStrength,Z_Param_TargetHand);
	P_NATIVE_END;
}
// End Class ULeapComponent Function DoesCurrentGrabStrengthExceedTarget

// Begin Class ULeapComponent Function GetDeviceOrigin
struct Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics
{
	struct LeapComponent_eventGetDeviceOrigin_Parms
	{
		FTransform DeviceOrigin;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOrigin;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::NewProp_DeviceOrigin = { "DeviceOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetDeviceOrigin_Parms, DeviceOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LeapComponent_eventGetDeviceOrigin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventGetDeviceOrigin_Parms), &Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::NewProp_DeviceOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetDeviceOrigin", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::LeapComponent_eventGetDeviceOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::LeapComponent_eventGetDeviceOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetDeviceOrigin)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeviceOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDeviceOrigin(Z_Param_Out_DeviceOrigin);
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetDeviceOrigin

// Begin Class ULeapComponent Function GetDeviceTypeFromSerial
struct Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics
{
	struct LeapComponent_eventGetDeviceTypeFromSerial_Parms
	{
		FString DeviceSerial;
		TEnumAsByte<ELeapDeviceType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Leap Devices" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::NewProp_DeviceSerial = { "DeviceSerial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetDeviceTypeFromSerial_Parms, DeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerial_MetaData), NewProp_DeviceSerial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetDeviceTypeFromSerial_Parms, ReturnValue), Z_Construct_UEnum_UltraleapTracking_ELeapDeviceType, METADATA_PARAMS(0, nullptr) }; // 689792448
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::NewProp_DeviceSerial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetDeviceTypeFromSerial", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::LeapComponent_eventGetDeviceTypeFromSerial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::LeapComponent_eventGetDeviceTypeFromSerial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetDeviceTypeFromSerial)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceSerial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ELeapDeviceType>*)Z_Param__Result=P_THIS->GetDeviceTypeFromSerial(Z_Param_DeviceSerial);
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetDeviceTypeFromSerial

// Begin Class ULeapComponent Function GetHandSize
struct Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics
{
	struct LeapComponent_eventGetHandSize_Parms
	{
		float OutHandSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "Comment", "/**\n\x09* Get the hand size, by default it will get the left hand size\n\x09* In this method that we measure the middle finger length + palm position \n\x09* to start of finger as an indication of the hand size\n\x09* @param OutHandSize - returns the hand size\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Get the hand size, by default it will get the left hand size\nIn this method that we measure the middle finger length + palm position\nto start of finger as an indication of the hand size\n@param OutHandSize - returns the hand size" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutHandSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::NewProp_OutHandSize = { "OutHandSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetHandSize_Parms, OutHandSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::NewProp_OutHandSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetHandSize", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::LeapComponent_eventGetHandSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::LeapComponent_eventGetHandSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetHandSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetHandSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetHandSize)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHandSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHandSize(Z_Param_Out_OutHandSize);
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetHandSize

// Begin Class ULeapComponent Function GetLatestFrameData
struct Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics
{
	struct LeapComponent_eventGetLatestFrameData_Parms
	{
		FLeapFrameData OutData;
		bool ApplyDeviceOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "Comment", "/** Polling function to get latest data */" },
		{ "CPP_Default_ApplyDeviceOrigin", "false" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Polling function to get latest data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyDeviceOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
	static void NewProp_ApplyDeviceOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyDeviceOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetLatestFrameData_Parms, OutData), Z_Construct_UScriptStruct_FLeapFrameData, METADATA_PARAMS(0, nullptr) }; // 1129174588
void Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_ApplyDeviceOrigin_SetBit(void* Obj)
{
	((LeapComponent_eventGetLatestFrameData_Parms*)Obj)->ApplyDeviceOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_ApplyDeviceOrigin = { "ApplyDeviceOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventGetLatestFrameData_Parms), &Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_ApplyDeviceOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyDeviceOrigin_MetaData), NewProp_ApplyDeviceOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_ApplyDeviceOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetLatestFrameData", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::LeapComponent_eventGetLatestFrameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::LeapComponent_eventGetLatestFrameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetLatestFrameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetLatestFrameData)
{
	P_GET_STRUCT_REF(FLeapFrameData,Z_Param_Out_OutData);
	P_GET_UBOOL(Z_Param_ApplyDeviceOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLatestFrameData(Z_Param_Out_OutData,Z_Param_ApplyDeviceOrigin);
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetLatestFrameData

// Begin Class ULeapComponent Function GetLeapOptions
struct Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics
{
	struct LeapComponent_eventGetLeapOptions_Parms
	{
		FLeapOptions Options;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetLeapOptions_Parms, Options), Z_Construct_UScriptStruct_FLeapOptions, METADATA_PARAMS(0, nullptr) }; // 3728361001
void Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LeapComponent_eventGetLeapOptions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventGetLeapOptions_Parms), &Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetLeapOptions", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::LeapComponent_eventGetLeapOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::LeapComponent_eventGetLeapOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetLeapOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetLeapOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetLeapOptions)
{
	P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLeapOptions(Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetLeapOptions

// Begin Class ULeapComponent Function GetLRGrabStrength
struct Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics
{
	struct LeapComponent_eventGetLRGrabStrength_Parms
	{
		TArray<float> GrabStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "Comment", "/**\n\x09 * Get the grab strength for both hands\n\x09 * @param GrabStrength - returns the grab strength as an array\n\x09 * Index 0 of the array is for the left hand\n\x09 * Index 1 of the array is for the right hand\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Get the grab strength for both hands\n@param GrabStrength - returns the grab strength as an array\nIndex 0 of the array is for the left hand\nIndex 1 of the array is for the right hand" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabStrength_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrabStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::NewProp_GrabStrength_Inner = { "GrabStrength", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::NewProp_GrabStrength = { "GrabStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetLRGrabStrength_Parms, GrabStrength), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::NewProp_GrabStrength_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::NewProp_GrabStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetLRGrabStrength", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::LeapComponent_eventGetLRGrabStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::LeapComponent_eventGetLRGrabStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetLRGrabStrength)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_GrabStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLRGrabStrength(Z_Param_Out_GrabStrength);
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetLRGrabStrength

// Begin Class ULeapComponent Function GetMultiDeviceDebugInfo
struct Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics
{
	struct LeapComponent_eventGetMultiDeviceDebugInfo_Parms
	{
		int32 NumLeftTracked;
		int32 NumRightTracked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLeftTracked;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRightTracked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::NewProp_NumLeftTracked = { "NumLeftTracked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetMultiDeviceDebugInfo_Parms, NumLeftTracked), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::NewProp_NumRightTracked = { "NumRightTracked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetMultiDeviceDebugInfo_Parms, NumRightTracked), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::NewProp_NumLeftTracked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::NewProp_NumRightTracked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetMultiDeviceDebugInfo", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::LeapComponent_eventGetMultiDeviceDebugInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::LeapComponent_eventGetMultiDeviceDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetMultiDeviceDebugInfo)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLeftTracked);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumRightTracked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMultiDeviceDebugInfo(Z_Param_Out_NumLeftTracked,Z_Param_Out_NumRightTracked);
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetMultiDeviceDebugInfo

// Begin Class ULeapComponent Function GetSerialOptions
struct Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics
{
	struct LeapComponent_eventGetSerialOptions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventGetSerialOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "GetSerialOptions", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::LeapComponent_eventGetSerialOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::LeapComponent_eventGetSerialOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_GetSerialOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetSerialOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execGetSerialOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetSerialOptions();
	P_NATIVE_END;
}
// End Class ULeapComponent Function GetSerialOptions

// Begin Class ULeapComponent Function IsActiveDevicePluggedIn
struct Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics
{
	struct LeapComponent_eventIsActiveDevicePluggedIn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LeapComponent_eventIsActiveDevicePluggedIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventIsActiveDevicePluggedIn_Parms), &Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "IsActiveDevicePluggedIn", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::LeapComponent_eventIsActiveDevicePluggedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::LeapComponent_eventIsActiveDevicePluggedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execIsActiveDevicePluggedIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActiveDevicePluggedIn();
	P_NATIVE_END;
}
// End Class ULeapComponent Function IsActiveDevicePluggedIn

// Begin Class ULeapComponent Function SetLeapPolicy
struct Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics
{
	struct LeapComponent_eventSetLeapPolicy_Parms
	{
		TEnumAsByte<ELeapPolicyFlag> Flag;
		bool Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flag;
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetLeapPolicy_Parms, Flag), Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag, METADATA_PARAMS(0, nullptr) }; // 175806584
void Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((LeapComponent_eventSetLeapPolicy_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventSetLeapPolicy_Parms), &Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "SetLeapPolicy", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::LeapComponent_eventSetLeapPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::LeapComponent_eventSetLeapPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_SetLeapPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_SetLeapPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execSetLeapPolicy)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Flag);
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeapPolicy(ELeapPolicyFlag(Z_Param_Flag),Z_Param_Enable);
	P_NATIVE_END;
}
// End Class ULeapComponent Function SetLeapPolicy

// Begin Class ULeapComponent Function SetShouldAddHmdOrigin
struct Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics
{
	struct LeapComponent_eventSetShouldAddHmdOrigin_Parms
	{
		bool bShouldAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldAdd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::NewProp_bShouldAdd_SetBit(void* Obj)
{
	((LeapComponent_eventSetShouldAddHmdOrigin_Parms*)Obj)->bShouldAdd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::NewProp_bShouldAdd = { "bShouldAdd", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventSetShouldAddHmdOrigin_Parms), &Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::NewProp_bShouldAdd_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::NewProp_bShouldAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "SetShouldAddHmdOrigin", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::LeapComponent_eventSetShouldAddHmdOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::LeapComponent_eventSetShouldAddHmdOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execSetShouldAddHmdOrigin)
{
	P_GET_UBOOL_REF(Z_Param_Out_bShouldAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldAddHmdOrigin(Z_Param_Out_bShouldAdd);
	P_NATIVE_END;
}
// End Class ULeapComponent Function SetShouldAddHmdOrigin

// Begin Class ULeapComponent Function SetSwizzles
struct Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics
{
	struct LeapComponent_eventSetSwizzles_Parms
	{
		ELeapQuatSwizzleAxisB ToX;
		ELeapQuatSwizzleAxisB ToY;
		ELeapQuatSwizzleAxisB ToZ;
		ELeapQuatSwizzleAxisB ToW;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToX_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToY_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToZ_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToZ;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToW_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToW;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToX = { "ToX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetSwizzles_Parms, ToX), Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB, METADATA_PARAMS(0, nullptr) }; // 3878223993
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToY = { "ToY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetSwizzles_Parms, ToY), Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB, METADATA_PARAMS(0, nullptr) }; // 3878223993
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToZ = { "ToZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetSwizzles_Parms, ToZ), Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB, METADATA_PARAMS(0, nullptr) }; // 3878223993
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToW_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToW = { "ToW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetSwizzles_Parms, ToW), Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB, METADATA_PARAMS(0, nullptr) }; // 3878223993
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToX_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToY_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToZ_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToW_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::NewProp_ToW,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "SetSwizzles", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::LeapComponent_eventSetSwizzles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::LeapComponent_eventSetSwizzles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_SetSwizzles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_SetSwizzles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execSetSwizzles)
{
	P_GET_ENUM(ELeapQuatSwizzleAxisB,Z_Param_ToX);
	P_GET_ENUM(ELeapQuatSwizzleAxisB,Z_Param_ToY);
	P_GET_ENUM(ELeapQuatSwizzleAxisB,Z_Param_ToZ);
	P_GET_ENUM(ELeapQuatSwizzleAxisB,Z_Param_ToW);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSwizzles(ELeapQuatSwizzleAxisB(Z_Param_ToX),ELeapQuatSwizzleAxisB(Z_Param_ToY),ELeapQuatSwizzleAxisB(Z_Param_ToZ),ELeapQuatSwizzleAxisB(Z_Param_ToW));
	P_NATIVE_END;
}
// End Class ULeapComponent Function SetSwizzles

// Begin Class ULeapComponent Function SetTrackingMode
struct Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics
{
	struct LeapComponent_eventSetTrackingMode_Parms
	{
		TEnumAsByte<ELeapMode> Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetTrackingMode_Parms, Mode), Z_Construct_UEnum_UltraleapTracking_ELeapMode, METADATA_PARAMS(0, nullptr) }; // 3348884886
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "SetTrackingMode", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::LeapComponent_eventSetTrackingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::LeapComponent_eventSetTrackingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_SetTrackingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_SetTrackingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execSetTrackingMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrackingMode(ELeapMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class ULeapComponent Function SetTrackingMode

// Begin Class ULeapComponent Function SetupMultidevice
struct Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics
{
	struct LeapComponent_eventSetupMultidevice_Parms
	{
		TArray<FString> DeviceSerials;
		TEnumAsByte<ELeapMultiDeviceMode> MultiDeviceModeIn;
		TEnumAsByte<ELeapDeviceCombinerClass> CombinerClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Leap Devices" },
		{ "Comment", "// Setup multidevice programmatically in one call\n" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Setup multidevice programmatically in one call" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerials_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiDeviceModeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinerClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceSerials;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiDeviceModeIn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombinerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_DeviceSerials_Inner = { "DeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_DeviceSerials = { "DeviceSerials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetupMultidevice_Parms, DeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerials_MetaData), NewProp_DeviceSerials_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_MultiDeviceModeIn = { "MultiDeviceModeIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetupMultidevice_Parms, MultiDeviceModeIn), Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiDeviceModeIn_MetaData), NewProp_MultiDeviceModeIn_MetaData) }; // 3927097670
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_CombinerClass = { "CombinerClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventSetupMultidevice_Parms, CombinerClass), Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinerClass_MetaData), NewProp_CombinerClass_MetaData) }; // 3579689858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_DeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_DeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_MultiDeviceModeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::NewProp_CombinerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "SetupMultidevice", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::LeapComponent_eventSetupMultidevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::LeapComponent_eventSetupMultidevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_SetupMultidevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_SetupMultidevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execSetupMultidevice)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_DeviceSerials);
	P_GET_PROPERTY(FByteProperty,Z_Param_MultiDeviceModeIn);
	P_GET_PROPERTY(FByteProperty,Z_Param_CombinerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupMultidevice(Z_Param_Out_DeviceSerials,ELeapMultiDeviceMode(Z_Param_MultiDeviceModeIn),ELeapDeviceCombinerClass(Z_Param_CombinerClass));
	P_NATIVE_END;
}
// End Class ULeapComponent Function SetupMultidevice

// Begin Class ULeapComponent Function UpdateActiveDevice
struct Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics
{
	struct LeapComponent_eventUpdateActiveDevice_Parms
	{
		FString DeviceSerial;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerial;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::NewProp_DeviceSerial = { "DeviceSerial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventUpdateActiveDevice_Parms, DeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerial_MetaData), NewProp_DeviceSerial_MetaData) };
void Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LeapComponent_eventUpdateActiveDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventUpdateActiveDevice_Parms), &Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::NewProp_DeviceSerial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "UpdateActiveDevice", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::LeapComponent_eventUpdateActiveDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::LeapComponent_eventUpdateActiveDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execUpdateActiveDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceSerial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateActiveDevice(Z_Param_DeviceSerial);
	P_NATIVE_END;
}
// End Class ULeapComponent Function UpdateActiveDevice

// Begin Class ULeapComponent Function UpdateDeviceOrigin
struct Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics
{
	struct LeapComponent_eventUpdateDeviceOrigin_Parms
	{
		FTransform DeviceOriginIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Leap Devices" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOriginIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOriginIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::NewProp_DeviceOriginIn = { "DeviceOriginIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventUpdateDeviceOrigin_Parms, DeviceOriginIn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceOriginIn_MetaData), NewProp_DeviceOriginIn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::NewProp_DeviceOriginIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "UpdateDeviceOrigin", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::LeapComponent_eventUpdateDeviceOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::LeapComponent_eventUpdateDeviceOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execUpdateDeviceOrigin)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeviceOriginIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDeviceOrigin(Z_Param_Out_DeviceOriginIn);
	P_NATIVE_END;
}
// End Class ULeapComponent Function UpdateDeviceOrigin

// Begin Class ULeapComponent Function UpdateMultiDeviceMode
struct Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics
{
	struct LeapComponent_eventUpdateMultiDeviceMode_Parms
	{
		TEnumAsByte<ELeapMultiDeviceMode> DeviceMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::NewProp_DeviceMode = { "DeviceMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapComponent_eventUpdateMultiDeviceMode_Parms, DeviceMode), Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceMode_MetaData), NewProp_DeviceMode_MetaData) }; // 3927097670
void Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LeapComponent_eventUpdateMultiDeviceMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeapComponent_eventUpdateMultiDeviceMode_Parms), &Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::NewProp_DeviceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, nullptr, "UpdateMultiDeviceMode", nullptr, nullptr, Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::LeapComponent_eventUpdateMultiDeviceMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::LeapComponent_eventUpdateMultiDeviceMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapComponent::execUpdateMultiDeviceMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_DeviceMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateMultiDeviceMode(ELeapMultiDeviceMode(Z_Param_DeviceMode));
	P_NATIVE_END;
}
// End Class ULeapComponent Function UpdateMultiDeviceMode

// Begin Class ULeapComponent
void ULeapComponent::StaticRegisterNativesULeapComponent()
{
	UClass* Class = ULeapComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreHandsVisible", &ULeapComponent::execAreHandsVisible },
		{ "DoesCurrentGrabStrengthExceedTarget", &ULeapComponent::execDoesCurrentGrabStrengthExceedTarget },
		{ "GetDeviceOrigin", &ULeapComponent::execGetDeviceOrigin },
		{ "GetDeviceTypeFromSerial", &ULeapComponent::execGetDeviceTypeFromSerial },
		{ "GetHandSize", &ULeapComponent::execGetHandSize },
		{ "GetLatestFrameData", &ULeapComponent::execGetLatestFrameData },
		{ "GetLeapOptions", &ULeapComponent::execGetLeapOptions },
		{ "GetLRGrabStrength", &ULeapComponent::execGetLRGrabStrength },
		{ "GetMultiDeviceDebugInfo", &ULeapComponent::execGetMultiDeviceDebugInfo },
		{ "GetSerialOptions", &ULeapComponent::execGetSerialOptions },
		{ "IsActiveDevicePluggedIn", &ULeapComponent::execIsActiveDevicePluggedIn },
		{ "SetLeapPolicy", &ULeapComponent::execSetLeapPolicy },
		{ "SetShouldAddHmdOrigin", &ULeapComponent::execSetShouldAddHmdOrigin },
		{ "SetSwizzles", &ULeapComponent::execSetSwizzles },
		{ "SetTrackingMode", &ULeapComponent::execSetTrackingMode },
		{ "SetupMultidevice", &ULeapComponent::execSetupMultidevice },
		{ "UpdateActiveDevice", &ULeapComponent::execUpdateActiveDevice },
		{ "UpdateDeviceOrigin", &ULeapComponent::execUpdateDeviceOrigin },
		{ "UpdateMultiDeviceMode", &ULeapComponent::execUpdateMultiDeviceMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeapComponent);
UClass* Z_Construct_UClass_ULeapComponent_NoRegister()
{
	return ULeapComponent::StaticClass();
}
struct Z_Construct_UClass_ULeapComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Input Controller" },
		{ "IncludePath", "LeapComponent.h" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapDeviceAttached_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Called when a device connects to the leap service, this may happen before the game starts and you may not get the call*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Called when a device connects to the leap service, this may happen before the game starts and you may not get the call" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapDeviceDetached_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Called when a device disconnects from the leap service*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Called when a device disconnects from the leap service" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapTrackingData_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when new tracking data is available, typically every game tick. */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when new tracking data is available, typically every game tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandGrabbed_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when a leap hand grab gesture is detected */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand grab gesture is detected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandReleased_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when a leap hand release gesture is detected */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand release gesture is detected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandPinched_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when a leap hand pinch gesture is detected */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand pinch gesture is detected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandUnpinched_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when a leap hand unpinch gesture is detected */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand unpinch gesture is detected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandBeginTracking_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when a leap hand enters the field of view and begins tracking */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand enters the field of view and begins tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandEndTracking_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when a leap hand exits the field of view and stops tracking */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand exits the field of view and stops tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftHandVisibilityChanged_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when the left hand tracking changes*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when the left hand tracking changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRightHandVisibilityChanged_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when the right hand begins tracking */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when the right hand begins tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapPoliciesUpdated_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when leap policies have changed */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when leap policies have changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnImageEvent_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when a device image is ready. Requires setting image policy first*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a device image is ready. Requires setting image policy first" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapServiceConnected_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when the leap service connects. Will likely be called before game begin play so some component won't receive\n\x09 * this call.*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when the leap service connects. Will likely be called before game begin play so some component won't receive\nthis call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapServiceDisconnected_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called if leap service connection gets lost. Track won't work if this event gets called.*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called if leap service connection gets lost. Track won't work if this event gets called." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingMode_MetaData[] = {
		{ "Category", "Leap Properties" },
		{ "Comment", "/** Tracking mode optimization */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Tracking mode optimization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapTrackingModeUpdated_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "Comment", "/** Event called when leap policies have changed */" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when leap policies have changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddHmdOrigin_MetaData[] = {
		{ "Category", "Leap Properties" },
		{ "Comment", "// By default in vr mode the first/primary device has this set to true\n" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "By default in vr mode the first/primary device has this set to true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiDeviceMode_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "Comment", "/** Multidevice configuration, Singular subscribes to a single device. \n\x09""Combined subscribes to multiple devices combined into one device\n\x09*/" },
		{ "EditCondition", "DisableEditMultiDeviceMode == false" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Multidevice configuration, Singular subscribes to a single device.\n      Combined subscribes to multiple devices combined into one device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDeviceSerials_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "Comment", "/** Available device list\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Available device list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDeviceSerial_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "Comment", "/** Active Device (Singular mode only)\n\x09 */" },
		{ "EditCondition", "MultiDeviceMode == ELeapMultiDeviceMode::LEAP_MULTI_DEVICE_SINGULAR" },
		{ "GetOptions", "GetSerialOptions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Active Device (Singular mode only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedDeviceSerials_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "Comment", "/** Combined device list\n\x09 */" },
		{ "EditCondition", "MultiDeviceMode == ELeapMultiDeviceMode::LEAP_MULTI_DEVICE_COMBINED" },
		{ "GetOptions", "GetSerialOptions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Combined device list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceCombinerClass_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "EditCondition", "MultiDeviceMode == ELeapMultiDeviceMode::LEAP_MULTI_DEVICE_COMBINED" },
		{ "GetOptions", "GetSerialOptions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableEditMultiDeviceMode_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "Comment", "/** Disable/Grey out setting the multidevice mode.*/" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Disable/Grey out setting the multidevice mode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapDeviceAttached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapDeviceDetached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapTrackingData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandGrabbed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandReleased;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandPinched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandUnpinched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandBeginTracking;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandEndTracking;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftHandVisibilityChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightHandVisibilityChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapPoliciesUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapServiceConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapServiceDisconnected;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingMode;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapTrackingModeUpdated;
	static void NewProp_bAddHmdOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddHmdOrigin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiDeviceMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableDeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDeviceSerials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveDeviceSerial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CombinedDeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CombinedDeviceSerials;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceCombinerClass;
	static void NewProp_DisableEditMultiDeviceMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableEditMultiDeviceMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapComponent_AreHandsVisible, "AreHandsVisible" }, // 2679166210
		{ &Z_Construct_UFunction_ULeapComponent_DoesCurrentGrabStrengthExceedTarget, "DoesCurrentGrabStrengthExceedTarget" }, // 1513174199
		{ &Z_Construct_UFunction_ULeapComponent_GetDeviceOrigin, "GetDeviceOrigin" }, // 2407498601
		{ &Z_Construct_UFunction_ULeapComponent_GetDeviceTypeFromSerial, "GetDeviceTypeFromSerial" }, // 2043661493
		{ &Z_Construct_UFunction_ULeapComponent_GetHandSize, "GetHandSize" }, // 791975941
		{ &Z_Construct_UFunction_ULeapComponent_GetLatestFrameData, "GetLatestFrameData" }, // 446468122
		{ &Z_Construct_UFunction_ULeapComponent_GetLeapOptions, "GetLeapOptions" }, // 1173108413
		{ &Z_Construct_UFunction_ULeapComponent_GetLRGrabStrength, "GetLRGrabStrength" }, // 2279101647
		{ &Z_Construct_UFunction_ULeapComponent_GetMultiDeviceDebugInfo, "GetMultiDeviceDebugInfo" }, // 868914527
		{ &Z_Construct_UFunction_ULeapComponent_GetSerialOptions, "GetSerialOptions" }, // 3440900617
		{ &Z_Construct_UFunction_ULeapComponent_IsActiveDevicePluggedIn, "IsActiveDevicePluggedIn" }, // 2083197077
		{ &Z_Construct_UFunction_ULeapComponent_SetLeapPolicy, "SetLeapPolicy" }, // 1578769049
		{ &Z_Construct_UFunction_ULeapComponent_SetShouldAddHmdOrigin, "SetShouldAddHmdOrigin" }, // 612614293
		{ &Z_Construct_UFunction_ULeapComponent_SetSwizzles, "SetSwizzles" }, // 2671397595
		{ &Z_Construct_UFunction_ULeapComponent_SetTrackingMode, "SetTrackingMode" }, // 571336242
		{ &Z_Construct_UFunction_ULeapComponent_SetupMultidevice, "SetupMultidevice" }, // 3910373342
		{ &Z_Construct_UFunction_ULeapComponent_UpdateActiveDevice, "UpdateActiveDevice" }, // 2801422469
		{ &Z_Construct_UFunction_ULeapComponent_UpdateDeviceOrigin, "UpdateDeviceOrigin" }, // 419570238
		{ &Z_Construct_UFunction_ULeapComponent_UpdateMultiDeviceMode, "UpdateMultiDeviceMode" }, // 148761025
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceAttached = { "OnLeapDeviceAttached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeapDeviceAttached), Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapDeviceAttached_MetaData), NewProp_OnLeapDeviceAttached_MetaData) }; // 383074156
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceDetached = { "OnLeapDeviceDetached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeapDeviceDetached), Z_Construct_UDelegateFunction_UltraleapTracking_LeapDeviceSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapDeviceDetached_MetaData), NewProp_OnLeapDeviceDetached_MetaData) }; // 383074156
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingData = { "OnLeapTrackingData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeapTrackingData), Z_Construct_UDelegateFunction_UltraleapTracking_LeapFrameSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapTrackingData_MetaData), NewProp_OnLeapTrackingData_MetaData) }; // 3757589897
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandGrabbed = { "OnHandGrabbed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnHandGrabbed), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandGrabbed_MetaData), NewProp_OnHandGrabbed_MetaData) }; // 1609417490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandReleased = { "OnHandReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnHandReleased), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandReleased_MetaData), NewProp_OnHandReleased_MetaData) }; // 1609417490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandPinched = { "OnHandPinched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnHandPinched), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandPinched_MetaData), NewProp_OnHandPinched_MetaData) }; // 1609417490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandUnpinched = { "OnHandUnpinched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnHandUnpinched), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandUnpinched_MetaData), NewProp_OnHandUnpinched_MetaData) }; // 1609417490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandBeginTracking = { "OnHandBeginTracking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnHandBeginTracking), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandBeginTracking_MetaData), NewProp_OnHandBeginTracking_MetaData) }; // 1609417490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandEndTracking = { "OnHandEndTracking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnHandEndTracking), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandEndTracking_MetaData), NewProp_OnHandEndTracking_MetaData) }; // 1609417490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeftHandVisibilityChanged = { "OnLeftHandVisibilityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeftHandVisibilityChanged), Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeftHandVisibilityChanged_MetaData), NewProp_OnLeftHandVisibilityChanged_MetaData) }; // 868330584
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnRightHandVisibilityChanged = { "OnRightHandVisibilityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnRightHandVisibilityChanged), Z_Construct_UDelegateFunction_UltraleapTracking_LeapVisibilityBoolSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRightHandVisibilityChanged_MetaData), NewProp_OnRightHandVisibilityChanged_MetaData) }; // 868330584
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapPoliciesUpdated = { "OnLeapPoliciesUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeapPoliciesUpdated), Z_Construct_UDelegateFunction_UltraleapTracking_LeapPolicySignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapPoliciesUpdated_MetaData), NewProp_OnLeapPoliciesUpdated_MetaData) }; // 3761924897
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnImageEvent = { "OnImageEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnImageEvent), Z_Construct_UDelegateFunction_UltraleapTracking_LeapImageEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnImageEvent_MetaData), NewProp_OnImageEvent_MetaData) }; // 3054630799
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceConnected = { "OnLeapServiceConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeapServiceConnected), Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapServiceConnected_MetaData), NewProp_OnLeapServiceConnected_MetaData) }; // 1187481525
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceDisconnected = { "OnLeapServiceDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeapServiceDisconnected), Z_Construct_UDelegateFunction_UltraleapTracking_LeapEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapServiceDisconnected_MetaData), NewProp_OnLeapServiceDisconnected_MetaData) }; // 1187481525
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_TrackingMode = { "TrackingMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, TrackingMode), Z_Construct_UEnum_UltraleapTracking_ELeapMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingMode_MetaData), NewProp_TrackingMode_MetaData) }; // 3348884886
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingModeUpdated = { "OnLeapTrackingModeUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, OnLeapTrackingModeUpdated), Z_Construct_UDelegateFunction_UltraleapTracking_LeapTrackingModeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapTrackingModeUpdated_MetaData), NewProp_OnLeapTrackingModeUpdated_MetaData) }; // 3453743450
void Z_Construct_UClass_ULeapComponent_Statics::NewProp_bAddHmdOrigin_SetBit(void* Obj)
{
	((ULeapComponent*)Obj)->bAddHmdOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_bAddHmdOrigin = { "bAddHmdOrigin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULeapComponent), &Z_Construct_UClass_ULeapComponent_Statics::NewProp_bAddHmdOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddHmdOrigin_MetaData), NewProp_bAddHmdOrigin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_MultiDeviceMode = { "MultiDeviceMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, MultiDeviceMode), Z_Construct_UEnum_UltraleapTracking_ELeapMultiDeviceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiDeviceMode_MetaData), NewProp_MultiDeviceMode_MetaData) }; // 3927097670
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_AvailableDeviceSerials_Inner = { "AvailableDeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_AvailableDeviceSerials = { "AvailableDeviceSerials", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, AvailableDeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDeviceSerials_MetaData), NewProp_AvailableDeviceSerials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_ActiveDeviceSerial = { "ActiveDeviceSerial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, ActiveDeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDeviceSerial_MetaData), NewProp_ActiveDeviceSerial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_CombinedDeviceSerials_Inner = { "CombinedDeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_CombinedDeviceSerials = { "CombinedDeviceSerials", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, CombinedDeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedDeviceSerials_MetaData), NewProp_CombinedDeviceSerials_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_DeviceCombinerClass = { "DeviceCombinerClass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapComponent, DeviceCombinerClass), Z_Construct_UEnum_UltraleapTracking_ELeapDeviceCombinerClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceCombinerClass_MetaData), NewProp_DeviceCombinerClass_MetaData) }; // 3579689858
void Z_Construct_UClass_ULeapComponent_Statics::NewProp_DisableEditMultiDeviceMode_SetBit(void* Obj)
{
	((ULeapComponent*)Obj)->DisableEditMultiDeviceMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_DisableEditMultiDeviceMode = { "DisableEditMultiDeviceMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULeapComponent), &Z_Construct_UClass_ULeapComponent_Statics::NewProp_DisableEditMultiDeviceMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableEditMultiDeviceMode_MetaData), NewProp_DisableEditMultiDeviceMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceDetached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandGrabbed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandPinched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandUnpinched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandBeginTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandEndTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeftHandVisibilityChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnRightHandVisibilityChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapPoliciesUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnImageEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceDisconnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_TrackingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingModeUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_bAddHmdOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_MultiDeviceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_AvailableDeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_AvailableDeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_ActiveDeviceSerial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_CombinedDeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_CombinedDeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_DeviceCombinerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_DisableEditMultiDeviceMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeapComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeapComponent_Statics::ClassParams = {
	&ULeapComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULeapComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeapComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeapComponent()
{
	if (!Z_Registration_Info_UClass_ULeapComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeapComponent.OuterSingleton, Z_Construct_UClass_ULeapComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeapComponent.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ULeapComponent>()
{
	return ULeapComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapComponent);
// End Class ULeapComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeapComponent, ULeapComponent::StaticClass, TEXT("ULeapComponent"), &Z_Registration_Info_UClass_ULeapComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeapComponent), 2099027056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_502117122(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
