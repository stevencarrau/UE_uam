// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINEPYTHON_PythonDelegate_generated_h
#error "PythonDelegate.generated.h already included, missing '#pragma once' in PythonDelegate.h"
#endif
#define UNREALENGINEPYTHON_PythonDelegate_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPyFakeCallable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PyFakeCallable(); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPyFakeCallable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PyFakeCallable(); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonDelegate(); \
	friend struct Z_Construct_UClass_UPythonDelegate_Statics; \
public: \
	DECLARE_CLASS(UPythonDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPythonDelegate)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPythonDelegate(); \
	friend struct Z_Construct_UClass_UPythonDelegate_Statics; \
public: \
	DECLARE_CLASS(UPythonDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(UPythonDelegate)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonDelegate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonDelegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonDelegate(UPythonDelegate&&); \
	NO_API UPythonDelegate(const UPythonDelegate&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonDelegate(UPythonDelegate&&); \
	NO_API UPythonDelegate(const UPythonDelegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonDelegate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPythonDelegate)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_6_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class UPythonDelegate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PythonDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
