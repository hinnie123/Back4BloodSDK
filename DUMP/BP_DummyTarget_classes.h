// BlueprintGeneratedClass BP_DummyTarget.BP_DummyTarget_C
// Size: 0x380 (Inherited: 0x250)
struct ABP_DummyTarget_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBoxComponent* AimAssist_Torso; // 0x258(0x08)
	struct UBoxComponent* AimAssist_Head; // 0x260(0x08)
	struct UAimAssistTargetComponent* AimAssistTarget; // 0x268(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x270(0x08)
	struct UWeakSpotsComponent* WeakSpots; // 0x278(0x08)
	struct UStaticMeshComponent* TargetDummy_Base_01; // 0x280(0x08)
	struct UAkSkeletalComponent* AkSkeletal; // 0x288(0x08)
	struct UStaticMeshComponent* TargetDummy_Body_01; // 0x290(0x08)
	struct USceneComponent* HitPositioning; // 0x298(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x2a0(0x08)
	struct UHealthHitMarkerComponent* HealthHitMarker; // 0x2a8(0x08)
	struct UHitMarkerComponent* HitMarker; // 0x2b0(0x08)
	struct UHealthComponent* Health; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	struct FDamageInfo DamageInfo; // 0x2c8(0xb8)

	void OnRep_DamageInfo(); // Function BP_DummyTarget.BP_DummyTarget_C.OnRep_DamageInfo // (None) // @ game+0xfffffffec0000000
};

