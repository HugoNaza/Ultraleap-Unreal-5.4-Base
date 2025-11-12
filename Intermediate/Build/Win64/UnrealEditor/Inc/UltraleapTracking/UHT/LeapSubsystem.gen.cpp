// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapSubsystem.h"
#include "UltraleapTrackingCore/Public/UltraleapTrackingData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapSubsystem();
ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapSubsystem_NoRegister();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature();
ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData();
ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData();
UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References

// Begin Delegate FLeapGrab
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapGrab_Parms
	{
		AActor* GrabbedActor;
		USkeletalMeshComponent* LeftHand;
		USkeletalMeshComponent* RightHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//// Blueprint event\n" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
		{ "ToolTip", "/ Blueprint event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::NewProp_GrabbedActor = { "GrabbedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapGrab_Parms, GrabbedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapGrab_Parms, LeftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHand_MetaData), NewProp_LeftHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapGrab_Parms, RightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHand_MetaData), NewProp_RightHand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::NewProp_GrabbedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::NewProp_LeftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::NewProp_RightHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapGrab__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapGrab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapGrab_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapGrab_DelegateWrapper(const FMulticastScriptDelegate& LeapGrab, AActor* GrabbedActor, USkeletalMeshComponent* LeftHand, USkeletalMeshComponent* RightHand)
{
	struct _Script_UltraleapTracking_eventLeapGrab_Parms
	{
		AActor* GrabbedActor;
		USkeletalMeshComponent* LeftHand;
		USkeletalMeshComponent* RightHand;
	};
	_Script_UltraleapTracking_eventLeapGrab_Parms Parms;
	Parms.GrabbedActor=GrabbedActor;
	Parms.LeftHand=LeftHand;
	Parms.RightHand=RightHand;
	LeapGrab.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapGrab

// Begin Delegate FLeapRelease
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapRelease_Parms
	{
		AActor* ReleasedActor;
		USkeletalMeshComponent* HandLeft;
		USkeletalMeshComponent* HandRight;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandLeft_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandRight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_ReleasedActor = { "ReleasedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapRelease_Parms, ReleasedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_HandLeft = { "HandLeft", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapRelease_Parms, HandLeft), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandLeft_MetaData), NewProp_HandLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_HandRight = { "HandRight", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapRelease_Parms, HandRight), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandRight_MetaData), NewProp_HandRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapRelease_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_ReleasedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_HandLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_HandRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapRelease__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapRelease_DelegateWrapper(const FMulticastScriptDelegate& LeapRelease, AActor* ReleasedActor, USkeletalMeshComponent* HandLeft, USkeletalMeshComponent* HandRight, FName BoneName)
{
	struct _Script_UltraleapTracking_eventLeapRelease_Parms
	{
		AActor* ReleasedActor;
		USkeletalMeshComponent* HandLeft;
		USkeletalMeshComponent* HandRight;
		FName BoneName;
	};
	_Script_UltraleapTracking_eventLeapRelease_Parms Parms;
	Parms.ReleasedActor=ReleasedActor;
	Parms.HandLeft=HandLeft;
	Parms.HandRight=HandRight;
	Parms.BoneName=BoneName;
	LeapRelease.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapRelease

// Begin Delegate FLeapGrabAction
struct Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics
{
	struct _Script_UltraleapTracking_eventLeapGrabAction_Parms
	{
		FVector Location;
		FVector ForwardVec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapGrabAction_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::NewProp_ForwardVec = { "ForwardVec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventLeapGrabAction_Parms, ForwardVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::NewProp_ForwardVec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "LeapGrabAction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapGrabAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::_Script_UltraleapTracking_eventLeapGrabAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeapGrabAction_DelegateWrapper(const FMulticastScriptDelegate& LeapGrabAction, FVector Location, FVector ForwardVec)
{
	struct _Script_UltraleapTracking_eventLeapGrabAction_Parms
	{
		FVector Location;
		FVector ForwardVec;
	};
	_Script_UltraleapTracking_eventLeapGrabAction_Parms Parms;
	Parms.Location=Location;
	Parms.ForwardVec=ForwardVec;
	LeapGrabAction.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLeapGrabAction

// Begin Class ULeapSubsystem Function GrabActionCall
struct Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics
{
	struct LeapSubsystem_eventGrabActionCall_Parms
	{
		FVector Location;
		FVector ForwardVec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap grab Functions" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventGrabActionCall_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::NewProp_ForwardVec = { "ForwardVec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventGrabActionCall_Parms, ForwardVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::NewProp_ForwardVec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapSubsystem, nullptr, "GrabActionCall", nullptr, nullptr, Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::LeapSubsystem_eventGrabActionCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::LeapSubsystem_eventGrabActionCall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapSubsystem_GrabActionCall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapSubsystem_GrabActionCall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapSubsystem::execGrabActionCall)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_ForwardVec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrabActionCall(Z_Param_Location,Z_Param_ForwardVec);
	P_NATIVE_END;
}
// End Class ULeapSubsystem Function GrabActionCall

// Begin Class ULeapSubsystem Function LeapPinchCall
struct Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics
{
	struct LeapSubsystem_eventLeapPinchCall_Parms
	{
		FLeapHandData HandData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap grab Functions" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::NewProp_HandData = { "HandData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventLeapPinchCall_Parms, HandData), Z_Construct_UScriptStruct_FLeapHandData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandData_MetaData), NewProp_HandData_MetaData) }; // 3241560064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::NewProp_HandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapSubsystem, nullptr, "LeapPinchCall", nullptr, nullptr, Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::LeapSubsystem_eventLeapPinchCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::LeapSubsystem_eventLeapPinchCall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapSubsystem::execLeapPinchCall)
{
	P_GET_STRUCT_REF(FLeapHandData,Z_Param_Out_HandData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeapPinchCall(Z_Param_Out_HandData);
	P_NATIVE_END;
}
// End Class ULeapSubsystem Function LeapPinchCall

// Begin Class ULeapSubsystem Function LeapTrackingDataCall
struct Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics
{
	struct LeapSubsystem_eventLeapTrackingDataCall_Parms
	{
		FLeapFrameData Frame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap grab Functions" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventLeapTrackingDataCall_Parms, Frame), Z_Construct_UScriptStruct_FLeapFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) }; // 1129174588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::NewProp_Frame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapSubsystem, nullptr, "LeapTrackingDataCall", nullptr, nullptr, Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::LeapSubsystem_eventLeapTrackingDataCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::LeapSubsystem_eventLeapTrackingDataCall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapSubsystem::execLeapTrackingDataCall)
{
	P_GET_STRUCT_REF(FLeapFrameData,Z_Param_Out_Frame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeapTrackingDataCall(Z_Param_Out_Frame);
	P_NATIVE_END;
}
// End Class ULeapSubsystem Function LeapTrackingDataCall

// Begin Class ULeapSubsystem Function LeapUnPinchCall
struct Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics
{
	struct LeapSubsystem_eventLeapUnPinchCall_Parms
	{
		FLeapHandData HandData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap grab Functions" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::NewProp_HandData = { "HandData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventLeapUnPinchCall_Parms, HandData), Z_Construct_UScriptStruct_FLeapHandData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandData_MetaData), NewProp_HandData_MetaData) }; // 3241560064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::NewProp_HandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapSubsystem, nullptr, "LeapUnPinchCall", nullptr, nullptr, Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::LeapSubsystem_eventLeapUnPinchCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::LeapSubsystem_eventLeapUnPinchCall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapSubsystem::execLeapUnPinchCall)
{
	P_GET_STRUCT_REF(FLeapHandData,Z_Param_Out_HandData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeapUnPinchCall(Z_Param_Out_HandData);
	P_NATIVE_END;
}
// End Class ULeapSubsystem Function LeapUnPinchCall

// Begin Class ULeapSubsystem Function OnGrabCall
struct Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics
{
	struct LeapSubsystem_eventOnGrabCall_Parms
	{
		AActor* GrabbedActor;
		USkeletalMeshComponent* HandLeft;
		USkeletalMeshComponent* HandRight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap grab Functions" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandLeft_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandRight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::NewProp_GrabbedActor = { "GrabbedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventOnGrabCall_Parms, GrabbedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::NewProp_HandLeft = { "HandLeft", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventOnGrabCall_Parms, HandLeft), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandLeft_MetaData), NewProp_HandLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::NewProp_HandRight = { "HandRight", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventOnGrabCall_Parms, HandRight), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandRight_MetaData), NewProp_HandRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::NewProp_GrabbedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::NewProp_HandLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::NewProp_HandRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapSubsystem, nullptr, "OnGrabCall", nullptr, nullptr, Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::LeapSubsystem_eventOnGrabCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::LeapSubsystem_eventOnGrabCall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapSubsystem_OnGrabCall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapSubsystem_OnGrabCall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapSubsystem::execOnGrabCall)
{
	P_GET_OBJECT(AActor,Z_Param_GrabbedActor);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HandLeft);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HandRight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGrabCall(Z_Param_GrabbedActor,Z_Param_HandLeft,Z_Param_HandRight);
	P_NATIVE_END;
}
// End Class ULeapSubsystem Function OnGrabCall

// Begin Class ULeapSubsystem Function OnReleaseCall
struct Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics
{
	struct LeapSubsystem_eventOnReleaseCall_Parms
	{
		AActor* ReleasedActor;
		USkeletalMeshComponent* HandLeft;
		USkeletalMeshComponent* HandRight;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leap grab Functions" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandLeft_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandRight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_ReleasedActor = { "ReleasedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventOnReleaseCall_Parms, ReleasedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_HandLeft = { "HandLeft", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventOnReleaseCall_Parms, HandLeft), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandLeft_MetaData), NewProp_HandLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_HandRight = { "HandRight", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventOnReleaseCall_Parms, HandRight), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandRight_MetaData), NewProp_HandRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeapSubsystem_eventOnReleaseCall_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_ReleasedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_HandLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_HandRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapSubsystem, nullptr, "OnReleaseCall", nullptr, nullptr, Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::LeapSubsystem_eventOnReleaseCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::LeapSubsystem_eventOnReleaseCall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeapSubsystem::execOnReleaseCall)
{
	P_GET_OBJECT(AActor,Z_Param_ReleasedActor);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HandLeft);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HandRight);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReleaseCall(Z_Param_ReleasedActor,Z_Param_HandLeft,Z_Param_HandRight,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class ULeapSubsystem Function OnReleaseCall

// Begin Class ULeapSubsystem
void ULeapSubsystem::StaticRegisterNativesULeapSubsystem()
{
	UClass* Class = ULeapSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrabActionCall", &ULeapSubsystem::execGrabActionCall },
		{ "LeapPinchCall", &ULeapSubsystem::execLeapPinchCall },
		{ "LeapTrackingDataCall", &ULeapSubsystem::execLeapTrackingDataCall },
		{ "LeapUnPinchCall", &ULeapSubsystem::execLeapUnPinchCall },
		{ "OnGrabCall", &ULeapSubsystem::execOnGrabCall },
		{ "OnReleaseCall", &ULeapSubsystem::execOnReleaseCall },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeapSubsystem);
UClass* Z_Construct_UClass_ULeapSubsystem_NoRegister()
{
	return ULeapSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULeapSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This subsystem have access to leap events and hand data\n */" },
		{ "IncludePath", "LeapSubsystem.h" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
		{ "ToolTip", "This subsystem have access to leap events and hand data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapGrab_MetaData[] = {
		{ "Category", "Leap grab Events" },
		{ "Comment", "/** Called when grabbing is called*/" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
		{ "ToolTip", "Called when grabbing is called" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapRelease_MetaData[] = {
		{ "Category", "Leap release Events" },
		{ "Comment", "/** Called when release is called*/" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
		{ "ToolTip", "Called when release is called" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeapGrabAction_MetaData[] = {
		{ "Category", "Leap release Events" },
		{ "ModuleRelativePath", "Public/LeapSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapGrab;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapRelease;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapGrabAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapSubsystem_GrabActionCall, "GrabActionCall" }, // 2872450166
		{ &Z_Construct_UFunction_ULeapSubsystem_LeapPinchCall, "LeapPinchCall" }, // 2813984742
		{ &Z_Construct_UFunction_ULeapSubsystem_LeapTrackingDataCall, "LeapTrackingDataCall" }, // 3032232094
		{ &Z_Construct_UFunction_ULeapSubsystem_LeapUnPinchCall, "LeapUnPinchCall" }, // 1573388410
		{ &Z_Construct_UFunction_ULeapSubsystem_OnGrabCall, "OnGrabCall" }, // 315043497
		{ &Z_Construct_UFunction_ULeapSubsystem_OnReleaseCall, "OnReleaseCall" }, // 3449857370
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapSubsystem_Statics::NewProp_OnLeapGrab = { "OnLeapGrab", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapSubsystem, OnLeapGrab), Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrab__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapGrab_MetaData), NewProp_OnLeapGrab_MetaData) }; // 912229653
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapSubsystem_Statics::NewProp_OnLeapRelease = { "OnLeapRelease", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapSubsystem, OnLeapRelease), Z_Construct_UDelegateFunction_UltraleapTracking_LeapRelease__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapRelease_MetaData), NewProp_OnLeapRelease_MetaData) }; // 3356827472
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapSubsystem_Statics::NewProp_OnLeapGrabAction = { "OnLeapGrabAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeapSubsystem, OnLeapGrabAction), Z_Construct_UDelegateFunction_UltraleapTracking_LeapGrabAction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeapGrabAction_MetaData), NewProp_OnLeapGrabAction_MetaData) }; // 1657889899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSubsystem_Statics::NewProp_OnLeapGrab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSubsystem_Statics::NewProp_OnLeapRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapSubsystem_Statics::NewProp_OnLeapGrabAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeapSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeapSubsystem_Statics::ClassParams = {
	&ULeapSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULeapSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeapSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeapSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeapSubsystem()
{
	if (!Z_Registration_Info_UClass_ULeapSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeapSubsystem.OuterSingleton, Z_Construct_UClass_ULeapSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeapSubsystem.OuterSingleton;
}
template<> ULTRALEAPTRACKING_API UClass* StaticClass<ULeapSubsystem>()
{
	return ULeapSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapSubsystem);
ULeapSubsystem::~ULeapSubsystem() {}
// End Class ULeapSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeapSubsystem, ULeapSubsystem::StaticClass, TEXT("ULeapSubsystem"), &Z_Registration_Info_UClass_ULeapSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeapSubsystem), 3020656686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_494131707(TEXT("/Script/UltraleapTracking"),
	Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
