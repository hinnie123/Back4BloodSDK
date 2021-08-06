// Enum DialogueSystem.EDialogueAudioResult
enum class EDialogueAudioResult : uint8 {
	Success = 0,
	NotAvailableFromLoadedBanks = 1,
	OwningCharacterInvalid = 2,
	AkComponentInvalid = 3,
	FailedInPostEvent = 4,
	EDialogueAudioResult_MAX = 5
};

// Enum DialogueSystem.EFactType
enum class EFactType : uint8 {
	Bool = 0,
	Int = 1,
	Float = 2,
	SID = 3,
	Object = 4,
	EFactType_MAX = 5
};

// Enum DialogueSystem.EDialogueCooldownType
enum class EDialogueCooldownType : uint8 {
	None = 0,
	Individual = 1,
	Team = 2,
	Global = 3,
	Mission = 4,
	EDialogueCooldownType_MAX = 5
};

// Enum DialogueSystem.EReactionCooldownType
enum class EReactionCooldownType : uint8 {
	Normal = 0,
	OncePerMap = 1,
	OncePerSession = 2,
	EReactionCooldownType_MAX = 3
};

// Enum DialogueSystem.EFacialExpression
enum class EFacialExpression : uint8 {
	Neutral = 0,
	Anger = 1,
	Caring = 2,
	Concerned = 3,
	Disgust = 4,
	Happy = 5,
	Fear = 6,
	Intrigued = 7,
	Pained = 8,
	Playful = 9,
	Sadness = 10,
	Sarcasm = 11,
	Surprise = 12,
	Count = 13,
	EFacialExpression_MAX = 14
};

// Enum DialogueSystem.EConversationType
enum class EConversationType : uint8 {
	Immediate = 0,
	Floating = 1,
	EConversationType_MAX = 2
};

// Enum DialogueSystem.EExpressionIntensity
enum class EExpressionIntensity : uint8 {
	VeryLow = 0,
	Low = 1,
	Moderate = 2,
	Intense = 3,
	VeryIntense = 4,
	Count = 5,
	EExpressionIntensity_MAX = 6
};

// Enum DialogueSystem.EDialogueChannel
enum class EDialogueChannel : uint8 {
	Global = 0,
	Personal = 1,
	EDialogueChannel_MAX = 2
};

// Enum DialogueSystem.ELineType
enum class ELineType : uint8 {
	Bark = 0,
	Conversation = 1,
	Prerender = 2,
	ELineType_MAX = 3
};

// Enum DialogueSystem.EGenderTarget
enum class EGenderTarget : uint8 {
	NonBinary = 0,
	Female = 1,
	Male = 2,
	EGenderTarget_MAX = 3
};

// Enum DialogueSystem.ECommsMode
enum class ECommsMode : uint8 {
	ProximityOrComms = 0,
	Proximity = 1,
	Comms = 2,
	ECommsMode_MAX = 3
};

// ScriptStruct DialogueSystem.QueuedConversation
// Size: 0x68 (Inherited: 0x00)
struct FQueuedConversation {
	struct FDataTableRowHandle ConversationRow; // 0x00(0x20)
	struct FDataTableRowHandle EventTrigger; // 0x20(0x20)
	enum class EConversationType ConversationType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct AActor* Instigator; // 0x48(0x08)
	struct AActor* Target; // 0x50(0x08)
	bool bIgnoreFloatingConvoLimiter; // 0x58(0x01)
	char pad_59[0xf]; // 0x59(0x0f)
};

// ScriptStruct DialogueSystem.DialogueAnimationRow
// Size: 0x28 (Inherited: 0x08)
struct FDialogueAnimationRow : FTableRowBase {
	struct TArray<struct UAnimMontage*> DefaultAnimations; // 0x08(0x10)
	struct TArray<struct FSpecificSpeakerAnimationInfo> SpecificSpeakerAnimations; // 0x18(0x10)
};

// ScriptStruct DialogueSystem.SpecificSpeakerAnimationInfo
// Size: 0x30 (Inherited: 0x00)
struct FSpecificSpeakerAnimationInfo {
	struct FDataTableRowHandle Speaker; // 0x00(0x20)
	struct TArray<struct UAnimMontage*> Animations; // 0x20(0x10)
};

// ScriptStruct DialogueSystem.ReplicatedStopSpeakingInfo
// Size: 0x0c (Inherited: 0x00)
struct FReplicatedStopSpeakingInfo {
	int32_t Counter; // 0x00(0x04)
	struct FName ResponseName; // 0x04(0x08)
};

// ScriptStruct DialogueSystem.ReplicatedDialogueInfo
// Size: 0x20 (Inherited: 0x00)
struct FReplicatedDialogueInfo {
	int32_t Index; // 0x00(0x04)
	struct FSpokenLineParams Params; // 0x04(0x1c)
};

// ScriptStruct DialogueSystem.SpokenLineParams
// Size: 0x1c (Inherited: 0x00)
struct FSpokenLineParams {
	struct FName ResponseName; // 0x00(0x08)
	enum class ECommsMode CommsMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	char bShowSubtitles : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	enum class ELineType LineType; // 0x10(0x01)
	enum class EFacialExpression FacialExpression; // 0x11(0x01)
	enum class EExpressionIntensity ExpressionIntensity; // 0x12(0x01)
	bool bNeedsBookend; // 0x13(0x01)
	float SubtitleDuration; // 0x14(0x04)
	float AttenuationRadius; // 0x18(0x04)
};

// ScriptStruct DialogueSystem.DialogueConversation
// Size: 0x60 (Inherited: 0x00)
struct FDialogueConversation {
	struct FName ConversationName; // 0x00(0x08)
	struct FDataTableRowHandle EventTrigger; // 0x08(0x20)
	int32_t SceneNumber; // 0x28(0x04)
	struct FName Soundbank; // 0x2c(0x08)
	enum class EConversationType Type; // 0x34(0x01)
	bool bIsGlobalFloatingConversation; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float ConversationRelevancy; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> AllowedMaps; // 0x40(0x10)
	struct TArray<struct FName> ResponseGroups; // 0x50(0x10)
};

// ScriptStruct DialogueSystem.DialogueConversationRow
// Size: 0x68 (Inherited: 0x08)
struct FDialogueConversationRow : FTableRowBase {
	struct FDialogueConversation Conversation; // 0x08(0x60)
};

// ScriptStruct DialogueSystem.DialogueEvent
// Size: 0x30 (Inherited: 0x00)
struct FDialogueEvent {
	struct FDataTableRowHandle EventRowHandle; // 0x00(0x20)
	struct TArray<struct FDialogueReaction> Reactions; // 0x20(0x10)
};

// ScriptStruct DialogueSystem.DialogueReaction
// Size: 0x58 (Inherited: 0x00)
struct FDialogueReaction {
	struct FGuid UniqueId; // 0x00(0x10)
	struct TArray<struct UObject*> EvalSets; // 0x10(0x10)
	struct FName Response; // 0x20(0x08)
	enum class ECommsMode CommsMode; // 0x28(0x01)
	bool bShowSubtitles; // 0x29(0x01)
	bool bGlobalCanInterruptPersonal; // 0x2a(0x01)
	enum class EReactionCooldownType CooldownType; // 0x2b(0x01)
	float GlobalCooldown; // 0x2c(0x04)
	float PersonalCooldown; // 0x30(0x04)
	float ChanceToSkip; // 0x34(0x04)
	enum class EDialogueChannel Channel; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t PriorityValue; // 0x3c(0x04)
	struct FName PriorityRow; // 0x40(0x08)
	struct FName OnStartAnimRowId; // 0x48(0x08)
	struct FName OnEndAnimRowId; // 0x50(0x08)
};

// ScriptStruct DialogueSystem.DialogueEventDef
// Size: 0x30 (Inherited: 0x00)
struct FDialogueEventDef {
	struct FDataTableRowHandle EventRowHandle; // 0x00(0x20)
	struct FDialogueEventConfig EventConfig; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DialogueSystem.DialogueEventConfig
// Size: 0x0c (Inherited: 0x00)
struct FDialogueEventConfig {
	float RelevancyDuration; // 0x00(0x04)
	int32_t Priority; // 0x04(0x04)
	bool bFilterOnlyInstigator; // 0x08(0x01)
	bool bFlushQueue; // 0x09(0x01)
	bool bInterrupt; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct DialogueSystem.DialogueEventDefinitionRow
// Size: 0x18 (Inherited: 0x08)
struct FDialogueEventDefinitionRow : FTableRowBase {
	struct FDialogueEventConfig EventConfig; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DialogueSystem.FactId
// Size: 0x20 (Inherited: 0x00)
struct FFactId {
	struct FString DictKey; // 0x00(0x10)
	struct FString FactKey; // 0x10(0x10)
};

// ScriptStruct DialogueSystem.FactValue
// Size: 0x10 (Inherited: 0x00)
struct FFactValue {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct DialogueSystem.DialoguePriorityRow
// Size: 0x18 (Inherited: 0x08)
struct FDialoguePriorityRow : FTableRowBase {
	struct FString Comments; // 0x08(0x10)
};

// ScriptStruct DialogueSystem.DialogueResponse
// Size: 0x18 (Inherited: 0x00)
struct FDialogueResponse {
	struct FName ResponseName; // 0x00(0x08)
	struct TArray<struct FName> Variations; // 0x08(0x10)
};

// ScriptStruct DialogueSystem.DialogueResponseVariation
// Size: 0x88 (Inherited: 0x00)
struct FDialogueResponseVariation {
	struct FName VariationName; // 0x00(0x08)
	struct FName Speaker; // 0x08(0x08)
	struct FName ResponseGroup; // 0x10(0x08)
	int32_t Weight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAkAudioEvent* AkEvent; // 0x20(0x08)
	struct FDialogueReply Reply; // 0x28(0x50)
	enum class EGenderTarget GenderTarget; // 0x78(0x01)
	enum class ELineType LineType; // 0x79(0x01)
	enum class EExpressionIntensity ExpressionIntensity; // 0x7a(0x01)
	enum class EFacialExpression FacialExpression; // 0x7b(0x01)
	float TimingAdjustment; // 0x7c(0x04)
	float Cooldown; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct DialogueSystem.DialogueReply
// Size: 0x50 (Inherited: 0x00)
struct FDialogueReply {
	struct FDataTableRowHandle Speaker; // 0x00(0x20)
	struct FName ExplicitResponse; // 0x20(0x08)
	struct FDataTableRowHandle ReplyEvent; // 0x28(0x20)
	float ReplyDelay; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct DialogueSystem.DialogueResponseGroupRow
// Size: 0x60 (Inherited: 0x08)
struct FDialogueResponseGroupRow : FTableRowBase {
	struct FDialogueReaction ResponseGroup; // 0x08(0x58)
};

// ScriptStruct DialogueSystem.DialogueResponseVariantRow
// Size: 0x90 (Inherited: 0x08)
struct FDialogueResponseVariantRow : FTableRowBase {
	struct FDialogueResponseVariation ResponseVariant; // 0x08(0x88)
};

// ScriptStruct DialogueSystem.DialogueSpeakerRow
// Size: 0x48 (Inherited: 0x08)
struct FDialogueSpeakerRow : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct UDialogueEventSet* DialogueEvents; // 0x20(0x08)
	struct UDialogueResponseSet* Responses; // 0x28(0x08)
	struct UDataTable* VariantTable; // 0x30(0x08)
	struct FString Soundbank; // 0x38(0x10)
};

// ScriptStruct DialogueSystem.SpeakerRuntimeData
// Size: 0x80 (Inherited: 0x00)
struct FSpeakerRuntimeData {
	struct FDataTableRowHandle SpeakerRow; // 0x00(0x20)
	char pad_20[0x60]; // 0x20(0x60)
};

// ScriptStruct DialogueSystem.DialogueActiveSpeechDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FDialogueActiveSpeechDebugInfo {
	struct FName SpeakerName; // 0x00(0x08)
	struct FName VariantName; // 0x08(0x08)
};

// ScriptStruct DialogueSystem.QueuedEventDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FQueuedEventDebugInfo {
	struct FName EventName; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	float RelevancyFalloffTime; // 0x0c(0x04)
};

// ScriptStruct DialogueSystem.DialogueRecordDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FDialogueRecordDebugInfo {
	struct FName EventName; // 0x00(0x08)
	struct FName SpeakerName; // 0x08(0x08)
};

// ScriptStruct DialogueSystem.DialogueParam
// Size: 0x18 (Inherited: 0x00)
struct FDialogueParam {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DialogueSystem.DialogueParamDefinition
// Size: 0x0c (Inherited: 0x00)
struct FDialogueParamDefinition {
	struct FName ParamName; // 0x00(0x08)
	enum class EFactType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct DialogueSystem.DialogueEventContext
// Size: 0x38 (Inherited: 0x00)
struct FDialogueEventContext {
	struct FDataTableRowHandle DialogueEvent; // 0x00(0x20)
	struct FName EventName; // 0x20(0x08)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x28(0x08)
	struct TWeakObjectPtr<struct AActor> Target; // 0x30(0x08)
};

