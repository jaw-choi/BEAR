// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BEAR/EnemyTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyTest() {}
// Cross Module References
	BEAR_API UClass* Z_Construct_UClass_AEnemyTest_NoRegister();
	BEAR_API UClass* Z_Construct_UClass_AEnemyTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BEAR();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyTest::StaticRegisterNativesAEnemyTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyTest);
	UClass* Z_Construct_UClass_AEnemyTest_NoRegister()
	{
		return AEnemyTest::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BEAR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyTest.h" },
		{ "ModuleRelativePath", "EnemyTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyTest_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "EnemyTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyTest_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyTest, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyTest_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyTest_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyTest_Statics::NewProp_EnemyMesh_MetaData[] = {
		{ "Category", "EnemyTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyTest_Statics::NewProp_EnemyMesh = { "EnemyMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyTest, EnemyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyTest_Statics::NewProp_EnemyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyTest_Statics::NewProp_EnemyMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyTest_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyTest_Statics::NewProp_EnemyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyTest_Statics::ClassParams = {
		&AEnemyTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyTest()
	{
		if (!Z_Registration_Info_UClass_AEnemyTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyTest.OuterSingleton, Z_Construct_UClass_AEnemyTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyTest.OuterSingleton;
	}
	template<> BEAR_API UClass* StaticClass<AEnemyTest>()
	{
		return AEnemyTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyTest);
	struct Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_EnemyTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_EnemyTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyTest, AEnemyTest::StaticClass, TEXT("AEnemyTest"), &Z_Registration_Info_UClass_AEnemyTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyTest), 3197813579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_EnemyTest_h_4161961823(TEXT("/Script/BEAR"),
		Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_EnemyTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_EnemyTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
