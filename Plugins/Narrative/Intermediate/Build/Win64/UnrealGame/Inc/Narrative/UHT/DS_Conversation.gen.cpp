// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/DialogueShots/DS_Conversation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS_Conversation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NARRATIVE_API UClass* Z_Construct_UClass_UDS_Conversation();
	NARRATIVE_API UClass* Z_Construct_UClass_UDS_Conversation_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueShot();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UDS_Conversation::StaticRegisterNativesUDS_Conversation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS_Conversation);
	UClass* Z_Construct_UClass_UDS_Conversation_NoRegister()
	{
		return UDS_Conversation::StaticClass();
	}
	struct Z_Construct_UClass_UDS_Conversation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlayerLocalSpace_MetaData[];
#endif
		static void NewProp_bUsePlayerLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerLocalSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDS_Conversation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeDialogueShot,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_Conversation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_Conversation_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A shot that aims itself at the center of a conversation (the average location of all the speakers in the dialogue)\n * \n * The location can either be a world space, or an offset in the player avatars space, depending on whether use bUsePlayerLocalSpace is checked. \n */" },
#endif
		{ "IncludePath", "DialogueShots/DS_Conversation.h" },
		{ "ModuleRelativePath", "DialogueShots/DS_Conversation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A shot that aims itself at the center of a conversation (the average location of all the speakers in the dialogue)\n\nThe location can either be a world space, or an offset in the player avatars space, depending on whether use bUsePlayerLocalSpace is checked." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_Conversation_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Shot Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09The offset from the player, for example (0, 0, 1000) would set up a birds eye view shot, (0, 500, 0) would be a side on shot etc.\n\n\x09If bUsePlayerLocalSpace is false, this location will be used as a world location instead of an offset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "DialogueShots/DS_Conversation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset from the player, for example (0, 0, 1000) would set up a birds eye view shot, (0, 500, 0) would be a side on shot etc.\n\nIf bUsePlayerLocalSpace is false, this location will be used as a world location instead of an offset." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS_Conversation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS_Conversation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_Conversation_Statics::NewProp_Location_MetaData), Z_Construct_UClass_UDS_Conversation_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_Conversation_Statics::NewProp_bUsePlayerLocalSpace_MetaData[] = {
		{ "Category", "Shot Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If true, location is an offset in the players local space, otherwise location will be a world location. */" },
#endif
		{ "ModuleRelativePath", "DialogueShots/DS_Conversation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, location is an offset in the players local space, otherwise location will be a world location." },
#endif
	};
#endif
	void Z_Construct_UClass_UDS_Conversation_Statics::NewProp_bUsePlayerLocalSpace_SetBit(void* Obj)
	{
		((UDS_Conversation*)Obj)->bUsePlayerLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS_Conversation_Statics::NewProp_bUsePlayerLocalSpace = { "bUsePlayerLocalSpace", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS_Conversation), &Z_Construct_UClass_UDS_Conversation_Statics::NewProp_bUsePlayerLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_Conversation_Statics::NewProp_bUsePlayerLocalSpace_MetaData), Z_Construct_UClass_UDS_Conversation_Statics::NewProp_bUsePlayerLocalSpace_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS_Conversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS_Conversation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS_Conversation_Statics::NewProp_bUsePlayerLocalSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDS_Conversation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS_Conversation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS_Conversation_Statics::ClassParams = {
		&UDS_Conversation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDS_Conversation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDS_Conversation_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_Conversation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS_Conversation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_Conversation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDS_Conversation()
	{
		if (!Z_Registration_Info_UClass_UDS_Conversation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS_Conversation.OuterSingleton, Z_Construct_UClass_UDS_Conversation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDS_Conversation.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDS_Conversation>()
	{
		return UDS_Conversation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDS_Conversation);
	UDS_Conversation::~UDS_Conversation() {}
	struct Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_Conversation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_Conversation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDS_Conversation, UDS_Conversation::StaticClass, TEXT("UDS_Conversation"), &Z_Registration_Info_UClass_UDS_Conversation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS_Conversation), 1899462846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_Conversation_h_483752311(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_Conversation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_Conversation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
