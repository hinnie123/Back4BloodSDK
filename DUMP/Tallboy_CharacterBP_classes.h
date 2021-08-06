// BlueprintGeneratedClass Tallboy_CharacterBP.Tallboy_CharacterBP_C
// Size: 0x1388 (Inherited: 0x12ec)
struct ATallboy_CharacterBP_C : AZombie_PlayerCharacterBP_C {
	char pad_12EC[0x4]; // 0x12ec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12f0(0x08)
	struct UBoxComponent* AimAssist_Shoulder; // 0x12f8(0x08)
	struct UPlayDeathReactionComponent* PlayDeathReaction; // 0x1300(0x08)
	struct UHealthBarComponent* HealthBar; // 0x1308(0x08)
	struct USphereComponent* LegsLineOfSight; // 0x1310(0x08)
	struct USphereComponent* LineOfSight; // 0x1318(0x08)
	struct UCapsuleComponent* Damage_Capsule_LeftArm; // 0x1320(0x08)
	struct UTargetingReticleComponent* TargetingReticle; // 0x1328(0x08)
	struct UStumbleOthersComponent* StumbleOthers; // 0x1330(0x08)
	struct UMeleeComponent* MeleeOverhead; // 0x1338(0x08)
	struct UBurstAttackComponent* BurstAttack; // 0x1340(0x08)
	struct UPlayHitReactionComponent* PlayHitReaction; // 0x1348(0x08)
	struct UStandardBoneMap_BP_C* StandardBoneMap_BP; // 0x1350(0x08)
	struct UWeakSpotsComponent* WeakSpots; // 0x1358(0x08)
	struct UCapsuleComponent* BurstStumbleCollision; // 0x1360(0x08)
	struct UAnimAttackWindowComponent* AnimAttackWindow; // 0x1368(0x08)
	struct UCapsuleComponent* Damage_Capsule_RightArm; // 0x1370(0x08)
	struct UCapsuleComponent* MeleeCollision; // 0x1378(0x08)
	struct UMutilationComponent* Mutilation; // 0x1380(0x08)

	void Update Ghost State(); // Function Tallboy_CharacterBP.Tallboy_CharacterBP_C.Update Ghost State // (None) // @ game+0xfffffffec0000000
};

