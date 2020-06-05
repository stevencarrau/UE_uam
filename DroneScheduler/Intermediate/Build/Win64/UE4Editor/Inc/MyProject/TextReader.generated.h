// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_TextReader_generated_h
#error "TextReader.generated.h already included, missing '#pragma once' in TextReader.h"
#endif
#define MYPROJECT_TextReader_generated_h

#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_RPC_WRAPPERS
#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextReader(); \
	friend struct Z_Construct_UClass_UTextReader_Statics; \
public: \
	DECLARE_CLASS(UTextReader, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UTextReader)


#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTextReader(); \
	friend struct Z_Construct_UClass_UTextReader_Statics; \
public: \
	DECLARE_CLASS(UTextReader, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UTextReader)


#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextReader(UTextReader&&); \
	NO_API UTextReader(const UTextReader&); \
public:


#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextReader(UTextReader&&); \
	NO_API UTextReader(const UTextReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextReader)


#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_PRIVATE_PROPERTY_OFFSET
#define DroneScheduler_Source_MyProject_Public_TextReader_h_12_PROLOG
#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_RPC_WRAPPERS \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_INCLASS \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneScheduler_Source_MyProject_Public_TextReader_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_INCLASS_NO_PURE_DECLS \
	DroneScheduler_Source_MyProject_Public_TextReader_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UTextReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneScheduler_Source_MyProject_Public_TextReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
