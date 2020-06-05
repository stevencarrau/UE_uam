// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PyNativeWidgetHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyNativeWidgetHost() {}
// Cross Module References
	UNREALENGINEPYTHON_API UScriptStruct* Z_Construct_UScriptStruct_FPythonSWidgetWrapper();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPyNativeWidgetHost_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPyNativeWidgetHost();
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost();
// End Cross Module References
class UScriptStruct* FPythonSWidgetWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALENGINEPYTHON_API uint32 Get_Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPythonSWidgetWrapper, Z_Construct_UPackage__Script_UnrealEnginePython(), TEXT("PythonSWidgetWrapper"), sizeof(FPythonSWidgetWrapper), Get_Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Hash());
	}
	return Singleton;
}
template<> UNREALENGINEPYTHON_API UScriptStruct* StaticStruct<FPythonSWidgetWrapper>()
{
	return FPythonSWidgetWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPythonSWidgetWrapper(FPythonSWidgetWrapper::StaticStruct, TEXT("/Script/UnrealEnginePython"), TEXT("PythonSWidgetWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEnginePython_StaticRegisterNativesFPythonSWidgetWrapper
{
	FScriptStruct_UnrealEnginePython_StaticRegisterNativesFPythonSWidgetWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PythonSWidgetWrapper")),new UScriptStruct::TCppStructOps<FPythonSWidgetWrapper>);
	}
} ScriptStruct_UnrealEnginePython_StaticRegisterNativesFPythonSWidgetWrapper;
	struct Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PyNativeWidgetHost.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPythonSWidgetWrapper>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
		nullptr,
		&NewStructOps,
		"PythonSWidgetWrapper",
		sizeof(FPythonSWidgetWrapper),
		alignof(FPythonSWidgetWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPythonSWidgetWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEnginePython();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PythonSWidgetWrapper"), sizeof(FPythonSWidgetWrapper), Get_Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPythonSWidgetWrapper_Hash() { return 3523602407U; }
	void UPyNativeWidgetHost::StaticRegisterNativesUPyNativeWidgetHost()
	{
	}
	UClass* Z_Construct_UClass_UPyNativeWidgetHost_NoRegister()
	{
		return UPyNativeWidgetHost::StaticClass();
	}
	struct Z_Construct_UClass_UPyNativeWidgetHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyNativeWidgetHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNativeWidgetHost,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyNativeWidgetHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PyNativeWidgetHost.h" },
		{ "ModuleRelativePath", "Public/PyNativeWidgetHost.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyNativeWidgetHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyNativeWidgetHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPyNativeWidgetHost_Statics::ClassParams = {
		&UPyNativeWidgetHost::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyNativeWidgetHost_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPyNativeWidgetHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyNativeWidgetHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPyNativeWidgetHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPyNativeWidgetHost, 2807387319);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPyNativeWidgetHost>()
	{
		return UPyNativeWidgetHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPyNativeWidgetHost(Z_Construct_UClass_UPyNativeWidgetHost, &UPyNativeWidgetHost::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPyNativeWidgetHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyNativeWidgetHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
