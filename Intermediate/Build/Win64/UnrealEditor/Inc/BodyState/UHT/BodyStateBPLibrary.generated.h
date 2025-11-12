// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BodyStateBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBodyStateInputInterface;
class UAnimInstance;
class UBodyStateSkeleton;
class UObject;
struct FBodyStateDeviceConfig;
#ifdef BODYSTATE_BodyStateBPLibrary_generated_h
#error "BodyStateBPLibrary.generated.h already included, missing '#pragma once' in BodyStateBPLibrary.h"
#endif
#define BODYSTATE_BodyStateBPLibrary_generated_h

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTransformForBoneNamedInAnimInstance); \
	DECLARE_FUNCTION(execSkeletonForDevice); \
	DECLARE_FUNCTION(execDetachDevice); \
	DECLARE_FUNCTION(execAttachDevice);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateBPLibrary(); \
	friend struct Z_Construct_UClass_UBodyStateBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBodyStateBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateBPLibrary)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBodyStateBPLibrary(UBodyStateBPLibrary&&); \
	UBodyStateBPLibrary(const UBodyStateBPLibrary&); \
public: \
	NO_API virtual ~UBodyStateBPLibrary();


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_33_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_RPC_WRAPPERS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_INCLASS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
