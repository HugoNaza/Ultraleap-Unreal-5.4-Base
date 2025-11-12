// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapVisualizer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ALeapVisualizer();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ALeapVisualizer_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class ALeapVisualizer
void ALeapVisualizer::StaticRegisterNativesALeapVisualizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeapVisualizer);
UClass* Z_Construct_UClass_ALeapVisualizer_NoRegister()
{
	return ALeapVisualizer::StaticClass();
}
struct Z_Construct_UClass_ALeapVisualizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This Actor can be used to load Niagara particle systems in C++\n */" },
		{ "IncludePath", "LeapVisualizer.h" },
		{ "ModuleRelativePath", "Public/LeapVisualizer.h" },
		{ "ToolTip", "This Actor can be used to load Niagara particle systems in C++" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeapVisualizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALeapVisualizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeapVisualizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeapVisualizer_Statics::ClassParams = {
	&ALeapVisualizer::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeapVisualizer_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeapVisualizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALeapVisualizer()
{
	if (!Z_Registration_Info_UClass_ALeapVisualizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeapVisualizer.OuterSingleton, Z_Construct_UClass_ALeapVisualizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALeapVisualizer.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ALeapVisualizer>()
{
	return ALeapVisualizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALeapVisualizer);
ALeapVisualizer::~ALeapVisualizer() {}
// End Class ALeapVisualizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapVisualizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALeapVisualizer, ALeapVisualizer::StaticClass, TEXT("ALeapVisualizer"), &Z_Registration_Info_UClass_ALeapVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeapVisualizer), 2337205310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapVisualizer_h_2373559736(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapVisualizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
