// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/AnimNode_ModifyBodyStateMappedBones.h"
#include "ThirdParty/BodyState/Public/BodyStateAnimInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyBodyStateMappedBones() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin ScriptStruct FAnimNode_ModifyBodyStateMappedBones
static_assert(std::is_polymorphic<FAnimNode_ModifyBodyStateMappedBones>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ModifyBodyStateMappedBones cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones;
class UScriptStruct* FAnimNode_ModifyBodyStateMappedBones::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("AnimNode_ModifyBodyStateMappedBones"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones.OuterSingleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FAnimNode_ModifyBodyStateMappedBones>()
{
	return FAnimNode_ModifyBodyStateMappedBones::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ModifyBodyStateMappedBones.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedBoneAnimData_MetaData[] = {
		{ "Category", "BodyState" },
		{ "Comment", "/** All combined settings required for this node to process mapped bones */" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyBodyStateMappedBones.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "All combined settings required for this node to process mapped bones" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappedBoneAnimData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyBodyStateMappedBones>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewProp_MappedBoneAnimData = { "MappedBoneAnimData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBodyStateMappedBones, MappedBoneAnimData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedBoneAnimData_MetaData), NewProp_MappedBoneAnimData_MetaData) }; // 2050108709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewProp_MappedBoneAnimData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_ModifyBodyStateMappedBones",
	Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::PropPointers),
	sizeof(FAnimNode_ModifyBodyStateMappedBones),
	alignof(FAnimNode_ModifyBodyStateMappedBones),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones.InnerSingleton;
}
// End ScriptStruct FAnimNode_ModifyBodyStateMappedBones

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_AnimNode_ModifyBodyStateMappedBones_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ModifyBodyStateMappedBones::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewStructOps, TEXT("AnimNode_ModifyBodyStateMappedBones"), &Z_Registration_Info_UScriptStruct_AnimNode_ModifyBodyStateMappedBones, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyBodyStateMappedBones), 528469334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_AnimNode_ModifyBodyStateMappedBones_h_1474703159(TEXT("/Script/BodyState"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_AnimNode_ModifyBodyStateMappedBones_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_AnimNode_ModifyBodyStateMappedBones_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
