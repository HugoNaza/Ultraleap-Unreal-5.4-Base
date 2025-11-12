// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/TickInEditorStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickInEditorStaticMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class UTickInEditorStaticMeshComponent
void UTickInEditorStaticMeshComponent::StaticRegisterNativesUTickInEditorStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickInEditorStaticMeshComponent);
UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent_NoRegister()
{
	return UTickInEditorStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TickInEditorStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/TickInEditorStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickInEditorStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::ClassParams = {
	&UTickInEditorStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UTickInEditorStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickInEditorStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickInEditorStaticMeshComponent.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UTickInEditorStaticMeshComponent>()
{
	return UTickInEditorStaticMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickInEditorStaticMeshComponent);
UTickInEditorStaticMeshComponent::~UTickInEditorStaticMeshComponent() {}
// End Class UTickInEditorStaticMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_TickInEditorStaticMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTickInEditorStaticMeshComponent, UTickInEditorStaticMeshComponent::StaticClass, TEXT("UTickInEditorStaticMeshComponent"), &Z_Registration_Info_UClass_UTickInEditorStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickInEditorStaticMeshComponent), 494053541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_TickInEditorStaticMeshComponent_h_187054386(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_TickInEditorStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_TickInEditorStaticMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
