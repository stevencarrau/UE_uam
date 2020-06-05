// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEnginePython/Public/PyUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyUserWidget() {}
// Cross Module References
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPyUserWidget_NoRegister();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPyUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealEnginePython();
	UNREALENGINEPYTHON_API UFunction* Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod();
	UNREALENGINEPYTHON_API UClass* Z_Construct_UClass_UPyNativeWidgetHost_NoRegister();
// End Cross Module References
	void UPyUserWidget::StaticRegisterNativesUPyUserWidget()
	{
		UClass* Class = UPyUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallPythonUserWidgetMethod", &UPyUserWidget::execCallPythonUserWidgetMethod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics
	{
		struct PyUserWidget_eventCallPythonUserWidgetMethod_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyUserWidget_eventCallPythonUserWidgetMethod_Parms, args), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::NewProp_method_name = { "method_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyUserWidget_eventCallPythonUserWidgetMethod_Parms, method_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::NewProp_args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::NewProp_method_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyUserWidget, nullptr, "CallPythonUserWidgetMethod", nullptr, nullptr, sizeof(PyUserWidget_eventCallPythonUserWidgetMethod_Parms), Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPyUserWidget_NoRegister()
	{
		return UPyUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPyUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PyNativeWidgetHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PyNativeWidgetHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PythonPaintForceDisabled_MetaData[];
#endif
		static void NewProp_PythonPaintForceDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PythonPaintForceDisabled;
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
	UObject* (*const Z_Construct_UClass_UPyUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEnginePython,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyUserWidget_CallPythonUserWidgetMethod, "CallPythonUserWidgetMethod" }, // 1580766976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PyUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PyUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PyNativeWidgetHost_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/PyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PyNativeWidgetHost = { "PyNativeWidgetHost", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPyUserWidget, PyNativeWidgetHost), Z_Construct_UClass_UPyNativeWidgetHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PyNativeWidgetHost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PyNativeWidgetHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonPaintForceDisabled_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonPaintForceDisabled_SetBit(void* Obj)
	{
		((UPyUserWidget*)Obj)->PythonPaintForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonPaintForceDisabled = { "PythonPaintForceDisabled", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPyUserWidget), &Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonPaintForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonPaintForceDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonPaintForceDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonTickForceDisabled_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonTickForceDisabled_SetBit(void* Obj)
	{
		((UPyUserWidget*)Obj)->PythonTickForceDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonTickForceDisabled = { "PythonTickForceDisabled", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPyUserWidget), &Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonTickForceDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonTickForceDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonTickForceDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonClass_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPyUserWidget, PythonClass), METADATA_PARAMS(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonModule_MetaData[] = {
		{ "Category", "Python" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/PyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonModule = { "PythonModule", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPyUserWidget, PythonModule), METADATA_PARAMS(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPyUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PyNativeWidgetHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonPaintForceDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonTickForceDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyUserWidget_Statics::NewProp_PythonModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPyUserWidget_Statics::ClassParams = {
		&UPyUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPyUserWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPyUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPyUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPyUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPyUserWidget, 2147544259);
	template<> UNREALENGINEPYTHON_API UClass* StaticClass<UPyUserWidget>()
	{
		return UPyUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPyUserWidget(Z_Construct_UClass_UPyUserWidget, &UPyUserWidget::StaticClass, TEXT("/Script/UnrealEnginePython"), TEXT("UPyUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
