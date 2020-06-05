// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PythonDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonDelegate() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonDelegate_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonDelegate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPythonDelegate_PyFakeCallable();
// End Cross Module References
	void UPythonDelegate::StaticRegisterNativesUPythonDelegate()
	{
		UClass* Class = UPythonDelegate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PyFakeCallable", &UPythonDelegate::execPyFakeCallable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPythonDelegate_PyFakeCallable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonDelegate_PyFakeCallable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PythonDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonDelegate_PyFakeCallable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonDelegate, nullptr, "PyFakeCallable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonDelegate_PyFakeCallable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPythonDelegate_PyFakeCallable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonDelegate_PyFakeCallable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPythonDelegate_PyFakeCallable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPythonDelegate_NoRegister()
	{
		return UPythonDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UPythonDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPythonDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPythonDelegate_PyFakeCallable, "PyFakeCallable" }, // 1139059877
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonDelegate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonDelegate.h" },
		{ "ModuleRelativePath", "Public/PythonDelegate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonDelegate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonDelegate_Statics::ClassParams = {
		&UPythonDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonDelegate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonDelegate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonDelegate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonDelegate, 1624419802);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPythonDelegate>()
	{
		return UPythonDelegate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonDelegate(Z_Construct_UClass_UPythonDelegate, &UPythonDelegate::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPythonDelegate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonDelegate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
