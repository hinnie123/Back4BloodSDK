// BlueprintGeneratedClass Hazard_FirePool_BP.Hazard_FirePool_BP_C
// Size: 0x2c0 (Inherited: 0x278)
struct AHazard_FirePool_BP_C : AMolotovFlame {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UBillboardComponent* Billboard; // 0x280(0x08)
	struct UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x288(0x08)
	struct USphereComponent* GameplayEffectRadius; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct TArray<struct UParticleSystem*> ParticleSets; // 0x2a0(0x10)
	struct UParticleSystemComponent* SpawnedParticleSet; // 0x2b0(0x08)
	struct UAkComponent* MolotovFireAkComp; // 0x2b8(0x08)

	void Audio_Spawn_Fire_Loop(); // Function Hazard_FirePool_BP.Hazard_FirePool_BP_C.Audio_Spawn_Fire_Loop // (None) // @ game+0xfffffffec0000000
};

