// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/TextReaderLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextReaderLibrary() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UTextReaderLibrary_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UTextReaderLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UTextReaderLibrary_LoadTxt();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UTextReaderLibrary_SaveTxt();
// End Cross Module References
	void UTextReaderLibrary::StaticRegisterNativesUTextReaderLibrary()
	{
		UClass* Class = UTextReaderLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTxt", &UTextReaderLibrary::execLoadTxt },
			{ "SaveTxt", &UTextReaderLibrary::execSaveTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics
	{
		struct TextReaderLibrary_eventLoadTxt_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextReaderLibrary_eventLoadTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextReaderLibrary_eventLoadTxt_Parms), &Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_SaveTextA = { "SaveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextReaderLibrary_eventLoadTxt_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextReaderLibrary_eventLoadTxt_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project CPP Nodes" },
		{ "Keywords", "Load Text File" },
		{ "ModuleRelativePath", "Public/TextReaderLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextReaderLibrary, nullptr, "LoadTxt", nullptr, nullptr, sizeof(TextReaderLibrary_eventLoadTxt_Parms), Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextReaderLibrary_LoadTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextReaderLibrary_LoadTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics
	{
		struct TextReaderLibrary_eventSaveTxt_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextReaderLibrary_eventSaveTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextReaderLibrary_eventSaveTxt_Parms), &Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextReaderLibrary_eventSaveTxt_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextReaderLibrary_eventSaveTxt_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::NewProp_SaveTextB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project CPP Nodes" },
		{ "Keywords", "Save Text File" },
		{ "ModuleRelativePath", "Public/TextReaderLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextReaderLibrary, nullptr, "SaveTxt", nullptr, nullptr, sizeof(TextReaderLibrary_eventSaveTxt_Parms), Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextReaderLibrary_SaveTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextReaderLibrary_SaveTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextReaderLibrary_NoRegister()
	{
		return UTextReaderLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTextReaderLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextReaderLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextReaderLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextReaderLibrary_LoadTxt, "LoadTxt" }, // 281409283
		{ &Z_Construct_UFunction_UTextReaderLibrary_SaveTxt, "SaveTxt" }, // 2570280216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextReaderLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextReaderLibrary.h" },
		{ "ModuleRelativePath", "Public/TextReaderLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextReaderLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextReaderLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextReaderLibrary_Statics::ClassParams = {
		&UTextReaderLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextReaderLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextReaderLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextReaderLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextReaderLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextReaderLibrary, 3997061911);
	template<> MYPROJECT_API UClass* StaticClass<UTextReaderLibrary>()
	{
		return UTextReaderLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextReaderLibrary(Z_Construct_UClass_UTextReaderLibrary, &UTextReaderLibrary::StaticClass, TEXT("/Script/MyProject"), TEXT("UTextReaderLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextReaderLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
