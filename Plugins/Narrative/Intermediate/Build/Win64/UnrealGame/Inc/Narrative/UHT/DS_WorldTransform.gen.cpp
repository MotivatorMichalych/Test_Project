// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/DialogueShots/DS_WorldTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS_WorldTransform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	NARRATIVE_API UClass* Z_Construct_UClass_UDS_WorldTransform();
	NARRATIVE_API UClass* Z_Construct_UClass_UDS_WorldTransform_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueShot();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	void UDS_WorldTransform::StaticRegisterNativesUDS_WorldTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS_WorldTransform);
	UClass* Z_Construct_UClass_UDS_WorldTransform_NoRegister()
	{
		return UDS_WorldTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDS_WorldTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDS_WorldTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNarrativeDialogueShot,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_WorldTransform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_WorldTransform_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Moves the camera to a predefined world transform. \n */" },
#endif
		{ "IncludePath", "DialogueShots/DS_WorldTransform.h" },
		{ "ModuleRelativePath", "DialogueShots/DS_WorldTransform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves the camera to a predefined world transform." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDS_WorldTransform_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "Category", "Shot Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The camera offset from the speaker, in the speakers space\n" },
#endif
		{ "ModuleRelativePath", "DialogueShots/DS_WorldTransform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The camera offset from the speaker, in the speakers space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS_WorldTransform_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS_WorldTransform, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_WorldTransform_Statics::NewProp_CameraTransform_MetaData), Z_Construct_UClass_UDS_WorldTransform_Statics::NewProp_CameraTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS_WorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS_WorldTransform_Statics::NewProp_CameraTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDS_WorldTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS_WorldTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS_WorldTransform_Statics::ClassParams = {
		&UDS_WorldTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDS_WorldTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDS_WorldTransform_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_WorldTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS_WorldTransform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS_WorldTransform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDS_WorldTransform()
	{
		if (!Z_Registration_Info_UClass_UDS_WorldTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS_WorldTransform.OuterSingleton, Z_Construct_UClass_UDS_WorldTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDS_WorldTransform.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UDS_WorldTransform>()
	{
		return UDS_WorldTransform::StaticClass();
	}
	UDS_WorldTransform::UDS_WorldTransform() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDS_WorldTransform);
	UDS_WorldTransform::~UDS_WorldTransform() {}
	struct Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_WorldTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_WorldTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDS_WorldTransform, UDS_WorldTransform::StaticClass, TEXT("UDS_WorldTransform"), &Z_Registration_Info_UClass_UDS_WorldTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS_WorldTransform), 3897908745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_WorldTransform_h_1370448631(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_WorldTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_DS_WorldTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
