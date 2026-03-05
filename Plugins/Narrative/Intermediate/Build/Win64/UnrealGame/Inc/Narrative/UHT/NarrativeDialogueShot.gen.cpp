// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/DialogueShots/NarrativeDialogueShot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDialogueShot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueShot();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeDialogueShot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	DEFINE_FUNCTION(UNarrativeDialogueShot::execGetShotTransform)
	{
		P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
		P_GET_OBJECT(AActor,Z_Param_SpeakingActor);
		P_GET_OBJECT(AActor,Z_Param_ListeningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetShotTransform_Implementation(Z_Param_Dialogue,Z_Param_SpeakingActor,Z_Param_ListeningActor);
		P_NATIVE_END;
	}
	struct NarrativeDialogueShot_eventGetShotTransform_Parms
	{
		UDialogue* Dialogue;
		AActor* SpeakingActor;
		AActor* ListeningActor;
		FTransform ReturnValue;
	};
	static FName NAME_UNarrativeDialogueShot_GetShotTransform = FName(TEXT("GetShotTransform"));
	FTransform UNarrativeDialogueShot::GetShotTransform(UDialogue* Dialogue, AActor* SpeakingActor, AActor* ListeningActor)
	{
		NarrativeDialogueShot_eventGetShotTransform_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.SpeakingActor=SpeakingActor;
		Parms.ListeningActor=ListeningActor;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeDialogueShot_GetShotTransform),&Parms);
		return Parms.ReturnValue;
	}
	void UNarrativeDialogueShot::StaticRegisterNativesUNarrativeDialogueShot()
	{
		UClass* Class = UNarrativeDialogueShot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShotTransform", &UNarrativeDialogueShot::execGetShotTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakingActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListeningActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeDialogueShot_eventGetShotTransform_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_SpeakingActor = { "SpeakingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeDialogueShot_eventGetShotTransform_Parms, SpeakingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_ListeningActor = { "ListeningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeDialogueShot_eventGetShotTransform_Parms, ListeningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeDialogueShot_eventGetShotTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_SpeakingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_ListeningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Returns the position the camera be at when the given actor is speaking - by default narrative just places it near the actors eyes view point.\n\x09""For most games this will be fine - the camera will look at the head of whoever is speaking, however you may wish to override this if you need the camera elsewhere.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "DialogueShots/NarrativeDialogueShot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the position the camera be at when the given actor is speaking - by default narrative just places it near the actors eyes view point.\nFor most games this will be fine - the camera will look at the head of whoever is speaking, however you may wish to override this if you need the camera elsewhere." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeDialogueShot, nullptr, "GetShotTransform", nullptr, nullptr, Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::PropPointers), sizeof(NarrativeDialogueShot_eventGetShotTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeDialogueShot_eventGetShotTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeDialogueShot);
	UClass* Z_Construct_UClass_UNarrativeDialogueShot_NoRegister()
	{
		return UNarrativeDialogueShot::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeDialogueShot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotBlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeDialogueShot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueShot_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeDialogueShot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeDialogueShot_GetShotTransform, "GetShotTransform" }, // 2305787052
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueShot_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueShot_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Defines a cinematic shot for the camera to use in a dialogue, by providing a method that tells the camera where to position itself.\n * \n * Narrative provides many shots out of the box, but if you to create a new shot type you can subclass this. \n * \n */" },
#endif
		{ "IncludePath", "DialogueShots/NarrativeDialogueShot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DialogueShots/NarrativeDialogueShot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a cinematic shot for the camera to use in a dialogue, by providing a method that tells the camera where to position itself.\n\nNarrative provides many shots out of the box, but if you to create a new shot type you can subclass this." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeDialogueShot_Statics::NewProp_ShotBlendTime_MetaData[] = {
		{ "Category", "Shot Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The time it should take for the camera to blend into this shot \n" },
#endif
		{ "ModuleRelativePath", "DialogueShots/NarrativeDialogueShot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time it should take for the camera to blend into this shot" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueShot_Statics::NewProp_ShotBlendTime = { "ShotBlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueShot, ShotBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueShot_Statics::NewProp_ShotBlendTime_MetaData), Z_Construct_UClass_UNarrativeDialogueShot_Statics::NewProp_ShotBlendTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeDialogueShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueShot_Statics::NewProp_ShotBlendTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeDialogueShot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeDialogueShot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeDialogueShot_Statics::ClassParams = {
		&UNarrativeDialogueShot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeDialogueShot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueShot_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueShot_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeDialogueShot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueShot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeDialogueShot()
	{
		if (!Z_Registration_Info_UClass_UNarrativeDialogueShot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeDialogueShot.OuterSingleton, Z_Construct_UClass_UNarrativeDialogueShot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeDialogueShot.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeDialogueShot>()
	{
		return UNarrativeDialogueShot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeDialogueShot);
	UNarrativeDialogueShot::~UNarrativeDialogueShot() {}
	struct Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeDialogueShot, UNarrativeDialogueShot::StaticClass, TEXT("UNarrativeDialogueShot"), &Z_Registration_Info_UClass_UNarrativeDialogueShot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeDialogueShot), 152201515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_1703392690(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
