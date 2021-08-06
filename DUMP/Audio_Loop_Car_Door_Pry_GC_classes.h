// BlueprintGeneratedClass Audio_Loop_Car_Door_Pry_GC.Audio_Loop_Car_Door_Pry_GC_C
// Size: 0x58 (Inherited: 0x30)
struct UAudio_Loop_Car_Door_Pry_GC_C : UGameplayCue_Blueprintable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x30(0x08)
	struct FGameplayTag StartLoopCue; // 0x38(0x08)
	struct FGameplayTag StopLoopCue; // 0x40(0x08)
	struct UAkAudioEvent* LoopStart; // 0x48(0x08)
	struct UAkAudioEvent* LoopStop; // 0x50(0x08)

	void K2_TriggerCue(struct FGameplayTag CueTag, struct FGameplayCueContext CueContext); // Function Audio_Loop_Car_Door_Pry_GC.Audio_Loop_Car_Door_Pry_GC_C.K2_TriggerCue // (None) // @ game+0xfffffffec0000000
};

