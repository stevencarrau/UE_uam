// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Location.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocation() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ULocation_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ULocation();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ULocation::StaticRegisterNativesULocation()
	{
	}
	UClass* Z_Construct_UClass_ULocation_NoRegister()
	{
		return ULocation::StaticClass();
	}
	struct Z_Construct_UClass_ULocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Location.h" },
		{ "ModuleRelativePath", "Location.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocation_Statics::ClassParams = {
		&ULocation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocation, 2586855922);
	template<> MYPROJECT_API UClass* StaticClass<ULocation>()
	{
		return ULocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocation(Z_Construct_UClass_ULocation, &ULocation::StaticClass, TEXT("/Script/MyProject"), TEXT("ULocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
