// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/BodyState/Public/BodyStateBPLibrary.h"
#include "ThirdParty/BodyState/Public/BodyStateDeviceConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBPLibrary() {}

// Begin Cross Module References
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBPLibrary();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBPLibrary_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister();
BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References

// Begin Class UBodyStateBPLibrary Function AttachDevice
struct Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics
{
	struct BodyStateBPLibrary_eventAttachDevice_Parms
	{
		FBodyStateDeviceConfig Configuration;
		TScriptInterface<IBodyStateInputInterface> InputCallbackDelegate;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InputCallbackDelegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, Configuration), Z_Construct_UScriptStruct_FBodyStateDeviceConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) }; // 3414202753
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_InputCallbackDelegate = { "InputCallbackDelegate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, InputCallbackDelegate), Z_Construct_UClass_UBodyStateInputInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_InputCallbackDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "AttachDevice", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::BodyStateBPLibrary_eventAttachDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::BodyStateBPLibrary_eventAttachDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBPLibrary::execAttachDevice)
{
	P_GET_STRUCT_REF(FBodyStateDeviceConfig,Z_Param_Out_Configuration);
	P_GET_TINTERFACE(IBodyStateInputInterface,Z_Param_InputCallbackDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UBodyStateBPLibrary::AttachDevice(Z_Param_Out_Configuration,Z_Param_InputCallbackDelegate);
	P_NATIVE_END;
}
// End Class UBodyStateBPLibrary Function AttachDevice

// Begin Class UBodyStateBPLibrary Function DetachDevice
struct Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics
{
	struct BodyStateBPLibrary_eventDetachDevice_Parms
	{
		int32 DeviceID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventDetachDevice_Parms, DeviceID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BodyStateBPLibrary_eventDetachDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BodyStateBPLibrary_eventDetachDevice_Parms), &Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "DetachDevice", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::BodyStateBPLibrary_eventDetachDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::BodyStateBPLibrary_eventDetachDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBPLibrary::execDetachDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBodyStateBPLibrary::DetachDevice(Z_Param_DeviceID);
	P_NATIVE_END;
}
// End Class UBodyStateBPLibrary Function DetachDevice

// Begin Class UBodyStateBPLibrary Function SkeletonForDevice
struct Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics
{
	struct BodyStateBPLibrary_eventSkeletonForDevice_Parms
	{
		UObject* WorldContextObject;
		int32 DeviceID;
		UBodyStateSkeleton* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "Comment", "/**\n\x09 * Obtain the UBodyStateSkeleton attached to device or 0 if you want the merged skeleton\n\x09 */" },
		{ "CPP_Default_DeviceID", "0" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "Obtain the UBodyStateSkeleton attached to device or 0 if you want the merged skeleton" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, DeviceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, ReturnValue), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "SkeletonForDevice", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::BodyStateBPLibrary_eventSkeletonForDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::BodyStateBPLibrary_eventSkeletonForDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBPLibrary::execSkeletonForDevice)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBodyStateSkeleton**)Z_Param__Result=UBodyStateBPLibrary::SkeletonForDevice(Z_Param_WorldContextObject,Z_Param_DeviceID);
	P_NATIVE_END;
}
// End Class UBodyStateBPLibrary Function SkeletonForDevice

// Begin Class UBodyStateBPLibrary Function TransformForBoneNamedInAnimInstance
struct Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics
{
	struct BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms
	{
		FName Bone;
		UAnimInstance* Instance;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "Comment", "/** Convenience function for rigging*/" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "Convenience function for rigging" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, Instance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "TransformForBoneNamedInAnimInstance", nullptr, nullptr, Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBodyStateBPLibrary::execTransformForBoneNamedInAnimInstance)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Bone);
	P_GET_OBJECT(UAnimInstance,Z_Param_Instance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UBodyStateBPLibrary::TransformForBoneNamedInAnimInstance(Z_Param_Out_Bone,Z_Param_Instance);
	P_NATIVE_END;
}
// End Class UBodyStateBPLibrary Function TransformForBoneNamedInAnimInstance

// Begin Class UBodyStateBPLibrary
void UBodyStateBPLibrary::StaticRegisterNativesUBodyStateBPLibrary()
{
	UClass* Class = UBodyStateBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachDevice", &UBodyStateBPLibrary::execAttachDevice },
		{ "DetachDevice", &UBodyStateBPLibrary::execDetachDevice },
		{ "SkeletonForDevice", &UBodyStateBPLibrary::execSkeletonForDevice },
		{ "TransformForBoneNamedInAnimInstance", &UBodyStateBPLibrary::execTransformForBoneNamedInAnimInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodyStateBPLibrary);
UClass* Z_Construct_UClass_UBodyStateBPLibrary_NoRegister()
{
	return UBodyStateBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UBodyStateBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Extra functions useful for animation rigging in BP\n */" },
		{ "IncludePath", "BodyStateBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "* Extra functions useful for animation rigging in BP" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice, "AttachDevice" }, // 3921229529
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice, "DetachDevice" }, // 185530904
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice, "SkeletonForDevice" }, // 1881484924
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance, "TransformForBoneNamedInAnimInstance" }, // 1827782996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBodyStateBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBPLibrary_Statics::ClassParams = {
	&UBodyStateBPLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBodyStateBPLibrary()
{
	if (!Z_Registration_Info_UClass_UBodyStateBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodyStateBPLibrary.OuterSingleton, Z_Construct_UClass_UBodyStateBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBodyStateBPLibrary.OuterSingleton;
}
template<> BODYSTATE_API UClass* StaticClass<UBodyStateBPLibrary>()
{
	return UBodyStateBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBPLibrary);
UBodyStateBPLibrary::~UBodyStateBPLibrary() {}
// End Class UBodyStateBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBodyStateBPLibrary, UBodyStateBPLibrary::StaticClass, TEXT("UBodyStateBPLibrary"), &Z_Registration_Info_UClass_UBodyStateBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodyStateBPLibrary), 3832587670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_3891077860(TEXT("/Script/BodyState"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
