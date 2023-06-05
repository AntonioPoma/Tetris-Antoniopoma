// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockExplosivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockExplosivo() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockExplosivo_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockExplosivo();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockGeneral_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorBlock_NoRegister();
// End Cross Module References
	void ABlockExplosivo::StaticRegisterNativesABlockExplosivo()
	{
	}
	UClass* Z_Construct_UClass_ABlockExplosivo_NoRegister()
	{
		return ABlockExplosivo::StaticClass();
	}
	struct Z_Construct_UClass_ABlockExplosivo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockGeneral_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockGeneral;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockExplosivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockExplosivo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockExplosivo.h" },
		{ "ModuleRelativePath", "BlockExplosivo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_BlockGeneral_MetaData[] = {
		{ "Category", "El Bloque general" },
		{ "ModuleRelativePath", "BlockExplosivo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_BlockGeneral = { "BlockGeneral", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockExplosivo, BlockGeneral), Z_Construct_UClass_ABlockGeneral_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_BlockGeneral_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_BlockGeneral_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_Material1_MetaData[] = {
		{ "Category", "Materiales" },
		{ "ModuleRelativePath", "BlockExplosivo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_Material1 = { "Material1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockExplosivo, Material1), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_Material1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_Material1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockExplosivo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_BlockGeneral,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockExplosivo_Statics::NewProp_Material1,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABlockExplosivo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorBlock_NoRegister, (int32)VTABLE_OFFSET(ABlockExplosivo, IConstructorBlock), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockExplosivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockExplosivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockExplosivo_Statics::ClassParams = {
		&ABlockExplosivo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockExplosivo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockExplosivo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockExplosivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockExplosivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockExplosivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockExplosivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockExplosivo, 2756914202);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockExplosivo>()
	{
		return ABlockExplosivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockExplosivo(Z_Construct_UClass_ABlockExplosivo, &ABlockExplosivo::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockExplosivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockExplosivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
