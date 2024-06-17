// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BEAR/CheckPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckPoint() {}
// Cross Module References
	BEAR_API UClass* Z_Construct_UClass_ACheckPoint_NoRegister();
	BEAR_API UClass* Z_Construct_UClass_ACheckPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BEAR();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	BEAR_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACheckPoint::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overralppedComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overralppedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void ACheckPoint::StaticRegisterNativesACheckPoint()
	{
		UClass* Class = ACheckPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ACheckPoint::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics
	{
		struct CheckPoint_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overralppedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overralppedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overralppedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_overralppedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_overralppedComp = { "overralppedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckPoint_eventOnOverlapBegin_Parms, overralppedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_overralppedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_overralppedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckPoint_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckPoint_eventOnOverlapBegin_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckPoint_eventOnOverlapBegin_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CheckPoint_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckPoint_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckPoint_eventOnOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_overralppedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CheckPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckPoint, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::CheckPoint_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckPoint_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckPoint_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckPoint);
	UClass* Z_Construct_UClass_ACheckPoint_NoRegister()
	{
		return ACheckPoint::StaticClass();
	}
	struct Z_Construct_UClass_ACheckPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mainCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collisionBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BEAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACheckPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckPoint_OnOverlapBegin, "OnOverlapBegin" }, // 2397943720
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CheckPoint.h" },
		{ "ModuleRelativePath", "CheckPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPoint_Statics::NewProp_mainCharacter_MetaData[] = {
		{ "Category", "CheckPoint" },
		{ "ModuleRelativePath", "CheckPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckPoint_Statics::NewProp_mainCharacter = { "mainCharacter", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckPoint, mainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckPoint_Statics::NewProp_mainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPoint_Statics::NewProp_mainCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPoint_Statics::NewProp_collisionBox_MetaData[] = {
		{ "Category", "CheckPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CheckPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckPoint_Statics::NewProp_collisionBox = { "collisionBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckPoint, collisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckPoint_Statics::NewProp_collisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPoint_Statics::NewProp_collisionBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckPoint_Statics::NewProp_mainCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckPoint_Statics::NewProp_collisionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckPoint_Statics::ClassParams = {
		&ACheckPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACheckPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACheckPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACheckPoint()
	{
		if (!Z_Registration_Info_UClass_ACheckPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckPoint.OuterSingleton, Z_Construct_UClass_ACheckPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACheckPoint.OuterSingleton;
	}
	template<> BEAR_API UClass* StaticClass<ACheckPoint>()
	{
		return ACheckPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckPoint);
	struct Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CheckPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CheckPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACheckPoint, ACheckPoint::StaticClass, TEXT("ACheckPoint"), &Z_Registration_Info_UClass_ACheckPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckPoint), 4149294147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CheckPoint_h_3239117172(TEXT("/Script/BEAR"),
		Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CheckPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BEAR_Source_BEAR_CheckPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
