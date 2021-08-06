// BlueprintGeneratedClass ScenarioManagerActor_BP.ScenarioManagerActor_BP_C
// Size: 0x272 (Inherited: 0x250)
struct AScenarioManagerActor_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UTextRenderComponent* Label; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct UGameplayTagsComponent* GameplayTags; // 0x268(0x08)
	bool IsScenarioActive; // 0x270(0x01)
	bool Enable Debug; // 0x271(0x01)

	void ReceiveTick(float DeltaSeconds); // Function ScenarioManagerActor_BP.ScenarioManagerActor_BP_C.ReceiveTick // (None) // @ game+0xfffffffec0000000
};

