// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingEditor/Public/AnimGraphNode_ModifyBodyStateMappedBones.h"
#include "ThirdParty/BodyState/Public/AnimNode_ModifyBodyStateMappedBones.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ModifyBodyStateMappedBones() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones();
ULTRALEAPTRACKINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones();
ULTRALEAPTRACKINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTrackingEditor();
// End Cross Module References

// Begin Class UAnimGraphNode_ModifyBodyStateMappedBones
void UAnimGraphNode_ModifyBodyStateMappedBones::StaticRegisterNativesUAnimGraphNode_ModifyBodyStateMappedBones()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_ModifyBodyStateMappedBones);
UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_NoRegister()
{
	return UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_ModifyBodyStateMappedBones.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyBodyStateMappedBones.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyBodyStateMappedBones.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ModifyBodyStateMappedBones>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_ModifyBodyStateMappedBones, Node), Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 528469334
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTrackingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::ClassParams = {
	&UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_ModifyBodyStateMappedBones.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_ModifyBodyStateMappedBones.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_ModifyBodyStateMappedBones.OuterSingleton;
}
template<> ULTRALEAPTRACKINGEDITOR_API UClass* StaticClass<UAnimGraphNode_ModifyBodyStateMappedBones>()
{
	return UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ModifyBodyStateMappedBones);
UAnimGraphNode_ModifyBodyStateMappedBones::~UAnimGraphNode_ModifyBodyStateMappedBones() {}
// End Class UAnimGraphNode_ModifyBodyStateMappedBones

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingEditor_Public_AnimGraphNode_ModifyBodyStateMappedBones_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones, UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass, TEXT("UAnimGraphNode_ModifyBodyStateMappedBones"), &Z_Registration_Info_UClass_UAnimGraphNode_ModifyBodyStateMappedBones, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_ModifyBodyStateMappedBones), 3426536404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingEditor_Public_AnimGraphNode_ModifyBodyStateMappedBones_h_745274254(TEXT("/Script/UltraleapTrackingEditor"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingEditor_Public_AnimGraphNode_ModifyBodyStateMappedBones_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingEditor_Public_AnimGraphNode_ModifyBodyStateMappedBones_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
