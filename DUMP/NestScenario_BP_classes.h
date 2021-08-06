// BlueprintGeneratedClass NestScenario_BP.NestScenario_BP_C
// Size: 0x459 (Inherited: 0x328)
struct UNestScenario_BP_C : UBlueprintableScenarioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	int32_t NumPodsAlive; // 0x330(0x04)
	int32_t NumOfPodsDestroyed; // 0x334(0x04)
	struct TArray<struct AActor*> NestActorArray; // 0x338(0x10)
	struct FScenarioHeroEval_HeroInVolume HeroEvalinVolume; // 0x348(0x70)
	struct FScenarioEval_HerosInVolume ActivationScenarioEvalVolume; // 0x3b8(0x78)
	int32_t PodArrayLength; // 0x430(0x04)
	bool bSpawnersEnabled; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FMulticastInlineDelegate MiniNestActivated; // 0x438(0x10)
	struct TArray<struct AActor*> WorkingNestArray; // 0x448(0x10)
	bool bScenarioEnabled; // 0x458(0x01)

	void Init Logging(); // Function NestScenario_BP.NestScenario_BP_C.Init Logging // (None) // @ game+0xfffffffec0000000
};

