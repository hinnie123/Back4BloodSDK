// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)
struct UGameplayTask : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName InstanceName; // 0x38(0x08)
	char pad_40[0x2]; // 0x40(0x02)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x42(0x01)
	char pad_43[0x25]; // 0x43(0x25)
	struct UGameplayTask* ChildTask; // 0x68(0x08)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation // (None) // @ game+0xfffffffec0000000
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources // (None) // @ game+0xfffffffec0000000
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate Success; // 0x70(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct AActor* ClassToSpawn; // 0xa8(0x08)

	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // (None) // @ game+0xfffffffec0000000
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; // 0x70(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay // (None) // @ game+0xfffffffec0000000
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x30(0x04)
	int8_t AutoResourceID; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameplayTasks.GameplayTasksComponent
// Size: 0x148 (Inherited: 0xd8)
struct UGameplayTasksComponent : UActorComponent {
	char pad_D8[0xc]; // 0xd8(0x0c)
	char pad_E4_0 : 1; // 0xe4(0x01)
	char bIsNetDirty : 1; // 0xe4(0x01)
	char pad_E4_2 : 6; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0xe8(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0x118(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x128(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x138(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // (None) // @ game+0xfffffffec0000000
};

