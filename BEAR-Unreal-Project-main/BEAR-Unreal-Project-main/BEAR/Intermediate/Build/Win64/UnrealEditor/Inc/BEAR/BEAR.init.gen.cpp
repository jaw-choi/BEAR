// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBEAR_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BEAR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BEAR()
	{
		if (!Z_Registration_Info_UPackage__Script_BEAR.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BEAR",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF2E9743E,
				0xADB6D813,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BEAR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BEAR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BEAR(Z_Construct_UPackage__Script_BEAR, TEXT("/Script/BEAR"), Z_Registration_Info_UPackage__Script_BEAR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF2E9743E, 0xADB6D813));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
