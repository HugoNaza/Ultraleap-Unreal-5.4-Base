// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapHandActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapHandActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ALeapHandActor();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ALeapHandActor_NoRegister();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Delegate FLeapHandFaceCamera
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapHandFaceCamera_Parms
	{
		bool bIsFacingCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//class UWidgetComponent;\n" },
		{ "ModuleRelativePath", "Public/LeapHandActor.h" },
		{ "ToolTip", "class UWidgetComponent;" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFacingCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFacingCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::NewProp_bIsFacingCamera_SetBit(void* Obj)
{
	((_Script_UltraleapTracking_eventLeapHandFaceCamera_Parms*)Obj)->bIsFacingCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::NewProp_bIsFacingCamera = { "bIsFacingCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UltraleapTracking_eventLeapHandFaceCamera_Parms), &Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::NewProp_bIsFacingCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::NewProp_bIsFacingCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapHandFaceCamera__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapHandFaceCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapHandFaceCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapHandFaceCamera_DelegateWrapper(const FMulticastScriptDelegate& LeapHandFaceCamera, bool bIsFacingCamera)
{
	struct _Script_UltraleapTracking_eventLeapHandFaceCamera_Parms
	{
		bool bIsFacingCamera;
	};
	_Script_UltraleapTracking_eventLeapHandFaceCamera_Parms Parms;
	Parms.bIsFacingCamera=bIsFacingCamera ? true : false;
	LeapHandFaceCamera.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapHandFaceCamera

// Begin Class ALeapHandActor
void ALeapHandActor::StaticRegisterNativesALeapHandActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeapHandActor);
UClass* Z_Construct_UClass_ALeapHandActor_NoRegister()
{
	return ALeapHandActor::StaticClass();
}
struct Z_Construct_UClass_ALeapHandActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This actor class has access to hand data and grab/pinch events \n * This can be used for JumpGem (teleportation) with inheritance\n */" },
		{ "IncludePath", "LeapHandActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LeapHandActor.h" },
		{ "ToolTip", "This actor class has access to hand data and grab/pinch events\nThis can be used for JumpGem (teleportation) with inheritance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "LeapHand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeapHandActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabPoseOffset_MetaData[] = {
		{ "Category", "LeapHand" },
		{ "ModuleRelativePath", "Public/LeapHandActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleasePoseOffset_MetaData[] = {
		{ "Category", "LeapHand" },
		{ "ModuleRelativePath", "Public/LeapHandActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapHandFaceCamera_MetaData[] = {
		{ "Category", "Leap Hand Events" },
		{ "ModuleRelativePath", "Public/LeapHandActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabPoseOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReleasePoseOffset;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapHandFaceCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeapHandActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeapHandActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeapHandActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALeapHandActor_Statics::NewProp_GrabPoseOffset = { "GrabPoseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeapHandActor, GrabPoseOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabPoseOffset_MetaData), NewProp_GrabPoseOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALeapHandActor_Statics::NewProp_ReleasePoseOffset = { "ReleasePoseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeapHandActor, ReleasePoseOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleasePoseOffset_MetaData), NewProp_ReleasePoseOffset_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALeapHandActor_Statics::NewProp_OnLeapHandFaceCamera = { "OnLeapHandFaceCamera", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeapHandActor, OnLeapHandFaceCamera), Z_Construct_UDelegateFunction_UltraleapTracking_LeapHandFaceCamera__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapHandFaceCamera_MetaData), NewProp_OnLeapHandFaceCamera_MetaData) }; // 1683959484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeapHandActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeapHandActor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeapHandActor_Statics::NewProp_GrabPoseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeapHandActor_Statics::NewProp_ReleasePoseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeapHandActor_Statics::NewProp_OnLeapHandFaceCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeapHandActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALeapHandActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeapHandActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeapHandActor_Statics::ClassParams = {
	&ALeapHandActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALeapHandActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALeapHandActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeapHandActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeapHandActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALeapHandActor()
{
	if (!Z_Registration_Info_UClass_ALeapHandActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeapHandActor.OuterSingleton, Z_Construct_UClass_ALeapHandActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALeapHandActor.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ALeapHandActor>()
{
	return ALeapHandActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALeapHandActor);
ALeapHandActor::~ALeapHandActor() {}
// End Class ALeapHandActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapHandActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALeapHandActor, ALeapHandActor::StaticClass, TEXT("ALeapHandActor"), &Z_Registration_Info_UClass_ALeapHandActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeapHandActor), 394490142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapHandActor_h_2561205592(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapHandActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapHandActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
