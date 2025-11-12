// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/BodyStateBoneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBoneComponent() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBoneComponent();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBoneComponent_NoRegister();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin Class UBodyStateBoneComponent
void UBodyStateBoneComponent::StaticRegisterNativesUBodyStateBoneComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateBoneComponent);
UClass* Z_Construct_UClass_UBodyStateBoneComponent_NoRegister()
{
	return UBodyStateBoneComponent::StaticClass();
}
struct Z_Construct_UClass_UBodyStateBoneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "BodyState" },
		{ "Comment", "/**\n * Scene Component which syncs to a desired BodyStateBone\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BodyStateBoneComponent.h" },
		{ "ModuleRelativePath", "Public/BodyStateBoneComponent.h" },
		{ "ToolTip", "Scene Component which syncs to a desired BodyStateBone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[] = {
		{ "Category", "Body State Bone Component" },
		{ "ModuleRelativePath", "Public/BodyStateBoneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToFollow_MetaData[] = {
		{ "Category", "Body State Bone Component" },
		{ "ModuleRelativePath", "Public/BodyStateBoneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneToFollow_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneToFollow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBoneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBoneComponent, SkeletonId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonId_MetaData), NewProp_SkeletonId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow = { "BoneToFollow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateBoneComponent, BoneToFollow), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToFollow_MetaData), NewProp_BoneToFollow_MetaData) }; // 1831228300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateBoneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_SkeletonId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateBoneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::ClassParams = {
	&UBodyStateBoneComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBodyStateBoneComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateBoneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateBoneComponent()
{
	if (!Z_Registration_Info_UClass_UBodyStateBoneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateBoneComponent.OuterSingleton, Z_Construct_UClass_UBodyStateBoneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateBoneComponent.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateBoneComponent>()
{
	return UBodyStateBoneComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBoneComponent);
UBodyStateBoneComponent::~UBodyStateBoneComponent() {}
// End Class UBodyStateBoneComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBoneComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateBoneComponent, UBodyStateBoneComponent::StaticClass, TEXT("UBodyStateBoneComponent"), &Z_Registration_Info_UClass_UBodyStateBoneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateBoneComponent), 2158815194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBoneComponent_h_3681005236(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBoneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBoneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
