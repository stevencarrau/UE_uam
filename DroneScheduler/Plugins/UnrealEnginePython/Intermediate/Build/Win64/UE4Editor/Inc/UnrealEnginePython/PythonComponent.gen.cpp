// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PythonComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonComponent() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonComponent_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_InitializePythonComponent();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrString();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UPythonComponent::StaticRegisterNativesUPythonComponent()
	{
		UClass* Class = UPythonComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallPythonComponentMethod", &UPythonComponent::execCallPythonComponentMethod },
			{ "CallPythonComponentMethodBool", &UPythonComponent::execCallPythonComponentMethodBool },
			{ "CallPythonComponentMethodFloat", &UPythonComponent::execCallPythonComponentMethodFloat },
			{ "CallPythonComponentMethodInt", &UPythonComponent::execCallPythonComponentMethodInt },
			{ "CallPythonComponentMethodMap", &UPythonComponent::execCallPythonComponentMethodMap },
			{ "CallPythonComponentMethodObject", &UPythonComponent::execCallPythonComponentMethodObject },
			{ "CallPythonComponentMethodString", &UPythonComponent::execCallPythonComponentMethodString },
			{ "CallPythonComponentMethodStringArray", &UPythonComponent::execCallPythonComponentMethodStringArray },
			{ "InitializePythonComponent", &UPythonComponent::execInitializePythonComponent },
			{ "SetPythonAttrBool", &UPythonComponent::execSetPythonAttrBool },
			{ "SetPythonAttrFloat", &UPythonComponent::execSetPythonAttrFloat },
			{ "SetPythonAttrInt", &UPythonComponent::execSetPythonAttrInt },
			{ "SetPythonAttrObject", &UPythonComponent::execSetPythonAttrObject },
			{ "SetPythonAttrRotator", &UPythonComponent::execSetPythonAttrRotator },
			{ "SetPythonAttrString", &UPythonComponent::execSetPythonAttrString },
			{ "SetPythonAttrVector", &UPythonComponent::execSetPythonAttrVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethod_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethod_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethod_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethod", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethod_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethodBool_Parms
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
	void Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PythonComponent_eventCallPythonComponentMethodBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PythonComponent_eventCallPythonComponentMethodBool_Parms), &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodBool_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodBool_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethodBool", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethodBool_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethodFloat_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodFloat_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodFloat_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethodFloat", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethodFloat_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethodInt_Parms
		{
			FString method_name;
			FString args;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodInt_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodInt_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethodInt", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethodInt_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethodMap_Parms
		{
			FString method_name;
			FString args;
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodMap_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodMap_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodMap_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethodMap", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethodMap_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethodObject_Parms
		{
			FString method_name;
			UObject* arg;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arg;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::NewProp_arg = { "arg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodObject_Parms, arg), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodObject_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::NewProp_arg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethodObject", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethodObject_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethodString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodString_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodString_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethodString", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethodString_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics
	{
		struct PythonComponent_eventCallPythonComponentMethodStringArray_Parms
		{
			FString method_name;
			FString args;
			TArray<FString> output_strings;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output_strings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_output_strings_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_output_strings = { "output_strings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodStringArray_Parms, output_strings), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_output_strings_Inner = { "output_strings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodStringArray_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventCallPythonComponentMethodStringArray_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_output_strings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_output_strings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "CallPythonComponentMethodStringArray", nullptr, nullptr, sizeof(PythonComponent_eventCallPythonComponentMethodStringArray_Parms), Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_InitializePythonComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_InitializePythonComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_InitializePythonComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "InitializePythonComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_InitializePythonComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_InitializePythonComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_InitializePythonComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_InitializePythonComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics
	{
		struct PythonComponent_eventSetPythonAttrBool_Parms
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
	void Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((PythonComponent_eventSetPythonAttrBool_Parms*)Obj)->Boolean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PythonComponent_eventSetPythonAttrBool_Parms), &Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrBool_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::NewProp_Boolean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "SetPythonAttrBool", nullptr, nullptr, sizeof(PythonComponent_eventSetPythonAttrBool_Parms), Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics
	{
		struct PythonComponent_eventSetPythonAttrFloat_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrFloat_Parms, Float), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrFloat_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::NewProp_Float,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "SetPythonAttrFloat", nullptr, nullptr, sizeof(PythonComponent_eventSetPythonAttrFloat_Parms), Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics
	{
		struct PythonComponent_eventSetPythonAttrInt_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrInt_Parms, Integer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrInt_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::NewProp_Integer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "SetPythonAttrInt", nullptr, nullptr, sizeof(PythonComponent_eventSetPythonAttrInt_Parms), Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics
	{
		struct PythonComponent_eventSetPythonAttrObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrObject_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "SetPythonAttrObject", nullptr, nullptr, sizeof(PythonComponent_eventSetPythonAttrObject_Parms), Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics
	{
		struct PythonComponent_eventSetPythonAttrRotator_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrRotator_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrRotator_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "SetPythonAttrRotator", nullptr, nullptr, sizeof(PythonComponent_eventSetPythonAttrRotator_Parms), Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics
	{
		struct PythonComponent_eventSetPythonAttrString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrString_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrString_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "SetPythonAttrString", nullptr, nullptr, sizeof(PythonComponent_eventSetPythonAttrString_Parms), Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_SetPythonAttrString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics
	{
		struct PythonComponent_eventSetPythonAttrVector_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrVector_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::NewProp_attr = { "attr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PythonComponent_eventSetPythonAttrVector_Parms, attr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::NewProp_attr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonComponent, nullptr, "SetPythonAttrVector", nullptr, nullptr, sizeof(PythonComponent_eventSetPythonAttrVector_Parms), Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPythonComponent_NoRegister()
	{
		return UPythonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPythonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonTickEnableGenerator_MetaData[];
#endif
		static void NewProp_PythonTickEnableGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PythonTickEnableGenerator;
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
	UObject* (*const Z_Construct_UClass_UPythonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPythonComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethod, "CallPythonComponentMethod" }, // 3448876584
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodBool, "CallPythonComponentMethodBool" }, // 2763362069
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodFloat, "CallPythonComponentMethodFloat" }, // 2227350668
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodInt, "CallPythonComponentMethodInt" }, // 3268587237
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodMap, "CallPythonComponentMethodMap" }, // 3722186679
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodObject, "CallPythonComponentMethodObject" }, // 1368693533
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodString, "CallPythonComponentMethodString" }, // 1949118227
		{ &Z_Construct_UFunction_UPythonComponent_CallPythonComponentMethodStringArray, "CallPythonComponentMethodStringArray" }, // 2764258179
		{ &Z_Construct_UFunction_UPythonComponent_InitializePythonComponent, "InitializePythonComponent" }, // 3910654633
		{ &Z_Construct_UFunction_UPythonComponent_SetPythonAttrBool, "SetPythonAttrBool" }, // 13771672
		{ &Z_Construct_UFunction_UPythonComponent_SetPythonAttrFloat, "SetPythonAttrFloat" }, // 1966572756
		{ &Z_Construct_UFunction_UPythonComponent_SetPythonAttrInt, "SetPythonAttrInt" }, // 2014802911
		{ &Z_Construct_UFunction_UPythonComponent_SetPythonAttrObject, "SetPythonAttrObject" }, // 3982633014
		{ &Z_Construct_UFunction_UPythonComponent_SetPythonAttrRotator, "SetPythonAttrRotator" }, // 1610247452
		{ &Z_Construct_UFunction_UPythonComponent_SetPythonAttrString, "SetPythonAttrString" }, // 3763655551
		{ &Z_Construct_UFunction_UPythonComponent_SetPythonAttrVector, "SetPythonAttrVector" }, // 1348120847
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Python" },
		{ "IncludePath", "PythonComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickEnableGenerator_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickEnableGenerator_SetBit(void* Obj)
	{
		((UPythonComponent*)Obj)->PythonTickEnableGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickEnableGenerator = { "PythonTickEnableGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPythonComponent), &Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickEnableGenerator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickEnableGenerator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickEnableGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonDisableAutoBinding_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonDisableAutoBinding_SetBit(void* Obj)
	{
		((UPythonComponent*)Obj)->PythonDisableAutoBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonDisableAutoBinding = { "PythonDisableAutoBinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPythonComponent), &Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonDisableAutoBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonDisableAutoBinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonDisableAutoBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickForceDisabled_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickForceDisabled_SetBit(void* Obj)
	{
		((UPythonComponent*)Obj)->PythonTickForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickForceDisabled = { "PythonTickForceDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPythonComponent), &Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickForceDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickForceDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonClass_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonComponent, PythonClass), METADATA_PARAMS(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonModule_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PythonComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonModule = { "PythonModule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonComponent, PythonModule), METADATA_PARAMS(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPythonComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickEnableGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonDisableAutoBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonTickForceDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonComponent_Statics::NewProp_PythonModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonComponent_Statics::ClassParams = {
		&UPythonComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPythonComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPythonComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonComponent, 580237751);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPythonComponent>()
	{
		return UPythonComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonComponent(Z_Construct_UClass_UPythonComponent, &UPythonComponent::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPythonComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
