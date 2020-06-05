// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/TextReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextReader() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UTextReader_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UTextReader();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UTextReader::StaticRegisterNativesUTextReader()
	{
	}
	UClass* Z_Construct_UClass_UTextReader_NoRegister()
	{
		return UTextReader::StaticClass();
	}
	struct Z_Construct_UClass_UTextReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextReader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextReader.h" },
		{ "ModuleRelativePath", "Public/TextReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextReader_Statics::ClassParams = {
		&UTextReader::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextReader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextReader, 398438020);
	template<> MYPROJECT_API UClass* StaticClass<UTextReader>()
	{
		return UTextReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextReader(Z_Construct_UClass_UTextReader, &UTextReader::StaticClass, TEXT("/Script/MyProject"), TEXT("UTextReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
