// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEPYTHON_PyHUD_generated_h
#error "PyHUD.generated.h already included, missing '#pragma once' in PyHUD.h"
#endif
#define UNREALENGINEPYTHON_PyHUD_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallPythonHUDMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonHUDMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonHUDMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonHUDMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonHUDMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonHUDMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallPythonHUDMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPythonHUDMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonHUDMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPythonHUDMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPythonHUDMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPythonHUDMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPyHUD(); \
	friend struct Z_Construct_UClass_APyHUD_Statics; \
public: \
	DECLARE_CLASS(APyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyHUD)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPyHUD(); \
	friend struct Z_Construct_UClass_APyHUD_Statics; \
public: \
	DECLARE_CLASS(APyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyHUD)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APyHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyHUD(APyHUD&&); \
	NO_API APyHUD(const APyHUD&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyHUD(APyHUD&&); \
	NO_API APyHUD(const APyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APyHUD)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_10_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class APyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
