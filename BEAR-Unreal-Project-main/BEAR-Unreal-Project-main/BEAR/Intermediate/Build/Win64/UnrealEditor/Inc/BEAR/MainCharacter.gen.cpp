// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BEAR/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}
// Cross Module References
	BEAR_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	BEAR_API UClass* Z_Construct_UClass_AMainCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BEAR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AMainCharacter::execRespawnPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RespawnPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execGetPlayerRespawnPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlayerRespawnPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execSetPlayerRespawnPos)
	{
		P_GET_STRUCT(FVector,Z_Param_pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerRespawnPos(Z_Param_pos);
		P_NATIVE_END;
	}
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
		UClass* Class = AMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerRespawnPos", &AMainCharacter::execGetPlayerRespawnPos },
			{ "RespawnPlayer", &AMainCharacter::execRespawnPlayer },
			{ "SetPlayerRespawnPos", &AMainCharacter::execSetPlayerRespawnPos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics
	{
		struct MainCharacter_eventGetPlayerRespawnPos_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainCharacter_eventGetPlayerRespawnPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "GetPlayerRespawnPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::MainCharacter_eventGetPlayerRespawnPos_Parms), Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_RespawnPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_RespawnPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_RespawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "RespawnPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_RespawnPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_RespawnPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_RespawnPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_RespawnPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics
	{
		struct MainCharacter_eventSetPlayerRespawnPos_Parms
		{
			FVector pos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainCharacter_eventSetPlayerRespawnPos_Parms, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::NewProp_pos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SetPlayerRespawnPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::MainCharacter_eventSetPlayerRespawnPos_Parms), Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startCharacterPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startCharacterPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BEAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_GetPlayerRespawnPos, "GetPlayerRespawnPos" }, // 868063568
		{ &Z_Construct_UFunction_AMainCharacter_RespawnPlayer, "RespawnPlayer" }, // 28153751
		{ &Z_Construct_UFunction_AMainCharacter_SetPlayerRespawnPos, "SetPlayerRespawnPos" }, // 2422872337
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_startCharacterPos_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_startCharacterPos = { "startCharacterPos", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, startCharacterPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_startCharacterPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_startCharacterPos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_startCharacterPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
		&AMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
	}
	template<> BEAR_API UClass* StaticClass<AMainCharacter>()
	{
		return AMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
	struct Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_MainCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_MainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 3330895017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_MainCharacter_h_2713842503(TEXT("/Script/BEAR"),
		Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_MainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
