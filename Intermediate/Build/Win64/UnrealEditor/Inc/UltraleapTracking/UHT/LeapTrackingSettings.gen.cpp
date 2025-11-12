// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapTrackingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapTrackingSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapTrackingSettings();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapTrackingSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class ULeapTrackingSettings
void ULeapTrackingSettings::StaticRegisterNativesULeapTrackingSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeapTrackingSettings);
UClass* Z_Construct_UClass_ULeapTrackingSettings_NoRegister()
{
	return ULeapTrackingSettings::StaticClass();
}
struct Z_Construct_UClass_ULeapTrackingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UltrleapTrackingSettings \n */" },
		{ "IncludePath", "LeapTrackingSettings.h" },
		{ "ModuleRelativePath", "Public/LeapTrackingSettings.h" },
		{ "ToolTip", "UltrleapTrackingSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UltraleapHints_MetaData[] = {
		{ "Category", "Ultraleap Settings" },
		{ "ModuleRelativePath", "Public/LeapTrackingSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UltraleapHints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UltraleapHints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapTrackingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULeapTrackingSettings_Statics::NewProp_UltraleapHints_Inner = { "UltraleapHints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULeapTrackingSettings_Statics::NewProp_UltraleapHints = { "UltraleapHints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapTrackingSettings, UltraleapHints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UltraleapHints_MetaData), NewProp_UltraleapHints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapTrackingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapTrackingSettings_Statics::NewProp_UltraleapHints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapTrackingSettings_Statics::NewProp_UltraleapHints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTrackingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeapTrackingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTrackingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeapTrackingSettings_Statics::ClassParams = {
	&ULeapTrackingSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULeapTrackingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTrackingSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTrackingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeapTrackingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeapTrackingSettings()
{
	if (!Z_Registration_Info_UClass_ULeapTrackingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeapTrackingSettings.OuterSingleton, Z_Construct_UClass_ULeapTrackingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeapTrackingSettings.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ULeapTrackingSettings>()
{
	return ULeapTrackingSettings::StaticClass();
}
ULeapTrackingSettings::ULeapTrackingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapTrackingSettings);
ULeapTrackingSettings::~ULeapTrackingSettings() {}
// End Class ULeapTrackingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTrackingSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeapTrackingSettings, ULeapTrackingSettings::StaticClass, TEXT("ULeapTrackingSettings"), &Z_Registration_Info_UClass_ULeapTrackingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeapTrackingSettings), 2583954086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTrackingSettings_h_2549456204(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTrackingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTrackingSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
