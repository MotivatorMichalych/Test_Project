// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Narrative/Public/NarrativeEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeEvent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeEvent();
	NARRATIVE_API UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister();
	NARRATIVE_API UEnum* Z_Construct_UEnum_Narrative_EEventRuntime();
	UPackage* Z_Construct_UPackage__Script_Narrative();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEventRuntime;
	static UEnum* EEventRuntime_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEventRuntime.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEventRuntime.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Narrative_EEventRuntime, (UObject*)Z_Construct_UPackage__Script_Narrative(), TEXT("EEventRuntime"));
		}
		return Z_Registration_Info_UEnum_EEventRuntime.OuterSingleton;
	}
	template<> NARRATIVE_API UEnum* StaticEnum<EEventRuntime>()
	{
		return EEventRuntime_StaticEnum();
	}
	struct Z_Construct_UEnum_Narrative_EEventRuntime_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Narrative_EEventRuntime_Statics::Enumerators[] = {
		{ "EEventRuntime::Start", (int64)EEventRuntime::Start },
		{ "EEventRuntime::End", (int64)EEventRuntime::End },
		{ "EEventRuntime::Both", (int64)EEventRuntime::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Narrative_EEventRuntime_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Comment", "// Run the event at both start and end. This means your event will be executed twice. \n" },
		{ "Both.Name", "EEventRuntime::Both" },
		{ "Both.ToolTip", "Run the event at both start and end. This means your event will be executed twice." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Used for picking when an event should run\n*/" },
#endif
		{ "End.Comment", "/* Execute the event at the end. \n\n\x09""For dialogue, this is when the dialogue line finishes playing.\n\x09""For Quest states, this is when the state is exited\n\x09""For Quest branches, this is when the branch gets taken to a new state and gets deactivated. \n\x09*/" },
		{ "End.Name", "EEventRuntime::End" },
		{ "End.ToolTip", "Execute the event at the end.\n\n      For dialogue, this is when the dialogue line finishes playing.\n      For Quest states, this is when the state is exited\n      For Quest branches, this is when the branch gets taken to a new state and gets deactivated." },
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
		{ "Start.Comment", "/* Execute the event at the start.\n\n\x09""For dialogue, this is when the dialogue line starts playing.\n\x09""For Quest states, this is when the state is entered\n\x09""For Quest branches, this is when the branch becomes active\n\x09*/" },
		{ "Start.Name", "EEventRuntime::Start" },
		{ "Start.ToolTip", "Execute the event at the start.\n\n      For dialogue, this is when the dialogue line starts playing.\n      For Quest states, this is when the state is entered\n      For Quest branches, this is when the branch becomes active" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for picking when an event should run" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Narrative_EEventRuntime_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Narrative,
		nullptr,
		"EEventRuntime",
		"EEventRuntime",
		Z_Construct_UEnum_Narrative_EEventRuntime_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EEventRuntime_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Narrative_EEventRuntime_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Narrative_EEventRuntime_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Narrative_EEventRuntime()
	{
		if (!Z_Registration_Info_UEnum_EEventRuntime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEventRuntime.InnerSingleton, Z_Construct_UEnum_Narrative_EEventRuntime_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEventRuntime.InnerSingleton;
	}
	DEFINE_FUNCTION(UNarrativeEvent::execGetGraphDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGraphDisplayText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNarrativeEvent::execExecuteEvent)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_OBJECT(UNarrativeComponent,Z_Param_NarrativeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteEvent_Implementation(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent);
		P_NATIVE_END;
	}
	struct NarrativeEvent_eventExecuteEvent_Parms
	{
		APawn* Pawn;
		APlayerController* Controller;
		UNarrativeComponent* NarrativeComponent;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		NarrativeEvent_eventExecuteEvent_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct NarrativeEvent_eventGetGraphDisplayText_Parms
	{
		FString ReturnValue;
	};
	static FName NAME_UNarrativeEvent_ExecuteEvent = FName(TEXT("ExecuteEvent"));
	bool UNarrativeEvent::ExecuteEvent(APawn* Pawn, APlayerController* Controller, UNarrativeComponent* NarrativeComponent)
	{
		NarrativeEvent_eventExecuteEvent_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.Controller=Controller;
		Parms.NarrativeComponent=NarrativeComponent;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeEvent_ExecuteEvent),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UNarrativeEvent_GetGraphDisplayText = FName(TEXT("GetGraphDisplayText"));
	FString UNarrativeEvent::GetGraphDisplayText()
	{
		NarrativeEvent_eventGetGraphDisplayText_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UNarrativeEvent_GetGraphDisplayText),&Parms);
		return Parms.ReturnValue;
	}
	void UNarrativeEvent::StaticRegisterNativesUNarrativeEvent()
	{
		UClass* Class = UNarrativeEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteEvent", &UNarrativeEvent::execExecuteEvent },
			{ "GetGraphDisplayText", &UNarrativeEvent::execGetGraphDisplayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, NarrativeComponent), Z_Construct_UClass_UNarrativeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent_MetaData), Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent_MetaData) };
	void Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NarrativeEvent_eventExecuteEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeEvent_eventExecuteEvent_Parms), &Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "ExecuteEvent", nullptr, nullptr, Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers), sizeof(NarrativeEvent_eventExecuteEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeEvent_eventExecuteEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventGetGraphDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Define the text that will show up on a node if this event is added to it */" },
#endif
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define the text that will show up on a node if this event is added to it" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "GetGraphDisplayText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers), sizeof(NarrativeEvent_eventGetGraphDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers) < 2048);
	static_assert(sizeof(NarrativeEvent_eventGetGraphDisplayText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEvent);
	UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister()
	{
		return UNarrativeEvent::StaticClass();
	}
	struct Z_Construct_UClass_UNarrativeEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSharedComponent_MetaData[];
#endif
		static void NewProp_bUseSharedComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSharedComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventRuntime_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventRuntime_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventRuntime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNarrativeEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Narrative,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNarrativeEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent, "ExecuteEvent" }, // 2250069035
		{ &Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText, "GetGraphDisplayText" }, // 4185416060
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Narrative Events allow you to write a little bit of code that fires when a given quest or dialogue node is reached. \n *\n * For example, you could make a Narrative Event \"Give item\" that adds an item to the players inventory. Then, you could \n * add that event to a dialogue node, for example if an NPC said \"Heres my sword, I want you to take it.\" you could add your\n * event to that dialogue node and actually add the sword item to the players inventory. \n */" },
#endif
		{ "IncludePath", "NarrativeEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Narrative Events allow you to write a little bit of code that fires when a given quest or dialogue node is reached.\n\nFor example, you could make a Narrative Event \"Give item\" that adds an item to the players inventory. Then, you could\nadd that event to a dialogue node, for example if an NPC said \"Heres my sword, I want you to take it.\" you could add your\nevent to that dialogue node and actually add the sword item to the players inventory." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_MetaData[] = {
		{ "Category", "Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09If true, run this event on the players shared narrative comp instead of their local one\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, run this event on the players shared narrative comp instead of their local one" },
#endif
	};
#endif
	void Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_SetBit(void* Obj)
	{
		((UNarrativeEvent*)Obj)->bUseSharedComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent = { "bUseSharedComponent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeEvent), &Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_MetaData), Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime_MetaData[] = {
		{ "Category", "Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Defines when the event should be executed \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/NarrativeEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines when the event should be executed" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime = { "EventRuntime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent, EventRuntime), Z_Construct_UEnum_Narrative_EEventRuntime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime_MetaData), Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime_MetaData) }; // 1565397891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bUseSharedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNarrativeEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEvent_Statics::ClassParams = {
		&UNarrativeEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNarrativeEvent()
	{
		if (!Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton, Z_Construct_UClass_UNarrativeEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton;
	}
	template<> NARRATIVE_API UClass* StaticClass<UNarrativeEvent>()
	{
		return UNarrativeEvent::StaticClass();
	}
	UNarrativeEvent::UNarrativeEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEvent);
	UNarrativeEvent::~UNarrativeEvent() {}
	struct Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::EnumInfo[] = {
		{ EEventRuntime_StaticEnum, TEXT("EEventRuntime"), &Z_Registration_Info_UEnum_EEventRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1565397891U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeEvent, UNarrativeEvent::StaticClass, TEXT("UNarrativeEvent"), &Z_Registration_Info_UClass_UNarrativeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEvent), 486770357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_2602434540(TEXT("/Script/Narrative"),
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_demo_Plugins_Narrative_Source_Narrative_Public_NarrativeEvent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
