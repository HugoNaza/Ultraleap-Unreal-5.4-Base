// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/UltraleapInputListenerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapInputListenerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapInputListenerComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapInputListenerComponent_NoRegister();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Delegate FOnInputActionUL
struct Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "OnInputActionUL__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInputActionUL_DelegateWrapper(const FScriptDelegate& OnInputActionUL)
{
	OnInputActionUL.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnInputActionUL

// Begin Class UUltraleapInputListenerComponent Function ListenForInputAction
struct Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics
{
	struct UltraleapInputListenerComponent_eventListenForInputAction_Parms
	{
		FName ActionName;
		TEnumAsByte<EInputEvent> EventType;
		bool bConsume;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and\n\x09 * that we're not currently in UI-Only Input Mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
		{ "ToolTip", "Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and\nthat we're not currently in UI-Only Input Mode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static void NewProp_bConsume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsume;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventListenForInputAction_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventListenForInputAction_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(0, nullptr) }; // 2776698617
void Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume_SetBit(void* Obj)
{
	((UltraleapInputListenerComponent_eventListenForInputAction_Parms*)Obj)->bConsume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume = { "bConsume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UltraleapInputListenerComponent_eventListenForInputAction_Parms), &Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventListenForInputAction_Parms, Callback), Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3843609918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapInputListenerComponent, nullptr, "ListenForInputAction", nullptr, nullptr, Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::UltraleapInputListenerComponent_eventListenForInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::UltraleapInputListenerComponent_eventListenForInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapInputListenerComponent::execListenForInputAction)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
	P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
	P_GET_UBOOL(Z_Param_bConsume);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListenForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FOnInputActionUL(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UUltraleapInputListenerComponent Function ListenForInputAction

// Begin Class UUltraleapInputListenerComponent Function StopListeningForInputAction
struct Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics
{
	struct UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms
	{
		FName ActionName;
		TEnumAsByte<EInputEvent> EventType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Removes the binding for a particular action's callback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
		{ "ToolTip", "Removes the binding for a particular action's callback." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(0, nullptr) }; // 2776698617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_EventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapInputListenerComponent, nullptr, "StopListeningForInputAction", nullptr, nullptr, Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapInputListenerComponent::execStopListeningForInputAction)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
	P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopListeningForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType));
	P_NATIVE_END;
}
// End Class UUltraleapInputListenerComponent Function StopListeningForInputAction

// Begin Class UUltraleapInputListenerComponent
void UUltraleapInputListenerComponent::StaticRegisterNativesUUltraleapInputListenerComponent()
{
	UClass* Class = UUltraleapInputListenerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ListenForInputAction", &UUltraleapInputListenerComponent::execListenForInputAction },
		{ "StopListeningForInputAction", &UUltraleapInputListenerComponent::execStopListeningForInputAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUltraleapInputListenerComponent);
UClass* Z_Construct_UClass_UUltraleapInputListenerComponent_NoRegister()
{
	return UUltraleapInputListenerComponent::StaticClass();
}
struct Z_Construct_UClass_UUltraleapInputListenerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Customisable input event listener, used to dynamically subscribe to input events from blueprint\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "UltraleapInputListenerComponent.h" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
		{ "ToolTip", "Customisable input event listener, used to dynamically subscribe to input events from blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStopAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction, "ListenForInputAction" }, // 2141989854
		{ &Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction, "StopListeningForInputAction" }, // 1522161973
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUltraleapInputListenerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction_SetBit(void* Obj)
{
	((UUltraleapInputListenerComponent*)Obj)->bStopAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction = { "bStopAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UUltraleapInputListenerComponent), &Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopAction_MetaData), NewProp_bStopAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUltraleapInputListenerComponent, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0020080000282008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUltraleapInputListenerComponent, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputComponent_MetaData), NewProp_InputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_InputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::ClassParams = {
	&UUltraleapInputListenerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUltraleapInputListenerComponent()
{
	if (!Z_Registration_Info_UClass_UUltraleapInputListenerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUltraleapInputListenerComponent.OuterSingleton, Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUltraleapInputListenerComponent.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UUltraleapInputListenerComponent>()
{
	return UUltraleapInputListenerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUltraleapInputListenerComponent);
UUltraleapInputListenerComponent::~UUltraleapInputListenerComponent() {}
// End Class UUltraleapInputListenerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapInputListenerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUltraleapInputListenerComponent, UUltraleapInputListenerComponent::StaticClass, TEXT("UUltraleapInputListenerComponent"), &Z_Registration_Info_UClass_UUltraleapInputListenerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUltraleapInputListenerComponent), 2478313550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapInputListenerComponent_h_1733442786(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapInputListenerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_UltraleapInputListenerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
