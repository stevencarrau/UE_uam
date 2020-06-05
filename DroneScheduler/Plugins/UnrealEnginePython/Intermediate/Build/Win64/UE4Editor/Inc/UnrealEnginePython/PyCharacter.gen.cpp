// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyCharacter() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyCharacter_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrBool();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrInt();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrString();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APyCharacter::StaticRegisterNativesAPyCharacter()
	{
		UClass* Class = APyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallPyCharacterMethod", &APyCharacter::execCallPyCharacterMethod },
			{ "CallPyCharacterMethodBool", &APyCharacter::execCallPyCharacterMethodBool },
			{ "CallPyCharacterMethodFloat", &APyCharacter::execCallPyCharacterMethodFloat },
			{ "CallPyCharacterMethodString", &APyCharacter::execCallPyCharacterMethodString },
			{ "SetPythonAttrBool", &APyCharacter::execSetPythonAttrBool },
			{ "SetPythonAttrFloat", &APyCharacter::execSetPythonAttrFloat },
			{ "SetPythonAttrInt", &APyCharacter::execSetPythonAttrInt },
			{ "SetPythonAttrObject", &APyCharacter::execSetPythonAttrObject },
			{ "SetPythonAttrRotator", &APyCharacter::execSetPythonAttrRotator },
			{ "SetPythonAttrString", &APyCharacter::execSetPythonAttrString },
			{ "SetPythonAttrVector", &APyCharacter::execSetPythonAttrVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics
	{
		struct PyCharacter_eventCallPyCharacterMethod_Parms
		{
			FString method_name;
			FString args;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethod_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethod_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "CallPyCharacterMethod", nullptr, nullptr, sizeof(PyCharacter_eventCallPyCharacterMethod_Parms), Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics
	{
		struct PyCharacter_eventCallPyCharacterMethodBool_Parms
		{
			FString method_name;
			FString args;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyCharacter_eventCallPyCharacterMethodBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PyCharacter_eventCallPyCharacterMethodBool_Parms), &Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodBool_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodBool_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "CallPyCharacterMethodBool", nullptr, nullptr, sizeof(PyCharacter_eventCallPyCharacterMethodBool_Parms), Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics
	{
		struct PyCharacter_eventCallPyCharacterMethodFloat_Parms
		{
			FString method_name;
			FString args;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodFloat_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodFloat_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "CallPyCharacterMethodFloat", nullptr, nullptr, sizeof(PyCharacter_eventCallPyCharacterMethodFloat_Parms), Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics
	{
		struct PyCharacter_eventCallPyCharacterMethodString_Parms
		{
			FString method_name;
			FString args;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodString_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventCallPyCharacterMethodString_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "CallPyCharacterMethodString", nullptr, nullptr, sizeof(PyCharacter_eventCallPyCharacterMethodString_Parms), Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics
	{
		struct PyCharacter_eventSetPythonAttrBool_Parms
		{
			FString attr;
			bool Boolean;
		};
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Boolean;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((PyCharacter_eventSetPythonAttrBool_Parms*)Obj)->Boolean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PyCharacter_eventSetPythonAttrBool_Parms), &Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrBool_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::NewProp_Boolean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "SetPythonAttrBool", nullptr, nullptr, sizeof(PyCharacter_eventSetPythonAttrBool_Parms), Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_SetPythonAttrBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics
	{
		struct PyCharacter_eventSetPythonAttrFloat_Parms
		{
			FString attr;
			float Float;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrFloat_Parms, Float), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrFloat_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::NewProp_Float,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "SetPythonAttrFloat", nullptr, nullptr, sizeof(PyCharacter_eventSetPythonAttrFloat_Parms), Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics
	{
		struct PyCharacter_eventSetPythonAttrInt_Parms
		{
			FString attr;
			int32 Integer;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Integer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrInt_Parms, Integer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrInt_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::NewProp_Integer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "SetPythonAttrInt", nullptr, nullptr, sizeof(PyCharacter_eventSetPythonAttrInt_Parms), Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_SetPythonAttrInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics
	{
		struct PyCharacter_eventSetPythonAttrObject_Parms
		{
			FString attr;
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrObject_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "SetPythonAttrObject", nullptr, nullptr, sizeof(PyCharacter_eventSetPythonAttrObject_Parms), Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_SetPythonAttrObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics
	{
		struct PyCharacter_eventSetPythonAttrRotator_Parms
		{
			FString attr;
			FRotator Rotator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrRotator_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrRotator_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "SetPythonAttrRotator", nullptr, nullptr, sizeof(PyCharacter_eventSetPythonAttrRotator_Parms), Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics
	{
		struct PyCharacter_eventSetPythonAttrString_Parms
		{
			FString attr;
			FString String;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrString_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrString_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "SetPythonAttrString", nullptr, nullptr, sizeof(PyCharacter_eventSetPythonAttrString_Parms), Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_SetPythonAttrString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics
	{
		struct PyCharacter_eventSetPythonAttrVector_Parms
		{
			FString attr;
			FVector Vector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrVector_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyCharacter_eventSetPythonAttrVector_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyCharacter, nullptr, "SetPythonAttrVector", nullptr, nullptr, sizeof(PyCharacter_eventSetPythonAttrVector_Parms), Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyCharacter_SetPythonAttrVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyCharacter_SetPythonAttrVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APyCharacter_NoRegister()
	{
		return APyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonDisableAutoBinding_MetaData[];
#endif
		static void NewProp_PythonDisableAutoBinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PythonDisableAutoBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonTickForceDisabled_MetaData[];
#endif
		static void NewProp_PythonTickForceDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PythonTickForceDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PythonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonModule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PythonModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APyCharacter_CallPyCharacterMethod, "CallPyCharacterMethod" }, // 3417272459
		{ &Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodBool, "CallPyCharacterMethodBool" }, // 1868548594
		{ &Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodFloat, "CallPyCharacterMethodFloat" }, // 1472330335
		{ &Z_Construct_UFunction_APyCharacter_CallPyCharacterMethodString, "CallPyCharacterMethodString" }, // 3778013312
		{ &Z_Construct_UFunction_APyCharacter_SetPythonAttrBool, "SetPythonAttrBool" }, // 592606369
		{ &Z_Construct_UFunction_APyCharacter_SetPythonAttrFloat, "SetPythonAttrFloat" }, // 4185949915
		{ &Z_Construct_UFunction_APyCharacter_SetPythonAttrInt, "SetPythonAttrInt" }, // 3184476588
		{ &Z_Construct_UFunction_APyCharacter_SetPythonAttrObject, "SetPythonAttrObject" }, // 3337171697
		{ &Z_Construct_UFunction_APyCharacter_SetPythonAttrRotator, "SetPythonAttrRotator" }, // 2732483219
		{ &Z_Construct_UFunction_APyCharacter_SetPythonAttrString, "SetPythonAttrString" }, // 3545527363
		{ &Z_Construct_UFunction_APyCharacter_SetPythonAttrVector, "SetPythonAttrVector" }, // 3847976910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PyCharacter.h" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonDisableAutoBinding_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonDisableAutoBinding_SetBit(void* Obj)
	{
		((APyCharacter*)Obj)->PythonDisableAutoBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonDisableAutoBinding = { "PythonDisableAutoBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyCharacter), &Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonDisableAutoBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonDisableAutoBinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonDisableAutoBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonTickForceDisabled_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonTickForceDisabled_SetBit(void* Obj)
	{
		((APyCharacter*)Obj)->PythonTickForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonTickForceDisabled = { "PythonTickForceDisabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyCharacter), &Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonTickForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonTickForceDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonTickForceDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonClass_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyCharacter, PythonClass), METADATA_PARAMS(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonModule_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonModule = { "PythonModule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyCharacter, PythonModule), METADATA_PARAMS(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonDisableAutoBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonTickForceDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyCharacter_Statics::NewProp_PythonModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APyCharacter_Statics::ClassParams = {
		&APyCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APyCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APyCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APyCharacter, 2045675631);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<APyCharacter>()
	{
		return APyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APyCharacter(Z_Construct_UClass_APyCharacter, &APyCharacter::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("APyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
