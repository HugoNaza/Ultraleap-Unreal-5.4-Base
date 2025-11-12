// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/BodyStateInputInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateInputInterface() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin Enum EBSDeviceCombinerClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBSDeviceCombinerClass;
static UEnum* EBSDeviceCombinerClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBSDeviceCombinerClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBSDeviceCombinerClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass, (UObject*)Z_Construct_UPackage__Script_BodyState(), TEXT("EBSDeviceCombinerClass"));
	}
	return Z_Registration_Info_UEnum_EBSDeviceCombinerClass.OuterSingleton;
}
template<> BODYSTATE_API UEnum* StaticEnum<EBSDeviceCombinerClass>()
{
	return EBSDeviceCombinerClass_StaticEnum();
}
struct Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BS_DEVICE_COMBINER_ANGULAR.Name", "BS_DEVICE_COMBINER_ANGULAR" },
		{ "BS_DEVICE_COMBINER_CONFIDENCE.Name", "BS_DEVICE_COMBINER_CONFIDENCE" },
		{ "BS_DEVICE_COMBINER_UNKNOWN.Name", "BS_DEVICE_COMBINER_UNKNOWN" },
		{ "ModuleRelativePath", "Public/BodyStateInputInterface.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BS_DEVICE_COMBINER_UNKNOWN", (int64)BS_DEVICE_COMBINER_UNKNOWN },
		{ "BS_DEVICE_COMBINER_CONFIDENCE", (int64)BS_DEVICE_COMBINER_CONFIDENCE },
		{ "BS_DEVICE_COMBINER_ANGULAR", (int64)BS_DEVICE_COMBINER_ANGULAR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
	nullptr,
	"EBSDeviceCombinerClass",
	"EBSDeviceCombinerClass",
	Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass()
{
	if (!Z_Registration_Info_UEnum_EBSDeviceCombinerClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBSDeviceCombinerClass.InnerSingleton, Z_Construct_UEnum_BodyState_EBSDeviceCombinerClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBSDeviceCombinerClass.InnerSingleton;
}
// End Enum EBSDeviceCombinerClass

// Begin Interface UBodyStateInputInterface Function UpdateInput
struct BodyStateInputInterface_eventUpdateInput_Parms
{
	int32 DeviceID;
	UBodyStateSkeleton* Skeleton;
};
void IBodyStateInputInterface::UpdateInput(int32 DeviceID, UBodyStateSkeleton* Skeleton)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateInput instead.");
}
static FName NAME_UBodyStateInputInterface_UpdateInput = FName(TEXT("UpdateInput"));
void IBodyStateInputInterface::Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBodyStateInputInterface::StaticClass()));
	BodyStateInputInterface_eventUpdateInput_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBodyStateInputInterface_UpdateInput);
	if (Func)
	{
		Parms.DeviceID=DeviceID;
		Parms.Skeleton=Skeleton;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBodyStateInputInterface*)(O->GetNativeInterfaceAddress(UBodyStateInputInterface::StaticClass())))
	{
		I->UpdateInput_Implementation(DeviceID,Skeleton);
	}
}
struct Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Body State Poll Interface" },
		{ "Comment", "/* Requests your device to update the skeleton. You can use this BS polling method or push updates to your skeleton*/" },
		{ "ModuleRelativePath", "Public/BodyStateInputInterface.h" },
		{ "ToolTip", "Requests your device to update the skeleton. You can use this BS polling method or push updates to your skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateInputInterface_eventUpdateInput_Parms, DeviceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateInputInterface_eventUpdateInput_Parms, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_Skeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateInputInterface, nullptr, "UpdateInput", nullptr, nullptr, Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers), sizeof(BodyStateInputInterface_eventUpdateInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(BodyStateInputInterface_eventUpdateInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBodyStateInputInterface::execUpdateInput)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
	P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Skeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInput_Implementation(Z_Param_DeviceID,Z_Param_Skeleton);
	P_NATIVE_END;
}
// End Interface UBodyStateInputInterface Function UpdateInput

// Begin Interface UBodyStateInputInterface
void UBodyStateInputInterface::StaticRegisterNativesUBodyStateInputInterface()
{
	UClass* Class = UBodyStateInputInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateInput", &IBodyStateInputInterface::execUpdateInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateInputInterface);
UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister()
{
	return UBodyStateInputInterface::StaticClass();
}
struct Z_Construct_UClass_UBodyStateInputInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodyStateInputInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput, "UpdateInput" }, // 2826580692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBodyStateInputInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBodyStateInputInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateInputInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateInputInterface_Statics::ClassParams = {
	&UBodyStateInputInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateInputInterface()
{
	if (!Z_Registration_Info_UClass_UBodyStateInputInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateInputInterface.OuterSingleton, Z_Construct_UClass_UBodyStateInputInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateInputInterface.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateInputInterface>()
{
	return UBodyStateInputInterface::StaticClass();
}
UBodyStateInputInterface::UBodyStateInputInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateInputInterface);
UBodyStateInputInterface::~UBodyStateInputInterface() {}
// End Interface UBodyStateInputInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBSDeviceCombinerClass_StaticEnum, TEXT("EBSDeviceCombinerClass"), &Z_Registration_Info_UEnum_EBSDeviceCombinerClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4148031936U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateInputInterface, UBodyStateInputInterface::StaticClass, TEXT("UBodyStateInputInterface"), &Z_Registration_Info_UClass_UBodyStateInputInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateInputInterface), 2600280714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_4069308031(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
