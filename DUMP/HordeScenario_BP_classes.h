// BlueprintGeneratedClass HordeScenario_BP.HordeScenario_BP_C
// Size: 0x48c (Inherited: 0x328)
struct UHordeScenario_BP_C : UBlueprintableScenarioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct FScenarioEval_PacingPhase IsInViolentPhase; // 0x330(0x48)
	struct FScenarioEval_PacingPhase IsInCalmPhase; // 0x378(0x48)
	struct FScenarioHeroEval_FixedScore HeroFixedScore; // 0x3c0(0x48)
	bool bActive; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct UEnvQuery*> EnvQueries; // 0x410(0x10)
	struct TArray<float> EnvQueryWeights; // 0x420(0x10)
	struct FString ActiveEQS; // 0x430(0x10)
	struct FVector EQSLocation; // 0x440(0x0c)
	bool bSpokeHordeStartDialogue; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct FGameplayTag ScenarioHordeTag; // 0x450(0x08)
	struct FGameplayTag ScenarioDataSpawningOriginTag; // 0x458(0x08)
	int32_t MulticastSpawnedWave_CurrentWave; // 0x460(0x04)
	int32_t MulticastSpawnedWave_TotalWaves; // 0x464(0x04)
	struct FVector MulticastSpawnedWave_Location; // 0x468(0x0c)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct AGobiCharacter*> MulticastSpawnedWave_CharacterClasses; // 0x478(0x10)
	float MulticastSpawnedWave_CueDelay; // 0x488(0x04)

	void ChooseSpawningLocation(); // Function HordeScenario_BP.HordeScenario_BP_C.ChooseSpawningLocation // (None) // @ game+0xfffffffec0000000
};

