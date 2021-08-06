// BlueprintGeneratedClass AudioPhysImpactComponent_BP.AudioPhysImpactComponent_BP_C
// Size: 0x112 (Inherited: 0xd8)
struct UAudioPhysImpactComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	float ImpulseThreshold; // 0xe0(0x04)
	float Cooldown; // 0xe4(0x04)
	bool onCooldown; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAkAudioEvent* ImpactSound; // 0xf0(0x08)
	struct FTimerHandle CooldownTimer; // 0xf8(0x08)
	bool Debug; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UAkAudioEvent* ImpactSound_Last; // 0x108(0x08)
	bool UseImpactSoundLast; // 0x110(0x01)
	bool UseCustomBind; // 0x111(0x01)

	void PlayImpactSound(struct UAkAudioEvent* AkEvent, struct FHitResult Hit); // Function AudioPhysImpactComponent_BP.AudioPhysImpactComponent_BP_C.PlayImpactSound // (None) // @ game+0xfffffffec0000000
};

