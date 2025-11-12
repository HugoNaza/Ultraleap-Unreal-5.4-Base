// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/UltraleapTickInEditorBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapTickInEditorBaseActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_AUltraleapTickInEditorBaseActor();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_AUltraleapTickInEditorBaseActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class AUltraleapTickInEditorBaseActor Function EditorTick
struct UltraleapTickInEditorBaseActor_eventEditorTick_Parms
{
	float DeltaTime;
};
static FName NAME_AUltraleapTickInEditorBaseActor_EditorTick = FName(TEXT("EditorTick"));
void AUltraleapTickInEditorBaseActor::EditorTick(float DeltaTime)
{
	UltraleapTickInEditorBaseActor_eventEditorTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_AUltraleapTickInEditorBaseActor_EditorTick),&Parms);
}
struct Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Ultraleap Events" },
		{ "Comment", "/** Tick that runs ONLY in the editor viewport.*/" },
		{ "ModuleRelativePath", "Public/UltraleapTickInEditorBaseActor.h" },
		{ "ToolTip", "Tick that runs ONLY in the editor viewport." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapTickInEditorBaseActor_eventEditorTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUltraleapTickInEditorBaseActor, nullptr, "EditorTick", nullptr, nullptr, Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::PropPointers), sizeof(UltraleapTickInEditorBaseActor_eventEditorTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(UltraleapTickInEditorBaseActor_eventEditorTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AUltraleapTickInEditorBaseActor Function EditorTick

// Begin Class AUltraleapTickInEditorBaseActor
void AUltraleapTickInEditorBaseActor::StaticRegisterNativesAUltraleapTickInEditorBaseActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUltraleapTickInEditorBaseActor);
UClass* Z_Construct_UClass_AUltraleapTickInEditorBaseActor_NoRegister()
{
	return AUltraleapTickInEditorBaseActor::StaticClass();
}
struct Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UltraleapTickInEditorBaseActor.h" },
		{ "ModuleRelativePath", "Public/UltraleapTickInEditorBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickInEditor_MetaData[] = {
		{ "Category", "Ultraleap Events" },
		{ "ModuleRelativePath", "Public/UltraleapTickInEditorBaseActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTickInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUltraleapTickInEditorBaseActor_EditorTick, "EditorTick" }, // 964838868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUltraleapTickInEditorBaseActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::NewProp_bTickInEditor_SetBit(void* Obj)
{
	((AUltraleapTickInEditorBaseActor*)Obj)->bTickInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::NewProp_bTickInEditor = { "bTickInEditor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUltraleapTickInEditorBaseActor), &Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::NewProp_bTickInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickInEditor_MetaData), NewProp_bTickInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::NewProp_bTickInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::ClassParams = {
	&AUltraleapTickInEditorBaseActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUltraleapTickInEditorBaseActor()
{
	if (!Z_Registration_Info_UClass_AUltraleapTickInEditorBaseActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUltraleapTickInEditorBaseActor.OuterSingleton, Z_Construct_UClass_AUltraleapTickInEditorBaseActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUltraleapTickInEditorBaseActor.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<AUltraleapTickInEditorBaseActor>()
{
	return AUltraleapTickInEditorBaseActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUltraleapTickInEditorBaseActor);
AUltraleapTickInEditorBaseActor::~AUltraleapTickInEditorBaseActor() {}
// End Class AUltraleapTickInEditorBaseActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTickInEditorBaseActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUltraleapTickInEditorBaseActor, AUltraleapTickInEditorBaseActor::StaticClass, TEXT("AUltraleapTickInEditorBaseActor"), &Z_Registration_Info_UClass_AUltraleapTickInEditorBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUltraleapTickInEditorBaseActor), 267188586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTickInEditorBaseActor_h_4273945515(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTickInEditorBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapTickInEditorBaseActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
