// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockGeneral.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockGeneral() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockGeneral_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockGeneral();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstructuraBlock_NoRegister();
// End Cross Module References
	void ABlockGeneral::StaticRegisterNativesABlockGeneral()
	{
	}
	UClass* Z_Construct_UClass_ABlockGeneral_NoRegister()
	{
		return ABlockGeneral::StaticClass();
	}
	struct Z_Construct_UClass_ABlockGeneral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockGeneral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockGeneral_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockGeneral.h" },
		{ "ModuleRelativePath", "BlockGeneral.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockGeneral_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BlockGeneral" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BlockGeneral.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockGeneral_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockGeneral, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockGeneral_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockGeneral_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockGeneral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockGeneral_Statics::NewProp_Mesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABlockGeneral_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstructuraBlock_NoRegister, (int32)VTABLE_OFFSET(ABlockGeneral, IEstructuraBlock), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockGeneral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockGeneral>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockGeneral_Statics::ClassParams = {
		&ABlockGeneral::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockGeneral_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockGeneral_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockGeneral_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockGeneral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockGeneral()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockGeneral_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockGeneral, 2219953962);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockGeneral>()
	{
		return ABlockGeneral::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockGeneral(Z_Construct_UClass_ABlockGeneral, &ABlockGeneral::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockGeneral"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockGeneral);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
