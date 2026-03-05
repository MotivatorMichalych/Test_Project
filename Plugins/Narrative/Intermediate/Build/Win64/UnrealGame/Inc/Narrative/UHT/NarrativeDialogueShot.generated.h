// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueShots/NarrativeDialogueShot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDialogue;
#ifdef NARRATIVE_NarrativeDialogueShot_generated_h
#error "NarrativeDialogueShot.generated.h already included, missing '#pragma once' in NarrativeDialogueShot.h"
#endif
#define NARRATIVE_NarrativeDialogueShot_generated_h

#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_SPARSE_DATA
#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShotTransform);


#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_ACCESSORS
#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_CALLBACK_WRAPPERS
#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeDialogueShot(); \
	friend struct Z_Construct_UClass_UNarrativeDialogueShot_Statics; \
public: \
	DECLARE_CLASS(UNarrativeDialogueShot, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeDialogueShot)


#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeDialogueShot(UNarrativeDialogueShot&&); \
	NO_API UNarrativeDialogueShot(const UNarrativeDialogueShot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeDialogueShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeDialogueShot); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNarrativeDialogueShot) \
	NO_API virtual ~UNarrativeDialogueShot();


#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_14_PROLOG
#define FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_SPARSE_DATA \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_ACCESSORS \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_CALLBACK_WRAPPERS \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_INCLASS_NO_PURE_DECLS \
	FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeDialogueShot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_demo_Plugins_Narrative_Source_Narrative_DialogueShots_NarrativeDialogueShot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
