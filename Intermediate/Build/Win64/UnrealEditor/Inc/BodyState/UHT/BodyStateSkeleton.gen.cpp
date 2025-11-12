// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/Skeleton/BodyStateSkeleton.h"
#include "ThirdParty/BodyState/Public/Skeleton/BodyStateBone.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateSkeleton() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyedTransform();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneData();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneMeta();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedSkeletonData();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin ScriptStruct FNamedBoneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedBoneData;
class UScriptStruct* FNamedBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedBoneData, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("NamedBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_NamedBoneData.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FNamedBoneData>()
{
	return FNamedBoneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedBoneData, Data), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2821867691
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedBoneData, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"NamedBoneData",
	Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers),
	sizeof(FNamedBoneData),
	alignof(FNamedBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_NamedBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedBoneData.InnerSingleton, Z_Construct_UScriptStruct_FNamedBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedBoneData.InnerSingleton;
}
// End ScriptStruct FNamedBoneData

// Begin ScriptStruct FKeyedTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyedTransform;
class UScriptStruct* FKeyedTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyedTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyedTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyedTransform, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("KeyedTransform"));
	}
	return Z_Registration_Info_UScriptStruct_KeyedTransform.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FKeyedTransform>()
{
	return FKeyedTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyedTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyedTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyedTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyedTransform, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"KeyedTransform",
	Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers),
	sizeof(FKeyedTransform),
	alignof(FKeyedTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyedTransform()
{
	if (!Z_Registration_Info_UScriptStruct_KeyedTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyedTransform.InnerSingleton, Z_Construct_UScriptStruct_FKeyedTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyedTransform.InnerSingleton;
}
// End ScriptStruct FKeyedTransform

// Begin ScriptStruct FNamedBoneMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedBoneMeta;
class UScriptStruct* FNamedBoneMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedBoneMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedBoneMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedBoneMeta, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("NamedBoneMeta"));
	}
	return Z_Registration_Info_UScriptStruct_NamedBoneMeta.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FNamedBoneMeta>()
{
	return FNamedBoneMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedBoneMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meta;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedBoneMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta = { "Meta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedBoneMeta, Meta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meta_MetaData), NewProp_Meta_MetaData) }; // 3130332923
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedBoneMeta, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"NamedBoneMeta",
	Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers),
	sizeof(FNamedBoneMeta),
	alignof(FNamedBoneMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneMeta()
{
	if (!Z_Registration_Info_UScriptStruct_NamedBoneMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedBoneMeta.InnerSingleton, Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedBoneMeta.InnerSingleton;
}
// End ScriptStruct FNamedBoneMeta

// Begin ScriptStruct FNamedSkeletonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedSkeletonData;
class UScriptStruct* FNamedSkeletonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedSkeletonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedSkeletonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedSkeletonData, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("NamedSkeletonData"));
	}
	return Z_Registration_Info_UScriptStruct_NamedSkeletonData.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FNamedSkeletonData>()
{
	return FNamedSkeletonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedSkeletonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used for replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedAdvancedBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedBasicBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueMetas_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedAdvancedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedAdvancedBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedBasicBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedBasicBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueMetas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UniqueMetas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedSkeletonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_Inner = { "TrackedAdvancedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedBoneData, METADATA_PARAMS(0, nullptr) }; // 914550491
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones = { "TrackedAdvancedBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedSkeletonData, TrackedAdvancedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedAdvancedBones_MetaData), NewProp_TrackedAdvancedBones_MetaData) }; // 914550491
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_Inner = { "TrackedBasicBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyedTransform, METADATA_PARAMS(0, nullptr) }; // 233401316
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones = { "TrackedBasicBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedSkeletonData, TrackedBasicBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedBasicBones_MetaData), NewProp_TrackedBasicBones_MetaData) }; // 233401316
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_Inner = { "UniqueMetas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedBoneMeta, METADATA_PARAMS(0, nullptr) }; // 1839730071
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas = { "UniqueMetas", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedSkeletonData, UniqueMetas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueMetas_MetaData), NewProp_UniqueMetas_MetaData) }; // 1839730071
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"NamedSkeletonData",
	Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers),
	sizeof(FNamedSkeletonData),
	alignof(FNamedSkeletonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedSkeletonData()
{
	if (!Z_Registration_Info_UScriptStruct_NamedSkeletonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedSkeletonData.InnerSingleton, Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedSkeletonData.InnerSingleton;
}
// End ScriptStruct FNamedSkeletonData

// Begin Class UBodyStateSkeleton Function BoneForEnum
struct Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics
{
	struct BodyStateSkeleton_eventBoneForEnum_Parms
	{
		EBodyStateBasicBoneType Bone;
		UBodyStateBone* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/*Get Bone data by enum*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get Bone data by enum" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneForEnum_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(0, nullptr) }; // 1831228300
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneForEnum_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "BoneForEnum", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::BodyStateSkeleton_eventBoneForEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::BodyStateSkeleton_eventBoneForEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execBoneForEnum)
{
	P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneForEnum(EBodyStateBasicBoneType(Z_Param_Bone));
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function BoneForEnum

// Begin Class UBodyStateSkeleton Function BoneNamed
struct Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics
{
	struct BodyStateSkeleton_eventBoneNamed_Parms
	{
		FString InName;
		UBodyStateBone* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/*Get Bone data by name matching*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get Bone data by name matching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneNamed_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventBoneNamed_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "BoneNamed", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::BodyStateSkeleton_eventBoneNamed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::BodyStateSkeleton_eventBoneNamed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execBoneNamed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneNamed(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function BoneNamed

// Begin Class UBodyStateSkeleton Function ChangeBasis
struct Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics
{
	struct BodyStateSkeleton_eventChangeBasis_Parms
	{
		FRotator PreBase;
		FRotator PostBase;
		bool AdjustVectors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreBase_MetaData), NewProp_PreBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostBase_MetaData), NewProp_PostBase_MetaData) };
void Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
{
	((BodyStateSkeleton_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BodyStateSkeleton_eventChangeBasis_Parms), &Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "ChangeBasis", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::BodyStateSkeleton_eventChangeBasis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::BodyStateSkeleton_eventChangeBasis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execChangeBasis)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_PreBase);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_PostBase);
	P_GET_UBOOL(Z_Param_AdjustVectors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeBasis(Z_Param_Out_PreBase,Z_Param_Out_PostBase,Z_Param_AdjustVectors);
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function ChangeBasis

// Begin Class UBodyStateSkeleton Function GetMinimalNamedSkeletonData
struct Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics
{
	struct BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms
	{
		FNamedSkeletonData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// Conversion\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Conversion" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms, ReturnValue), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(0, nullptr) }; // 999367919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "GetMinimalNamedSkeletonData", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execGetMinimalNamedSkeletonData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNamedSkeletonData*)Z_Param__Result=P_THIS->GetMinimalNamedSkeletonData();
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function GetMinimalNamedSkeletonData

// Begin Class UBodyStateSkeleton Function Head
struct Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics
{
	struct BodyStateSkeleton_eventHead_Parms
	{
		UBodyStateBone* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Spine & Head\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Spine & Head" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventHead_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "Head", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::BodyStateSkeleton_eventHead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::BodyStateSkeleton_eventHead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Head()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execHead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateBone**)Z_Param__Result=P_THIS->Head();
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function Head

// Begin Class UBodyStateSkeleton Function LeftArm
struct Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics
{
	struct BodyStateSkeleton_eventLeftArm_Parms
	{
		UBodyStateArm* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Get a structured convenience wrapper around left arm bones*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get a structured convenience wrapper around left arm bones" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventLeftArm_Parms, ReturnValue), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "LeftArm", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::BodyStateSkeleton_eventLeftArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::BodyStateSkeleton_eventLeftArm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_LeftArm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execLeftArm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateArm**)Z_Param__Result=P_THIS->LeftArm();
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function LeftArm

// Begin Class UBodyStateSkeleton Function MergeFromOtherSkeleton
struct Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics
{
	struct BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms
	{
		UBodyStateSkeleton* Other;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "/** Copies only bones that are tracked from the other skeleton */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Copies only bones that are tracked from the other skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms, Other), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::NewProp_Other,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "MergeFromOtherSkeleton", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execMergeFromOtherSkeleton)
{
	P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MergeFromOtherSkeleton(Z_Param_Other);
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function MergeFromOtherSkeleton

// Begin Class UBodyStateSkeleton Function Multi_UpdateBodyState
struct BodyStateSkeleton_eventMulti_UpdateBodyState_Parms
{
	FNamedSkeletonData InBodyStateSkeleton;
};
static FName NAME_UBodyStateSkeleton_Multi_UpdateBodyState = FName(TEXT("Multi_UpdateBodyState"));
void UBodyStateSkeleton::Multi_UpdateBodyState(const FNamedSkeletonData InBodyStateSkeleton)
{
	BodyStateSkeleton_eventMulti_UpdateBodyState_Parms Parms;
	Parms.InBodyStateSkeleton=InBodyStateSkeleton;
	ProcessEvent(FindFunctionChecked(NAME_UBodyStateSkeleton_Multi_UpdateBodyState),&Parms);
}
struct Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBodyStateSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBodyStateSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton = { "InBodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventMulti_UpdateBodyState_Parms, InBodyStateSkeleton), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBodyStateSkeleton_MetaData), NewProp_InBodyStateSkeleton_MetaData) }; // 999367919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "Multi_UpdateBodyState", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers), sizeof(BodyStateSkeleton_eventMulti_UpdateBodyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams) };
static_assert(sizeof(BodyStateSkeleton_eventMulti_UpdateBodyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execMulti_UpdateBodyState)
{
	P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multi_UpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton);
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function Multi_UpdateBodyState

// Begin Class UBodyStateSkeleton Function ResetToDefaultSkeleton
struct Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// Setting Bone Data\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Setting Bone Data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "ResetToDefaultSkeleton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execResetToDefaultSkeleton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaultSkeleton();
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function ResetToDefaultSkeleton

// Begin Class UBodyStateSkeleton Function RightArm
struct Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics
{
	struct BodyStateSkeleton_eventRightArm_Parms
	{
		UBodyStateArm* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Get a structured convenience wrapper around right arm bones*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get a structured convenience wrapper around right arm bones" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventRightArm_Parms, ReturnValue), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "RightArm", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::BodyStateSkeleton_eventRightArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::BodyStateSkeleton_eventRightArm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RightArm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execRightArm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateArm**)Z_Param__Result=P_THIS->RightArm();
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function RightArm

// Begin Class UBodyStateSkeleton Function RootBone
struct Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics
{
	struct BodyStateSkeleton_eventRootBone_Parms
	{
		UBodyStateBone* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Root\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Root" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventRootBone_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "RootBone", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::BodyStateSkeleton_eventRootBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::BodyStateSkeleton_eventRootBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RootBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execRootBone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateBone**)Z_Param__Result=P_THIS->RootBone();
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function RootBone

// Begin Class UBodyStateSkeleton Function ServerUpdateBodyState
struct BodyStateSkeleton_eventServerUpdateBodyState_Parms
{
	FNamedSkeletonData InBodyStateSkeleton;
};
static FName NAME_UBodyStateSkeleton_ServerUpdateBodyState = FName(TEXT("ServerUpdateBodyState"));
void UBodyStateSkeleton::ServerUpdateBodyState(const FNamedSkeletonData InBodyStateSkeleton)
{
	BodyStateSkeleton_eventServerUpdateBodyState_Parms Parms;
	Parms.InBodyStateSkeleton=InBodyStateSkeleton;
	ProcessEvent(FindFunctionChecked(NAME_UBodyStateSkeleton_ServerUpdateBodyState),&Parms);
}
struct Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Replication\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBodyStateSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBodyStateSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton = { "InBodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventServerUpdateBodyState_Parms, InBodyStateSkeleton), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBodyStateSkeleton_MetaData), NewProp_InBodyStateSkeleton_MetaData) }; // 999367919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "ServerUpdateBodyState", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers), sizeof(BodyStateSkeleton_eventServerUpdateBodyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams) };
static_assert(sizeof(BodyStateSkeleton_eventServerUpdateBodyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execServerUpdateBodyState)
{
	P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUpdateBodyState_Validate(Z_Param_InBodyStateSkeleton))
	{
		RPC_ValidateFailed(TEXT("ServerUpdateBodyState_Validate"));
		return;
	}
	P_THIS->ServerUpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton);
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function ServerUpdateBodyState

// Begin Class UBodyStateSkeleton Function SetDataForBone
struct Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics
{
	struct BodyStateSkeleton_eventSetDataForBone_Parms
	{
		FBodyStateBoneData BoneData;
		EBodyStateBasicBoneType Bone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetDataForBone_Parms, BoneData), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneData_MetaData), NewProp_BoneData_MetaData) }; // 2821867691
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetDataForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(0, nullptr) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetDataForBone", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::BodyStateSkeleton_eventSetDataForBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::BodyStateSkeleton_eventSetDataForBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execSetDataForBone)
{
	P_GET_STRUCT_REF(FBodyStateBoneData,Z_Param_Out_BoneData);
	P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataForBone(Z_Param_Out_BoneData,EBodyStateBasicBoneType(Z_Param_Bone));
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function SetDataForBone

// Begin Class UBodyStateSkeleton Function SetFromNamedSkeletonData
struct Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics
{
	struct BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms
	{
		FNamedSkeletonData NamedSkeletonData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// key replication getter\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "key replication getter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedSkeletonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamedSkeletonData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData = { "NamedSkeletonData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms, NamedSkeletonData), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedSkeletonData_MetaData), NewProp_NamedSkeletonData_MetaData) }; // 999367919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetFromNamedSkeletonData", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execSetFromNamedSkeletonData)
{
	P_GET_STRUCT_REF(FNamedSkeletonData,Z_Param_Out_NamedSkeletonData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFromNamedSkeletonData(Z_Param_Out_NamedSkeletonData);
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function SetFromNamedSkeletonData

// Begin Class UBodyStateSkeleton Function SetFromOtherSkeleton
struct Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics
{
	struct BodyStateSkeleton_eventSetFromOtherSkeleton_Parms
	{
		UBodyStateSkeleton* Other;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "Comment", "// key replication setter\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "key replication setter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetFromOtherSkeleton_Parms, Other), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::NewProp_Other,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetFromOtherSkeleton", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::BodyStateSkeleton_eventSetFromOtherSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::BodyStateSkeleton_eventSetFromOtherSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execSetFromOtherSkeleton)
{
	P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFromOtherSkeleton(Z_Param_Other);
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function SetFromOtherSkeleton

// Begin Class UBodyStateSkeleton Function SetMetaForBone
struct Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics
{
	struct BodyStateSkeleton_eventSetMetaForBone_Parms
	{
		FBodyStateBoneMeta BoneMeta;
		EBodyStateBasicBoneType Bone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneMeta;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta = { "BoneMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetMetaForBone_Parms, BoneMeta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneMeta_MetaData), NewProp_BoneMeta_MetaData) }; // 3130332923
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetMetaForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(0, nullptr) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetMetaForBone", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::BodyStateSkeleton_eventSetMetaForBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::BodyStateSkeleton_eventSetMetaForBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execSetMetaForBone)
{
	P_GET_STRUCT_REF(FBodyStateBoneMeta,Z_Param_Out_BoneMeta);
	P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMetaForBone(Z_Param_Out_BoneMeta,EBodyStateBasicBoneType(Z_Param_Bone));
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function SetMetaForBone

// Begin Class UBodyStateSkeleton Function SetTransformForBone
struct Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics
{
	struct BodyStateSkeleton_eventSetTransformForBone_Parms
	{
		FTransform Transform;
		EBodyStateBasicBoneType Bone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetTransformForBone_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateSkeleton_eventSetTransformForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(0, nullptr) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, nullptr, "SetTransformForBone", nullptr, nullptr, Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::BodyStateSkeleton_eventSetTransformForBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::BodyStateSkeleton_eventSetTransformForBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateSkeleton::execSetTransformForBone)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransformForBone(Z_Param_Out_Transform,EBodyStateBasicBoneType(Z_Param_Bone));
	P_NATIVE_END;
}
// End Class UBodyStateSkeleton Function SetTransformForBone

// Begin Class UBodyStateSkeleton
void UBodyStateSkeleton::StaticRegisterNativesUBodyStateSkeleton()
{
	UClass* Class = UBodyStateSkeleton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BoneForEnum", &UBodyStateSkeleton::execBoneForEnum },
		{ "BoneNamed", &UBodyStateSkeleton::execBoneNamed },
		{ "ChangeBasis", &UBodyStateSkeleton::execChangeBasis },
		{ "GetMinimalNamedSkeletonData", &UBodyStateSkeleton::execGetMinimalNamedSkeletonData },
		{ "Head", &UBodyStateSkeleton::execHead },
		{ "LeftArm", &UBodyStateSkeleton::execLeftArm },
		{ "MergeFromOtherSkeleton", &UBodyStateSkeleton::execMergeFromOtherSkeleton },
		{ "Multi_UpdateBodyState", &UBodyStateSkeleton::execMulti_UpdateBodyState },
		{ "ResetToDefaultSkeleton", &UBodyStateSkeleton::execResetToDefaultSkeleton },
		{ "RightArm", &UBodyStateSkeleton::execRightArm },
		{ "RootBone", &UBodyStateSkeleton::execRootBone },
		{ "ServerUpdateBodyState", &UBodyStateSkeleton::execServerUpdateBodyState },
		{ "SetDataForBone", &UBodyStateSkeleton::execSetDataForBone },
		{ "SetFromNamedSkeletonData", &UBodyStateSkeleton::execSetFromNamedSkeletonData },
		{ "SetFromOtherSkeleton", &UBodyStateSkeleton::execSetFromOtherSkeleton },
		{ "SetMetaForBone", &UBodyStateSkeleton::execSetMetaForBone },
		{ "SetTransformForBone", &UBodyStateSkeleton::execSetTransformForBone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateSkeleton);
UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister()
{
	return UBodyStateSkeleton::StaticClass();
}
struct Z_Construct_UClass_UBodyStateSkeleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Body Skeleton data, all bones are expected in component space*/" },
		{ "IncludePath", "Skeleton/BodyStateSkeleton.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Body Skeleton data, all bones are expected in component space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Human readable name, taken from device config, useful for debug */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Human readable name, taken from device config, useful for debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackingActive_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** If tracking is active or frozen (useful for debugging)*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "If tracking is active or frozen (useful for debugging)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Id issued to this skeleton, useful for getting device information */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Id issued to this skeleton, useful for getting device information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Note: Storage of actual bone data should be here\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Note: Storage of actual bone data should be here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "/** Tracking Tags that this skeleton has currently inherited. */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Tracking Tags that this skeleton has currently inherited." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootOffset_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "Comment", "// Used for reference point calibration e.g. hydra base origin\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for reference point calibration e.g. hydra base origin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateLeftArm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateRightArm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bTrackingActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackingActive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateLeftArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateRightArm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum, "BoneForEnum" }, // 980767276
		{ &Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed, "BoneNamed" }, // 1025233361
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis, "ChangeBasis" }, // 3198247012
		{ &Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData, "GetMinimalNamedSkeletonData" }, // 310552093
		{ &Z_Construct_UFunction_UBodyStateSkeleton_Head, "Head" }, // 561483839
		{ &Z_Construct_UFunction_UBodyStateSkeleton_LeftArm, "LeftArm" }, // 1988797397
		{ &Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton, "MergeFromOtherSkeleton" }, // 1339751861
		{ &Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState, "Multi_UpdateBodyState" }, // 3114997005
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton, "ResetToDefaultSkeleton" }, // 1555027326
		{ &Z_Construct_UFunction_UBodyStateSkeleton_RightArm, "RightArm" }, // 3006891479
		{ &Z_Construct_UFunction_UBodyStateSkeleton_RootBone, "RootBone" }, // 1075615668
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState, "ServerUpdateBodyState" }, // 1179486122
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone, "SetDataForBone" }, // 772140749
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData, "SetFromNamedSkeletonData" }, // 1865156748
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton, "SetFromOtherSkeleton" }, // 59249401
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone, "SetMetaForBone" }, // 806966169
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone, "SetTransformForBone" }, // 2180726670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateSkeleton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateSkeleton, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_SetBit(void* Obj)
{
	((UBodyStateSkeleton*)Obj)->bTrackingActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive = { "bTrackingActive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateSkeleton), &Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackingActive_MetaData), NewProp_bTrackingActive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateSkeleton, SkeletonId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonId_MetaData), NewProp_SkeletonId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateSkeleton, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_Inner = { "TrackingTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags = { "TrackingTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateSkeleton, TrackingTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingTags_MetaData), NewProp_TrackingTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset = { "RootOffset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateSkeleton, RootOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootOffset_MetaData), NewProp_RootOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm = { "PrivateLeftArm", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateSkeleton, PrivateLeftArm), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateLeftArm_MetaData), NewProp_PrivateLeftArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm = { "PrivateRightArm", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateSkeleton, PrivateRightArm), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateRightArm_MetaData), NewProp_PrivateRightArm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateSkeleton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateSkeleton_Statics::ClassParams = {
	&UBodyStateSkeleton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateSkeleton()
{
	if (!Z_Registration_Info_UClass_UBodyStateSkeleton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateSkeleton.OuterSingleton, Z_Construct_UClass_UBodyStateSkeleton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateSkeleton.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateSkeleton>()
{
	return UBodyStateSkeleton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateSkeleton);
UBodyStateSkeleton::~UBodyStateSkeleton() {}
// End Class UBodyStateSkeleton

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNamedBoneData::StaticStruct, Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewStructOps, TEXT("NamedBoneData"), &Z_Registration_Info_UScriptStruct_NamedBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedBoneData), 914550491U) },
		{ FKeyedTransform::StaticStruct, Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewStructOps, TEXT("KeyedTransform"), &Z_Registration_Info_UScriptStruct_KeyedTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyedTransform), 233401316U) },
		{ FNamedBoneMeta::StaticStruct, Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewStructOps, TEXT("NamedBoneMeta"), &Z_Registration_Info_UScriptStruct_NamedBoneMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedBoneMeta), 1839730071U) },
		{ FNamedSkeletonData::StaticStruct, Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewStructOps, TEXT("NamedSkeletonData"), &Z_Registration_Info_UScriptStruct_NamedSkeletonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedSkeletonData), 999367919U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateSkeleton, UBodyStateSkeleton::StaticClass, TEXT("UBodyStateSkeleton"), &Z_Registration_Info_UClass_UBodyStateSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateSkeleton), 1954424964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_2923658511(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
