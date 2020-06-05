// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_TextReaderLibrary_generated_h
#error "TextReaderLibrary.generated.h already included, missing '#pragma once' in TextReaderLibrary.h"
#endif
#define MYPROJECT_TextReaderLibrary_generated_h

#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTextReaderLibrary::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTextReaderLibrary::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTextReaderLibrary::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTextReaderLibrary::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextReaderLibrary(); \
	friend struct Z_Construct_UClass_UTextReaderLibrary_Statics; \
public: \
	DECLARE_CLASS(UTextReaderLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UTextReaderLibrary)


#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTextReaderLibrary(); \
	friend struct Z_Construct_UClass_UTextReaderLibrary_Statics; \
public: \
	DECLARE_CLASS(UTextReaderLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UTextReaderLibrary)


#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextReaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextReaderLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextReaderLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextReaderLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextReaderLibrary(UTextReaderLibrary&&); \
	NO_API UTextReaderLibrary(const UTextReaderLibrary&); \
public:


#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextReaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextReaderLibrary(UTextReaderLibrary&&); \
	NO_API UTextReaderLibrary(const UTextReaderLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextReaderLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextReaderLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextReaderLibrary)


#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_12_PROLOG
#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_RPC_WRAPPERS \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_INCLASS \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UTextReaderLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Source_MyProject_Public_TextReaderLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
