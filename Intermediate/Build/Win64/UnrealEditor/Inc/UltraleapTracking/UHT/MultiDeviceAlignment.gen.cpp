// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Private/Multileap/MultiDeviceAlignment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiDeviceAlignment() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ATrackingDeviceBaseActor_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UMultiDeviceAlignment();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UMultiDeviceAlignment_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class UMultiDeviceAlignment Function UpdateTrackingDevices
struct Z_Construct_UFunction_UMultiDeviceAlignment_UpdateTrackingDevices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Multileap/MultiDeviceAlignment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiDeviceAlignment_UpdateTrackingDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiDeviceAlignment, nullptr, "UpdateTrackingDevices", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiDeviceAlignment_UpdateTrackingDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiDeviceAlignment_UpdateTrackingDevices_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMultiDeviceAlignment_UpdateTrackingDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiDeviceAlignment_UpdateTrackingDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiDeviceAlignment::execUpdateTrackingDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTrackingDevices();
	P_NATIVE_END;
}
// End Class UMultiDeviceAlignment Function UpdateTrackingDevices

// Begin Class UMultiDeviceAlignment
void UMultiDeviceAlignment::StaticRegisterNativesUMultiDeviceAlignment()
{
	UClass* Class = UMultiDeviceAlignment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateTrackingDevices", &UMultiDeviceAlignment::execUpdateTrackingDevices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiDeviceAlignment);
UClass* Z_Construct_UClass_UMultiDeviceAlignment_NoRegister()
{
	return UMultiDeviceAlignment::StaticClass();
}
struct Z_Construct_UClass_UMultiDeviceAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Multileap/MultiDeviceAlignment.h" },
		{ "ModuleRelativePath", "Private/Multileap/MultiDeviceAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDevice_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "ModuleRelativePath", "Private/Multileap/MultiDeviceAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDevice_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "ModuleRelativePath", "Private/Multileap/MultiDeviceAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentVariance_MetaData[] = {
		{ "Category", "Leap Devices" },
		{ "ModuleRelativePath", "Private/Multileap/MultiDeviceAlignment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceDevice;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDevice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignmentVariance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiDeviceAlignment_UpdateTrackingDevices, "UpdateTrackingDevices" }, // 3774956156
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiDeviceAlignment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiDeviceAlignment_Statics::NewProp_SourceDevice = { "SourceDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiDeviceAlignment, SourceDevice), Z_Construct_UClass_ATrackingDeviceBaseActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDevice_MetaData), NewProp_SourceDevice_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiDeviceAlignment_Statics::NewProp_TargetDevice = { "TargetDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiDeviceAlignment, TargetDevice), Z_Construct_UClass_ATrackingDeviceBaseActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDevice_MetaData), NewProp_TargetDevice_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiDeviceAlignment_Statics::NewProp_AlignmentVariance = { "AlignmentVariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiDeviceAlignment, AlignmentVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentVariance_MetaData), NewProp_AlignmentVariance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiDeviceAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiDeviceAlignment_Statics::NewProp_SourceDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiDeviceAlignment_Statics::NewProp_TargetDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiDeviceAlignment_Statics::NewProp_AlignmentVariance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDeviceAlignment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiDeviceAlignment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDeviceAlignment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiDeviceAlignment_Statics::ClassParams = {
	&UMultiDeviceAlignment::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMultiDeviceAlignment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDeviceAlignment_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiDeviceAlignment_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiDeviceAlignment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiDeviceAlignment()
{
	if (!Z_Registration_Info_UClass_UMultiDeviceAlignment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiDeviceAlignment.OuterSingleton, Z_Construct_UClass_UMultiDeviceAlignment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiDeviceAlignment.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UMultiDeviceAlignment>()
{
	return UMultiDeviceAlignment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiDeviceAlignment);
UMultiDeviceAlignment::~UMultiDeviceAlignment() {}
// End Class UMultiDeviceAlignment

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_MultiDeviceAlignment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiDeviceAlignment, UMultiDeviceAlignment::StaticClass, TEXT("UMultiDeviceAlignment"), &Z_Registration_Info_UClass_UMultiDeviceAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiDeviceAlignment), 1627313930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_MultiDeviceAlignment_h_2425831769(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_MultiDeviceAlignment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_Multileap_MultiDeviceAlignment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
