// BlueprintGeneratedClass TimedGrenade_Projectile_BP.TimedGrenade_Projectile_BP_C
// Size: 0x678 (Inherited: 0x608)
struct ATimedGrenade_Projectile_BP_C : ASphereProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UHealthComponent* Health; // 0x610(0x08)
	struct UAkComponent* Ak; // 0x618(0x08)
	struct UParticleSystemComponent* Red_Trail Particle System; // 0x620(0x08)
	struct UParticleSystemComponent* RedLight ParticleSystem; // 0x628(0x08)
	struct USphereComponent* Sphere; // 0x630(0x08)
	struct UAlertComponent* Alert; // 0x638(0x08)
	struct UThreatComponent* Threat; // 0x640(0x08)
	struct UExplosionComponent* explosion; // 0x648(0x08)
	struct UTimedActivationComponent* TimedActivation; // 0x650(0x08)
	float Current Time; // 0x658(0x04)
	float Time Constant; // 0x65c(0x04)
	struct UParticleSystemComponent* RedLightParticle; // 0x660(0x08)
	bool Exploded; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct UAkAudioEvent* TimedGrenadeBeepLoop; // 0x670(0x08)

	void ReceiveBeginPlay(); // Function TimedGrenade_Projectile_BP.TimedGrenade_Projectile_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

