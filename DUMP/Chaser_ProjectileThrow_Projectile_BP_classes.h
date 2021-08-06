// BlueprintGeneratedClass Chaser_ProjectileThrow_Projectile_BP.Chaser_ProjectileThrow_Projectile_BP_C
// Size: 0x648 (Inherited: 0x608)
struct AChaser_ProjectileThrow_Projectile_BP_C : ASphereProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UExplosionComponent* explosion; // 0x610(0x08)
	struct UAkComponent* Ak; // 0x618(0x08)
	struct USphereComponent* CollisionHero; // 0x620(0x08)
	struct UParticleSystemComponent* SpawnedEmitterAttached; // 0x628(0x08)
	struct UAkAudioEvent* Audio_Proj_Loop; // 0x630(0x08)
	struct UAkAudioEvent* Audio_Proj_Loop_Stop; // 0x638(0x08)
	struct AParticleChildActor_C* ParticleTrailEffect; // 0x640(0x08)

	void ReceiveTick(float DeltaSeconds); // Function Chaser_ProjectileThrow_Projectile_BP.Chaser_ProjectileThrow_Projectile_BP_C.ReceiveTick // (None) // @ game+0xfffffffec0000000
};

