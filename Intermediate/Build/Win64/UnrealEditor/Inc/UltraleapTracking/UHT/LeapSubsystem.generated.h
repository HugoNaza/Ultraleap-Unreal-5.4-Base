// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LeapSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USkeletalMeshComponent;
struct FLeapFrameData;
struct FLeapHandData;
#ifdef ULTRALEAPTRACKING_LeapSubsystem_generated_h
#error "LeapSubsystem.generated.h already included, missing '#pragma once' in LeapSubsystem.h"
#endif
#define ULTRALEAPTRACKING_LeapSubsystem_generated_h

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_18_DELEGATE \
ULTRALEAPTRACKING_API void FLeapGrab_DelegateWrapper(const FMulticastScriptDelegate& LeapGrab, AActor* GrabbedActor, USkeletalMeshComponent* LeftHand, USkeletalMeshComponent* RightHand);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_19_DELEGATE \
ULTRALEAPTRACKING_API void FLeapRelease_DelegateWrapper(const FMulticastScriptDelegate& LeapRelease, AActor* ReleasedActor, USkeletalMeshComponent* HandLeft, USkeletalMeshComponent* HandRight, FName BoneName);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_20_DELEGATE \
ULTRALEAPTRACKING_API void FLeapGrabAction_DelegateWrapper(const FMulticastScriptDelegate& LeapGrabAction, FVector Location, FVector ForwardVec);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLeapUnPinchCall); \
	DECLARE_FUNCTION(execLeapPinchCall); \
	DECLARE_FUNCTION(execLeapTrackingDataCall); \
	DECLARE_FUNCTION(execGrabActionCall); \
	DECLARE_FUNCTION(execOnReleaseCall); \
	DECLARE_FUNCTION(execOnGrabCall);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapSubsystem(); \
	friend struct Z_Construct_UClass_ULeapSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULeapSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(ULeapSubsystem)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULeapSubsystem(ULeapSubsystem&&); \
	ULeapSubsystem(const ULeapSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULeapSubsystem) \
	NO_API virtual ~ULeapSubsystem();


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_34_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_37_INCLASS_NO_PURE_DECLS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRALEAPTRACKING_API UClass* StaticClass<class ULeapSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
