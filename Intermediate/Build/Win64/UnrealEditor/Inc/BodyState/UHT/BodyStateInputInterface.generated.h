// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BodyStateInputInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodyStateSkeleton;
#ifdef BODYSTATE_BodyStateInputInterface_generated_h
#error "BodyStateInputInterface.generated.h already included, missing '#pragma once' in BodyStateInputInterface.h"
#endif
#define BODYSTATE_BodyStateInputInterface_generated_h

#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateInput_Implementation(int32 DeviceID, UBodyStateSkeleton* Skeleton) {}; \
	DECLARE_FUNCTION(execUpdateInput);


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_CALLBACK_WRAPPERS
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BODYSTATE_API UBodyStateInputInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBodyStateInputInterface(UBodyStateInputInterface&&); \
	UBodyStateInputInterface(const UBodyStateInputInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BODYSTATE_API, UBodyStateInputInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateInputInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateInputInterface) \
	BODYSTATE_API virtual ~UBodyStateInputInterface();


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBodyStateInputInterface(); \
	friend struct Z_Construct_UClass_UBodyStateInputInterface_Statics; \
public: \
	DECLARE_CLASS(UBodyStateInputInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BodyState"), BODYSTATE_API) \
	DECLARE_SERIALIZER(UBodyStateInputInterface)


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_GENERATED_UINTERFACE_BODY() \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBodyStateInputInterface() {} \
public: \
	typedef UBodyStateInputInterface UClassType; \
	typedef IBodyStateInputInterface ThisClass; \
	static void Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_62_PROLOG
#define FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_CALLBACK_WRAPPERS \
	FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h_65_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateInputInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_ThirdParty_BodyState_Public_BodyStateInputInterface_h


#define FOREACH_ENUM_EBSDEVICECOMBINERCLASS(op) \
	op(BS_DEVICE_COMBINER_UNKNOWN) \
	op(BS_DEVICE_COMBINER_CONFIDENCE) \
	op(BS_DEVICE_COMBINER_ANGULAR) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
