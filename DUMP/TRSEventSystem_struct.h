// Enum TRSEventSystem.EEventTriggerPolicy
enum class EEventTriggerPolicy : uint8 {
	ServerOnly = 0,
	ClientOnly = 1,
	ClientOrServer = 2,
	EEventTriggerPolicy_MAX = 3
};

// ScriptStruct TRSEventSystem.TRSEvent
// Size: 0x38 (Inherited: 0x00)
struct FTRSEvent {
	struct FDataTableRowHandle RowHandle; // 0x00(0x20)
	struct FName EventName; // 0x20(0x08)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x28(0x08)
	struct TWeakObjectPtr<struct AActor> Target; // 0x30(0x08)
};

