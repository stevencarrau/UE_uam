// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonEditor/Private/PythonProject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonProject() {}
// Cross Module References
	PYTHONEDITOR_API UClass* Z_Construct_UClass_UPythonProject_NoRegister();
	PYTHONEDITOR_API UClass* Z_Construct_UClass_UPythonProject();
	PYTHONEDITOR_API UClass* Z_Construct_UClass_UPythonProjectItem();
	UPackage* Z_Construct_UPackage__Script_PythonEditor();
// End Cross Module References
	void UPythonProject::StaticRegisterNativesUPythonProject()
	{
	}
	UClass* Z_Construct_UClass_UPythonProject_NoRegister()
	{
		return UPythonProject::StaticClass();
	}
	struct Z_Construct_UClass_UPythonProject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonProject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPythonProjectItem,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonProject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonProject.h" },
		{ "ModuleRelativePath", "Private/PythonProject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonProject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonProject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonProject_Statics::ClassParams = {
		&UPythonProject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPythonProject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonProject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonProject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonProject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonProject, 18451234);
	template<> PYTHONEDITOR_API UClass* StaticClass<UPythonProject>()
	{
		return UPythonProject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonProject(Z_Construct_UClass_UPythonProject, &UPythonProject::StaticClass, TEXT("/Script/PythonEditor"), TEXT("UPythonProject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonProject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
