// BlueprintGeneratedClass Static_Fire_Volume_BP.Static_Fire_Volume_BP_C
// Size: 0x288 (Inherited: 0x250)
struct AStatic_Fire_Volume_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UCapsuleComponent* Capsule; // 0x258(0x08)
	struct UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	bool Enabled; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct TArray<struct AActor*> Overlapping Actors; // 0x278(0x10)

	void OnRep_Enabled(); // Function Static_Fire_Volume_BP.Static_Fire_Volume_BP_C.OnRep_Enabled // (None) // @ game+0xfffffffec0000000
};

