// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeTestingWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogue;
class UDialogueNode;
class UDialogueNode_NPC;
class UDialogueNode_Player;
class UNarrativeTask;
class UQuest;
class UQuestBranch;
class UQuestState;
struct FDialogueLine;
struct FSpeakerInfo;
#ifdef NARRATIVE_NarrativeTestingWidget_generated_h
#error "NarrativeTestingWidget.generated.h already included, missing '#pragma once' in NarrativeTestingWidget.h"
#endif
#define NARRATIVE_NarrativeTestingWidget_generated_h

#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_151_DELEGATE \
static void FDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& DialogueLineFinished, UDialogue* Dialogue, UDialogueNode* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker);


#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_SPARSE_DATA
#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerDialogueLineFinished); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineStarted); \
	DECLARE_FUNCTION(execOnNPCDialogueLineFinished); \
	DECLARE_FUNCTION(execOnNPCDialogueLineStarted); \
	DECLARE_FUNCTION(execOnDialogueRepliesAvailable); \
	DECLARE_FUNCTION(execOnDialogueFinished); \
	DECLARE_FUNCTION(execOnDialogueBegan); \
	DECLARE_FUNCTION(execOnDialogueUpdated); \
	DECLARE_FUNCTION(execOnLoadComplete); \
	DECLARE_FUNCTION(execOnSaveComplete); \
	DECLARE_FUNCTION(execOnBeginLoad); \
	DECLARE_FUNCTION(execOnBeginSave); \
	DECLARE_FUNCTION(execOnQuestStepCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskProgressMade); \
	DECLARE_FUNCTION(execOnQuestNewState); \
	DECLARE_FUNCTION(execOnQuestSucceeded); \
	DECLARE_FUNCTION(execOnQuestFailed); \
	DECLARE_FUNCTION(execOnQuestStarted); \
	DECLARE_FUNCTION(execInit);


#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_ACCESSORS
#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_CALLBACK_WRAPPERS
#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeTestingWidget(); \
	friend struct Z_Construct_UClass_UNarrativeTestingWidget_Statics; \
public: \
	DECLARE_CLASS(UNarrativeTestingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Narrative"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeTestingWidget)


#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeTestingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNarrativeTestingWidget(UNarrativeTestingWidget&&); \
	NO_API UNarrativeTestingWidget(const UNarrativeTestingWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeTestingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeTestingWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeTestingWidget) \
	NO_API virtual ~UNarrativeTestingWidget();


#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_17_PROLOG
#define FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_SPARSE_DATA \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_ACCESSORS \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_CALLBACK_WRAPPERS \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVE_API UClass* StaticClass<class UNarrativeTestingWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeTestingWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
