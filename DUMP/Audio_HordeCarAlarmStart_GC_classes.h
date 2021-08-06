// BlueprintGeneratedClass Audio_HordeCarAlarmStart_GC.Audio_HordeCarAlarmStart_GC_C
// Size: 0x4c (Inherited: 0x30)
struct UAudio_HordeCarAlarmStart_GC_C : UGameplayCue_Blueprintable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	struct AActor* Instigator; // 0x38(0x08)
	struct FVector SpawnLocation; // 0x40(0x0c)

	void Audio_OnCarAlarmHordeStarted(struct AActor* Instigator, struct FVector HordeLocation); // Function Audio_HordeCarAlarmStart_GC.Audio_HordeCarAlarmStart_GC_C.Audio_OnCarAlarmHordeStarted // (None) // @ game+0xfffffffec0000000
};

