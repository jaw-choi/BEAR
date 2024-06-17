// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BEAR/CharacterForTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterForTest() {}
// Cross Module References
	BEAR_API UClass* Z_Construct_UClass_ACharacterForTest_NoRegister();
	BEAR_API UClass* Z_Construct_UClass_ACharacterForTest();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BEAR();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ACharacterForTest::StaticRegisterNativesACharacterForTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterForTest);
	UClass* Z_Construct_UClass_ACharacterForTest_NoRegister()
	{
		return ACharacterForTest::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterForTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thirdPersonViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thirdPersonViewCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_firstPersonViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_firstPersonViewCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isFirstPersonView_MetaData[];
#endif
		static void NewProp_isFirstPersonView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isFirstPersonView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterForTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BEAR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterForTest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterForTest.h" },
		{ "ModuleRelativePath", "CharacterForTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterForTest_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "CharacterForTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterForTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterForTest_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterForTest, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_springArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterForTest_Statics::NewProp_thirdPersonViewCamera_MetaData[] = {
		{ "Category", "CharacterForTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterForTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterForTest_Statics::NewProp_thirdPersonViewCamera = { "thirdPersonViewCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterForTest, thirdPersonViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_thirdPersonViewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_thirdPersonViewCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterForTest_Statics::NewProp_firstPersonViewCamera_MetaData[] = {
		{ "Category", "CharacterForTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterForTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterForTest_Statics::NewProp_firstPersonViewCamera = { "firstPersonViewCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterForTest, firstPersonViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_firstPersonViewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_firstPersonViewCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterForTest_Statics::NewProp_isFirstPersonView_MetaData[] = {
		{ "ModuleRelativePath", "CharacterForTest.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterForTest_Statics::NewProp_isFirstPersonView_SetBit(void* Obj)
	{
		((ACharacterForTest*)Obj)->isFirstPersonView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterForTest_Statics::NewProp_isFirstPersonView = { "isFirstPersonView", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacterForTest), &Z_Construct_UClass_ACharacterForTest_Statics::NewProp_isFirstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_isFirstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForTest_Statics::NewProp_isFirstPersonView_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterForTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterForTest_Statics::NewProp_springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterForTest_Statics::NewProp_thirdPersonViewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterForTest_Statics::NewProp_firstPersonViewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterForTest_Statics::NewProp_isFirstPersonView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterForTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterForTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterForTest_Statics::ClassParams = {
		&ACharacterForTest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterForTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterForTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterForTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterForTest()
	{
		if (!Z_Registration_Info_UClass_ACharacterForTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterForTest.OuterSingleton, Z_Construct_UClass_ACharacterForTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterForTest.OuterSingleton;
	}
	template<> BEAR_API UClass* StaticClass<ACharacterForTest>()
	{
		return ACharacterForTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterForTest);
	struct Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CharacterForTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CharacterForTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterForTest, ACharacterForTest::StaticClass, TEXT("ACharacterForTest"), &Z_Registration_Info_UClass_ACharacterForTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterForTest), 1141943136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CharacterForTest_h_3958450045(TEXT("/Script/BEAR"),
		Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CharacterForTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CharacterForTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
