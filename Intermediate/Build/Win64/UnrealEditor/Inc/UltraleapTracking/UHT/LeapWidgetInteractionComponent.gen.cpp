// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapWidgetInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapWidgetInteractionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapWidgetInteractionComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapWidgetInteractionComponent_NoRegister();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_EHandType();
ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_EUIInteractionType();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Delegate FLeapRayComponentVisible
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapRayComponentVisible_Parms
	{
		bool Visible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::NewProp_Visible_SetBit(void* Obj)
{
	((_Script_UltraleapTracking_eventLeapRayComponentVisible_Parms*)Obj)->Visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UltraleapTracking_eventLeapRayComponentVisible_Parms), &Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::NewProp_Visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapRayComponentVisible__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapRayComponentVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapRayComponentVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapRayComponentVisible_DelegateWrapper(const FMulticastScriptDelegate& LeapRayComponentVisible, bool Visible)
{
	struct _Script_UltraleapTracking_eventLeapRayComponentVisible_Parms
	{
		bool Visible;
	};
	_Script_UltraleapTracking_eventLeapRayComponentVisible_Parms Parms;
	Parms.Visible=Visible ? true : false;
	LeapRayComponentVisible.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapRayComponentVisible

// Begin Class ULeapWidgetInteractionComponent
void ULeapWidgetInteractionComponent::StaticRegisterNativesULeapWidgetInteractionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeapWidgetInteractionComponent);
UClass* Z_Construct_UClass_ULeapWidgetInteractionComponent_NoRegister()
{
	return ULeapWidgetInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LeapUserInterface" },
		{ "Comment", "/**\n * This component will provide far field widgets with interactions\n * Will need to add 2 components, one for the left hand and one for the right one\n * For further information check our docs: https://docs.ultraleap.com/xr-and-tabletop/xr/unreal/plugin/features/UI-input-modules.html\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LeapWidgetInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "This component will provide far field widgets with interactions\nWill need to add 2 components, one for the left hand and one for the right one\nFor further information check our docs: https://docs.ultraleap.com/xr-and-tabletop/xr/unreal/plugin/features/UI-input-modules.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeapHandType_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "Comment", "/** Hand chirality, for left and right hands\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "Hand chirality, for left and right hands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInteraction_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "Comment", "/** WidgetInteraction type, this requires the InteractionDistance to be <= 30 in order to change to NEAR interactions\n\x09 *  Changing this to NEAR will enable interactions with widgets by direct touch\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "WidgetInteraction type, this requires the InteractionDistance to be <= 30 in order to change to NEAR interactions\nChanging this to NEAR will enable interactions with widgets by direct touch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorStaticMesh_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "Comment", "/** The default static mesh is a sphere, but can be changed to anything\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "The default static mesh is a sphere, but can be changed to anything" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBase_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "Comment", "/** This can be used to change the cursor's color\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "This can be used to change the cursor's color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorSize_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** This can be used to change the cursor's size\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "This can be used to change the cursor's size" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoMode_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "Comment", "/** This will automatically enable near distance interactions mode when the\n\x09 * Distance between the hand and widget is less than 40 cm\n\x09 * and far mode when the distance is more than 45 cm\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "This will automatically enable near distance interactions mode when the\nDistance between the hand and widget is less than 40 cm\nand far mode when the distance is more than 45 cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexDistanceFromUI_MetaData[] = {
		{ "Category", "UltraLeap UI Near" },
		{ "Comment", "/** The distance in cm betweenn index and UI to trigger touch interaction\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "The distance in cm betweenn index and UI to trigger touch interaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandVisibility_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WristRotationFactor_MetaData[] = {
		{ "Category", "UltraLeap UI Far" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Controls how much rotation wrist movment adds to the ray\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "Controls how much rotation wrist movment adds to the ray" },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "UltraLeap UI Far" },
		{ "Comment", "/** Interpolation param, lower values will reduce jitter but add lag\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "Interpolation param, lower values will reduce jitter but add lag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisCalibOffset_MetaData[] = {
		{ "Category", "UltraLeap UI Far" },
		{ "Comment", "/** For counter-acting the camera rotation to stabilize the rays\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "For counter-acting the camera rotation to stabilize the rays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisCalibOffset_MetaData[] = {
		{ "Category", "UltraLeap UI Far" },
		{ "Comment", "/** For counter-acting the camera rotation to stabilize the rays\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "For counter-acting the camera rotation to stabilize the rays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeChangeThreshold_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "Comment", "/** The threshold used to automatically switch between far/near interactions\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "The threshold used to automatically switch between far/near interactions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRayComponentVisible_MetaData[] = {
		{ "Category", "UltraLeap UI" },
		{ "Comment", "/** Event on rays visibility changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/LeapWidgetInteractionComponent.h" },
		{ "ToolTip", "Event on rays visibility changed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeapHandType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetInteraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CursorSize;
	static void NewProp_bAutoMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexDistanceFromUI;
	static void NewProp_HandVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HandVisibility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WristRotationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YAxisCalibOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZAxisCalibOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModeChangeThreshold;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRayComponentVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapWidgetInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_LeapHandType = { "LeapHandType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, LeapHandType), Z_Construct_UEnum_UltraleapTracking_EHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeapHandType_MetaData), NewProp_LeapHandType_MetaData) }; // 3755288617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_WidgetInteraction = { "WidgetInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, WidgetInteraction), Z_Construct_UEnum_UltraleapTracking_EUIInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInteraction_MetaData), NewProp_WidgetInteraction_MetaData) }; // 3803300760
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_CursorStaticMesh = { "CursorStaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, CursorStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorStaticMesh_MetaData), NewProp_CursorStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_MaterialBase = { "MaterialBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, MaterialBase), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBase_MetaData), NewProp_MaterialBase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_CursorSize = { "CursorSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, CursorSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorSize_MetaData), NewProp_CursorSize_MetaData) };
void Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_bAutoMode_SetBit(void* Obj)
{
	((ULeapWidgetInteractionComponent*)Obj)->bAutoMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_bAutoMode = { "bAutoMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULeapWidgetInteractionComponent), &Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_bAutoMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoMode_MetaData), NewProp_bAutoMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_IndexDistanceFromUI = { "IndexDistanceFromUI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, IndexDistanceFromUI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexDistanceFromUI_MetaData), NewProp_IndexDistanceFromUI_MetaData) };
void Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_HandVisibility_SetBit(void* Obj)
{
	((ULeapWidgetInteractionComponent*)Obj)->HandVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_HandVisibility = { "HandVisibility", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULeapWidgetInteractionComponent), &Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_HandVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandVisibility_MetaData), NewProp_HandVisibility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_WristRotationFactor = { "WristRotationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, WristRotationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WristRotationFactor_MetaData), NewProp_WristRotationFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeed_MetaData), NewProp_InterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_YAxisCalibOffset = { "YAxisCalibOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, YAxisCalibOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisCalibOffset_MetaData), NewProp_YAxisCalibOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_ZAxisCalibOffset = { "ZAxisCalibOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, ZAxisCalibOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxisCalibOffset_MetaData), NewProp_ZAxisCalibOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_ModeChangeThreshold = { "ModeChangeThreshold", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, ModeChangeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeChangeThreshold_MetaData), NewProp_ModeChangeThreshold_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_OnRayComponentVisible = { "OnRayComponentVisible", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapWidgetInteractionComponent, OnRayComponentVisible), Z_Construct_UDelegateFunction_UltraleapTracking_LeapRayComponentVisible__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRayComponentVisible_MetaData), NewProp_OnRayComponentVisible_MetaData) }; // 1147629112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_LeapHandType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_WidgetInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_CursorStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_MaterialBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_CursorSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_bAutoMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_IndexDistanceFromUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_HandVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_WristRotationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_InterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_YAxisCalibOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_ZAxisCalibOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_ModeChangeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::NewProp_OnRayComponentVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetInteractionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::ClassParams = {
	&ULeapWidgetInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeapWidgetInteractionComponent()
{
	if (!Z_Registration_Info_UClass_ULeapWidgetInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeapWidgetInteractionComponent.OuterSingleton, Z_Construct_UClass_ULeapWidgetInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeapWidgetInteractionComponent.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ULeapWidgetInteractionComponent>()
{
	return ULeapWidgetInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapWidgetInteractionComponent);
// End Class ULeapWidgetInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapWidgetInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeapWidgetInteractionComponent, ULeapWidgetInteractionComponent::StaticClass, TEXT("ULeapWidgetInteractionComponent"), &Z_Registration_Info_UClass_ULeapWidgetInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeapWidgetInteractionComponent), 2167228513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapWidgetInteractionComponent_h_1896277871(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapWidgetInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapWidgetInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
