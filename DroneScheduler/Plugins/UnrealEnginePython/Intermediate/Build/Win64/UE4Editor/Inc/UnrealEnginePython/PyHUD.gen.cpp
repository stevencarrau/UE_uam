// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyHUD() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyHUD_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_APyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyHUD_CallPythonHUDMethod();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString();
// End Cross Module References
	void APyHUD::StaticRegisterNativesAPyHUD()
	{
		UClass* Class = APyHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallPythonHUDMethod", &APyHUD::execCallPythonHUDMethod },
			{ "CallPythonHUDMethodBool", &APyHUD::execCallPythonHUDMethodBool },
			{ "CallPythonHUDMethodString", &APyHUD::execCallPythonHUDMethodString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics
	{
		struct PyHUD_eventCallPythonHUDMethod_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyHUD_eventCallPythonHUDMethod_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyHUD_eventCallPythonHUDMethod_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyHUD, nullptr, "CallPythonHUDMethod", nullptr, nullptr, sizeof(PyHUD_eventCallPythonHUDMethod_Parms), Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyHUD_CallPythonHUDMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyHUD_CallPythonHUDMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics
	{
		struct PyHUD_eventCallPythonHUDMethodBool_Parms
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
	void Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyHUD_eventCallPythonHUDMethodBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PyHUD_eventCallPythonHUDMethodBool_Parms), &Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyHUD_eventCallPythonHUDMethodBool_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyHUD_eventCallPythonHUDMethodBool_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyHUD, nullptr, "CallPythonHUDMethodBool", nullptr, nullptr, sizeof(PyHUD_eventCallPythonHUDMethodBool_Parms), Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics
	{
		struct PyHUD_eventCallPythonHUDMethodString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyHUD_eventCallPythonHUDMethodString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyHUD_eventCallPythonHUDMethodString_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyHUD_eventCallPythonHUDMethodString_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyHUD, nullptr, "CallPythonHUDMethodString", nullptr, nullptr, sizeof(PyHUD_eventCallPythonHUDMethodString_Parms), Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APyHUD_NoRegister()
	{
		return APyHUD::StaticClass();
	}
	struct Z_Construct_UClass_APyHUD_Statics
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
	UObject* (*const Z_Construct_UClass_APyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APyHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APyHUD_CallPythonHUDMethod, "CallPythonHUDMethod" }, // 2097606990
		{ &Z_Construct_UFunction_APyHUD_CallPythonHUDMethodBool, "CallPythonHUDMethodBool" }, // 3462496424
		{ &Z_Construct_UFunction_APyHUD_CallPythonHUDMethodString, "CallPythonHUDMethodString" }, // 450125656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PyHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyHUD_Statics::NewProp_PythonDisableAutoBinding_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
	};
#endif
	void Z_Construct_UClass_APyHUD_Statics::NewProp_PythonDisableAutoBinding_SetBit(void* Obj)
	{
		((APyHUD*)Obj)->PythonDisableAutoBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyHUD_Statics::NewProp_PythonDisableAutoBinding = { "PythonDisableAutoBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyHUD), &Z_Construct_UClass_APyHUD_Statics::NewProp_PythonDisableAutoBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonDisableAutoBinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonDisableAutoBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyHUD_Statics::NewProp_PythonTickForceDisabled_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
	};
#endif
	void Z_Construct_UClass_APyHUD_Statics::NewProp_PythonTickForceDisabled_SetBit(void* Obj)
	{
		((APyHUD*)Obj)->PythonTickForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APyHUD_Statics::NewProp_PythonTickForceDisabled = { "PythonTickForceDisabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APyHUD), &Z_Construct_UClass_APyHUD_Statics::NewProp_PythonTickForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonTickForceDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonTickForceDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyHUD_Statics::NewProp_PythonClass_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyHUD_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyHUD, PythonClass), METADATA_PARAMS(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyHUD_Statics::NewProp_PythonModule_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APyHUD_Statics::NewProp_PythonModule = { "PythonModule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyHUD, PythonModule), METADATA_PARAMS(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_APyHUD_Statics::NewProp_PythonModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APyHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyHUD_Statics::NewProp_PythonDisableAutoBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyHUD_Statics::NewProp_PythonTickForceDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyHUD_Statics::NewProp_PythonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyHUD_Statics::NewProp_PythonModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APyHUD_Statics::ClassParams = {
		&APyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APyHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APyHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APyHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APyHUD, 3545632007);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<APyHUD>()
	{
		return APyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APyHUD(Z_Construct_UClass_APyHUD, &APyHUD::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("APyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
