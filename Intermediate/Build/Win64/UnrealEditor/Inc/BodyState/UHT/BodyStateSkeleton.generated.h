// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Skeleton/BodyStateSkeleton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodyStateArm;
class UBodyStateBone;
class UBodyStateSkeleton;
enum class EBodyStateBasicBoneType : uint8;
struct FBodyStateBoneData;
struct FBodyStateBoneMeta;
struct FNamedSkeletonData;
#ifdef BODYSTATE_BodyStateSkeleton_generated_h
#error "BodyStateSkeleton.generated.h already included, missing '#pragma once' in BodyStateSkeleton.h"
#endif
#define BODYSTATE_BodyStateSkeleton_generated_h

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedBoneData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FNamedBoneData>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyedTransform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FKeyedTransform>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedBoneMeta_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FNamedBoneMeta>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedSkeletonData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FNamedSkeletonData>();

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_RPC_WRAPPERS \
	virtual void Multi_UpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
	virtual bool ServerUpdateBodyState_Validate(const FNamedSkeletonData ); \
	virtual void ServerUpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
	DECLARE_FUNCTION(execMulti_UpdateBodyState); \
	DECLARE_FUNCTION(execServerUpdateBodyState); \
	DECLARE_FUNCTION(execMergeFromOtherSkeleton); \
	DECLARE_FUNCTION(execSetFromOtherSkeleton); \
	DECLARE_FUNCTION(execSetFromNamedSkeletonData); \
	DECLARE_FUNCTION(execGetMinimalNamedSkeletonData); \
	DECLARE_FUNCTION(execChangeBasis); \
	DECLARE_FUNCTION(execSetMetaForBone); \
	DECLARE_FUNCTION(execSetTransformForBone); \
	DECLARE_FUNCTION(execSetDataForBone); \
	DECLARE_FUNCTION(execResetToDefaultSkeleton); \
	DECLARE_FUNCTION(execBoneNamed); \
	DECLARE_FUNCTION(execBoneForEnum); \
	DECLARE_FUNCTION(execHead); \
	DECLARE_FUNCTION(execRightArm); \
	DECLARE_FUNCTION(execLeftArm); \
	DECLARE_FUNCTION(execRootBone);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_CALLBACK_WRAPPERS
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateSkeleton(); \
	friend struct Z_Construct_UClass_UBodyStateSkeleton_Statics; \
public: \
	DECLARE_CLASS(UBodyStateSkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateSkeleton)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateSkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateSkeleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateSkeleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateSkeleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBodyStateSkeleton(UBodyStateSkeleton&&); \
	UBodyStateSkeleton(const UBodyStateSkeleton&); \
public: \
	NO_API virtual ~UBodyStateSkeleton();


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_86_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_RPC_WRAPPERS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_CALLBACK_WRAPPERS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_INCLASS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateSkeleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_Skeleton_BodyStateSkeleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
