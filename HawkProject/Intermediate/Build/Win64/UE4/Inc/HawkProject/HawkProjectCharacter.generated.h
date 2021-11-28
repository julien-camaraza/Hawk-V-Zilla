// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAWKPROJECT_HawkProjectCharacter_generated_h
#error "HawkProjectCharacter.generated.h already included, missing '#pragma once' in HawkProjectCharacter.h"
#endif
#define HAWKPROJECT_HawkProjectCharacter_generated_h

#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_SPARSE_DATA
#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_RPC_WRAPPERS
#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHawkProjectCharacter(); \
	friend struct Z_Construct_UClass_AHawkProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AHawkProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HawkProject"), NO_API) \
	DECLARE_SERIALIZER(AHawkProjectCharacter)


#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHawkProjectCharacter(); \
	friend struct Z_Construct_UClass_AHawkProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AHawkProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HawkProject"), NO_API) \
	DECLARE_SERIALIZER(AHawkProjectCharacter)


#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHawkProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHawkProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHawkProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHawkProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHawkProjectCharacter(AHawkProjectCharacter&&); \
	NO_API AHawkProjectCharacter(const AHawkProjectCharacter&); \
public:


#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHawkProjectCharacter(AHawkProjectCharacter&&); \
	NO_API AHawkProjectCharacter(const AHawkProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHawkProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHawkProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHawkProjectCharacter)


#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHawkProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AHawkProjectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__physicsCapsule() { return STRUCT_OFFSET(AHawkProjectCharacter, physicsCapsule); }


#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_10_PROLOG
#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_SPARSE_DATA \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_RPC_WRAPPERS \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_INCLASS \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_SPARSE_DATA \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_INCLASS_NO_PURE_DECLS \
	HawkProject_Source_HawkProject_HawkProjectCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAWKPROJECT_API UClass* StaticClass<class AHawkProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HawkProject_Source_HawkProject_HawkProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
