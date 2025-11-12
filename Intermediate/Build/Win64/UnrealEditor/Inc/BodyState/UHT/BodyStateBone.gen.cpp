// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/Skeleton/BodyStateBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBone() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin ScriptStruct FBodyStateBoneMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyStateBoneMeta;
class UScriptStruct* FBodyStateBoneMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateBoneMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyStateBoneMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateBoneMeta, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateBoneMeta"));
	}
	return Z_Registration_Info_UScriptStruct_BodyStateBoneMeta.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateBoneMeta>()
{
	return FBodyStateBoneMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentDistinctMeta_MetaData[] = {
		{ "Comment", "/** Is this meta data distinct from parents? */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Is this meta data distinct from parents?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingType_MetaData[] = {
		{ "Comment", "/** Name of tracking type*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Name of tracking type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[] = {
		{ "Comment", "/** Additional tags used to distinguish characteristics of tracked data, e.g. tracks fingers, hands, etc*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Additional tags used to distinguish characteristics of tracked data, e.g. tracks fingers, hands, etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Comment", "/** Accuracy in cm of tracking data if distinct */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Accuracy in cm of tracking data if distinct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Tracking Confidence */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Tracking Confidence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Time when this value was sampled */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Time when this value was sampled" },
	};
#endif // WITH_METADATA
	static void NewProp_ParentDistinctMeta_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ParentDistinctMeta;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateBoneMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_SetBit(void* Obj)
{
	((FBodyStateBoneMeta*)Obj)->ParentDistinctMeta = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta = { "ParentDistinctMeta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBodyStateBoneMeta), &Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentDistinctMeta_MetaData), NewProp_ParentDistinctMeta_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType = { "TrackingType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneMeta, TrackingType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingType_MetaData), NewProp_TrackingType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_Inner = { "TrackingTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags = { "TrackingTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneMeta, TrackingTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingTags_MetaData), NewProp_TrackingTags_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneMeta, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneMeta, Confidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confidence_MetaData), NewProp_Confidence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneMeta, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"BodyStateBoneMeta",
	Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers),
	sizeof(FBodyStateBoneMeta),
	alignof(FBodyStateBoneMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateBoneMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyStateBoneMeta.InnerSingleton, Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyStateBoneMeta.InnerSingleton;
}
// End ScriptStruct FBodyStateBoneMeta

// Begin ScriptStruct FBodyStateBoneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyStateBoneData;
class UScriptStruct* FBodyStateBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyStateBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateBoneData, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_BodyStateBoneData.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateBoneData>()
{
	return FBodyStateBoneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyStateBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Transform holding main bone values*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Transform holding main bone values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedBoneType_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** If this bone tracks more than just transform*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "If this bone tracks more than just transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Blending Alpha */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Blending Alpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Bone Length */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Length" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_AdvancedBoneType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AdvancedBoneType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
void Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_SetBit(void* Obj)
{
	((FBodyStateBoneData*)Obj)->AdvancedBoneType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType = { "AdvancedBoneType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBodyStateBoneData), &Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedBoneType_MetaData), NewProp_AdvancedBoneType_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneData, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateBoneData, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"BodyStateBoneData",
	Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers),
	sizeof(FBodyStateBoneData),
	alignof(FBodyStateBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyStateBoneData.InnerSingleton, Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyStateBoneData.InnerSingleton;
}
// End ScriptStruct FBodyStateBoneData

// Begin Class UBodyStateBone Function ChangeBasis
struct Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics
{
	struct BodyStateBone_eventChangeBasis_Parms
	{
		FRotator PreBase;
		FRotator PostBase;
		bool AdjustVectors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreBase_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostBase;
	static void NewProp_AdjustVectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AdjustVectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreBase_MetaData), NewProp_PreBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostBase_MetaData), NewProp_PostBase_MetaData) };
void Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
{
	((BodyStateBone_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BodyStateBone_eventChangeBasis_Parms), &Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "ChangeBasis", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::BodyStateBone_eventChangeBasis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::BodyStateBone_eventChangeBasis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_ChangeBasis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execChangeBasis)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_PreBase);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_PostBase);
	P_GET_UBOOL(Z_Param_AdjustVectors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeBasis(Z_Param_Out_PreBase,Z_Param_Out_PostBase,Z_Param_AdjustVectors);
	P_NATIVE_END;
}
// End Class UBodyStateBone Function ChangeBasis

// Begin Class UBodyStateBone Function Enabled
struct Z_Construct_UFunction_UBodyStateBone_Enabled_Statics
{
	struct BodyStateBone_eventEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "// Convenience Functions\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Convenience Functions" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BodyStateBone_eventEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BodyStateBone_eventEnabled_Parms), &Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Enabled", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::BodyStateBone_eventEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::BodyStateBone_eventEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_Enabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Enabled();
	P_NATIVE_END;
}
// End Class UBodyStateBone Function Enabled

// Begin Class UBodyStateBone Function IsTracked
struct Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics
{
	struct BodyStateBone_eventIsTracked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BodyStateBone_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BodyStateBone_eventIsTracked_Parms), &Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "IsTracked", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::BodyStateBone_eventIsTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::BodyStateBone_eventIsTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_IsTracked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execIsTracked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTracked();
	P_NATIVE_END;
}
// End Class UBodyStateBone Function IsTracked

// Begin Class UBodyStateBone Function Orientation
struct Z_Construct_UFunction_UBodyStateBone_Orientation_Statics
{
	struct BodyStateBone_eventOrientation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Bone Orientation */" },
		{ "Keywords", "rotation orientation" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Orientation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Orientation", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::BodyStateBone_eventOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::BodyStateBone_eventOrientation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_Orientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execOrientation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->Orientation();
	P_NATIVE_END;
}
// End Class UBodyStateBone Function Orientation

// Begin Class UBodyStateBone Function Position
struct Z_Construct_UFunction_UBodyStateBone_Position_Statics
{
	struct BodyStateBone_eventPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Bone Position */" },
		{ "Keywords", "position location" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Position_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Position_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Position", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_Position_Statics::BodyStateBone_eventPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_Position_Statics::BodyStateBone_eventPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_Position()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Position_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->Position();
	P_NATIVE_END;
}
// End Class UBodyStateBone Function Position

// Begin Class UBodyStateBone Function Scale
struct Z_Construct_UFunction_UBodyStateBone_Scale_Statics
{
	struct BodyStateBone_eventScale_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Bone Scale */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Scale" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Scale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Scale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Scale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Scale", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::BodyStateBone_eventScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::BodyStateBone_eventScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_Scale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Scale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->Scale();
	P_NATIVE_END;
}
// End Class UBodyStateBone Function Scale

// Begin Class UBodyStateBone Function SetEnabled
struct Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics
{
	struct BodyStateBone_eventSetEnabled_Parms
	{
		bool Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "CPP_Default_Enable", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((BodyStateBone_eventSetEnabled_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BodyStateBone_eventSetEnabled_Parms), &Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::BodyStateBone_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::BodyStateBone_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_Enable);
	P_NATIVE_END;
}
// End Class UBodyStateBone Function SetEnabled

// Begin Class UBodyStateBone Function SetOrientation
struct Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics
{
	struct BodyStateBone_eventSetOrientation_Parms
	{
		FRotator InOrientation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "set rotation orientation" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation = { "InOrientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventSetOrientation_Parms, InOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOrientation_MetaData), NewProp_InOrientation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetOrientation", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::BodyStateBone_eventSetOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::BodyStateBone_eventSetOrientation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_SetOrientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execSetOrientation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InOrientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrientation(Z_Param_Out_InOrientation);
	P_NATIVE_END;
}
// End Class UBodyStateBone Function SetOrientation

// Begin Class UBodyStateBone Function SetPosition
struct Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics
{
	struct BodyStateBone_eventSetPosition_Parms
	{
		FVector InPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "set position location" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventSetPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::BodyStateBone_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::BodyStateBone_eventSetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execSetPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosition(Z_Param_Out_InPosition);
	P_NATIVE_END;
}
// End Class UBodyStateBone Function SetPosition

// Begin Class UBodyStateBone Function SetScale
struct Z_Construct_UFunction_UBodyStateBone_SetScale_Statics
{
	struct BodyStateBone_eventSetScale_Parms
	{
		FVector InScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventSetScale_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScale_MetaData), NewProp_InScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetScale", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::BodyStateBone_eventSetScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::BodyStateBone_eventSetScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_SetScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execSetScale)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScale(Z_Param_Out_InScale);
	P_NATIVE_END;
}
// End Class UBodyStateBone Function SetScale

// Begin Class UBodyStateBone Function ShiftBone
struct Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics
{
	struct BodyStateBone_eventShiftBone_Parms
	{
		FVector ShiftAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShiftAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::NewProp_ShiftAmount = { "ShiftAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventShiftBone_Parms, ShiftAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::NewProp_ShiftAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "ShiftBone", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::BodyStateBone_eventShiftBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::BodyStateBone_eventShiftBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_ShiftBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execShiftBone)
{
	P_GET_STRUCT(FVector,Z_Param_ShiftAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShiftBone(Z_Param_ShiftAmount);
	P_NATIVE_END;
}
// End Class UBodyStateBone Function ShiftBone

// Begin Class UBodyStateBone Function Transform
struct Z_Construct_UFunction_UBodyStateBone_Transform_Statics
{
	struct BodyStateBone_eventTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Convenience Transform getter*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Convenience Transform getter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Transform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Transform", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::BodyStateBone_eventTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::BodyStateBone_eventTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_Transform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Transform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->Transform();
	P_NATIVE_END;
}
// End Class UBodyStateBone Function Transform

// Begin Class UBodyStateBone Function UniqueMeta
struct Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics
{
	struct BodyStateBone_eventUniqueMeta_Parms
	{
		FBodyStateBoneMeta ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Get Unique Meta from first unique parent*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Get Unique Meta from first unique parent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBone_eventUniqueMeta_Parms, ReturnValue), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(0, nullptr) }; // 3130332923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "UniqueMeta", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::BodyStateBone_eventUniqueMeta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::BodyStateBone_eventUniqueMeta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBone_UniqueMeta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBone::execUniqueMeta)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBodyStateBoneMeta*)Z_Param__Result=P_THIS->UniqueMeta();
	P_NATIVE_END;
}
// End Class UBodyStateBone Function UniqueMeta

// Begin Class UBodyStateBone
void UBodyStateBone::StaticRegisterNativesUBodyStateBone()
{
	UClass* Class = UBodyStateBone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeBasis", &UBodyStateBone::execChangeBasis },
		{ "Enabled", &UBodyStateBone::execEnabled },
		{ "IsTracked", &UBodyStateBone::execIsTracked },
		{ "Orientation", &UBodyStateBone::execOrientation },
		{ "Position", &UBodyStateBone::execPosition },
		{ "Scale", &UBodyStateBone::execScale },
		{ "SetEnabled", &UBodyStateBone::execSetEnabled },
		{ "SetOrientation", &UBodyStateBone::execSetOrientation },
		{ "SetPosition", &UBodyStateBone::execSetPosition },
		{ "SetScale", &UBodyStateBone::execSetScale },
		{ "ShiftBone", &UBodyStateBone::execShiftBone },
		{ "Transform", &UBodyStateBone::execTransform },
		{ "UniqueMeta", &UBodyStateBone::execUniqueMeta },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateBone);
UClass* Z_Construct_UClass_UBodyStateBone_NoRegister()
{
	return UBodyStateBone::StaticClass();
}
struct Z_Construct_UClass_UBodyStateBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateBone.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Human readable name */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Human readable name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Parent Bone - If available, weak links */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Parent Bone - If available, weak links" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Children Bones - If available, weak links */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Children Bones - If available, weak links" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meta;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateBone_ChangeBasis, "ChangeBasis" }, // 2001453144
		{ &Z_Construct_UFunction_UBodyStateBone_Enabled, "Enabled" }, // 3929879401
		{ &Z_Construct_UFunction_UBodyStateBone_IsTracked, "IsTracked" }, // 2187849679
		{ &Z_Construct_UFunction_UBodyStateBone_Orientation, "Orientation" }, // 2758344456
		{ &Z_Construct_UFunction_UBodyStateBone_Position, "Position" }, // 1016158189
		{ &Z_Construct_UFunction_UBodyStateBone_Scale, "Scale" }, // 1192807149
		{ &Z_Construct_UFunction_UBodyStateBone_SetEnabled, "SetEnabled" }, // 3224070325
		{ &Z_Construct_UFunction_UBodyStateBone_SetOrientation, "SetOrientation" }, // 114366651
		{ &Z_Construct_UFunction_UBodyStateBone_SetPosition, "SetPosition" }, // 3631745042
		{ &Z_Construct_UFunction_UBodyStateBone_SetScale, "SetScale" }, // 4051246614
		{ &Z_Construct_UFunction_UBodyStateBone_ShiftBone, "ShiftBone" }, // 3297809004
		{ &Z_Construct_UFunction_UBodyStateBone_Transform, "Transform" }, // 2864701368
		{ &Z_Construct_UFunction_UBodyStateBone_UniqueMeta, "UniqueMeta" }, // 2050587168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBone, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBone, BoneData), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneData_MetaData), NewProp_BoneData_MetaData) }; // 2821867691
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta = { "Meta", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBone, Meta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meta_MetaData), NewProp_Meta_MetaData) }; // 3130332923
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBone, Parent), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBone, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType = { "BoneType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBone, BoneType), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneType_MetaData), NewProp_BoneType_MetaData) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateBone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBone_Statics::ClassParams = {
	&UBodyStateBone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBodyStateBone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateBone()
{
	if (!Z_Registration_Info_UClass_UBodyStateBone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateBone.OuterSingleton, Z_Construct_UClass_UBodyStateBone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateBone.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateBone>()
{
	return UBodyStateBone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBone);
UBodyStateBone::~UBodyStateBone() {}
// End Class UBodyStateBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBodyStateBoneMeta::StaticStruct, Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewStructOps, TEXT("BodyStateBoneMeta"), &Z_Registration_Info_UScriptStruct_BodyStateBoneMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyStateBoneMeta), 3130332923U) },
		{ FBodyStateBoneData::StaticStruct, Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewStructOps, TEXT("BodyStateBoneData"), &Z_Registration_Info_UScriptStruct_BodyStateBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyStateBoneData), 2821867691U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateBone, UBodyStateBone::StaticClass, TEXT("UBodyStateBone"), &Z_Registration_Info_UClass_UBodyStateBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateBone), 3906964530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateBone_h_2612144591(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateBone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateBone_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
