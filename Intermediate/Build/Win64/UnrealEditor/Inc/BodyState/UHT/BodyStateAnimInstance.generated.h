// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BodyStateAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodyStateSkeleton;
enum class EBodyStateAutoRigType : uint8;
enum class EBodyStateBasicBoneType : uint8;
struct FBPBoneReference;
struct FCachedBoneLink;
struct FMappedBoneAnimData;
#ifdef BODYSTATE_BodyStateAnimInstance_generated_h
#error "BodyStateAnimInstance.generated.h already included, missing '#pragma once' in BodyStateAnimInstance.h"
#endif
#define BODYSTATE_BodyStateAnimInstance_generated_h

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FBodyStateIndexedBone>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedBoneLink_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FCachedBoneLink>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPBoneReference_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FBPBoneReference>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FMappedBoneAnimData>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneSearchNames_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FBoneSearchNames>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_221_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetActiveDeviceSerial); \
	DECLARE_FUNCTION(execGetSerialOptions); \
	DECLARE_FUNCTION(execExecuteAutoMapping); \
	DECLARE_FUNCTION(execCalcIsTracking); \
	DECLARE_FUNCTION(execGetCurrentWristPose); \
	DECLARE_FUNCTION(execGetMeshBoneNameFromCachedBoneLink); \
	DECLARE_FUNCTION(execGetBoneNameFromRef); \
	DECLARE_FUNCTION(execSyncMappedBoneDataCache); \
	DECLARE_FUNCTION(execBoneMapSummary); \
	DECLARE_FUNCTION(execSetAnimSkeleton); \
	DECLARE_FUNCTION(execRemoveBSBoneLink); \
	DECLARE_FUNCTION(execAddBSBoneToMeshBoneLink); \
	DECLARE_FUNCTION(execAdjustPositionByMapBasis); \
	DECLARE_FUNCTION(execAdjustRotationByMapBasis);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_221_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateAnimInstance(); \
	friend struct Z_Construct_UClass_UBodyStateAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBodyStateAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateAnimInstance)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_221_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBodyStateAnimInstance(UBodyStateAnimInstance&&); \
	UBodyStateAnimInstance(const UBodyStateAnimInstance&); \
public:


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_217_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_221_RPC_WRAPPERS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_221_INCLASS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h_221_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateAnimInstance_h


#define FOREACH_ENUM_EBSMULTIDEVICEMODE(op) \
	op(BS_MULTI_DEVICE_SINGULAR) \
	op(BS_MULTI_DEVICE_COMBINED) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
