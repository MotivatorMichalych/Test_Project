// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/DialogueShots/DS_OverShoulder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS_OverShoulder() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NARRATIVE_API UClass* Z_Construct_UClass_UDS_OverShoulder();
	NARRATIVE_API UClass* Z_Construct_UClass_UDS_OverShoulder_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueShot();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UDS_OverShoulder::StaticRegisterNativesUDS_OverShoulder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS_OverShoulder);
	UClass* Z_Construct_UClass_UDS_OverShoulder_NoRegister()
	{
		return UDS_OverShoulder::StaticClass();
	}
	struct Z_Construct_UClass_UDS_OverShoulder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiltYawDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TiltYawDegrees;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDS_OverShoulder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeDialogueShot,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_OverShoulder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_OverShoulder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A shot centered on the middle of the conversation, but offset from the listeners shoulder. Automatically adheres to the 180 degree rule\n */" },
#endif
		{ "IncludePath", "DialogueShots/DS_OverShoulder.h" },
		{ "ModuleRelativePath", "DialogueShots/DS_OverShoulder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A shot centered on the middle of the conversation, but offset from the listeners shoulder. Automatically adheres to the 180 degree rule" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_SpeakerOffset_MetaData[] = {
		{ "Category", "Shot Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09The cameras offset from the listeners head. \n\x09The Y (right) offset is flipped when the player is speaking, to ensure the camera always stays on the same side of the conversation. (180 degree rule)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "DialogueShots/DS_OverShoulder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The cameras offset from the listeners head.\nThe Y (right) offset is flipped when the player is speaking, to ensure the camera always stays on the same side of the conversation. (180 degree rule)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_SpeakerOffset = { "SpeakerOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS_OverShoulder, SpeakerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_SpeakerOffset_MetaData), Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_SpeakerOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_TiltYawDegrees_MetaData[] = {
		{ "Category", "Shot Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The tilt in degrees, automatically applied in different directions for each speaker (so each character stays on their own side of the screen)\n" },
#endif
		{ "ModuleRelativePath", "DialogueShots/DS_OverShoulder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tilt in degrees, automatically applied in different directions for each speaker (so each character stays on their own side of the screen)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_TiltYawDegrees = { "TiltYawDegrees", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS_OverShoulder, TiltYawDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_TiltYawDegrees_MetaData), Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_TiltYawDegrees_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS_OverShoulder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_SpeakerOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS_OverShoulder_Statics::NewProp_TiltYawDegrees,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDS_OverShoulder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS_OverShoulder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS_OverShoulder_Statics::ClassParams = {
		&UDS_OverShoulder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDS_OverShoulder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDS_OverShoulder_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_OverShoulder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS_OverShoulder_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_OverShoulder_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDS_OverShoulder()
	{
		if (!Z_Registration_Info_UClass_UDS_OverShoulder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS_OverShoulder.OuterSingleton, Z_Construct_UClass_UDS_OverShoulder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDS_OverShoulder.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDS_OverShoulder>()
	{
		return UDS_OverShoulder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDS_OverShoulder);
	UDS_OverShoulder::~UDS_OverShoulder() {}
	struct Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_OverShoulder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_OverShoulder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDS_OverShoulder, UDS_OverShoulder::StaticClass, TEXT("UDS_OverShoulder"), &Z_Registration_Info_UClass_UDS_OverShoulder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS_OverShoulder), 269614223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_OverShoulder_h_3757438063(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_OverShoulder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_OverShoulder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
