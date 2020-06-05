// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PythonClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonClass() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonClass_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPythonClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
// End Cross Module References
	void UPythonClass::StaticRegisterNativesUPythonClass()
	{
	}
	UClass* Z_Construct_UClass_UPythonClass_NoRegister()
	{
		return UPythonClass::StaticClass();
	}
	struct Z_Construct_UClass_UPythonClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonClass.h" },
		{ "ModuleRelativePath", "Public/PythonClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonClass_Statics::ClassParams = {
		&UPythonClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPythonClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonClass, 2221607179);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPythonClass>()
	{
		return UPythonClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonClass(Z_Construct_UClass_UPythonClass, &UPythonClass::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPythonClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
