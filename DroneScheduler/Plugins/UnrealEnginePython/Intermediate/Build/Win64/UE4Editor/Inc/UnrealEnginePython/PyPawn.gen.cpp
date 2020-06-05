// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyPawn() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyPawn_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyPawn_CallPythonPawnMethod();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString();
// End Cross Module References
	void APyPawn::StaticRegisterNativesAPyPawn()
	{
		UClass* Class = APyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallPythonPawnMethod", &APyPawn::execCallPythonPawnMethod },
			{ "CallPythonPawnMethodBool", &APyPawn::execCallPythonPawnMethodBool },
			{ "CallPythonPawnMethodString", &APyPawn::execCallPythonPawnMethodString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics
	{
		struct PyPawn_eventCallPythonPawnMethod_Parms
		{
			FString method_name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyPawn_eventCallPythonPawnMethod_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyPawn, nullptr, "CallPythonPawnMethod", nullptr, nullptr, sizeof(PyPawn_eventCallPythonPawnMethod_Parms), Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyPawn_CallPythonPawnMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyPawn_CallPythonPawnMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics
	{
		struct PyPawn_eventCallPythonPawnMethodBool_Parms
		{
			FString method_name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyPawn_eventCallPythonPawnMethodBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PyPawn_eventCallPythonPawnMethodBool_Parms), &Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyPawn_eventCallPythonPawnMethodBool_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyPawn, nullptr, "CallPythonPawnMethodBool", nullptr, nullptr, sizeof(PyPawn_eventCallPythonPawnMethodBool_Parms), Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics
	{
		struct PyPawn_eventCallPythonPawnMethodString_Parms
		{
			FString method_name;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_method_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyPawn_eventCallPythonPawnMethodString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyPawn_eventCallPythonPawnMethodString_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyPawn, nullptr, "CallPythonPawnMethodString", nullptr, nullptr, sizeof(PyPawn_eventCallPythonPawnMethodString_Parms), Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APyPawn_NoRegister()
	{
		return APyPawn::StaticClass();
	}
	struct Z_Construct_UClass_APyPawn_Statics
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
	UObject* (*const Z_Construct_UClass_APyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APyPawn_CallPythonPawnMethod, "CallPythonPawnMethod" }, // 3062333911
		{ &Z_Construct_UFunction_APyPawn_CallPythonPawnMethodBool, "CallPythonPawnMethodBool" }, // 2066929496
		{ &Z_Construct_UFunction_APyPawn_CallPythonPawnMethodString, "CallPythonPawnMethodString" }, // 914319906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PyPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyPawn_Statics::NewProp_PythonDisableAutoBinding_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
	void Z_Construct_UClass_APyPawn_Statics::NewProp_PythonDisableAutoBinding_SetBit(void* Obj)
	{
		((APyPawn*)Obj)->PythonDisableAutoBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyPawn_Statics::NewProp_PythonDisableAutoBinding = { "PythonDisableAutoBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyPawn), &Z_Construct_UClass_APyPawn_Statics::NewProp_PythonDisableAutoBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonDisableAutoBinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonDisableAutoBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyPawn_Statics::NewProp_PythonTickForceDisabled_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
	void Z_Construct_UClass_APyPawn_Statics::NewProp_PythonTickForceDisabled_SetBit(void* Obj)
	{
		((APyPawn*)Obj)->PythonTickForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyPawn_Statics::NewProp_PythonTickForceDisabled = { "PythonTickForceDisabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyPawn), &Z_Construct_UClass_APyPawn_Statics::NewProp_PythonTickForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonTickForceDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonTickForceDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyPawn_Statics::NewProp_PythonClass_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyPawn_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyPawn, PythonClass), METADATA_PARAMS(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyPawn_Statics::NewProp_PythonModule_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyPawn_Statics::NewProp_PythonModule = { "PythonModule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyPawn, PythonModule), METADATA_PARAMS(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyPawn_Statics::NewProp_PythonModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APyPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyPawn_Statics::NewProp_PythonDisableAutoBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyPawn_Statics::NewProp_PythonTickForceDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyPawn_Statics::NewProp_PythonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyPawn_Statics::NewProp_PythonModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APyPawn_Statics::ClassParams = {
		&APyPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APyPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APyPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APyPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APyPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APyPawn, 1619799284);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<APyPawn>()
	{
		return APyPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APyPawn(Z_Construct_UClass_APyPawn, &APyPawn::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("APyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
