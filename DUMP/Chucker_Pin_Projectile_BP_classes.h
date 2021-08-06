// BlueprintGeneratedClass Chucker_Pin_Projectile_BP.Chucker_Pin_Projectile_BP_C
// Size: 0x651 (Inherited: 0x608)
struct AChucker_Pin_Projectile_BP_C : ASphereProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct USphereComponent* CollisionHero; // 0x610(0x08)
	struct UAkComponent* Ak; // 0x618(0x08)
	struct USphereComponent* SplashDamageCollision; // 0x620(0x08)
	struct UGameplayEffectEmitterComponent* SplashDamageGameplayEffectEmitter; // 0x628(0x08)
	struct UProjectileImpactEmitterComponent* SplashDamageProjectileImpactEmitter; // 0x630(0x08)
	struct USphereComponent* CollisionZombie; // 0x638(0x08)
	struct UParticleSystemComponent* SpawnedEmitterAttached; // 0x640(0x08)
	struct AParticleChildActor_C* ParticleTrailEffect; // 0x648(0x08)
	bool Thrown; // 0x650(0x01)

	void OnRep_Thrown(); // Function Chucker_Pin_Projectile_BP.Chucker_Pin_Projectile_BP_C.OnRep_Thrown // (None) // @ game+0xfffffffec0000000
};

