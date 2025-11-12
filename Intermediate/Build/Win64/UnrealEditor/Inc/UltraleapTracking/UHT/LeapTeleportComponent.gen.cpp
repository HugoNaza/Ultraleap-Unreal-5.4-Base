// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapTeleportComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapTeleportComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapTeleportComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapTeleportComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class ULeapTeleportComponent Function EndTeleportTrace
struct Z_Construct_UFunction_ULeapTeleportComponent_EndTeleportTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultrleap TeleportComponent" },
		{ "Comment", "/** Used to end teleport trace, it will destroy the Niagara Particle Systems\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
		{ "ToolTip", "Used to end teleport trace, it will destroy the Niagara Particle Systems" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapTeleportComponent_EndTeleportTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapTeleportComponent, nullptr, "EndTeleportTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_EndTeleportTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapTeleportComponent_EndTeleportTrace_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULeapTeleportComponent_EndTeleportTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapTeleportComponent_EndTeleportTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapTeleportComponent::execEndTeleportTrace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTeleportTrace();
	P_NATIVE_END;
}
// End Class ULeapTeleportComponent Function EndTeleportTrace

// Begin Class ULeapTeleportComponent Function SetTeleportCamera
struct Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics
{
	struct LeapTeleportComponent_eventSetTeleportCamera_Parms
	{
		UCameraComponent* Camera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultrleap teleportation" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapTeleportComponent_eventSetTeleportCamera_Parms, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapTeleportComponent, nullptr, "SetTeleportCamera", nullptr, nullptr, Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::LeapTeleportComponent_eventSetTeleportCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::LeapTeleportComponent_eventSetTeleportCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapTeleportComponent::execSetTeleportCamera)
{
	P_GET_OBJECT(UCameraComponent,Z_Param_Camera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeleportCamera(Z_Param_Camera);
	P_NATIVE_END;
}
// End Class ULeapTeleportComponent Function SetTeleportCamera

// Begin Class ULeapTeleportComponent Function StartTeleportTrace
struct Z_Construct_UFunction_ULeapTeleportComponent_StartTeleportTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultrleap TeleportComponent" },
		{ "Comment", "/** Used to start teleportaton trace, needs to be called once everytime teleportation \n\x09* is about to start, it will initialise the Niagara Particle Systems\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
		{ "ToolTip", "Used to start teleportaton trace, needs to be called once everytime teleportation\nis about to start, it will initialise the Niagara Particle Systems" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapTeleportComponent_StartTeleportTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapTeleportComponent, nullptr, "StartTeleportTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_StartTeleportTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapTeleportComponent_StartTeleportTrace_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULeapTeleportComponent_StartTeleportTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapTeleportComponent_StartTeleportTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapTeleportComponent::execStartTeleportTrace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTeleportTrace();
	P_NATIVE_END;
}
// End Class ULeapTeleportComponent Function StartTeleportTrace

// Begin Class ULeapTeleportComponent Function TeleportTrace
struct Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics
{
	struct LeapTeleportComponent_eventTeleportTrace_Parms
	{
		FVector Location;
		FVector Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultrleap TeleportComponent" },
		{ "Comment", "/** Used to update the teleportation trace on tick, requires real time updated \n\x09* Start teleportation location and the Direction of the teleport trace\n\x09*/" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
		{ "ToolTip", "Used to update the teleportation trace on tick, requires real time updated\nStart teleportation location and the Direction of the teleport trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapTeleportComponent_eventTeleportTrace_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapTeleportComponent_eventTeleportTrace_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapTeleportComponent, nullptr, "TeleportTrace", nullptr, nullptr, Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::LeapTeleportComponent_eventTeleportTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::LeapTeleportComponent_eventTeleportTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapTeleportComponent::execTeleportTrace)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeleportTrace(Z_Param_Location,Z_Param_Direction);
	P_NATIVE_END;
}
// End Class ULeapTeleportComponent Function TeleportTrace

// Begin Class ULeapTeleportComponent Function TryTeleport
struct Z_Construct_UFunction_ULeapTeleportComponent_TryTeleport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultrleap TeleportComponent" },
		{ "Comment", "/** Used to teleport in case a valid teleportation location is found\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
		{ "ToolTip", "Used to teleport in case a valid teleportation location is found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapTeleportComponent_TryTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapTeleportComponent, nullptr, "TryTeleport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapTeleportComponent_TryTeleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapTeleportComponent_TryTeleport_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULeapTeleportComponent_TryTeleport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapTeleportComponent_TryTeleport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapTeleportComponent::execTryTeleport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryTeleport();
	P_NATIVE_END;
}
// End Class ULeapTeleportComponent Function TryTeleport

// Begin Class ULeapTeleportComponent
void ULeapTeleportComponent::StaticRegisterNativesULeapTeleportComponent()
{
	UClass* Class = ULeapTeleportComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndTeleportTrace", &ULeapTeleportComponent::execEndTeleportTrace },
		{ "SetTeleportCamera", &ULeapTeleportComponent::execSetTeleportCamera },
		{ "StartTeleportTrace", &ULeapTeleportComponent::execStartTeleportTrace },
		{ "TeleportTrace", &ULeapTeleportComponent::execTeleportTrace },
		{ "TryTeleport", &ULeapTeleportComponent::execTryTeleport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeapTeleportComponent);
UClass* Z_Construct_UClass_ULeapTeleportComponent_NoRegister()
{
	return ULeapTeleportComponent::StaticClass();
}
struct Z_Construct_UClass_ULeapTeleportComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * This Actor Component can be used for teleportation, on begin play\n * the camera needs to be set to the vr pawn camera\n */" },
		{ "IncludePath", "LeapTeleportComponent.h" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
		{ "ToolTip", "This Actor Component can be used for teleportation, on begin play\nthe camera needs to be set to the vr pawn camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTeleportLaunchSpeed_MetaData[] = {
		{ "Category", "Ultraleap | TeleportComponent" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Ultraleap | TeleportComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeapTeleportComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalTeleportLaunchSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapTeleportComponent_EndTeleportTrace, "EndTeleportTrace" }, // 4260170385
		{ &Z_Construct_UFunction_ULeapTeleportComponent_SetTeleportCamera, "SetTeleportCamera" }, // 4052969815
		{ &Z_Construct_UFunction_ULeapTeleportComponent_StartTeleportTrace, "StartTeleportTrace" }, // 2250463326
		{ &Z_Construct_UFunction_ULeapTeleportComponent_TeleportTrace, "TeleportTrace" }, // 1382547110
		{ &Z_Construct_UFunction_ULeapTeleportComponent_TryTeleport, "TryTeleport" }, // 701971329
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapTeleportComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapTeleportComponent_Statics::NewProp_LocalTeleportLaunchSpeed = { "LocalTeleportLaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapTeleportComponent, LocalTeleportLaunchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTeleportLaunchSpeed_MetaData), NewProp_LocalTeleportLaunchSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapTeleportComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapTeleportComponent, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapTeleportComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapTeleportComponent_Statics::NewProp_LocalTeleportLaunchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapTeleportComponent_Statics::NewProp_CameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTeleportComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeapTeleportComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTeleportComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeapTeleportComponent_Statics::ClassParams = {
	&ULeapTeleportComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULeapTeleportComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTeleportComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapTeleportComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeapTeleportComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeapTeleportComponent()
{
	if (!Z_Registration_Info_UClass_ULeapTeleportComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeapTeleportComponent.OuterSingleton, Z_Construct_UClass_ULeapTeleportComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeapTeleportComponent.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ULeapTeleportComponent>()
{
	return ULeapTeleportComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapTeleportComponent);
ULeapTeleportComponent::~ULeapTeleportComponent() {}
// End Class ULeapTeleportComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTeleportComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeapTeleportComponent, ULeapTeleportComponent::StaticClass, TEXT("ULeapTeleportComponent"), &Z_Registration_Info_UClass_ULeapTeleportComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeapTeleportComponent), 689565560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTeleportComponent_h_3593010747(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTeleportComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapTeleportComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
