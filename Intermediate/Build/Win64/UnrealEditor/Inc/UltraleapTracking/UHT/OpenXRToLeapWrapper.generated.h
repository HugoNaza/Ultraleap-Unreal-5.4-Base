// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenXRToLeapWrapper.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ULTRALEAPTRACKING_OpenXRToLeapWrapper_generated_h
#error "OpenXRToLeapWrapper.generated.h already included, missing '#pragma once' in OpenXRToLeapWrapper.h"
#endif
#define ULTRALEAPTRACKING_OpenXRToLeapWrapper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitlab_builds_u6JRnJXD_0_xr_integrations_unreal_UnrealPlugin_UltraleapTracking_ue5_4_HostProject_Plugins_UltraleapTracking_Source_UltraleapTrackingCore_Private_OpenXRToLeapWrapper_h


#define FOREACH_ENUM_EHANDKEYPOINTUL(op) \
	op(EHandKeypointUL::Palm) \
	op(EHandKeypointUL::Wrist) \
	op(EHandKeypointUL::ThumbMetacarpal) \
	op(EHandKeypointUL::ThumbProximal) \
	op(EHandKeypointUL::ThumbDistal) \
	op(EHandKeypointUL::ThumbTip) \
	op(EHandKeypointUL::IndexMetacarpal) \
	op(EHandKeypointUL::IndexProximal) \
	op(EHandKeypointUL::IndexIntermediate) \
	op(EHandKeypointUL::IndexDistal) \
	op(EHandKeypointUL::IndexTip) \
	op(EHandKeypointUL::MiddleMetacarpal) \
	op(EHandKeypointUL::MiddleProximal) \
	op(EHandKeypointUL::MiddleIntermediate) \
	op(EHandKeypointUL::MiddleDistal) \
	op(EHandKeypointUL::MiddleTip) \
	op(EHandKeypointUL::RingMetacarpal) \
	op(EHandKeypointUL::RingProximal) \
	op(EHandKeypointUL::RingIntermediate) \
	op(EHandKeypointUL::RingDistal) \
	op(EHandKeypointUL::RingTip) \
	op(EHandKeypointUL::LittleMetacarpal) \
	op(EHandKeypointUL::LittleProximal) \
	op(EHandKeypointUL::LittleIntermediate) \
	op(EHandKeypointUL::LittleDistal) \
	op(EHandKeypointUL::LittleTip) \
	op(EHandKeypointUL::Elbow) 

enum class EHandKeypointUL : uint8;
template<> struct TIsUEnumClass<EHandKeypointUL> { enum { Value = true }; };
template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<EHandKeypointUL>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
