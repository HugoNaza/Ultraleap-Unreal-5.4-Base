// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Private/InteractionEngine/UltraleapIEFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapIEFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Class UUltraleapIEFunctionLibrary Function EnableBodyBoundsByName
struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics
{
	struct UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms
	{
		UPhysicsAsset* PhysicsAsset;
		FName BoneName;
		bool Enable;
		bool Update;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Enable/disable a given body's bounds */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Enable/disable a given body's bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static void NewProp_Update_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Update;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enable_MetaData), NewProp_Enable_MetaData) };
void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update_SetBit(void* Obj)
{
	((UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms*)Obj)->Update = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Update_MetaData), NewProp_Update_MetaData) };
void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "EnableBodyBoundsByName", nullptr, nullptr, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execEnableBodyBoundsByName)
{
	P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_UBOOL(Z_Param_Enable);
	P_GET_UBOOL(Z_Param_Update);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUltraleapIEFunctionLibrary::EnableBodyBoundsByName(Z_Param_PhysicsAsset,Z_Param_Out_BoneName,Z_Param_Enable,Z_Param_Update);
	P_NATIVE_END;
}
// End Class UUltraleapIEFunctionLibrary Function EnableBodyBoundsByName

// Begin Class UUltraleapIEFunctionLibrary Function EnableBodyCollisionByName
struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics
{
	struct UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms
	{
		UPhysicsAsset* PhysicsAsset;
		FName BoneName;
		TEnumAsByte<EBodyCollisionResponse::Type> BodyCollisionResponse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/** Enable/disable a given body's collisions */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Enable/disable a given body's collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyCollisionResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyCollisionResponse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BodyCollisionResponse = { "BodyCollisionResponse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms, BodyCollisionResponse), Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyCollisionResponse_MetaData), NewProp_BodyCollisionResponse_MetaData) }; // 1952725187
void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BodyCollisionResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "EnableBodyCollisionByName", nullptr, nullptr, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execEnableBodyCollisionByName)
{
	P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_PROPERTY(FByteProperty,Z_Param_BodyCollisionResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUltraleapIEFunctionLibrary::EnableBodyCollisionByName(Z_Param_PhysicsAsset,Z_Param_Out_BoneName,EBodyCollisionResponse::Type(Z_Param_BodyCollisionResponse));
	P_NATIVE_END;
}
// End Class UUltraleapIEFunctionLibrary Function EnableBodyCollisionByName

// Begin Class UUltraleapIEFunctionLibrary Function GetBodyName
struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics
{
	struct UltraleapIEFunctionLibrary_eventGetBodyName_Parms
	{
		UPhysicsAsset* PhysicsAsset;
		int32 BodyIndex;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Helper, get the body name by body index (=bone name vs index into USkeletalBodySetups) */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Helper, get the body name by body index (=bone name vs index into USkeletalBodySetups)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetBodyName_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetBodyName_Parms, BodyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyIndex_MetaData), NewProp_BodyIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetBodyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_BodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "GetBodyName", nullptr, nullptr, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::UltraleapIEFunctionLibrary_eventGetBodyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::UltraleapIEFunctionLibrary_eventGetBodyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execGetBodyName)
{
	P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
	P_GET_PROPERTY(FIntProperty,Z_Param_BodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UUltraleapIEFunctionLibrary::GetBodyName(Z_Param_PhysicsAsset,Z_Param_BodyIndex);
	P_NATIVE_END;
}
// End Class UUltraleapIEFunctionLibrary Function GetBodyName

// Begin Class UUltraleapIEFunctionLibrary Function GetSkeletalBodySetups
struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics
{
	struct UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms
	{
		UPhysicsAsset* PhysicsAsset;
		TArray<USkeletalBodySetup*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Get all bodies (body = bone in our case, each bone having collisions generated for it) */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Get all bodies (body = bone in our case, each bone having collisions generated for it)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalBodySetup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "GetSkeletalBodySetups", nullptr, nullptr, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execGetSkeletalBodySetups)
{
	P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USkeletalBodySetup*>*)Z_Param__Result=UUltraleapIEFunctionLibrary::GetSkeletalBodySetups(Z_Param_PhysicsAsset);
	P_NATIVE_END;
}
// End Class UUltraleapIEFunctionLibrary Function GetSkeletalBodySetups

// Begin Class UUltraleapIEFunctionLibrary Function InitPhysicsConstraint
struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics
{
	struct UltraleapIEFunctionLibrary_eventInitPhysicsConstraint_Parms
	{
		UPhysicsConstraintComponent* PhysicsConstraintComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/** Helper, initialise a physics constraint (needed as not all params are blueprint writeable) */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Helper, initialise a physics constraint (needed as not all params are blueprint writeable)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsConstraintComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsConstraintComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::NewProp_PhysicsConstraintComponent = { "PhysicsConstraintComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventInitPhysicsConstraint_Parms, PhysicsConstraintComponent), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsConstraintComponent_MetaData), NewProp_PhysicsConstraintComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::NewProp_PhysicsConstraintComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "InitPhysicsConstraint", nullptr, nullptr, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::UltraleapIEFunctionLibrary_eventInitPhysicsConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::UltraleapIEFunctionLibrary_eventInitPhysicsConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execInitPhysicsConstraint)
{
	P_GET_OBJECT(UPhysicsConstraintComponent,Z_Param_PhysicsConstraintComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUltraleapIEFunctionLibrary::InitPhysicsConstraint(Z_Param_PhysicsConstraintComponent);
	P_NATIVE_END;
}
// End Class UUltraleapIEFunctionLibrary Function InitPhysicsConstraint

// Begin Class UUltraleapIEFunctionLibrary Function UpdateBoundsBodiesArray
struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics
{
	struct UltraleapIEFunctionLibrary_eventUpdateBoundsBodiesArray_Parms
	{
		UPhysicsAsset* PhysicsAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Optimisation, once setting a lot of bounds up, update the state of the PhysicsAsset */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Optimisation, once setting a lot of bounds up, update the state of the PhysicsAsset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventUpdateBoundsBodiesArray_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::NewProp_PhysicsAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "UpdateBoundsBodiesArray", nullptr, nullptr, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::UltraleapIEFunctionLibrary_eventUpdateBoundsBodiesArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::UltraleapIEFunctionLibrary_eventUpdateBoundsBodiesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execUpdateBoundsBodiesArray)
{
	P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUltraleapIEFunctionLibrary::UpdateBoundsBodiesArray(Z_Param_PhysicsAsset);
	P_NATIVE_END;
}
// End Class UUltraleapIEFunctionLibrary Function UpdateBoundsBodiesArray

// Begin Class UUltraleapIEFunctionLibrary
void UUltraleapIEFunctionLibrary::StaticRegisterNativesUUltraleapIEFunctionLibrary()
{
	UClass* Class = UUltraleapIEFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableBodyBoundsByName", &UUltraleapIEFunctionLibrary::execEnableBodyBoundsByName },
		{ "EnableBodyCollisionByName", &UUltraleapIEFunctionLibrary::execEnableBodyCollisionByName },
		{ "GetBodyName", &UUltraleapIEFunctionLibrary::execGetBodyName },
		{ "GetSkeletalBodySetups", &UUltraleapIEFunctionLibrary::execGetSkeletalBodySetups },
		{ "InitPhysicsConstraint", &UUltraleapIEFunctionLibrary::execInitPhysicsConstraint },
		{ "UpdateBoundsBodiesArray", &UUltraleapIEFunctionLibrary::execUpdateBoundsBodiesArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUltraleapIEFunctionLibrary);
UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary_NoRegister()
{
	return UUltraleapIEFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n *  Helpers to customise PhysicsAsset behaviours\n *\x09The Physics asset does half of the job of the SoftContact system in Unity\n *\x09It builds per bone collisions in a variety of primitive shapes\n *\n *\x09However, it isn't customisable by blueprint as it's designed to be used at edit time\n *\x09""Functions below map to C++ functionality\n *\n *\n */" },
		{ "IncludePath", "InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Helpers to customise PhysicsAsset behaviours\n   The Physics asset does half of the job of the SoftContact system in Unity\n   It builds per bone collisions in a variety of primitive shapes\n\n   However, it isn't customisable by blueprint as it's designed to be used at edit time\n   Functions below map to C++ functionality" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName, "EnableBodyBoundsByName" }, // 3745453171
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName, "EnableBodyCollisionByName" }, // 704756153
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName, "GetBodyName" }, // 363309746
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups, "GetSkeletalBodySetups" }, // 3534520165
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint, "InitPhysicsConstraint" }, // 616328605
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray, "UpdateBoundsBodiesArray" }, // 4220634204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUltraleapIEFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::ClassParams = {
	&UUltraleapIEFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUltraleapIEFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUltraleapIEFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUltraleapIEFunctionLibrary.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<UUltraleapIEFunctionLibrary>()
{
	return UUltraleapIEFunctionLibrary::StaticClass();
}
UUltraleapIEFunctionLibrary::UUltraleapIEFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUltraleapIEFunctionLibrary);
UUltraleapIEFunctionLibrary::~UUltraleapIEFunctionLibrary() {}
// End Class UUltraleapIEFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_InteractionEngine_UltraleapIEFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUltraleapIEFunctionLibrary, UUltraleapIEFunctionLibrary::StaticClass, TEXT("UUltraleapIEFunctionLibrary"), &Z_Registration_Info_UClass_UUltraleapIEFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUltraleapIEFunctionLibrary), 1934320304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_InteractionEngine_UltraleapIEFunctionLibrary_h_1315664188(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_InteractionEngine_UltraleapIEFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_InteractionEngine_UltraleapIEFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
