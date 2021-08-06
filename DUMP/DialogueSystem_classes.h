// Class DialogueSystem.ConversationQueue
// Size: 0x90 (Inherited: 0x38)
struct UConversationQueue : UWorldSubsystem {
	char pad_38[0x20]; // 0x38(0x20)
	struct TArray<struct FQueuedConversation> ConversationQueue; // 0x58(0x10)
	char pad_68[0x28]; // 0x68(0x28)

	void RemoveConversationFromQueue(struct UObject* WorldContextObject, struct FDataTableRowHandle RowHandle); // Function DialogueSystem.ConversationQueue.RemoveConversationFromQueue // (None) // @ game+0xfffffffec0000000
};

// Class DialogueSystem.DialogueAudioInterface
// Size: 0x30 (Inherited: 0x30)
struct UDialogueAudioInterface : UInterface {
};

// Class DialogueSystem.DialogueBankManger
// Size: 0x2e8 (Inherited: 0x250)
struct ADialogueBankManger : AInfo {
	char pad_250[0x18]; // 0x250(0x18)
	struct TArray<struct FName> RequiredSpeakerBanks; // 0x268(0x10)
	struct TArray<struct FName> RequiredConversationBanks; // 0x278(0x10)
	char pad_288[0x60]; // 0x288(0x60)

	void OnRep_SpeakerBanks(); // Function DialogueSystem.DialogueBankManger.OnRep_SpeakerBanks // (None) // @ game+0xfffffffec0000000
};

// Class DialogueSystem.DialogueBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UDialogueBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class DialogueSystem.DialogueComponent
// Size: 0x1d8 (Inherited: 0xd8)
struct UDialogueComponent : UActorComponent {
	int32_t MaxRecentDialogueInfo; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FReplicatedDialogueInfo> RecentDialogueInfos; // 0xe0(0x10)
	char pad_F0[0x4]; // 0xf0(0x04)
	struct FReplicatedStopSpeakingInfo LastStopSpeakingInfo; // 0xf4(0x0c)
	int32_t BookendEndRequestCounter; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMulticastInlineDelegate OnDialogueBegin; // 0x108(0x10)
	struct FMulticastInlineDelegate OnDialogueFinished; // 0x118(0x10)
	struct FMulticastInlineDelegate OnDialogueStopped; // 0x128(0x10)
	char pad_138[0x58]; // 0x138(0x58)
	struct FName SpeakerRowId; // 0x190(0x08)
	char pad_198[0x40]; // 0x198(0x40)

	void TestLine(struct FSpokenLineParams Params); // Function DialogueSystem.DialogueComponent.TestLine // (None) // @ game+0xfffffffec0000000
};

// Class DialogueSystem.DialogueEventSet
// Size: 0x48 (Inherited: 0x38)
struct UDialogueEventSet : UDataAsset {
	struct TArray<struct FDialogueEvent> Events; // 0x38(0x10)
};

// Class DialogueSystem.DialogueFactStorage
// Size: 0x80 (Inherited: 0x30)
struct UDialogueFactStorage : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class DialogueSystem.DialogueLedger
// Size: 0x40 (Inherited: 0x30)
struct UDialogueLedger : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class DialogueSystem.DialoguePlayback
// Size: 0x370 (Inherited: 0x30)
struct UDialoguePlayback : UObject {
	char pad_30[0x300]; // 0x30(0x300)
	struct TArray<struct UWorldDialogueTrigger*> DialogueTriggers; // 0x330(0x10)
	float AttenuationAdjustment; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct UWorldDialogueTrigger*> ActiveTriggers; // 0x348(0x10)
	struct UDialogueLedger* DialogueLedger; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)
};

// Class DialogueSystem.DialoguePluginSettings
// Size: 0x1b0 (Inherited: 0x40)
struct UDialoguePluginSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> DialogueSystemClass; // 0x40(0x28)
	struct TSoftClassPtr<UObject> DialoguePlaybackClass; // 0x68(0x28)
	struct TSoftClassPtr<UObject> BankManagerClass; // 0x90(0x28)
	struct TSoftObjectPtr<UDataTable> ConversationTable; // 0xb8(0x28)
	struct TSoftObjectPtr<UDataTable> ResponseGroupTable; // 0xe0(0x28)
	struct TSoftObjectPtr<UDataTable> PriorityTable; // 0x108(0x28)
	struct TSoftObjectPtr<UDataTable> EventDefinitionTable; // 0x130(0x28)
	struct TSoftObjectPtr<UDataTable> DialogueAnimationTable; // 0x158(0x28)
	float FloatingConversationDelay; // 0x180(0x04)
	int32_t FloatingConversationMax; // 0x184(0x04)
	float ConversationBankLoadDelay; // 0x188(0x04)
	bool PreloadAllConversationBanks; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FString CommsRTPC; // 0x190(0x10)
	float CommsInnerRadius; // 0x1a0(0x04)
	float CommsOuterRadius; // 0x1a4(0x04)
	float CommsOcclusionThreshold; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// Class DialogueSystem.DialogueResponseSet
// Size: 0x88 (Inherited: 0x38)
struct UDialogueResponseSet : UDataAsset {
	struct TMap<struct FName, struct FDialogueResponse> Responses; // 0x38(0x50)
};

// Class DialogueSystem.DialogueSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UDialogueSubsystem : UWorldSubsystem {
	struct UDialogueSystem* DialogueSystem; // 0x38(0x08)
};

// Class DialogueSystem.DialogueSystem
// Size: 0x2f0 (Inherited: 0x30)
struct UDialogueSystem : UObject {
	struct FMulticastInlineDelegate OnConversationBegin; // 0x30(0x10)
	struct FMulticastInlineDelegate OnConversationEnd; // 0x40(0x10)
	struct UDataTable* EventDefinitionTable; // 0x50(0x08)
	struct UDataTable* SpeakerTable; // 0x58(0x08)
	struct TMap<struct UDialogueComponent*, struct FSpeakerRuntimeData> SpeakerMap; // 0x60(0x50)
	char pad_B0[0x1e0]; // 0xb0(0x1e0)
	struct UDialoguePlayback* DialoguePlayback; // 0x290(0x08)
	struct ADialogueSystemDebugger* Debugger; // 0x298(0x08)
	struct ADialogueBankManger* BankManager; // 0x2a0(0x08)
	struct ADialogueSystemDebugger* DebuggerClass; // 0x2a8(0x08)
	struct UDataTable* ResponseGroupTable; // 0x2b0(0x08)
	struct UDataTable* ConversationTable; // 0x2b8(0x08)
	struct UDataTable* DialogueAnimationTable; // 0x2c0(0x08)
	struct UDataTable* PriorityTable; // 0x2c8(0x08)
	struct UDialogueComponent* LastSpokenDialogueComp; // 0x2d0(0x08)
	char pad_2D8[0x18]; // 0x2d8(0x18)

	void UnregisterSpeaker(struct UDialogueComponent* DialogueComponent); // Function DialogueSystem.DialogueSystem.UnregisterSpeaker // (None) // @ game+0xfffffffec0000000
};

// Class DialogueSystem.DialogueSystemDebugger
// Size: 0x298 (Inherited: 0x250)
struct ADialogueSystemDebugger : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct TArray<struct FName> RegisteredSpeakers; // 0x258(0x10)
	struct TArray<struct FDialogueActiveSpeechDebugInfo> ActiveSpeech; // 0x268(0x10)
	struct TArray<struct FQueuedEventDebugInfo> QueuedEvents; // 0x278(0x10)
	struct TArray<struct FDialogueRecordDebugInfo> FullHistory; // 0x288(0x10)
};

// Class DialogueSystem.WorldDialogueTrigger
// Size: 0x40 (Inherited: 0x30)
struct UWorldDialogueTrigger : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

