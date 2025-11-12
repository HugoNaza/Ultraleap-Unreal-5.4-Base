// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionEngine/GrabClassifierComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGrabClassifierProbe;
class UIEGrabClassifierComponent;
class USceneComponent;
#ifdef ULTRALEAPTRACKING_GrabClassifierComponent_generated_h
#error "GrabClassifierComponent.generated.h already included, missing '#pragma once' in GrabClassifierComponent.h"
#endif
#define ULTRALEAPTRACKING_GrabClassifierComponent_generated_h

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_17_DELEGATE \
ULTRALEAPTRACKING_API void FGrabClassifierGrabStateChanged_DelegateWrapper(const FMulticastScriptDelegate& GrabClassifierGrabStateChanged, UIEGrabClassifierComponent* Source, bool IsGrabbing);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrabClassifierParams_Statics; \
	ULTRALEAPTRACKING_API static class UScriptStruct* StaticStruct();


template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<struct FGrabClassifierParams>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabClassifierProbe(); \
	friend struct Z_Construct_UClass_UGrabClassifierProbe_Statics; \
public: \
	DECLARE_CLASS(UGrabClassifierProbe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(UGrabClassifierProbe)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabClassifierProbe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGrabClassifierProbe(UGrabClassifierProbe&&); \
	UGrabClassifierProbe(const UGrabClassifierProbe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabClassifierProbe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabClassifierProbe); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabClassifierProbe) \
	NO_API virtual ~UGrabClassifierProbe();


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_72_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_INCLASS_NO_PURE_DECLS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRALEAPTRACKING_API UClass* StaticClass<class UGrabClassifierProbe>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceReset); \
	DECLARE_FUNCTION(execUpdateClassifier);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIEGrabClassifierComponent(); \
	friend struct Z_Construct_UClass_UIEGrabClassifierComponent_Statics; \
public: \
	DECLARE_CLASS(UIEGrabClassifierComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraleapTracking"), NO_API) \
	DECLARE_SERIALIZER(UIEGrabClassifierComponent)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIEGrabClassifierComponent(UIEGrabClassifierComponent&&); \
	UIEGrabClassifierComponent(const UIEGrabClassifierComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIEGrabClassifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEGrabClassifierComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIEGrabClassifierComponent) \
	NO_API virtual ~UIEGrabClassifierComponent();


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_98_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_INCLASS_NO_PURE_DECLS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRALEAPTRACKING_API UClass* StaticClass<class UIEGrabClassifierComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Public_InteractionEngine_GrabClassifierComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
