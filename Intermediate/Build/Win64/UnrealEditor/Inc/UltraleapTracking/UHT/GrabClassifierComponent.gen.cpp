// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/InteractionEngine/GrabClassifierComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabClassifierComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UGrabClassifierProbe();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UGrabClassifierProbe_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UIEGrabClassifierComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UIEGrabClassifierComponent_NoRegister();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FGrabClassifierParams();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Delegate FGrabClassifierGrabStateChanged
struct Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms
	{
		UIEGrabClassifierComponent* Source;
		bool IsGrabbing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static void NewProp_IsGrabbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGrabbing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms, Source), Z_Construct_UClass_UIEGrabClassifierComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
void Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing_SetBit(void* Obj)
{
	((_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms*)Obj)->IsGrabbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing = { "IsGrabbing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms), &Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "GrabClassifierGrabStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGrabClassifierGrabStateChanged_DelegateWrapper(const FMulticastScriptDelegate& GrabClassifierGrabStateChanged, UIEGrabClassifierComponent* Source, bool IsGrabbing)
{
	struct _Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms
	{
		UIEGrabClassifierComponent* Source;
		bool IsGrabbing;
	};
	_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms Parms;
	Parms.Source=Source;
	Parms.IsGrabbing=IsGrabbing ? true : false;
	GrabClassifierGrabStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGrabClassifierGrabStateChanged

// Begin ScriptStruct FGrabClassifierParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrabClassifierParams;
class UScriptStruct* FGrabClassifierParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrabClassifierParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrabClassifierParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrabClassifierParams, (UObject*)Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("GrabClassifierParams"));
	}
	return Z_Registration_Info_UScriptStruct_GrabClassifierParams.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FGrabClassifierParams>()
{
	return FGrabClassifierParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGrabClassifierParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerStickiness_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The amount of curl hysteresis on each finger type </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The amount of curl hysteresis on each finger type </summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbStickiness_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCurl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The minimum and maximum curl values fingers are allowed to \"Grab\" within </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The minimum and maximum curl values fingers are allowed to \"Grab\" within </summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumCurl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerTipRadius_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The radius considered for intersection around the fingertips </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The radius considered for intersection around the fingertips </summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbTipRadius_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabCooldown_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The minimum amount of time between repeated grabs of a single object </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The minimum amount of time between repeated grabs of a single object </summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCurlVelocity_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The maximum rate that the fingers are extending where grabs are considered. </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The maximum rate that the fingers are extending where grabs are considered. </summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbedMaximumCurlVelocity_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDistanceFromHand_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseGrabCooldown_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerStickiness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbStickiness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumCurl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumCurl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerTipRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbTipRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumCurlVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabbedMaximumCurlVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDistanceFromHand;
	static void NewProp_UseGrabCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseGrabCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrabClassifierParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerStickiness = { "FingerStickiness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, FingerStickiness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerStickiness_MetaData), NewProp_FingerStickiness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbStickiness = { "ThumbStickiness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, ThumbStickiness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbStickiness_MetaData), NewProp_ThumbStickiness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurl = { "MaximumCurl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, MaximumCurl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumCurl_MetaData), NewProp_MaximumCurl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MinimumCurl = { "MinimumCurl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, MinimumCurl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumCurl_MetaData), NewProp_MinimumCurl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerTipRadius = { "FingerTipRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, FingerTipRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerTipRadius_MetaData), NewProp_FingerTipRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbTipRadius = { "ThumbTipRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, ThumbTipRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbTipRadius_MetaData), NewProp_ThumbTipRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabCooldown = { "GrabCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, GrabCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabCooldown_MetaData), NewProp_GrabCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurlVelocity = { "MaximumCurlVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, MaximumCurlVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumCurlVelocity_MetaData), NewProp_MaximumCurlVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabbedMaximumCurlVelocity = { "GrabbedMaximumCurlVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, GrabbedMaximumCurlVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbedMaximumCurlVelocity_MetaData), NewProp_GrabbedMaximumCurlVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumDistanceFromHand = { "MaximumDistanceFromHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabClassifierParams, MaximumDistanceFromHand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDistanceFromHand_MetaData), NewProp_MaximumDistanceFromHand_MetaData) };
void Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown_SetBit(void* Obj)
{
	((FGrabClassifierParams*)Obj)->UseGrabCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown = { "UseGrabCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrabClassifierParams), &Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseGrabCooldown_MetaData), NewProp_UseGrabCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerStickiness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbStickiness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MinimumCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerTipRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbTipRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurlVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabbedMaximumCurlVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumDistanceFromHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	nullptr,
	&NewStructOps,
	"GrabClassifierParams",
	Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::PropPointers),
	sizeof(FGrabClassifierParams),
	alignof(FGrabClassifierParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGrabClassifierParams()
{
	if (!Z_Registration_Info_UScriptStruct_GrabClassifierParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrabClassifierParams.InnerSingleton, Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GrabClassifierParams.InnerSingleton;
}
// End ScriptStruct FGrabClassifierParams

// Begin Class UGrabClassifierProbe
void UGrabClassifierProbe::StaticRegisterNativesUGrabClassifierProbe()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabClassifierProbe);
UClass* Z_Construct_UClass_UGrabClassifierProbe_NoRegister()
{
	return UGrabClassifierProbe::StaticClass();
}
struct Z_Construct_UClass_UGrabClassifierProbe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents the state of a contact probe, filled in in blueprint from skeleton bones */" },
		{ "IncludePath", "InteractionEngine/GrabClassifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Represents the state of a contact probe, filled in in blueprint from skeleton bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevCurl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInside_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandidateColliders_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Curl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevCurl;
	static void NewProp_IsInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInside;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandidateColliders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CandidateColliders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabClassifierProbe>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabClassifierProbe, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabClassifierProbe, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Curl = { "Curl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabClassifierProbe, Curl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curl_MetaData), NewProp_Curl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_PrevCurl = { "PrevCurl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabClassifierProbe, PrevCurl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevCurl_MetaData), NewProp_PrevCurl_MetaData) };
void Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside_SetBit(void* Obj)
{
	((UGrabClassifierProbe*)Obj)->IsInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside = { "IsInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGrabClassifierProbe), &Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInside_MetaData), NewProp_IsInside_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders_Inner = { "CandidateColliders", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders = { "CandidateColliders", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabClassifierProbe, CandidateColliders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandidateColliders_MetaData), NewProp_CandidateColliders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabClassifierProbe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Curl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_PrevCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrabClassifierProbe_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabClassifierProbe_Statics::ClassParams = {
	&UGrabClassifierProbe::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGrabClassifierProbe_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrabClassifierProbe_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrabClassifierProbe()
{
	if (!Z_Registration_Info_UClass_UGrabClassifierProbe.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabClassifierProbe.OuterSingleton, Z_Construct_UClass_UGrabClassifierProbe_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrabClassifierProbe.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UGrabClassifierProbe>()
{
	return UGrabClassifierProbe::StaticClass();
}
UGrabClassifierProbe::UGrabClassifierProbe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabClassifierProbe);
UGrabClassifierProbe::~UGrabClassifierProbe() {}
// End Class UGrabClassifierProbe

// Begin Class UIEGrabClassifierComponent Function ForceReset
struct Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  Force reset of the grab state, used when grab state in BP is forced on tracking lost\n\x09 *  without this, a spurious ungrab event from the grab classifier will occur on tracking found */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Force reset of the grab state, used when grab state in BP is forced on tracking lost\nwithout this, a spurious ungrab event from the grab classifier will occur on tracking found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIEGrabClassifierComponent, nullptr, "ForceReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIEGrabClassifierComponent::execForceReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceReset();
	P_NATIVE_END;
}
// End Class UIEGrabClassifierComponent Function ForceReset

// Begin Class UIEGrabClassifierComponent Function UpdateClassifier
struct Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics
{
	struct IEGrabClassifierComponent_eventUpdateClassifier_Parms
	{
		const USceneComponent* Hand;
		TArray<UGrabClassifierProbe*> Probes;
		bool IgnoreTemporal;
		bool IsLeftHand;
		float DeltaTime;
		bool IsGrabbed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  Logic for grabbing, called from blueprint, implemented in C++ for simplicity and parity with C# */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Logic for grabbing, called from blueprint, implemented in C++ for simplicity and parity with C#" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreTemporal_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLeftHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGrabbed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Probes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Probes;
	static void NewProp_IgnoreTemporal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreTemporal;
	static void NewProp_IsLeftHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLeftHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_IsGrabbed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGrabbed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IEGrabClassifierComponent_eventUpdateClassifier_Parms, Hand), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hand_MetaData), NewProp_Hand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes_Inner = { "Probes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGrabClassifierProbe_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes = { "Probes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IEGrabClassifierComponent_eventUpdateClassifier_Parms, Probes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probes_MetaData), NewProp_Probes_MetaData) };
void Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal_SetBit(void* Obj)
{
	((IEGrabClassifierComponent_eventUpdateClassifier_Parms*)Obj)->IgnoreTemporal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal = { "IgnoreTemporal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IEGrabClassifierComponent_eventUpdateClassifier_Parms), &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreTemporal_MetaData), NewProp_IgnoreTemporal_MetaData) };
void Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand_SetBit(void* Obj)
{
	((IEGrabClassifierComponent_eventUpdateClassifier_Parms*)Obj)->IsLeftHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand = { "IsLeftHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IEGrabClassifierComponent_eventUpdateClassifier_Parms), &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLeftHand_MetaData), NewProp_IsLeftHand_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IEGrabClassifierComponent_eventUpdateClassifier_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
void Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed_SetBit(void* Obj)
{
	((IEGrabClassifierComponent_eventUpdateClassifier_Parms*)Obj)->IsGrabbed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed = { "IsGrabbed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IEGrabClassifierComponent_eventUpdateClassifier_Parms), &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGrabbed_MetaData), NewProp_IsGrabbed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIEGrabClassifierComponent, nullptr, "UpdateClassifier", nullptr, nullptr, Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::IEGrabClassifierComponent_eventUpdateClassifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::IEGrabClassifierComponent_eventUpdateClassifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIEGrabClassifierComponent::execUpdateClassifier)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Hand);
	P_GET_TARRAY_REF(UGrabClassifierProbe*,Z_Param_Out_Probes);
	P_GET_UBOOL(Z_Param_IgnoreTemporal);
	P_GET_UBOOL(Z_Param_IsLeftHand);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_IsGrabbed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateClassifier(Z_Param_Hand,Z_Param_Out_Probes,Z_Param_IgnoreTemporal,Z_Param_IsLeftHand,Z_Param_DeltaTime,Z_Param_IsGrabbed);
	P_NATIVE_END;
}
// End Class UIEGrabClassifierComponent Function UpdateClassifier

// Begin Class UIEGrabClassifierComponent
void UIEGrabClassifierComponent::StaticRegisterNativesUIEGrabClassifierComponent()
{
	UClass* Class = UIEGrabClassifierComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceReset", &UIEGrabClassifierComponent::execForceReset },
		{ "UpdateClassifier", &UIEGrabClassifierComponent::execUpdateClassifier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIEGrabClassifierComponent);
UClass* Z_Construct_UClass_UIEGrabClassifierComponent_NoRegister()
{
	return UIEGrabClassifierComponent::StaticClass();
}
struct Z_Construct_UClass_UIEGrabClassifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Manages logic for Grabbing, based on the Unity Interaction Engine equivalent */" },
		{ "IncludePath", "InteractionEngine/GrabClassifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Manages logic for Grabbing, based on the Unity Interaction Engine equivalent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  Grab classifier behavior, initialised in blueprint */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Grab classifier behavior, initialised in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsThisControllerGrabbing_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevThisControllerGrabbing_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownProgress_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInside_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIsGrabbingChanged_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  called when the grab state has changed */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "called when the grab state has changed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static void NewProp_IsThisControllerGrabbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsThisControllerGrabbing;
	static void NewProp_PrevThisControllerGrabbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrevThisControllerGrabbing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInside;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsGrabbingChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset, "ForceReset" }, // 4062616862
		{ &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier, "UpdateClassifier" }, // 2099733685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIEGrabClassifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, Params), Z_Construct_UScriptStruct_FGrabClassifierParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 3622831572
void Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing_SetBit(void* Obj)
{
	((UIEGrabClassifierComponent*)Obj)->IsThisControllerGrabbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing = { "IsThisControllerGrabbing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIEGrabClassifierComponent), &Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsThisControllerGrabbing_MetaData), NewProp_IsThisControllerGrabbing_MetaData) };
void Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing_SetBit(void* Obj)
{
	((UIEGrabClassifierComponent*)Obj)->PrevThisControllerGrabbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing = { "PrevThisControllerGrabbing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIEGrabClassifierComponent), &Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevThisControllerGrabbing_MetaData), NewProp_PrevThisControllerGrabbing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_CoolDownProgress = { "CoolDownProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, CoolDownProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolDownProgress_MetaData), NewProp_CoolDownProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_NumInside = { "NumInside", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, NumInside), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInside_MetaData), NewProp_NumInside_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_OnIsGrabbingChanged = { "OnIsGrabbingChanged", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, OnIsGrabbingChanged), Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIsGrabbingChanged_MetaData), NewProp_OnIsGrabbingChanged_MetaData) }; // 2105003192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIEGrabClassifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_CoolDownProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_NumInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_OnIsGrabbingChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIEGrabClassifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::ClassParams = {
	&UIEGrabClassifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIEGrabClassifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIEGrabClassifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIEGrabClassifierComponent()
{
	if (!Z_Registration_Info_UClass_UIEGrabClassifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIEGrabClassifierComponent.OuterSingleton, Z_Construct_UClass_UIEGrabClassifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIEGrabClassifierComponent.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UIEGrabClassifierComponent>()
{
	return UIEGrabClassifierComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIEGrabClassifierComponent);
UIEGrabClassifierComponent::~UIEGrabClassifierComponent() {}
// End Class UIEGrabClassifierComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGrabClassifierParams::StaticStruct, Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewStructOps, TEXT("GrabClassifierParams"), &Z_Registration_Info_UScriptStruct_GrabClassifierParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrabClassifierParams), 3622831572U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrabClassifierProbe, UGrabClassifierProbe::StaticClass, TEXT("UGrabClassifierProbe"), &Z_Registration_Info_UClass_UGrabClassifierProbe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabClassifierProbe), 2119205283U) },
		{ Z_Construct_UClass_UIEGrabClassifierComponent, UIEGrabClassifierComponent::StaticClass, TEXT("UIEGrabClassifierComponent"), &Z_Registration_Info_UClass_UIEGrabClassifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIEGrabClassifierComponent), 178946269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_2595097749(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
