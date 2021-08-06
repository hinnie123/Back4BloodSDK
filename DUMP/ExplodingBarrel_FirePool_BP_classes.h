// BlueprintGeneratedClass ExplodingBarrel_FirePool_BP.ExplodingBarrel_FirePool_BP_C
// Size: 0x2b8 (Inherited: 0x278)
struct AExplodingBarrel_FirePool_BP_C : AMolotovFlame {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UGameplayEffectEmitterComponent* GameplayEffectEmitter; // 0x280(0x08)
	struct USphereComponent* GameplayEffectRadius; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct TArray<struct UParticleSystem*> ParticleSets; // 0x298(0x10)
	struct UParticleSystemComponent* SpawnedParticleSet; // 0x2a8(0x08)
	struct UAkComponent* MolotovFireAkComp; // 0x2b0(0x08)

	void Audio_Spawn_Fire_Loop(); // Function ExplodingBarrel_FirePool_BP.ExplodingBarrel_FirePool_BP_C.Audio_Spawn_Fire_Loop // (None) // @ game+0xfffffffec0000000
};

