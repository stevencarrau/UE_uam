// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef PYTHONCONSOLE_PyFactory_generated_h
#error "PyFactory.generated.h already included, missing '#pragma once' in PyFactory.h"
#endif
#define PYTHONCONSOLE_PyFactory_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_RPC_WRAPPERS
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_EVENT_PARMS \
	struct PyFactory_eventPyFactoryCreateFile_Parms \
	{ \
		UClass* Class; \
		UObject* InParent; \
		FString InName; \
		FString Filename; \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PyFactory_eventPyFactoryCreateFile_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct PyFactory_eventPyFactoryCreateNew_Parms \
	{ \
		UClass* Class; \
		UObject* InParent; \
		FString InName; \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PyFactory_eventPyFactoryCreateNew_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct PyFactory_eventPyResolveSupportedClass_Parms \
	{ \
		UClass* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PyFactory_eventPyResolveSupportedClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_CALLBACK_WRAPPERS
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyFactory(); \
	friend struct Z_Construct_UClass_UPyFactory_Statics; \
public: \
	DECLARE_CLASS(UPyFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonConsole"), NO_API) \
	DECLARE_SERIALIZER(UPyFactory)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPyFactory(); \
	friend struct Z_Construct_UClass_UPyFactory_Statics; \
public: \
	DECLARE_CLASS(UPyFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonConsole"), NO_API) \
	DECLARE_SERIALIZER(UPyFactory)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyFactory(UPyFactory&&); \
	NO_API UPyFactory(const UPyFactory&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyFactory(UPyFactory&&); \
	NO_API UPyFactory(const UPyFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyFactory)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_6_PROLOG \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_EVENT_PARMS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_CALLBACK_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_CALLBACK_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONCONSOLE_API UClass* StaticClass<class UPyFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_PythonConsole_Public_PyFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
