// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PythonFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonFunction() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonFunction_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
// End Cross Module References
	void UPythonFunction::StaticRegisterNativesUPythonFunction()
	{
	}
	UClass* Z_Construct_UClass_UPythonFunction_NoRegister()
	{
		return UPythonFunction::StaticClass();
	}
	struct Z_Construct_UClass_UPythonFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonFunction.h" },
		{ "ModuleRelativePath", "Public/PythonFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonFunction_Statics::ClassParams = {
		&UPythonFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonFunction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonFunction, 213465902);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPythonFunction>()
	{
		return UPythonFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonFunction(Z_Construct_UClass_UPythonFunction, &UPythonFunction::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPythonFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
