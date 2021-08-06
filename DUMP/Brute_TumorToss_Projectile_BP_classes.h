// BlueprintGeneratedClass Brute_TumorToss_Projectile_BP.Brute_TumorToss_Projectile_BP_C
// Size: 0x659 (Inherited: 0x608)
struct ABrute_TumorToss_Projectile_BP_C : ASphereProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UHealthComponent* Health; // 0x610(0x08)
	struct UAkComponent* Ak; // 0x618(0x08)
	struct UGameplayEffectEmitterComponent* SplashDamageGameplayEffectEmitter; // 0x620(0x08)
	struct UProjectileImpactEmitterComponent* SplashDamageProjectileImpactEmitter; // 0x628(0x08)
	struct USphereComponent* CollisionZombie; // 0x630(0x08)
	struct USphereComponent* CollisionHero; // 0x638(0x08)
	struct FRotator RotationRateOnThrow; // 0x640(0x0c)
	char pad_64C[0x4]; // 0x64c(0x04)
	struct UParticleSystemComponent* SpawnedEmitter; // 0x650(0x08)
	bool EnableCollision; // 0x658(0x01)

	void UpdateCollision(); // Function Brute_TumorToss_Projectile_BP.Brute_TumorToss_Projectile_BP_C.UpdateCollision // (None) // @ game+0xfffffffec0000000
};

