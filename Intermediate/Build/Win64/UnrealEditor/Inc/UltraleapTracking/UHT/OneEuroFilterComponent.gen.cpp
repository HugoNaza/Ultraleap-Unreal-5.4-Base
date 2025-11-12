// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/OneEuroFilterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneEuroFilterComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UOneEuroFilterComponent();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UOneEuroFilterComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class UOneEuroFilterComponent Function Filter
struct Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics
{
	struct OneEuroFilterComponent_eventFilter_Parms
	{
		FVector InRaw;
		float InDeltaTime;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Smooth vector */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Smooth vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRaw_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InRaw = { "InRaw", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventFilter_Parms, InRaw), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRaw_MetaData), NewProp_InRaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventFilter_Parms, InDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDeltaTime_MetaData), NewProp_InDeltaTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InRaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "Filter", nullptr, nullptr, Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::OneEuroFilterComponent_eventFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::OneEuroFilterComponent_eventFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_Filter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOneEuroFilterComponent::execFilter)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InRaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->Filter(Z_Param_Out_InRaw,Z_Param_InDeltaTime);
	P_NATIVE_END;
}
// End Class UOneEuroFilterComponent Function Filter

// Begin Class UOneEuroFilterComponent Function Init
struct Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics
{
	struct OneEuroFilterComponent_eventInit_Parms
	{
		float InMinCutoff;
		float InCutoffSlope;
		float InDeltaCutoff;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMinCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCutoffSlope_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDeltaCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinCutoff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InCutoffSlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaCutoff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InMinCutoff = { "InMinCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventInit_Parms, InMinCutoff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMinCutoff_MetaData), NewProp_InMinCutoff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InCutoffSlope = { "InCutoffSlope", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventInit_Parms, InCutoffSlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCutoffSlope_MetaData), NewProp_InCutoffSlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InDeltaCutoff = { "InDeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventInit_Parms, InDeltaCutoff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDeltaCutoff_MetaData), NewProp_InDeltaCutoff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InMinCutoff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InCutoffSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InDeltaCutoff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::OneEuroFilterComponent_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::OneEuroFilterComponent_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOneEuroFilterComponent::execInit)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMinCutoff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InCutoffSlope);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaCutoff);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InMinCutoff,Z_Param_InCutoffSlope,Z_Param_InDeltaCutoff);
	P_NATIVE_END;
}
// End Class UOneEuroFilterComponent Function Init

// Begin Class UOneEuroFilterComponent Function SetCutoffSlope
struct Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics
{
	struct OneEuroFilterComponent_eventSetCutoffSlope_Parms
	{
		float InCutoffSlope;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Set the cutoff slope */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Set the cutoff slope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCutoffSlope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InCutoffSlope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::NewProp_InCutoffSlope = { "InCutoffSlope", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventSetCutoffSlope_Parms, InCutoffSlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCutoffSlope_MetaData), NewProp_InCutoffSlope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::NewProp_InCutoffSlope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "SetCutoffSlope", nullptr, nullptr, Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::OneEuroFilterComponent_eventSetCutoffSlope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::OneEuroFilterComponent_eventSetCutoffSlope_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOneEuroFilterComponent::execSetCutoffSlope)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InCutoffSlope);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCutoffSlope(Z_Param_InCutoffSlope);
	P_NATIVE_END;
}
// End Class UOneEuroFilterComponent Function SetCutoffSlope

// Begin Class UOneEuroFilterComponent Function SetDeltaCutoff
struct Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics
{
	struct OneEuroFilterComponent_eventSetDeltaCutoff_Parms
	{
		float InDeltaCutoff;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Set the delta slope */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Set the delta slope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDeltaCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaCutoff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::NewProp_InDeltaCutoff = { "InDeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventSetDeltaCutoff_Parms, InDeltaCutoff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDeltaCutoff_MetaData), NewProp_InDeltaCutoff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::NewProp_InDeltaCutoff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "SetDeltaCutoff", nullptr, nullptr, Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::OneEuroFilterComponent_eventSetDeltaCutoff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::OneEuroFilterComponent_eventSetDeltaCutoff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOneEuroFilterComponent::execSetDeltaCutoff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaCutoff);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeltaCutoff(Z_Param_InDeltaCutoff);
	P_NATIVE_END;
}
// End Class UOneEuroFilterComponent Function SetDeltaCutoff

// Begin Class UOneEuroFilterComponent Function SetMinCutoff
struct Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics
{
	struct OneEuroFilterComponent_eventSetMinCutoff_Parms
	{
		float InMinCutoff;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Set the minimum cutoff */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Set the minimum cutoff" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMinCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinCutoff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::NewProp_InMinCutoff = { "InMinCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventSetMinCutoff_Parms, InMinCutoff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMinCutoff_MetaData), NewProp_InMinCutoff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::NewProp_InMinCutoff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "SetMinCutoff", nullptr, nullptr, Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::OneEuroFilterComponent_eventSetMinCutoff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::OneEuroFilterComponent_eventSetMinCutoff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOneEuroFilterComponent::execSetMinCutoff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMinCutoff);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinCutoff(Z_Param_InMinCutoff);
	P_NATIVE_END;
}
// End Class UOneEuroFilterComponent Function SetMinCutoff

// Begin Class UOneEuroFilterComponent
void UOneEuroFilterComponent::StaticRegisterNativesUOneEuroFilterComponent()
{
	UClass* Class = UOneEuroFilterComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Filter", &UOneEuroFilterComponent::execFilter },
		{ "Init", &UOneEuroFilterComponent::execInit },
		{ "SetCutoffSlope", &UOneEuroFilterComponent::execSetCutoffSlope },
		{ "SetDeltaCutoff", &UOneEuroFilterComponent::execSetDeltaCutoff },
		{ "SetMinCutoff", &UOneEuroFilterComponent::execSetMinCutoff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOneEuroFilterComponent);
UClass* Z_Construct_UClass_UOneEuroFilterComponent_NoRegister()
{
	return UOneEuroFilterComponent::StaticClass();
}
struct Z_Construct_UClass_UOneEuroFilterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OneEuroFilterComponent.h" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_Filter, "Filter" }, // 701299378
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_Init, "Init" }, // 3538383941
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope, "SetCutoffSlope" }, // 1950344606
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff, "SetDeltaCutoff" }, // 2094432264
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff, "SetMinCutoff" }, // 727801825
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneEuroFilterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOneEuroFilterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOneEuroFilterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOneEuroFilterComponent_Statics::ClassParams = {
	&UOneEuroFilterComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOneEuroFilterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOneEuroFilterComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOneEuroFilterComponent()
{
	if (!Z_Registration_Info_UClass_UOneEuroFilterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOneEuroFilterComponent.OuterSingleton, Z_Construct_UClass_UOneEuroFilterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOneEuroFilterComponent.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UOneEuroFilterComponent>()
{
	return UOneEuroFilterComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOneEuroFilterComponent);
UOneEuroFilterComponent::~UOneEuroFilterComponent() {}
// End Class UOneEuroFilterComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_OneEuroFilterComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOneEuroFilterComponent, UOneEuroFilterComponent::StaticClass, TEXT("UOneEuroFilterComponent"), &Z_Registration_Info_UClass_UOneEuroFilterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOneEuroFilterComponent), 1797473826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_OneEuroFilterComponent_h_2593463663(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_OneEuroFilterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_OneEuroFilterComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
