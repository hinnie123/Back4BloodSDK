// BlueprintGeneratedClass Sleeper_AICharacterBP.Sleeper_AICharacterBP_C
// Size: 0xfe8 (Inherited: 0xf80)
struct ASleeper_AICharacterBP_C : AGobiCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf80(0x08)
	struct UHealthBarComponent* HealthBar; // 0xf88(0x08)
	struct UInfectedHighlightComponent* InfectedHighlight; // 0xf90(0x08)
	struct UEnemyAudioComponent_BP_C* EnemyAudioComponent_BP; // 0xf98(0x08)
	struct AItemPickupBase_BP_C* LootContainer; // 0xfa0(0x08)
	struct AActor* LootContainerClass; // 0xfa8(0x08)
	float AttackRadius; // 0xfb0(0x04)
	float ThreatReactThresholdTime; // 0xfb4(0x04)
	struct AActor* SleeperPod; // 0xfb8(0x08)
	bool IsActiveSleeper; // 0xfc0(0x01)
	char pad_FC1[0x3]; // 0xfc1(0x03)
	float InactiveMaxHealth; // 0xfc4(0x04)
	struct UThreatComponent* ThreatComponent; // 0xfc8(0x08)
	struct ASleeper_HeroGrappled_ScenarioActor_C* ScenarioActor; // 0xfd0(0x08)
	int32_t NewVar_1; // 0xfd8(0x04)
	struct FVector SpawnOffset; // 0xfdc(0x0c)

	void GetLootSpawnPos(struct FTransform SpawnTransform); // Function Sleeper_AICharacterBP.Sleeper_AICharacterBP_C.GetLootSpawnPos // (None) // @ game+0xfffffffec0000000
};

