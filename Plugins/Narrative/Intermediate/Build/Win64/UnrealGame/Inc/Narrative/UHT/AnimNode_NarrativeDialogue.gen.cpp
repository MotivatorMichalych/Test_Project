// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/AnimNode_NarrativeDialogue.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
#include "CommonAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_NarrativeDialogue() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	NARRATIVE_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend();
	NARRATIVE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpolationDialogueBlend;
	static UEnum* EInterpolationDialogueBlend_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterpolationDialogueBlend.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterpolationDialogueBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("EInterpolationDialogueBlend"));
		}
		return Z_Registration_Info_UEnum_EInterpolationDialogueBlend.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EInterpolationDialogueBlend::Type>()
	{
		return EInterpolationDialogueBlend_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::Enumerators[] = {
		{ "EInterpolationDialogueBlend::Linear", (int64)EInterpolationDialogueBlend::Linear },
		{ "EInterpolationDialogueBlend::Cubic", (int64)EInterpolationDialogueBlend::Cubic },
		{ "EInterpolationDialogueBlend::Sinusoidal", (int64)EInterpolationDialogueBlend::Sinusoidal },
		{ "EInterpolationDialogueBlend::EaseInOutExponent2", (int64)EInterpolationDialogueBlend::EaseInOutExponent2 },
		{ "EInterpolationDialogueBlend::EaseInOutExponent3", (int64)EInterpolationDialogueBlend::EaseInOutExponent3 },
		{ "EInterpolationDialogueBlend::EaseInOutExponent4", (int64)EInterpolationDialogueBlend::EaseInOutExponent4 },
		{ "EInterpolationDialogueBlend::EaseInOutExponent5", (int64)EInterpolationDialogueBlend::EaseInOutExponent5 },
		{ "EInterpolationDialogueBlend::MAX", (int64)EInterpolationDialogueBlend::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Various ways to interpolate TAlphaBlend. */" },
#endif
		{ "Cubic.Name", "EInterpolationDialogueBlend::Cubic" },
		{ "EaseInOutExponent2.Name", "EInterpolationDialogueBlend::EaseInOutExponent2" },
		{ "EaseInOutExponent3.Name", "EInterpolationDialogueBlend::EaseInOutExponent3" },
		{ "EaseInOutExponent4.Name", "EInterpolationDialogueBlend::EaseInOutExponent4" },
		{ "EaseInOutExponent5.Name", "EInterpolationDialogueBlend::EaseInOutExponent5" },
		{ "Linear.Name", "EInterpolationDialogueBlend::Linear" },
		{ "MAX.Name", "EInterpolationDialogueBlend::MAX" },
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
		{ "Sinusoidal.Name", "EInterpolationDialogueBlend::Sinusoidal" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Various ways to interpolate TAlphaBlend." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EInterpolationDialogueBlend",
		"EInterpolationDialogueBlend::Type",
		Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend()
	{
		if (!Z_Registration_Info_UEnum_EInterpolationDialogueBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpolationDialogueBlend.InnerSingleton, Z_Construct_UEnum_Narrative_EInterpolationDialogueBlend_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterpolationDialogueBlend.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_NarrativeDialogue>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_NarrativeDialogue cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue;
class UScriptStruct* FAnimNode_NarrativeDialogue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("AnimNode_NarrativeDialogue"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.OuterSingleton;
}
template<> NARRATIVE_API UScriptStruct* StaticStruct<FAnimNode_NarrativeDialogue>()
{
	return FAnimNode_NarrativeDialogue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLookUpAxis_MetaData[];
#endif
		static void NewProp_bUseLookUpAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLookUpAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Simple controller that make a bone to look at the point or another bone\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that make a bone to look at the point or another bone" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_NarrativeDialogue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "Alpha" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The dialogue that this avatar is speaking in \n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The dialogue that this avatar is speaking in" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_NarrativeDialogue, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_Dialogue_MetaData), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_Dialogue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_NarrativeDialogue, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_BoneToModify_MetaData), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_BoneToModify_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAt_Axis = { "LookAt_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_NarrativeDialogue, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAt_Axis_MetaData), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAt_Axis_MetaData) }; // 586380579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_bUseLookUpAxis_MetaData[] = {
		{ "Category", "SkeletalControl" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not to use Look up axis */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to use Look up axis" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_bUseLookUpAxis_SetBit(void* Obj)
	{
		((FAnimNode_NarrativeDialogue*)Obj)->bUseLookUpAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_bUseLookUpAxis = { "bUseLookUpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_NarrativeDialogue), &Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_bUseLookUpAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_bUseLookUpAxis_MetaData), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_bUseLookUpAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookUp_Axis = { "LookUp_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_NarrativeDialogue, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookUp_Axis_MetaData), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookUp_Axis_MetaData) }; // 586380579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAtClamp_MetaData[] = {
		{ "Category", "SkeletalControl" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAtClamp = { "LookAtClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_NarrativeDialogue, LookAtClamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAtClamp_MetaData), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAtClamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_NarrativeDialogue, InterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_InterpolationTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_InterpolationTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_BoneToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAt_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_bUseLookUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookUp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_LookAtClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_InterpolationTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_NarrativeDialogue",
		Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers),
		sizeof(FAnimNode_NarrativeDialogue),
		alignof(FAnimNode_NarrativeDialogue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_Statics::EnumInfo[] = {
		{ EInterpolationDialogueBlend_StaticEnum, TEXT("EInterpolationDialogueBlend"), &Z_Registration_Info_UEnum_EInterpolationDialogueBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1342640086U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_NarrativeDialogue::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewStructOps, TEXT("AnimNode_NarrativeDialogue"), &Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_NarrativeDialogue), 1417090199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_3092192030(TEXT("/Script/Narrative"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_AnimNode_NarrativeDialogue_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
