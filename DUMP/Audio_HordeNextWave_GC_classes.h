// BlueprintGeneratedClass Audio_HordeNextWave_GC.Audio_HordeNextWave_GC_C
// Size: 0xb4 (Inherited: 0x30)
struct UAudio_HordeNextWave_GC_C : UGameplayCue_Blueprintable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	struct FVector SpawnLocation; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct AActor* Instigator; // 0x48(0x08)
	struct TArray<struct UAkAudioEvent*> spawnTells; // 0x50(0x10)
	struct TMap<struct AGobiCharacter*, struct UAkAudioEvent*> spawnTellMap; // 0x60(0x50)
	int32_t spawnTellCounter; // 0xb0(0x04)

	void Audio_HordeNextWave(struct AActor* Instigator, struct FVector HordeLocation); // Function Audio_HordeNextWave_GC.Audio_HordeNextWave_GC_C.Audio_HordeNextWave // (None) // @ game+0xfffffffec0000000
};

