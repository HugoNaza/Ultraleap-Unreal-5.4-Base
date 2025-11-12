// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/InteractionEngine/GraspedMovementHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraspedMovementHandler() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UGraspedMovementHandler();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UGraspedMovementHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class UGraspedMovementHandler Function MoveTo
struct Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics
{
	struct GraspedMovementHandler_eventMoveTo_Parms
	{
		FVector SolvedPosition;
		FRotator SolvedRotation;
		UPrimitiveComponent* RigidBody;
		bool JustGrasped;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/** Helper, port of MoveTo() - updates grabbed primitive's velocity base on desired target\n\x09 * location*/" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GraspedMovementHandler.h" },
		{ "ToolTip", "Helper, port of MoveTo() - updates grabbed primitive's velocity base on desired target\nlocation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolvedPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolvedRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidBody_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JustGrasped_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolvedPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolvedRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RigidBody;
	static void NewProp_JustGrasped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_JustGrasped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_SolvedPosition = { "SolvedPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraspedMovementHandler_eventMoveTo_Parms, SolvedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolvedPosition_MetaData), NewProp_SolvedPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_SolvedRotation = { "SolvedRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraspedMovementHandler_eventMoveTo_Parms, SolvedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolvedRotation_MetaData), NewProp_SolvedRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_RigidBody = { "RigidBody", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraspedMovementHandler_eventMoveTo_Parms, RigidBody), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidBody_MetaData), NewProp_RigidBody_MetaData) };
void Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_JustGrasped_SetBit(void* Obj)
{
	((GraspedMovementHandler_eventMoveTo_Parms*)Obj)->JustGrasped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_JustGrasped = { "JustGrasped", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GraspedMovementHandler_eventMoveTo_Parms), &Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_JustGrasped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JustGrasped_MetaData), NewProp_JustGrasped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_SolvedPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_SolvedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_RigidBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::NewProp_JustGrasped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraspedMovementHandler, nullptr, "MoveTo", nullptr, nullptr, Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::GraspedMovementHandler_eventMoveTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::GraspedMovementHandler_eventMoveTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraspedMovementHandler_MoveTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraspedMovementHandler_MoveTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGraspedMovementHandler::execMoveTo)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SolvedPosition);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_SolvedRotation);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_RigidBody);
	P_GET_UBOOL(Z_Param_JustGrasped);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveTo(Z_Param_Out_SolvedPosition,Z_Param_Out_SolvedRotation,Z_Param_RigidBody,Z_Param_JustGrasped);
	P_NATIVE_END;
}
// End Class UGraspedMovementHandler Function MoveTo

// Begin Class UGraspedMovementHandler
void UGraspedMovementHandler::StaticRegisterNativesUGraspedMovementHandler()
{
	UClass* Class = UGraspedMovementHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveTo", &UGraspedMovementHandler::execMoveTo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraspedMovementHandler);
UClass* Z_Construct_UClass_UGraspedMovementHandler_NoRegister()
{
	return UGraspedMovementHandler::StaticClass();
}
struct Z_Construct_UClass_UGraspedMovementHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractionEngine/GraspedMovementHandler.h" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GraspedMovementHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowStrength_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GraspedMovementHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GraspedMovementHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationScale_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GraspedMovementHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGraspedMovementHandler_MoveTo, "MoveTo" }, // 18899366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraspedMovementHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraspedMovementHandler_Statics::NewProp_FollowStrength = { "FollowStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraspedMovementHandler, FollowStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowStrength_MetaData), NewProp_FollowStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraspedMovementHandler_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraspedMovementHandler, MaxVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVelocity_MetaData), NewProp_MaxVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraspedMovementHandler_Statics::NewProp_SimulationScale = { "SimulationScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraspedMovementHandler, SimulationScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationScale_MetaData), NewProp_SimulationScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraspedMovementHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraspedMovementHandler_Statics::NewProp_FollowStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraspedMovementHandler_Statics::NewProp_MaxVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraspedMovementHandler_Statics::NewProp_SimulationScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraspedMovementHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGraspedMovementHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraspedMovementHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraspedMovementHandler_Statics::ClassParams = {
	&UGraspedMovementHandler::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGraspedMovementHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGraspedMovementHandler_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraspedMovementHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraspedMovementHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraspedMovementHandler()
{
	if (!Z_Registration_Info_UClass_UGraspedMovementHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraspedMovementHandler.OuterSingleton, Z_Construct_UClass_UGraspedMovementHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraspedMovementHandler.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UGraspedMovementHandler>()
{
	return UGraspedMovementHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraspedMovementHandler);
UGraspedMovementHandler::~UGraspedMovementHandler() {}
// End Class UGraspedMovementHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GraspedMovementHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraspedMovementHandler, UGraspedMovementHandler::StaticClass, TEXT("UGraspedMovementHandler"), &Z_Registration_Info_UClass_UGraspedMovementHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraspedMovementHandler), 2809616580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GraspedMovementHandler_h_1860947821(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GraspedMovementHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GraspedMovementHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
