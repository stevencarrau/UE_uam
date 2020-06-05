// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonEditor/Private/PythonProjectItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonProjectItem() {}
// Cross Module References
	PYTHONEDITOR_API UEnum* Z_Construct_UEnum_PythonEditor_EPythonProjectItemType();
	UPackage* Z_Construct_UPackage__Script_PythonEditor();
	PYTHONEDITOR_API UClass* Z_Construct_UClass_UPythonProjectItem_NoRegister();
	PYTHONEDITOR_API UClass* Z_Construct_UClass_UPythonProjectItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EPythonProjectItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PythonEditor_EPythonProjectItemType, Z_Construct_UPackage__Script_PythonEditor(), TEXT("EPythonProjectItemType"));
		}
		return Singleton;
	}
	template<> PYTHONEDITOR_API UEnum* StaticEnum<EPythonProjectItemType::Type>()
	{
		return EPythonProjectItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPythonProjectItemType(EPythonProjectItemType_StaticEnum, TEXT("/Script/PythonEditor"), TEXT("EPythonProjectItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PythonEditor_EPythonProjectItemType_Hash() { return 3680536895U; }
	UEnum* Z_Construct_UEnum_PythonEditor_EPythonProjectItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PythonEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPythonProjectItemType"), 0, Get_Z_Construct_UEnum_PythonEditor_EPythonProjectItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPythonProjectItemType::Project", (int64)EPythonProjectItemType::Project },
				{ "EPythonProjectItemType::Folder", (int64)EPythonProjectItemType::Folder },
				{ "EPythonProjectItemType::File", (int64)EPythonProjectItemType::File },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Types of project items. Note that the enum ordering determines the tree sorting */" },
				{ "File.Name", "EPythonProjectItemType::File" },
				{ "Folder.Name", "EPythonProjectItemType::Folder" },
				{ "ModuleRelativePath", "Private/PythonProjectItem.h" },
				{ "Project.Name", "EPythonProjectItemType::Project" },
				{ "ToolTip", "Types of project items. Note that the enum ordering determines the tree sorting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PythonEditor,
				nullptr,
				"EPythonProjectItemType",
				"EPythonProjectItemType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPythonProjectItem::StaticRegisterNativesUPythonProjectItem()
	{
	}
	UClass* Z_Construct_UClass_UPythonProjectItem_NoRegister()
	{
		return UPythonProjectItem::StaticClass();
	}
	struct Z_Construct_UClass_UPythonProjectItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonProjectItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonProjectItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonProjectItem.h" },
		{ "ModuleRelativePath", "Private/PythonProjectItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Private/PythonProjectItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonProjectItem, Children), METADATA_PARAMS(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Children_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPythonProjectItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Private/PythonProjectItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonProjectItem, Path), METADATA_PARAMS(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Extension_MetaData[] = {
		{ "ModuleRelativePath", "Private/PythonProjectItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonProjectItem, Extension), METADATA_PARAMS(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Extension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/PythonProjectItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonProjectItem, Name), METADATA_PARAMS(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/PythonProjectItem.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPythonProjectItem, Type), Z_Construct_UEnum_PythonEditor_EPythonProjectItemType, METADATA_PARAMS(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPythonProjectItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Extension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonProjectItem_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonProjectItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonProjectItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPythonProjectItem_Statics::ClassParams = {
		&UPythonProjectItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPythonProjectItem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPythonProjectItem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonProjectItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPythonProjectItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonProjectItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPythonProjectItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPythonProjectItem, 850977642);
	template<> PYTHONEDITOR_API UClass* StaticClass<UPythonProjectItem>()
	{
		return UPythonProjectItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPythonProjectItem(Z_Construct_UClass_UPythonProjectItem, &UPythonProjectItem::StaticClass, TEXT("/Script/PythonEditor"), TEXT("UPythonProjectItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonProjectItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
