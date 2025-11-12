// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Private/TrackingDeviceBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackingDeviceBaseActor() {}

// Begin Cross Module References
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ATrackingDeviceBaseActor();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ATrackingDeviceBaseActor_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_AUltraleapTickInEditorBaseActor();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class ATrackingDeviceBaseActor
void ATrackingDeviceBaseActor::StaticRegisterNativesATrackingDeviceBaseActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrackingDeviceBaseActor);
UClass* Z_Construct_UClass_ATrackingDeviceBaseActor_NoRegister()
{
	return ATrackingDeviceBaseActor::StaticClass();
}
struct Z_Construct_UClass_ATrackingDeviceBaseActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TrackingDeviceBaseActor.h" },
		{ "ModuleRelativePath", "Private/TrackingDeviceBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeapComponent_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TrackingDeviceBaseActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeapComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrackingDeviceBaseActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::NewProp_LeapComponent = { "LeapComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrackingDeviceBaseActor, LeapComponent), Z_Construct_UClass_ULeapComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeapComponent_MetaData), NewProp_LeapComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::NewProp_LeapComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AUltraleapTickInEditorBaseActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::ClassParams = {
	&ATrackingDeviceBaseActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrackingDeviceBaseActor()
{
	if (!Z_Registration_Info_UClass_ATrackingDeviceBaseActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrackingDeviceBaseActor.OuterSingleton, Z_Construct_UClass_ATrackingDeviceBaseActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrackingDeviceBaseActor.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ATrackingDeviceBaseActor>()
{
	return ATrackingDeviceBaseActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrackingDeviceBaseActor);
ATrackingDeviceBaseActor::~ATrackingDeviceBaseActor() {}
// End Class ATrackingDeviceBaseActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_TrackingDeviceBaseActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrackingDeviceBaseActor, ATrackingDeviceBaseActor::StaticClass, TEXT("ATrackingDeviceBaseActor"), &Z_Registration_Info_UClass_ATrackingDeviceBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrackingDeviceBaseActor), 2160039099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_TrackingDeviceBaseActor_h_3824865823(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_TrackingDeviceBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_TrackingDeviceBaseActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
