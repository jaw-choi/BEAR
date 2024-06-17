// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BEAR/TestInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestInput() {}
// Cross Module References
	BEAR_API UClass* Z_Construct_UClass_ATestInput_NoRegister();
	BEAR_API UClass* Z_Construct_UClass_ATestInput();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BEAR();
// End Cross Module References
	void ATestInput::StaticRegisterNativesATestInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestInput);
	UClass* Z_Construct_UClass_ATestInput_NoRegister()
	{
		return ATestInput::StaticClass();
	}
	struct Z_Construct_UClass_ATestInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BEAR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestInput.h" },
		{ "ModuleRelativePath", "TestInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestInput_Statics::ClassParams = {
		&ATestInput::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestInput()
	{
		if (!Z_Registration_Info_UClass_ATestInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestInput.OuterSingleton, Z_Construct_UClass_ATestInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestInput.OuterSingleton;
	}
	template<> BEAR_API UClass* StaticClass<ATestInput>()
	{
		return ATestInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestInput);
	struct Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_TestInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_TestInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestInput, ATestInput::StaticClass, TEXT("ATestInput"), &Z_Registration_Info_UClass_ATestInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestInput), 1484028982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_TestInput_h_1524621835(TEXT("/Script/BEAR"),
		Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_TestInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_TestInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
