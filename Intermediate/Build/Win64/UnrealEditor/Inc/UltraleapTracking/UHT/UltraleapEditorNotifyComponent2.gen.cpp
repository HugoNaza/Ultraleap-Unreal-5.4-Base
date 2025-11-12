// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/UltraleapEditorNotifyComponent2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapEditorNotifyComponent2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapEditorNotifyComponent2();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapEditorNotifyComponent2_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class UUltraleapEditorNotifyComponent2 Function HandleComponentMove
struct UltraleapEditorNotifyComponent2_eventHandleComponentMove_Parms
{
	bool bFinished;
};
static FName NAME_UUltraleapEditorNotifyComponent2_HandleComponentMove = FName(TEXT("HandleComponentMove"));
void UUltraleapEditorNotifyComponent2::HandleComponentMove(bool bFinished)
{
	UltraleapEditorNotifyComponent2_eventHandleComponentMove_Parms Parms;
	Parms.bFinished=bFinished ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UUltraleapEditorNotifyComponent2_HandleComponentMove),&Parms);
}
struct Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// called after the component is moved in the editor, override in blueprint\n" },
		{ "ModuleRelativePath", "Public/UltraleapEditorNotifyComponent2.h" },
		{ "ToolTip", "called after the component is moved in the editor, override in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinished_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::NewProp_bFinished_SetBit(void* Obj)
{
	((UltraleapEditorNotifyComponent2_eventHandleComponentMove_Parms*)Obj)->bFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::NewProp_bFinished = { "bFinished", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UltraleapEditorNotifyComponent2_eventHandleComponentMove_Parms), &Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::NewProp_bFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinished_MetaData), NewProp_bFinished_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::NewProp_bFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapEditorNotifyComponent2, nullptr, "HandleComponentMove", nullptr, nullptr, Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::PropPointers), sizeof(UltraleapEditorNotifyComponent2_eventHandleComponentMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(UltraleapEditorNotifyComponent2_eventHandleComponentMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUltraleapEditorNotifyComponent2 Function HandleComponentMove

// Begin Class UUltraleapEditorNotifyComponent2
void UUltraleapEditorNotifyComponent2::StaticRegisterNativesUUltraleapEditorNotifyComponent2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUltraleapEditorNotifyComponent2);
UClass* Z_Construct_UClass_UUltraleapEditorNotifyComponent2_NoRegister()
{
	return UUltraleapEditorNotifyComponent2::StaticClass();
}
struct Z_Construct_UClass_UUltraleapEditorNotifyComponent2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "UltraleapEditorNotifyComponent2.h" },
		{ "ModuleRelativePath", "Public/UltraleapEditorNotifyComponent2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUltraleapEditorNotifyComponent2_HandleComponentMove, "HandleComponentMove" }, // 19366646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUltraleapEditorNotifyComponent2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUltraleapEditorNotifyComponent2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapEditorNotifyComponent2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUltraleapEditorNotifyComponent2_Statics::ClassParams = {
	&UUltraleapEditorNotifyComponent2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapEditorNotifyComponent2_Statics::Class_MetaDataParams), Z_Construct_UClass_UUltraleapEditorNotifyComponent2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUltraleapEditorNotifyComponent2()
{
	if (!Z_Registration_Info_UClass_UUltraleapEditorNotifyComponent2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUltraleapEditorNotifyComponent2.OuterSingleton, Z_Construct_UClass_UUltraleapEditorNotifyComponent2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUltraleapEditorNotifyComponent2.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UUltraleapEditorNotifyComponent2>()
{
	return UUltraleapEditorNotifyComponent2::StaticClass();
}
UUltraleapEditorNotifyComponent2::UUltraleapEditorNotifyComponent2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUltraleapEditorNotifyComponent2);
UUltraleapEditorNotifyComponent2::~UUltraleapEditorNotifyComponent2() {}
// End Class UUltraleapEditorNotifyComponent2

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapEditorNotifyComponent2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUltraleapEditorNotifyComponent2, UUltraleapEditorNotifyComponent2::StaticClass, TEXT("UUltraleapEditorNotifyComponent2"), &Z_Registration_Info_UClass_UUltraleapEditorNotifyComponent2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUltraleapEditorNotifyComponent2), 2797816136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapEditorNotifyComponent2_h_1617679522(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapEditorNotifyComponent2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapEditorNotifyComponent2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
