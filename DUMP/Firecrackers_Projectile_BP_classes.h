// BlueprintGeneratedClass Firecrackers_Projectile_BP.Firecrackers_Projectile_BP_C
// Size: 0x64d (Inherited: 0x608)
struct AFirecrackers_Projectile_BP_C : ASphereProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UParticleSystemComponent* FirecrackerSparks; // 0x610(0x08)
	struct UAkComponent* Ak; // 0x618(0x08)
	struct USphereComponent* Sphere; // 0x620(0x08)
	struct UAlertComponent* Alert; // 0x628(0x08)
	struct UThreatComponent* Threat; // 0x630(0x08)
	struct UTimedActivationComponent* TimedActivation; // 0x638(0x08)
	struct UParticleSystemComponent* RedLightParticle; // 0x640(0x08)
	float ActivationDelay; // 0x648(0x04)
	bool HasBounced; // 0x64c(0x01)

	void OnRep_HasBounced(); // Function Firecrackers_Projectile_BP.Firecrackers_Projectile_BP_C.OnRep_HasBounced // (None) // @ game+0xfffffffec0000000
};

