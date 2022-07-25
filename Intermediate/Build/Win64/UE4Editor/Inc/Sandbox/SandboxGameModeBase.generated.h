// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANDBOX_SandboxGameModeBase_generated_h
#error "SandboxGameModeBase.generated.h already included, missing '#pragma once' in SandboxGameModeBase.h"
#endif
#define SANDBOX_SandboxGameModeBase_generated_h

#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_SPARSE_DATA
#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_RPC_WRAPPERS
#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASandboxGameModeBase(); \
	friend struct Z_Construct_UClass_ASandboxGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASandboxGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(ASandboxGameModeBase)


#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASandboxGameModeBase(); \
	friend struct Z_Construct_UClass_ASandboxGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASandboxGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(ASandboxGameModeBase)


#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASandboxGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASandboxGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASandboxGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASandboxGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASandboxGameModeBase(ASandboxGameModeBase&&); \
	NO_API ASandboxGameModeBase(const ASandboxGameModeBase&); \
public:


#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASandboxGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASandboxGameModeBase(ASandboxGameModeBase&&); \
	NO_API ASandboxGameModeBase(const ASandboxGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASandboxGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASandboxGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASandboxGameModeBase)


#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_12_PROLOG
#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_SPARSE_DATA \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_RPC_WRAPPERS \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_INCLASS \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_SPARSE_DATA \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Sandbox_Source_Sandbox_SandboxGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class ASandboxGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sandbox_Source_Sandbox_SandboxGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
