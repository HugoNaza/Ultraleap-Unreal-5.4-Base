// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/Skeleton/BodyStateArm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateArm() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateFinger();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateFinger_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateHand();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateHand_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin Class UBodyStateFinger
void UBodyStateFinger::StaticRegisterNativesUBodyStateFinger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateFinger);
UClass* Z_Construct_UClass_UBodyStateFinger_NoRegister()
{
	return UBodyStateFinger::StaticClass();
}
struct Z_Construct_UClass_UBodyStateFinger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Convenience BodyState wrapper around finger bones*/" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Convenience BodyState wrapper around finger bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "Comment", "// Note thumbs don't have this bone\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Note thumbs don't have this bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExtended_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Metacarpal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Proximal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Intermediate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Distal;
	static void NewProp_bIsExtended_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExtended;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateFinger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal = { "Metacarpal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateFinger, Metacarpal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metacarpal_MetaData), NewProp_Metacarpal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal = { "Proximal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateFinger, Proximal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proximal_MetaData), NewProp_Proximal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateFinger, Intermediate), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intermediate_MetaData), NewProp_Intermediate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal = { "Distal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateFinger, Distal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distal_MetaData), NewProp_Distal_MetaData) };
void Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_SetBit(void* Obj)
{
	((UBodyStateFinger*)Obj)->bIsExtended = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended = { "bIsExtended", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateFinger), &Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExtended_MetaData), NewProp_bIsExtended_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateFinger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateFinger_Statics::ClassParams = {
	&UBodyStateFinger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateFinger()
{
	if (!Z_Registration_Info_UClass_UBodyStateFinger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateFinger.OuterSingleton, Z_Construct_UClass_UBodyStateFinger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateFinger.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateFinger>()
{
	return UBodyStateFinger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateFinger);
UBodyStateFinger::~UBodyStateFinger() {}
// End Class UBodyStateFinger

// Begin Class UBodyStateHand Function IndexFinger
struct Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics
{
	struct BodyStateHand_eventIndexFinger_Parms
	{
		UBodyStateFinger* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateHand_eventIndexFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "IndexFinger", nullptr, nullptr, Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::BodyStateHand_eventIndexFinger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::BodyStateHand_eventIndexFinger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateHand_IndexFinger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateHand::execIndexFinger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateFinger**)Z_Param__Result=P_THIS->IndexFinger();
	P_NATIVE_END;
}
// End Class UBodyStateHand Function IndexFinger

// Begin Class UBodyStateHand Function MiddleFinger
struct Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics
{
	struct BodyStateHand_eventMiddleFinger_Parms
	{
		UBodyStateFinger* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateHand_eventMiddleFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "MiddleFinger", nullptr, nullptr, Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::BodyStateHand_eventMiddleFinger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::BodyStateHand_eventMiddleFinger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateHand_MiddleFinger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateHand::execMiddleFinger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateFinger**)Z_Param__Result=P_THIS->MiddleFinger();
	P_NATIVE_END;
}
// End Class UBodyStateHand Function MiddleFinger

// Begin Class UBodyStateHand Function PinkyFinger
struct Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics
{
	struct BodyStateHand_eventPinkyFinger_Parms
	{
		UBodyStateFinger* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateHand_eventPinkyFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "PinkyFinger", nullptr, nullptr, Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::BodyStateHand_eventPinkyFinger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::BodyStateHand_eventPinkyFinger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateHand_PinkyFinger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateHand::execPinkyFinger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateFinger**)Z_Param__Result=P_THIS->PinkyFinger();
	P_NATIVE_END;
}
// End Class UBodyStateHand Function PinkyFinger

// Begin Class UBodyStateHand Function RingFinger
struct Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics
{
	struct BodyStateHand_eventRingFinger_Parms
	{
		UBodyStateFinger* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateHand_eventRingFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "RingFinger", nullptr, nullptr, Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::BodyStateHand_eventRingFinger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::BodyStateHand_eventRingFinger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateHand_RingFinger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateHand::execRingFinger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateFinger**)Z_Param__Result=P_THIS->RingFinger();
	P_NATIVE_END;
}
// End Class UBodyStateHand Function RingFinger

// Begin Class UBodyStateHand Function ThumbFinger
struct Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics
{
	struct BodyStateHand_eventThumbFinger_Parms
	{
		UBodyStateFinger* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateHand_eventThumbFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "ThumbFinger", nullptr, nullptr, Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::BodyStateHand_eventThumbFinger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::BodyStateHand_eventThumbFinger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateHand_ThumbFinger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateHand::execThumbFinger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateFinger**)Z_Param__Result=P_THIS->ThumbFinger();
	P_NATIVE_END;
}
// End Class UBodyStateHand Function ThumbFinger

// Begin Class UBodyStateHand
void UBodyStateHand::StaticRegisterNativesUBodyStateHand()
{
	UClass* Class = UBodyStateHand::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IndexFinger", &UBodyStateHand::execIndexFinger },
		{ "MiddleFinger", &UBodyStateHand::execMiddleFinger },
		{ "PinkyFinger", &UBodyStateHand::execPinkyFinger },
		{ "RingFinger", &UBodyStateHand::execRingFinger },
		{ "ThumbFinger", &UBodyStateHand::execThumbFinger },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateHand);
UClass* Z_Construct_UClass_UBodyStateHand_NoRegister()
{
	return UBodyStateHand::StaticClass();
}
struct Z_Construct_UClass_UBodyStateHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Convenience BodyState wrapper around bones relating to the hand*/" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Convenience BodyState wrapper around bones relating to the hand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fingers_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "Comment", "// Order should be: Thumb->Pinky\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Order should be: Thumb->Pinky" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wrist_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Palm_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fingers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fingers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wrist;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Palm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateHand_IndexFinger, "IndexFinger" }, // 1960260357
		{ &Z_Construct_UFunction_UBodyStateHand_MiddleFinger, "MiddleFinger" }, // 1857557687
		{ &Z_Construct_UFunction_UBodyStateHand_PinkyFinger, "PinkyFinger" }, // 632848033
		{ &Z_Construct_UFunction_UBodyStateHand_RingFinger, "RingFinger" }, // 3645955747
		{ &Z_Construct_UFunction_UBodyStateHand_ThumbFinger, "ThumbFinger" }, // 891838942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateHand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_Inner = { "Fingers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers = { "Fingers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateHand, Fingers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fingers_MetaData), NewProp_Fingers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist = { "Wrist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateHand, Wrist), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wrist_MetaData), NewProp_Wrist_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm = { "Palm", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateHand, Palm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Palm_MetaData), NewProp_Palm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateHand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateHand_Statics::ClassParams = {
	&UBodyStateHand::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBodyStateHand_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateHand()
{
	if (!Z_Registration_Info_UClass_UBodyStateHand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateHand.OuterSingleton, Z_Construct_UClass_UBodyStateHand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateHand.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateHand>()
{
	return UBodyStateHand::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateHand);
UBodyStateHand::~UBodyStateHand() {}
// End Class UBodyStateHand

// Begin Class UBodyStateArm
void UBodyStateArm::StaticRegisterNativesUBodyStateArm()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateArm);
UClass* Z_Construct_UClass_UBodyStateArm_NoRegister()
{
	return UBodyStateArm::StaticClass();
}
struct Z_Construct_UClass_UBodyStateArm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerArm_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperArm_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LowerArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpperArm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateArm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateArm, Hand), Z_Construct_UClass_UBodyStateHand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hand_MetaData), NewProp_Hand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm = { "LowerArm", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateArm, LowerArm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerArm_MetaData), NewProp_LowerArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm = { "UpperArm", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateArm, UpperArm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperArm_MetaData), NewProp_UpperArm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateArm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateArm_Statics::ClassParams = {
	&UBodyStateArm::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBodyStateArm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateArm()
{
	if (!Z_Registration_Info_UClass_UBodyStateArm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateArm.OuterSingleton, Z_Construct_UClass_UBodyStateArm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateArm.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateArm>()
{
	return UBodyStateArm::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateArm);
UBodyStateArm::~UBodyStateArm() {}
// End Class UBodyStateArm

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateArm_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateFinger, UBodyStateFinger::StaticClass, TEXT("UBodyStateFinger"), &Z_Registration_Info_UClass_UBodyStateFinger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateFinger), 3578077152U) },
		{ Z_Construct_UClass_UBodyStateHand, UBodyStateHand::StaticClass, TEXT("UBodyStateHand"), &Z_Registration_Info_UClass_UBodyStateHand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateHand), 3309593179U) },
		{ Z_Construct_UClass_UBodyStateArm, UBodyStateArm::StaticClass, TEXT("UBodyStateArm"), &Z_Registration_Info_UClass_UBodyStateArm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateArm), 1906979376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateArm_h_2884662766(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateArm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateArm_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
