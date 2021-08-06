// BlueprintGeneratedClass BunnyKick_PvE_CharacterBP.BunnyKick_PvE_CharacterBP_C
// Size: 0x1398 (Inherited: 0x1360)
struct ABunnyKick_PvE_CharacterBP_C : AChaser_CharacterBP_C {
	struct UBoxComponent* AimAssist_Head; // 0x1360(0x08)
	struct UPounceComponent* Pounce; // 0x1368(0x08)
	struct UAttachableComponent* Attachable; // 0x1370(0x08)
	struct UMeleeComponent* Melee; // 0x1378(0x08)
	struct UGameplayEffectEmitterComponent* AOE_KickoffEmitter; // 0x1380(0x08)
	struct USphereComponent* KickoffKnockbackAOE; // 0x1388(0x08)
	struct USphereComponent* PounceGrabCollision; // 0x1390(0x08)

	void UserConstructionScript(); // Function BunnyKick_PvE_CharacterBP.BunnyKick_PvE_CharacterBP_C.UserConstructionScript // (None) // @ game+0xfffffffec0000000
};

