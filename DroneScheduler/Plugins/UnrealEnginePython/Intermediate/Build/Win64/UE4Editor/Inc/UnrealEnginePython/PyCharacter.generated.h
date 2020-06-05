// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRotator;
struct FVector;
#ifdef UNREALENGINEPYTHON_PyCharacter_generated_h
#error "PyCharacter.generated.h already included, missing '#pragma once' in PyCharacter.h"
#endif
#define UNREALENGINEPYTHON_PyCharacter_generated_h

#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPythonAttrObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrObject(Z_Param_attr,Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrRotator(Z_Param_attr,Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrVector(Z_Param_attr,Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_UBOOL(Z_Param_Boolean); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrBool(Z_Param_attr,Z_Param_Boolean); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrString(Z_Param_attr,Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Float); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrFloat(Z_Param_attr,Z_Param_Float); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Integer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrInt(Z_Param_attr,Z_Param_Integer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethodFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CallPyCharacterMethodFloat(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPyCharacterMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPyCharacterMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPyCharacterMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPythonAttrObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrObject(Z_Param_attr,Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrRotator(Z_Param_attr,Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrVector(Z_Param_attr,Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_UBOOL(Z_Param_Boolean); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrBool(Z_Param_attr,Z_Param_Boolean); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrString(Z_Param_attr,Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Float); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrFloat(Z_Param_attr,Z_Param_Float); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPythonAttrInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attr); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Integer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPythonAttrInt(Z_Param_attr,Z_Param_Integer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethodFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CallPyCharacterMethodFloat(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethodString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->CallPyCharacterMethodString(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethodBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CallPyCharacterMethodBool(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallPyCharacterMethod) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_method_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_args); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallPyCharacterMethod(Z_Param_method_name,Z_Param_args); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPyCharacter(); \
	friend struct Z_Construct_UClass_APyCharacter_Statics; \
public: \
	DECLARE_CLASS(APyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyCharacter)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPyCharacter(); \
	friend struct Z_Construct_UClass_APyCharacter_Statics; \
public: \
	DECLARE_CLASS(APyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEnginePython"), NO_API) \
	DECLARE_SERIALIZER(APyCharacter)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyCharacter(APyCharacter&&); \
	NO_API APyCharacter(const APyCharacter&); \
public:


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyCharacter(APyCharacter&&); \
	NO_API APyCharacter(const APyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APyCharacter)


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_9_PROLOG
#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_RPC_WRAPPERS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_INCLASS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEPYTHON_API UClass* StaticClass<class APyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Plugins_UnrealEnginePython_Source_UnrealEnginePython_Public_PyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
