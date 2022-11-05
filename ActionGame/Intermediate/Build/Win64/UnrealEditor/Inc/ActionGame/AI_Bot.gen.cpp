// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Public/AI_Bot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Bot() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_AAI_Bot_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_AAI_Bot();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void AAI_Bot::StaticRegisterNativesAAI_Bot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_Bot);
	UClass* Z_Construct_UClass_AAI_Bot_NoRegister()
	{
		return AAI_Bot::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Bot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Bot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Bot.h" },
		{ "ModuleRelativePath", "Public/AI_Bot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Bot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Bot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_Bot_Statics::ClassParams = {
		&AAI_Bot::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Bot()
	{
		if (!Z_Registration_Info_UClass_AAI_Bot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_Bot.OuterSingleton, Z_Construct_UClass_AAI_Bot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAI_Bot.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<AAI_Bot>()
	{
		return AAI_Bot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Bot);
	struct Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_Bot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_Bot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAI_Bot, AAI_Bot::StaticClass, TEXT("AAI_Bot"), &Z_Registration_Info_UClass_AAI_Bot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_Bot), 1107831433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_Bot_h_2223778730(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_Bot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_AI_Bot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
