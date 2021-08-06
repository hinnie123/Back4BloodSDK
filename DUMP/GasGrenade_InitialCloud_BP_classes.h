// BlueprintGeneratedClass GasGrenade_InitialCloud_BP.GasGrenade_InitialCloud_BP_C
// Size: 0x2d8 (Inherited: 0x2b8)
struct AGasGrenade_InitialCloud_BP_C : AMolotov_FirePool_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UParticleSystemComponent* InitialExplosionParticle; // 0x2c0(0x08)
	struct UMolotovGrowthComponent* MolotovGrowth; // 0x2c8(0x08)
	struct UAkComponent* Molotov_Fire_AkComp; // 0x2d0(0x08)

	void ReceiveBeginPlay(); // Function GasGrenade_InitialCloud_BP.GasGrenade_InitialCloud_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

