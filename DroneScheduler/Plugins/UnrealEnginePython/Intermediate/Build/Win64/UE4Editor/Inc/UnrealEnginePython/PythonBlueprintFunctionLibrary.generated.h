// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEPYTHON_PythonBlueprintFunctionLibrary_generated_h
#error "PythonBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in PythonBlueprintFunctionLibrary.h"
#endif
#define UNREALENGINEPYTHON_PythonBlueprintFunctionLibrary_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecutePythonString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PythonCmd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPythonBlueprintFunctionLibrary::ExecutePythonString(Z_Param_PythonCmd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecutePythonScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_script); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPythonBlueprintFunctionLibrary::ExecutePythonScript(Z_Param_script); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecutePythonString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PythonCmd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPythonBlueprintFunctionLibrary::ExecutePythonString(Z_Param_PythonCmd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecutePythonScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_script); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPythonBlueprintFunctionLibrary::ExecutePythonScript(Z_Param_script); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPythonBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPythonBlueprintFunctionLibrary)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPythonBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPythonBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPythonBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPythonBlueprintFunctionLibrary)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonBlueprintFunctionLibrary(UPythonBlueprintFunctionLibrary&&); \
	NO_API UPythonBlueprintFunctionLibrary(const UPythonBlueprintFunctionLibrary&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonBlueprintFunctionLibrary(UPythonBlueprintFunctionLibrary&&); \
	NO_API UPythonBlueprintFunctionLibrary(const UPythonBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonBlueprintFunctionLibrary)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_9_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class UPythonBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
