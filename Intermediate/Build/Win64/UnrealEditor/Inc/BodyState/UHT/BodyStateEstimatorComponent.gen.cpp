// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/BodyStateEstimatorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateEstimatorComponent() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateEstimatorComponent();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateEstimatorComponent_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
BODYSTATE_API UFunction* Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin Delegate FBodyStateSkeletonSignature
struct Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics
{
	struct _Script_BodyState_eventBodyStateSkeletonSignature_Parms
	{
		UBodyStateSkeleton* Skeleton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BodyState_eventBodyStateSkeletonSignature_Parms, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::NewProp_Skeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BodyState, nullptr, "BodyStateSkeletonSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::_Script_BodyState_eventBodyStateSkeletonSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::_Script_BodyState_eventBodyStateSkeletonSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBodyStateSkeletonSignature_DelegateWrapper(const FMulticastScriptDelegate& BodyStateSkeletonSignature, UBodyStateSkeleton* Skeleton)
{
	struct _Script_BodyState_eventBodyStateSkeletonSignature_Parms
	{
		UBodyStateSkeleton* Skeleton;
	};
	_Script_BodyState_eventBodyStateSkeletonSignature_Parms Parms;
	Parms.Skeleton=Skeleton;
	BodyStateSkeletonSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBodyStateSkeletonSignature

// Begin Class UBodyStateEstimatorComponent
void UBodyStateEstimatorComponent::StaticRegisterNativesUBodyStateEstimatorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateEstimatorComponent);
UClass* Z_Construct_UClass_UBodyStateEstimatorComponent_NoRegister()
{
	return UBodyStateEstimatorComponent::StaticClass();
}
struct Z_Construct_UClass_UBodyStateEstimatorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "BodyState" },
		{ "Comment", "/**\n * Offers an estimation event with a skeleton which will be applied to the merged bodystate.\n * A good place to experiment with derived bodystate bones\n */" },
		{ "IncludePath", "BodyStateEstimatorComponent.h" },
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
		{ "ToolTip", "Offers an estimation event with a skeleton which will be applied to the merged bodystate.\nA good place to experiment with derived bodystate bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateSkeletonEstimation_MetaData[] = {
		{ "Category", "BodyState Estimation Events" },
		{ "Comment", "/** Called when the skeleton should be updated before it propagates to all listeners */" },
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
		{ "ToolTip", "Called when the skeleton should be updated before it propagates to all listeners" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateSkeletonEstimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateEstimatorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation = { "OnUpdateSkeletonEstimation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBodyStateEstimatorComponent, OnUpdateSkeletonEstimation), Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdateSkeletonEstimation_MetaData), NewProp_OnUpdateSkeletonEstimation_MetaData) }; // 2469080611
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::ClassParams = {
	&UBodyStateEstimatorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateEstimatorComponent()
{
	if (!Z_Registration_Info_UClass_UBodyStateEstimatorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateEstimatorComponent.OuterSingleton, Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateEstimatorComponent.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateEstimatorComponent>()
{
	return UBodyStateEstimatorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateEstimatorComponent);
UBodyStateEstimatorComponent::~UBodyStateEstimatorComponent() {}
// End Class UBodyStateEstimatorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateEstimatorComponent, UBodyStateEstimatorComponent::StaticClass, TEXT("UBodyStateEstimatorComponent"), &Z_Registration_Info_UClass_UBodyStateEstimatorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateEstimatorComponent), 1397958981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_251494696(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateEstimatorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
