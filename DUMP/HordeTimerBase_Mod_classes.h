// BlueprintGeneratedClass HordeTimerBase_Mod.HordeTimerBase_Mod_C
// Size: 0x198 (Inherited: 0x88)
struct UHordeTimerBase_Mod_C : UGameplayMod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct TMap<enum class EMissionDifficulty, struct FTimedHordeConfig> DifficultyHordeConfigs; // 0x90(0x50)
	struct FTimedHordeConfig TimedHordeConfig; // 0xe0(0x20)
	struct AActor* HordeScenarioClass; // 0x100(0x08)
	struct FName AudioRequestName; // 0x108(0x08)
	struct FTimerHandle HordeTimer; // 0x110(0x08)
	struct AHordeScenarioActor_C* HordeScenarioActor; // 0x118(0x08)
	struct FTimerHandle HordeBuilldTimer; // 0x120(0x08)
	struct FDataTableRowHandle TrackerMissionHandle; // 0x128(0x20)
	struct FDataTableRowHandle TrackerObjectiveHandle; // 0x148(0x20)
	int32_t NumHordesCalled; // 0x168(0x04)
	float RemainingTime; // 0x16c(0x04)
	enum class EMissionDifficulty Difficulty; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct FDataTableRowHandle DialogueHordeWarningRow; // 0x178(0x20)

	void OnObjectiveStarted(struct APlayerState* PlayerState, struct FDataTableRowHandle ObjectiveHandle); // Function HordeTimerBase_Mod.HordeTimerBase_Mod_C.OnObjectiveStarted // (None) // @ game+0xfffffffec0000000
};

