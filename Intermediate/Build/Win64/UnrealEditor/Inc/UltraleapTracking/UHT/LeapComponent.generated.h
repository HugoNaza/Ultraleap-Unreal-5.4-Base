// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LeapComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ELeapImageType : uint8;
enum class ELeapQuatSwizzleAxisB : uint8;
struct FLeapFrameData;
struct FLeapHandData;
struct FLeapOptions;
#ifdef ULTRALEAPTRACKING_LeapComponent_generated_h
#error "LeapComponent.generated.h already included, missing '#pragma once' in LeapComponent.h"
#endif
#define ULTRALEAPTRACKING_LeapComponent_generated_h

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_21_DELEGATE \
ULTRALEAPTRACKING_API void FLeapEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapEventSignature);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_22_DELEGATE \
ULTRALEAPTRACKING_API void FLeapDeviceSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapDeviceSignature, const FString& DeviceName);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_23_DELEGATE \
ULTRALEAPTRACKING_API void FLeapVisibilityBoolSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapVisibilityBoolSignature, bool bIsVisible);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_24_DELEGATE \
ULTRALEAPTRACKING_API void FLeapFrameSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapFrameSignature, FLeapFrameData const& Frame);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_25_DELEGATE \
ULTRALEAPTRACKING_API void FLeapHandSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapHandSignature, FLeapHandData const& Hand);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_26_DELEGATE \
ULTRALEAPTRACKING_API void FLeapPolicySignature_DelegateWrapper(const FMulticastScriptDelegate& LeapPolicySignature, const TArray<TEnumAsByte<ELeapPolicyFlag> >& Flags);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_27_DELEGATE \
ULTRALEAPTRACKING_API void FLeapImageEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapImageEventSignature, UTexture2D* Texture, ELeapImageType ImageType);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_28_DELEGATE \
ULTRALEAPTRACKING_API void FLeapTrackingModeSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapTrackingModeSignature, ELeapMode Flag);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_34_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUpdateActiveDevice); \
	DECLARE_FUNCTION(execUpdateMultiDeviceMode); \
	DECLARE_FUNCTION(execGetDeviceOrigin); \
	DECLARE_FUNCTION(execGetMultiDeviceDebugInfo); \
	DECLARE_FUNCTION(execIsActiveDevicePluggedIn); \
	DECLARE_FUNCTION(execSetupMultidevice); \
	DECLARE_FUNCTION(execUpdateDeviceOrigin); \
	DECLARE_FUNCTION(execGetDeviceTypeFromSerial); \
	DECLARE_FUNCTION(execGetSerialOptions); \
	DECLARE_FUNCTION(execDoesCurrentGrabStrengthExceedTarget); \
	DECLARE_FUNCTION(execGetLRGrabStrength); \
	DECLARE_FUNCTION(execGetHandSize); \
	DECLARE_FUNCTION(execGetLeapOptions); \
	DECLARE_FUNCTION(execSetLeapPolicy); \
	DECLARE_FUNCTION(execSetTrackingMode); \
	DECLARE_FUNCTION(execSetSwizzles); \
	DECLARE_FUNCTION(execGetLatestFrameData); \
	DECLARE_FUNCTION(execAreHandsVisible); \
	DECLARE_FUNCTION(execSetShouldAddHmdOrigin);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesULeapComponent(); \
	friend struct Z_Construct_UClass_ULeapComponent_Statics; \
public: \
	DECLARE_CLASS(ULeapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(ULeapComponent)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULeapComponent(ULeapComponent&&); \
	ULeapComponent(const ULeapComponent&); \
public:


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_30_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_34_RPC_WRAPPERS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_34_INCLASS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRALEAPTRACKING_API UClass* StaticClass<class ULeapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_LeapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
