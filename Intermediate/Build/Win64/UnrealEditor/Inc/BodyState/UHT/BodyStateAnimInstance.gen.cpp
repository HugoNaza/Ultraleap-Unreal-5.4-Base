// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/BodyStateAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateAnimInstance() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateAnimInstance();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateAnimInstance_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateAutoRigType();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBSMultiDeviceMode();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateIndexedBone();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSearchNames();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBPBoneReference();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedBoneLink();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin Enum EBSMultiDeviceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBSMultiDeviceMode;
static UEnum* EBSMultiDeviceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBSMultiDeviceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBSMultiDeviceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBSMultiDeviceMode, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("EBSMultiDeviceMode"));
	}
	return Z_Registration_Info_UEnum_EBSMultiDeviceMode.OuterSingleton;
}
template<> BODYSTATE_API UEnum* StaticEnum<EBSMultiDeviceMode>()
{
	return EBSMultiDeviceMode_StaticEnum();
}
struct Z_Construct_UEnum_BodyState_EBSMultiDeviceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BS_MULTI_DEVICE_COMBINED.Name", "BS_MULTI_DEVICE_COMBINED" },
		{ "BS_MULTI_DEVICE_SINGULAR.Name", "BS_MULTI_DEVICE_SINGULAR" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BS_MULTI_DEVICE_SINGULAR", (int64)BS_MULTI_DEVICE_SINGULAR },
		{ "BS_MULTI_DEVICE_COMBINED", (int64)BS_MULTI_DEVICE_COMBINED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BodyState_EBSMultiDeviceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	"EBSMultiDeviceMode",
	"EBSMultiDeviceMode",
	Z_Construct_UEnum_BodyState_EBSMultiDeviceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BodyState_EBSMultiDeviceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BodyState_EBSMultiDeviceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BodyState_EBSMultiDeviceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BodyState_EBSMultiDeviceMode()
{
	if (!Z_Registration_Info_UEnum_EBSMultiDeviceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBSMultiDeviceMode.InnerSingleton, Z_Construct_UEnum_BodyState_EBSMultiDeviceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBSMultiDeviceMode.InnerSingleton;
}
// End Enum EBSMultiDeviceMode

// Begin ScriptStruct FBodyStateIndexedBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyStateIndexedBone;
class UScriptStruct* FBodyStateIndexedBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateIndexedBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyStateIndexedBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateIndexedBone, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateIndexedBone"));
	}
	return Z_Registration_Info_UScriptStruct_BodyStateIndexedBone.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateIndexedBone>()
{
	return FBodyStateIndexedBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateIndexedBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateIndexedBone, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateIndexedBone, ParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateIndexedBone, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyStateIndexedBone, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"BodyStateIndexedBone",
	Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers),
	sizeof(FBodyStateIndexedBone),
	alignof(FBodyStateIndexedBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyStateIndexedBone()
{
	if (!Z_Registration_Info_UScriptStruct_BodyStateIndexedBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyStateIndexedBone.InnerSingleton, Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyStateIndexedBone.InnerSingleton;
}
// End ScriptStruct FBodyStateIndexedBone

// Begin ScriptStruct FCachedBoneLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedBoneLink;
class UScriptStruct* FCachedBoneLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedBoneLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedBoneLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedBoneLink, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("CachedBoneLink"));
	}
	return Z_Registration_Info_UScriptStruct_CachedBoneLink.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FCachedBoneLink>()
{
	return FCachedBoneLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedBoneLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// C++ only struct used for cached bone lookup\n" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "C++ only struct used for cached bone lookup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BSBone_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BSBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedBoneLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewProp_BSBone = { "BSBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedBoneLink, BSBone), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BSBone_MetaData), NewProp_BSBone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedBoneLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewProp_BSBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedBoneLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"CachedBoneLink",
	Z_Construct_UScriptStruct_FCachedBoneLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::PropPointers),
	sizeof(FCachedBoneLink),
	alignof(FCachedBoneLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedBoneLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedBoneLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedBoneLink()
{
	if (!Z_Registration_Info_UScriptStruct_CachedBoneLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedBoneLink.InnerSingleton, Z_Construct_UScriptStruct_FCachedBoneLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedBoneLink.InnerSingleton;
}
// End ScriptStruct FCachedBoneLink

// Begin ScriptStruct FBPBoneReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPBoneReference;
class UScriptStruct* FBPBoneReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPBoneReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPBoneReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPBoneReference, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("BPBoneReference"));
	}
	return Z_Registration_Info_UScriptStruct_BPBoneReference.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBPBoneReference>()
{
	return FBPBoneReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPBoneReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Required struct since 4.17 to expose hotlinked mesh bone references*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Required struct since 4.17 to expose hotlinked mesh bone references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBone_MetaData[] = {
		{ "Category", "BoneName" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPBoneReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone = { "MeshBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPBoneReference, MeshBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBone_MetaData), NewProp_MeshBone_MetaData) }; // 4218265988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPBoneReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"BPBoneReference",
	Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers),
	sizeof(FBPBoneReference),
	alignof(FBPBoneReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPBoneReference()
{
	if (!Z_Registration_Info_UScriptStruct_BPBoneReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPBoneReference.InnerSingleton, Z_Construct_UScriptStruct_FBPBoneReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPBoneReference.InnerSingleton;
}
// End ScriptStruct FBPBoneReference

// Begin ScriptStruct FMappedBoneAnimData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MappedBoneAnimData;
class UScriptStruct* FMappedBoneAnimData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MappedBoneAnimData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MappedBoneAnimData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappedBoneAnimData, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("MappedBoneAnimData"));
	}
	return Z_Registration_Info_UScriptStruct_MappedBoneAnimData.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FMappedBoneAnimData>()
{
	return FMappedBoneAnimData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDeformMesh_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Whether the mesh should deform to match the tracked data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether the mesh should deform to match the tracked data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingTagLimit_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** List of tags required by the tracking solution for this animation to use that data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "List of tags required by the tracking solution for this animation to use that data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreBaseRotation_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Offset rotation base applied before given rotation (will rotate input) */" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Offset rotation base applied before given rotation (will rotate input)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Transform applied after rotation changes to all bones in map. Consider this an offset */" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Transform applied after rotation changes to all bones in map. Consider this an offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Matching list of body state bone keys mapped to local mesh bone names */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Matching list of body state bone keys mapped to local mesh bone names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyStateSkeleton_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Skeleton driving mapped data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Skeleton driving mapped data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElbowLength_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Estimated Elbow length */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Estimated Elbow length" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipModelLeftRight_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Flip the chirality of the hand model (for model re-use across left to right or right to left hands) */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Flip the chirality of the hand model (for model re-use across left to right or right to left hands)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandModelLength_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Calculated hand length by walking the bones from palm to middle fingertip */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Calculated hand length by walking the bones from palm to middle fingertip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerTipLengths_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Model finger tip lengths, calculated on AutoMap */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Model finger tip lengths, calculated on AutoMap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalScale_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Original scale of the model, used for auto scaling calculations */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Original scale of the model, used for auto scaling calculations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCorrectRotation_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Auto calculated rotation to correct/normalize model rotation*/" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Auto calculated rotation to correct/normalize model rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoneList_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "// Data structure containing a parent -> child ordered bone list\n" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Data structure containing a parent -> child ordered bone list" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldDeformMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDeformMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingTagLimit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackingTagLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreBaseRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyStateSkeleton;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElbowLength;
	static void NewProp_FlipModelLeftRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipModelLeftRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandModelLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerTipLengths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerTipLengths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoCorrectRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoneList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedBoneList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappedBoneAnimData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_SetBit(void* Obj)
{
	((FMappedBoneAnimData*)Obj)->bShouldDeformMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh = { "bShouldDeformMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMappedBoneAnimData), &Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDeformMesh_MetaData), NewProp_bShouldDeformMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_Inner = { "TrackingTagLimit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit = { "TrackingTagLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, TrackingTagLimit), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingTagLimit_MetaData), NewProp_TrackingTagLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation = { "PreBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, PreBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreBaseRotation_MetaData), NewProp_PreBaseRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetTransform_MetaData), NewProp_OffsetTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_ValueProp = { "BoneMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBPBoneReference, METADATA_PARAMS(0, nullptr) }; // 1830608458
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp = { "BoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(0, nullptr) }; // 1831228300
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, BoneMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneMap_MetaData), NewProp_BoneMap_MetaData) }; // 1831228300 1830608458
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton = { "BodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, BodyStateSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyStateSkeleton_MetaData), NewProp_BodyStateSkeleton_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_ElbowLength = { "ElbowLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, ElbowLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElbowLength_MetaData), NewProp_ElbowLength_MetaData) };
void Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight_SetBit(void* Obj)
{
	((FMappedBoneAnimData*)Obj)->FlipModelLeftRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight = { "FlipModelLeftRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMappedBoneAnimData), &Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipModelLeftRight_MetaData), NewProp_FlipModelLeftRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_HandModelLength = { "HandModelLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, HandModelLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandModelLength_MetaData), NewProp_HandModelLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FingerTipLengths_Inner = { "FingerTipLengths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FingerTipLengths = { "FingerTipLengths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, FingerTipLengths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerTipLengths_MetaData), NewProp_FingerTipLengths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OriginalScale = { "OriginalScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, OriginalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalScale_MetaData), NewProp_OriginalScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_AutoCorrectRotation = { "AutoCorrectRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, AutoCorrectRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCorrectRotation_MetaData), NewProp_AutoCorrectRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList_Inner = { "CachedBoneList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedBoneLink, METADATA_PARAMS(0, nullptr) }; // 1935658388
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList = { "CachedBoneList", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappedBoneAnimData, CachedBoneList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBoneList_MetaData), NewProp_CachedBoneList_MetaData) }; // 1935658388
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_ElbowLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FlipModelLeftRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_HandModelLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FingerTipLengths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_FingerTipLengths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OriginalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_AutoCorrectRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_CachedBoneList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"MappedBoneAnimData",
	Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers),
	sizeof(FMappedBoneAnimData),
	alignof(FMappedBoneAnimData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData()
{
	if (!Z_Registration_Info_UScriptStruct_MappedBoneAnimData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MappedBoneAnimData.InnerSingleton, Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MappedBoneAnimData.InnerSingleton;
}
// End ScriptStruct FMappedBoneAnimData

// Begin ScriptStruct FBoneSearchNames
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneSearchNames;
class UScriptStruct* FBoneSearchNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneSearchNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneSearchNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneSearchNames, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("BoneSearchNames"));
	}
	return Z_Registration_Info_UScriptStruct_BoneSearchNames.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBoneSearchNames>()
{
	return FBoneSearchNames::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneSearchNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WristNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiddleNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinkyNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArmNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArmNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WristNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WristNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IndexNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MiddleNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MiddleNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RingNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RingNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinkyNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PinkyNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneSearchNames>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames_Inner = { "ArmNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames = { "ArmNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSearchNames, ArmNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmNames_MetaData), NewProp_ArmNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames_Inner = { "WristNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames = { "WristNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSearchNames, WristNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WristNames_MetaData), NewProp_WristNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames_Inner = { "ThumbNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames = { "ThumbNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSearchNames, ThumbNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbNames_MetaData), NewProp_ThumbNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames_Inner = { "IndexNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames = { "IndexNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSearchNames, IndexNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexNames_MetaData), NewProp_IndexNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames_Inner = { "MiddleNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames = { "MiddleNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSearchNames, MiddleNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiddleNames_MetaData), NewProp_MiddleNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames_Inner = { "RingNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames = { "RingNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSearchNames, RingNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingNames_MetaData), NewProp_RingNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames_Inner = { "PinkyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames = { "PinkyNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneSearchNames, PinkyNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinkyNames_MetaData), NewProp_PinkyNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneSearchNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ArmNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_WristNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_ThumbNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_IndexNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_MiddleNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_RingNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewProp_PinkyNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneSearchNames_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	&NewStructOps,
	"BoneSearchNames",
	Z_Construct_UScriptStruct_FBoneSearchNames_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::PropPointers),
	sizeof(FBoneSearchNames),
	alignof(FBoneSearchNames),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSearchNames_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneSearchNames_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneSearchNames()
{
	if (!Z_Registration_Info_UScriptStruct_BoneSearchNames.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneSearchNames.InnerSingleton, Z_Construct_UScriptStruct_FBoneSearchNames_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneSearchNames.InnerSingleton;
}
// End ScriptStruct FBoneSearchNames

// Begin Class UBodyStateAnimInstance Function AddBSBoneToMeshBoneLink
struct Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics
{
	struct BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms
	{
		FMappedBoneAnimData InMappedBoneData;
		EBodyStateBasicBoneType BSBone;
		FName MeshBone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Link given mesh bone with body state bone enum. */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Link given mesh bone with body state bone enum." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BSBone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BSBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MeshBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_InMappedBoneData = { "InMappedBoneData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(0, nullptr) }; // 2050108709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone = { "BSBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, BSBone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(0, nullptr) }; // 1831228300
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_MeshBone = { "MeshBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, MeshBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_InMappedBoneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_MeshBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "AddBSBoneToMeshBoneLink", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execAddBSBoneToMeshBoneLink)
{
	P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData);
	P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone);
	P_GET_PROPERTY(FNameProperty,Z_Param_MeshBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBSBoneToMeshBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone),Z_Param_MeshBone);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function AddBSBoneToMeshBoneLink

// Begin Class UBodyStateAnimInstance Function AdjustPositionByMapBasis
struct Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics
{
	struct BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms
	{
		FVector InPosition;
		FMappedBoneAnimData ForMap;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap = { "ForMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForMap_MetaData), NewProp_ForMap_MetaData) }; // 2050108709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "AdjustPositionByMapBasis", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execAdjustPositionByMapBasis)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
	P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->AdjustPositionByMapBasis(Z_Param_Out_InPosition,Z_Param_Out_ForMap);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function AdjustPositionByMapBasis

// Begin Class UBodyStateAnimInstance Function AdjustRotationByMapBasis
struct Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics
{
	struct BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms
	{
		FRotator InRotator;
		FMappedBoneAnimData ForMap;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Adjust rotation by currently defines offset base rotators */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Adjust rotation by currently defines offset base rotators" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator = { "InRotator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, InRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotator_MetaData), NewProp_InRotator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap = { "ForMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForMap_MetaData), NewProp_ForMap_MetaData) }; // 2050108709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "AdjustRotationByMapBasis", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execAdjustRotationByMapBasis)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator);
	P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->AdjustRotationByMapBasis(Z_Param_Out_InRotator,Z_Param_Out_ForMap);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function AdjustRotationByMapBasis

// Begin Class UBodyStateAnimInstance Function BoneMapSummary
struct Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics
{
	struct BodyStateAnimInstance_eventBoneMapSummary_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventBoneMapSummary_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "BoneMapSummary", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::BodyStateAnimInstance_eventBoneMapSummary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::BodyStateAnimInstance_eventBoneMapSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execBoneMapSummary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->BoneMapSummary();
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function BoneMapSummary

// Begin Class UBodyStateAnimInstance Function CalcIsTracking
struct Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics
{
	struct BodyStateAnimInstance_eventCalcIsTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BodyStateAnimInstance_eventCalcIsTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BodyStateAnimInstance_eventCalcIsTracking_Parms), &Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "CalcIsTracking", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::BodyStateAnimInstance_eventCalcIsTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::BodyStateAnimInstance_eventCalcIsTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execCalcIsTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CalcIsTracking();
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function CalcIsTracking

// Begin Class UBodyStateAnimInstance Function ExecuteAutoMapping
struct Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "ExecuteAutoMapping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execExecuteAutoMapping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteAutoMapping();
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function ExecuteAutoMapping

// Begin Class UBodyStateAnimInstance Function GetBoneNameFromRef
struct Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics
{
	struct BodyStateAnimInstance_eventGetBoneNameFromRef_Parms
	{
		FBPBoneReference BoneRef;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneRef;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_BoneRef = { "BoneRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetBoneNameFromRef_Parms, BoneRef), Z_Construct_UScriptStruct_FBPBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneRef_MetaData), NewProp_BoneRef_MetaData) }; // 1830608458
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetBoneNameFromRef_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_BoneRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "GetBoneNameFromRef", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::BodyStateAnimInstance_eventGetBoneNameFromRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::BodyStateAnimInstance_eventGetBoneNameFromRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execGetBoneNameFromRef)
{
	P_GET_STRUCT_REF(FBPBoneReference,Z_Param_Out_BoneRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UBodyStateAnimInstance::GetBoneNameFromRef(Z_Param_Out_BoneRef);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function GetBoneNameFromRef

// Begin Class UBodyStateAnimInstance Function GetCurrentWristPose
struct Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics
{
	struct BodyStateAnimInstance_eventGetCurrentWristPose_Parms
	{
		FMappedBoneAnimData ForMap;
		EBodyStateAutoRigType RigTargetType;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigTargetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RigTargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RigTargetType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ForMap = { "ForMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetCurrentWristPose_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForMap_MetaData), NewProp_ForMap_MetaData) }; // 2050108709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType = { "RigTargetType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetCurrentWristPose_Parms, RigTargetType), Z_Construct_UEnum_BodyState_EBodyStateAutoRigType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigTargetType_MetaData), NewProp_RigTargetType_MetaData) }; // 3049365226
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetCurrentWristPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ForMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_RigTargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "GetCurrentWristPose", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::BodyStateAnimInstance_eventGetCurrentWristPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::BodyStateAnimInstance_eventGetCurrentWristPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execGetCurrentWristPose)
{
	P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap);
	P_GET_ENUM(EBodyStateAutoRigType,Z_Param_RigTargetType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetCurrentWristPose(Z_Param_Out_ForMap,EBodyStateAutoRigType(Z_Param_RigTargetType));
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function GetCurrentWristPose

// Begin Class UBodyStateAnimInstance Function GetMeshBoneNameFromCachedBoneLink
struct Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics
{
	struct BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms
	{
		FCachedBoneLink CachedBoneLink;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoneLink_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoneLink;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_CachedBoneLink = { "CachedBoneLink", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms, CachedBoneLink), Z_Construct_UScriptStruct_FCachedBoneLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBoneLink_MetaData), NewProp_CachedBoneLink_MetaData) }; // 1935658388
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_CachedBoneLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "GetMeshBoneNameFromCachedBoneLink", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::BodyStateAnimInstance_eventGetMeshBoneNameFromCachedBoneLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execGetMeshBoneNameFromCachedBoneLink)
{
	P_GET_STRUCT_REF(FCachedBoneLink,Z_Param_Out_CachedBoneLink);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UBodyStateAnimInstance::GetMeshBoneNameFromCachedBoneLink(Z_Param_Out_CachedBoneLink);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function GetMeshBoneNameFromCachedBoneLink

// Begin Class UBodyStateAnimInstance Function GetSerialOptions
struct Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics
{
	struct BodyStateAnimInstance_eventGetSerialOptions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventGetSerialOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "GetSerialOptions", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::BodyStateAnimInstance_eventGetSerialOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::BodyStateAnimInstance_eventGetSerialOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execGetSerialOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetSerialOptions();
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function GetSerialOptions

// Begin Class UBodyStateAnimInstance Function RemoveBSBoneLink
struct Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics
{
	struct BodyStateAnimInstance_eventRemoveBSBoneLink_Parms
	{
		FMappedBoneAnimData InMappedBoneData;
		EBodyStateBasicBoneType BSBone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Remove a link. Useful when e.g. autorigging gets 80% there but you need to remove a bone. */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Remove a link. Useful when e.g. autorigging gets 80% there but you need to remove a bone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BSBone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BSBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_InMappedBoneData = { "InMappedBoneData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(0, nullptr) }; // 2050108709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone = { "BSBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms, BSBone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(0, nullptr) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_InMappedBoneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "RemoveBSBoneLink", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::BodyStateAnimInstance_eventRemoveBSBoneLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::BodyStateAnimInstance_eventRemoveBSBoneLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execRemoveBSBoneLink)
{
	P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData);
	P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBSBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone));
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function RemoveBSBoneLink

// Begin Class UBodyStateAnimInstance Function SetActiveDeviceSerial
struct Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics
{
	struct BodyStateAnimInstance_eventSetActiveDeviceSerial_Parms
	{
		FString DeviceID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance - Multi device" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventSetActiveDeviceSerial_Parms, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceID_MetaData), NewProp_DeviceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::NewProp_DeviceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "SetActiveDeviceSerial", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::BodyStateAnimInstance_eventSetActiveDeviceSerial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::BodyStateAnimInstance_eventSetActiveDeviceSerial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execSetActiveDeviceSerial)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveDeviceSerial(Z_Param_DeviceID);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function SetActiveDeviceSerial

// Begin Class UBodyStateAnimInstance Function SetAnimSkeleton
struct Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics
{
	struct BodyStateAnimInstance_eventSetAnimSkeleton_Parms
	{
		UBodyStateSkeleton* InSkeleton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventSetAnimSkeleton_Parms, InSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::NewProp_InSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "SetAnimSkeleton", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::BodyStateAnimInstance_eventSetAnimSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::BodyStateAnimInstance_eventSetAnimSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execSetAnimSkeleton)
{
	P_GET_OBJECT(UBodyStateSkeleton,Z_Param_InSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimSkeleton(Z_Param_InSkeleton);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function SetAnimSkeleton

// Begin Class UBodyStateAnimInstance Function SyncMappedBoneDataCache
struct Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics
{
	struct BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms
	{
		FMappedBoneAnimData InMappedBoneData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "// Manual sync\n" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Manual sync" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::NewProp_InMappedBoneData = { "InMappedBoneData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(0, nullptr) }; // 2050108709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::NewProp_InMappedBoneData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, nullptr, "SyncMappedBoneDataCache", nullptr, nullptr, Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateAnimInstance::execSyncMappedBoneDataCache)
{
	P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncMappedBoneDataCache(Z_Param_Out_InMappedBoneData);
	P_NATIVE_END;
}
// End Class UBodyStateAnimInstance Function SyncMappedBoneDataCache

// Begin Class UBodyStateAnimInstance
void UBodyStateAnimInstance::StaticRegisterNativesUBodyStateAnimInstance()
{
	UClass* Class = UBodyStateAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBSBoneToMeshBoneLink", &UBodyStateAnimInstance::execAddBSBoneToMeshBoneLink },
		{ "AdjustPositionByMapBasis", &UBodyStateAnimInstance::execAdjustPositionByMapBasis },
		{ "AdjustRotationByMapBasis", &UBodyStateAnimInstance::execAdjustRotationByMapBasis },
		{ "BoneMapSummary", &UBodyStateAnimInstance::execBoneMapSummary },
		{ "CalcIsTracking", &UBodyStateAnimInstance::execCalcIsTracking },
		{ "ExecuteAutoMapping", &UBodyStateAnimInstance::execExecuteAutoMapping },
		{ "GetBoneNameFromRef", &UBodyStateAnimInstance::execGetBoneNameFromRef },
		{ "GetCurrentWristPose", &UBodyStateAnimInstance::execGetCurrentWristPose },
		{ "GetMeshBoneNameFromCachedBoneLink", &UBodyStateAnimInstance::execGetMeshBoneNameFromCachedBoneLink },
		{ "GetSerialOptions", &UBodyStateAnimInstance::execGetSerialOptions },
		{ "RemoveBSBoneLink", &UBodyStateAnimInstance::execRemoveBSBoneLink },
		{ "SetActiveDeviceSerial", &UBodyStateAnimInstance::execSetActiveDeviceSerial },
		{ "SetAnimSkeleton", &UBodyStateAnimInstance::execSetAnimSkeleton },
		{ "SyncMappedBoneDataCache", &UBodyStateAnimInstance::execSyncMappedBoneDataCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateAnimInstance);
UClass* Z_Construct_UClass_UBodyStateAnimInstance_NoRegister()
{
	return UBodyStateAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBodyStateAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "BodyStateAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeTracking_MetaData[] = {
		{ "Category", "BS Anim Instance - Debug" },
		{ "Comment", "/** Toggle to freeze the tracking at current state. Useful for debugging your anim instance*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Toggle to freeze the tracking at current state. Useful for debugging your anim instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectHandRotationDuringAutoMapping_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Whether the anim instance should map the skeleton rotation on auto map*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether the anim instance should map the skeleton rotation on auto map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeMetaCarpels_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Whether to include the metacarpels bones when auto mapping (this can distort the palm mesh)*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether to include the metacarpels bones when auto mapping (this can distort the palm mesh)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSortedBoneNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Sort the bone names alphabetically when auto mapping rather than by bone order*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Sort the bone names alphabetically when auto mapping rather than by bone order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleModelToTrackingData_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "Comment", "/** Automatically scale the model to the user's hands */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Automatically scale the model to the user's hands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreWristTranslation_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "Comment", "/** Ignore the wrist translation */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Ignore the wrist translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuessElbowPosition_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "Comment", "/** Derive the elbow position from the wrist (useful for Orion tracking)*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Derive the elbow position from the wrist (useful for Orion tracking)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelScaleOffset_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** User entered scale offset to fit to entire model for hand auto scaling */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "User entered scale offset to fit to entire model for hand auto scaling" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbTipScaleOffset_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** User entered scale offset to fit to fingertip model to hand for hand auto scaling */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "User entered scale offset to fit to fingertip model to hand for hand auto scaling" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexTipScaleOffset_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** User entered scale offset to fit to fingertip model to hand for hand auto scaling */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "User entered scale offset to fit to fingertip model to hand for hand auto scaling" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiddleTipScaleOffset_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** User entered scale offset to fit to fingertip model to hand for hand auto scaling */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "User entered scale offset to fit to fingertip model to hand for hand auto scaling" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingTipScaleOffset_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** User entered scale offset to fit to fingertip model to hand for hand auto scaling */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "User entered scale offset to fit to fingertip model to hand for hand auto scaling" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinkyTipScaleOffset_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Scaling" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** User entered scale offset to fit to fingertip model to hand for hand auto scaling */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "User entered scale offset to fit to fingertip model to hand for hand auto scaling" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchNames_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "Comment", "/** Auto detection names (e.g. index thumb etc.)*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Auto detection names (e.g. index thumb etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoMapTarget_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyStateIndex_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyStateSkeleton_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "Comment", "/** Skeleton driving our data */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Skeleton driving our data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedBoneList_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "Comment", "/** Struct containing all variables needed at anim node time */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Struct containing all variables needed at anim node time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugAddRotation_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiDeviceMode_MetaData[] = {
		{ "Category", "BS Anim Instance - Multi device" },
		{ "Comment", "/** Multidevice configuration, Singular subscribes to a single device.\n\x09""Combined subscribes to multiple devices combined into one device\n\x09*/" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Multidevice configuration, Singular subscribes to a single device.\n      Combined subscribes to multiple devices combined into one device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDeviceSerials_MetaData[] = {
		{ "Category", "BS Anim Instance - Multi device" },
		{ "Comment", "/** Available device list\n\x09 */" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Available device list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDeviceSerial_MetaData[] = {
		{ "Category", "BS Anim Instance - Multi device" },
		{ "Comment", "/** Active Device (Singular mode only)\n\x09 */" },
		{ "EditCondition", "MultiDeviceMode == EBSMultiDeviceMode::BS_MULTI_DEVICE_SINGULAR" },
		{ "GetOptions", "GetSerialOptions" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Active Device (Singular mode only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSerialToDeviceID_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedDeviceSerials_MetaData[] = {
		{ "Category", "BS Anim Instance - Multi device" },
		{ "Comment", "/** Combined device list\n\x09 */" },
		{ "EditCondition", "MultiDeviceMode == EBSMultiDeviceMode::BS_MULTI_DEVICE_COMBINED" },
		{ "GetOptions", "GetSerialOptions" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Combined device list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceCombinerClass_MetaData[] = {
		{ "Category", "BS Anim Instance - Multi device" },
		{ "EditCondition", "MultiDeviceMode == EBSMultiDeviceMode::BS_MULTI_DEVICE_COMBINED" },
		{ "GetOptions", "GetSerialOptions" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFreezeTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeTracking;
	static void NewProp_bDetectHandRotationDuringAutoMapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectHandRotationDuringAutoMapping;
	static void NewProp_bIncludeMetaCarpels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeMetaCarpels;
	static void NewProp_bUseSortedBoneNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSortedBoneNames;
	static void NewProp_ScaleModelToTrackingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleModelToTrackingData;
	static void NewProp_IgnoreWristTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreWristTranslation;
	static void NewProp_GuessElbowPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GuessElbowPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelScaleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbTipScaleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexTipScaleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MiddleTipScaleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RingTipScaleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinkyTipScaleOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoMapTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoMapTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultBodyStateIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyStateSkeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappedBoneList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappedBoneList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugAddRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiDeviceMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableDeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDeviceSerials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveDeviceSerial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceSerialToDeviceID_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceSerialToDeviceID_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceSerialToDeviceID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CombinedDeviceSerials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CombinedDeviceSerials;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceCombinerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink, "AddBSBoneToMeshBoneLink" }, // 128718328
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis, "AdjustPositionByMapBasis" }, // 3184545790
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis, "AdjustRotationByMapBasis" }, // 1276560116
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary, "BoneMapSummary" }, // 1033346399
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_CalcIsTracking, "CalcIsTracking" }, // 873478416
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_ExecuteAutoMapping, "ExecuteAutoMapping" }, // 529433280
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_GetBoneNameFromRef, "GetBoneNameFromRef" }, // 2234025292
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_GetCurrentWristPose, "GetCurrentWristPose" }, // 4043143845
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_GetMeshBoneNameFromCachedBoneLink, "GetMeshBoneNameFromCachedBoneLink" }, // 509800841
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_GetSerialOptions, "GetSerialOptions" }, // 1119911416
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink, "RemoveBSBoneLink" }, // 2796965808
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_SetActiveDeviceSerial, "SetActiveDeviceSerial" }, // 1608600676
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton, "SetAnimSkeleton" }, // 596546196
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache, "SyncMappedBoneDataCache" }, // 5284017
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_SetBit(void* Obj)
{
	((UBodyStateAnimInstance*)Obj)->bFreezeTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking = { "bFreezeTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFreezeTracking_MetaData), NewProp_bFreezeTracking_MetaData) };
void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping_SetBit(void* Obj)
{
	((UBodyStateAnimInstance*)Obj)->bDetectHandRotationDuringAutoMapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping = { "bDetectHandRotationDuringAutoMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectHandRotationDuringAutoMapping_MetaData), NewProp_bDetectHandRotationDuringAutoMapping_MetaData) };
void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels_SetBit(void* Obj)
{
	((UBodyStateAnimInstance*)Obj)->bIncludeMetaCarpels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels = { "bIncludeMetaCarpels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeMetaCarpels_MetaData), NewProp_bIncludeMetaCarpels_MetaData) };
void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames_SetBit(void* Obj)
{
	((UBodyStateAnimInstance*)Obj)->bUseSortedBoneNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames = { "bUseSortedBoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSortedBoneNames_MetaData), NewProp_bUseSortedBoneNames_MetaData) };
void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ScaleModelToTrackingData_SetBit(void* Obj)
{
	((UBodyStateAnimInstance*)Obj)->ScaleModelToTrackingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ScaleModelToTrackingData = { "ScaleModelToTrackingData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ScaleModelToTrackingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleModelToTrackingData_MetaData), NewProp_ScaleModelToTrackingData_MetaData) };
void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_IgnoreWristTranslation_SetBit(void* Obj)
{
	((UBodyStateAnimInstance*)Obj)->IgnoreWristTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_IgnoreWristTranslation = { "IgnoreWristTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_IgnoreWristTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreWristTranslation_MetaData), NewProp_IgnoreWristTranslation_MetaData) };
void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_GuessElbowPosition_SetBit(void* Obj)
{
	((UBodyStateAnimInstance*)Obj)->GuessElbowPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_GuessElbowPosition = { "GuessElbowPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_GuessElbowPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuessElbowPosition_MetaData), NewProp_GuessElbowPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ModelScaleOffset = { "ModelScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, ModelScaleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelScaleOffset_MetaData), NewProp_ModelScaleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ThumbTipScaleOffset = { "ThumbTipScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, ThumbTipScaleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbTipScaleOffset_MetaData), NewProp_ThumbTipScaleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_IndexTipScaleOffset = { "IndexTipScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, IndexTipScaleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexTipScaleOffset_MetaData), NewProp_IndexTipScaleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MiddleTipScaleOffset = { "MiddleTipScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, MiddleTipScaleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiddleTipScaleOffset_MetaData), NewProp_MiddleTipScaleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_RingTipScaleOffset = { "RingTipScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, RingTipScaleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingTipScaleOffset_MetaData), NewProp_RingTipScaleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_PinkyTipScaleOffset = { "PinkyTipScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, PinkyTipScaleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinkyTipScaleOffset_MetaData), NewProp_PinkyTipScaleOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchNames = { "SearchNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, SearchNames), Z_Construct_UScriptStruct_FBoneSearchNames, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchNames_MetaData), NewProp_SearchNames_MetaData) }; // 3309520587
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget = { "AutoMapTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, AutoMapTarget), Z_Construct_UEnum_BodyState_EBodyStateAutoRigType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoMapTarget_MetaData), NewProp_AutoMapTarget_MetaData) }; // 3049365226
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex = { "DefaultBodyStateIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, DefaultBodyStateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBodyStateIndex_MetaData), NewProp_DefaultBodyStateIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton = { "BodyStateSkeleton", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, BodyStateSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyStateSkeleton_MetaData), NewProp_BodyStateSkeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_Inner = { "MappedBoneList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(0, nullptr) }; // 2050108709
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList = { "MappedBoneList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, MappedBoneList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedBoneList_MetaData), NewProp_MappedBoneList_MetaData) }; // 2050108709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DebugAddRotation = { "DebugAddRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, DebugAddRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugAddRotation_MetaData), NewProp_DebugAddRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MultiDeviceMode = { "MultiDeviceMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, MultiDeviceMode), Z_Construct_UEnum_BodyState_EBSMultiDeviceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiDeviceMode_MetaData), NewProp_MultiDeviceMode_MetaData) }; // 1759803909
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AvailableDeviceSerials_Inner = { "AvailableDeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AvailableDeviceSerials = { "AvailableDeviceSerials", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, AvailableDeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDeviceSerials_MetaData), NewProp_AvailableDeviceSerials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ActiveDeviceSerial = { "ActiveDeviceSerial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, ActiveDeviceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDeviceSerial_MetaData), NewProp_ActiveDeviceSerial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceSerialToDeviceID_ValueProp = { "DeviceSerialToDeviceID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceSerialToDeviceID_Key_KeyProp = { "DeviceSerialToDeviceID_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceSerialToDeviceID = { "DeviceSerialToDeviceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, DeviceSerialToDeviceID), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSerialToDeviceID_MetaData), NewProp_DeviceSerialToDeviceID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_CombinedDeviceSerials_Inner = { "CombinedDeviceSerials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_CombinedDeviceSerials = { "CombinedDeviceSerials", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, CombinedDeviceSerials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedDeviceSerials_MetaData), NewProp_CombinedDeviceSerials_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceCombinerClass = { "DeviceCombinerClass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateAnimInstance, DeviceCombinerClass), Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceCombinerClass_MetaData), NewProp_DeviceCombinerClass_MetaData) }; // 4148031936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bDetectHandRotationDuringAutoMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bIncludeMetaCarpels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bUseSortedBoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ScaleModelToTrackingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_IgnoreWristTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_GuessElbowPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ModelScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ThumbTipScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_IndexTipScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MiddleTipScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_RingTipScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_PinkyTipScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DebugAddRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MultiDeviceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AvailableDeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AvailableDeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_ActiveDeviceSerial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceSerialToDeviceID_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceSerialToDeviceID_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceSerialToDeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_CombinedDeviceSerials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_CombinedDeviceSerials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DeviceCombinerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::ClassParams = {
	&UBodyStateAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBodyStateAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateAnimInstance.OuterSingleton, Z_Construct_UClass_UBodyStateAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateAnimInstance.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateAnimInstance>()
{
	return UBodyStateAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateAnimInstance);
// End Class UBodyStateAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBSMultiDeviceMode_StaticEnum, TEXT("EBSMultiDeviceMode"), &Z_Registration_Info_UEnum_EBSMultiDeviceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1759803909U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBodyStateIndexedBone::StaticStruct, Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewStructOps, TEXT("BodyStateIndexedBone"), &Z_Registration_Info_UScriptStruct_BodyStateIndexedBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyStateIndexedBone), 3936077675U) },
		{ FCachedBoneLink::StaticStruct, Z_Construct_UScriptStruct_FCachedBoneLink_Statics::NewStructOps, TEXT("CachedBoneLink"), &Z_Registration_Info_UScriptStruct_CachedBoneLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedBoneLink), 1935658388U) },
		{ FBPBoneReference::StaticStruct, Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewStructOps, TEXT("BPBoneReference"), &Z_Registration_Info_UScriptStruct_BPBoneReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPBoneReference), 1830608458U) },
		{ FMappedBoneAnimData::StaticStruct, Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewStructOps, TEXT("MappedBoneAnimData"), &Z_Registration_Info_UScriptStruct_MappedBoneAnimData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMappedBoneAnimData), 2050108709U) },
		{ FBoneSearchNames::StaticStruct, Z_Construct_UScriptStruct_FBoneSearchNames_Statics::NewStructOps, TEXT("BoneSearchNames"), &Z_Registration_Info_UScriptStruct_BoneSearchNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneSearchNames), 3309520587U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateAnimInstance, UBodyStateAnimInstance::StaticClass, TEXT("UBodyStateAnimInstance"), &Z_Registration_Info_UClass_UBodyStateAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateAnimInstance), 880567277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_2046291229(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
