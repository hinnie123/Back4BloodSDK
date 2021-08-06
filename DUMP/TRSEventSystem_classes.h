// Class TRSEventSystem.TRSEventSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UTRSEventSubsystem : UGameInstanceSubsystem {
	struct UTRSEventSystem* TRSEventSystem; // 0x38(0x08)
};

// Class TRSEventSystem.TRSEventSystem
// Size: 0x80 (Inherited: 0x30)
struct UTRSEventSystem : UObject {
	char pad_30[0x50]; // 0x30(0x50)

	void PostTRSEventByRowHandle(struct UObject* WorldContextObject, struct FDataTableRowHandle RowHandle, struct AActor* Instigator, struct AActor* Target); // Function TRSEventSystem.TRSEventSystem.PostTRSEventByRowHandle // (None) // @ game+0xfffffffec0000000
};

// Class TRSEventSystem.PersonalEventTrigger
// Size: 0x48 (Inherited: 0x30)
struct UPersonalEventTrigger : UObject {
	enum class EEventTriggerPolicy Policy; // 0x30(0x01)
	char pad_31[0x17]; // 0x31(0x17)
};

// Class TRSEventSystem.TRSEventTriggerComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UTRSEventTriggerComponent : UActorComponent {
	struct TArray<struct UPersonalEventTrigger*> EventTriggers; // 0xd8(0x10)
	struct TArray<struct UPersonalEventTrigger*> ActiveTriggers; // 0xe8(0x10)
};

