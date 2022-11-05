// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Public/AI_CON.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_CON() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_AAI_CON_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_AAI_CON();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void AAI_CON::StaticRegisterNativesAAI_CON()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_CON);
	UClass* Z_Construct_UClass_AAI_CON_NoRegister()
	{
		return AAI_CON::StaticClass();
	}
	struct Z_Construct_UClass_AAI_CON_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_CON_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_CON_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI_CON.h" },
		{ "ModuleRelativePath", "Public/AI_CON.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_CON_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_CON>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_CON_Statics::ClassParams = {
		&AAI_CON::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_CON_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_CON_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_CON()
	{
		if (!Z_Registration_Info_UClass_AAI_CON.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_CON.OuterSingleton, Z_Construct_UClass_AAI_CON_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAI_CON.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<AAI_CON>()
	{
		return AAI_CON::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_CON);
	struct Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_CON_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_CON_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAI_CON, AAI_CON::StaticClass, TEXT("AAI_CON"), &Z_Registration_Info_UClass_AAI_CON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_CON), 1800156518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_CON_h_113490368(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_CON_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_CON_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
