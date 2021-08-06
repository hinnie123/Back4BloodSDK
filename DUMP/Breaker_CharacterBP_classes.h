// BlueprintGeneratedClass Breaker_CharacterBP.Breaker_CharacterBP_C
// Size: 0x1378 (Inherited: 0x12ec)
struct ABreaker_CharacterBP_C : AZombie_PlayerCharacterBP_C {
	char pad_12EC[0x4]; // 0x12ec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12f0(0x08)
	struct UCapsuleComponent* MeleeLeft; // 0x12f8(0x08)
	struct UCapsuleComponent* MeleeForward; // 0x1300(0x08)
	struct UPlayDeathReactionComponent* PlayDeathReaction; // 0x1308(0x08)
	struct ULeapMovementModeComponent* LeapMovementMode; // 0x1310(0x08)
	struct UTriggerHordeComponent* TriggerHorde; // 0x1318(0x08)
	struct ULeapComponent* Leap; // 0x1320(0x08)
	struct UDeathGasSpawnComponent* DeathGasSpawn; // 0x1328(0x08)
	struct UParticleColliderComponent* ParticleCollider; // 0x1330(0x08)
	struct UParticleSystemComponent* AmbientEffect_ParticleSystem; // 0x1338(0x08)
	struct UHealthBarComponent* HealthBar; // 0x1340(0x08)
	struct USphereComponent* LegsLineOfSight; // 0x1348(0x08)
	struct USphereComponent* LineOfSight; // 0x1350(0x08)
	struct UPlayHitReactionComponent* PlayHitReaction; // 0x1358(0x08)
	struct UWeakSpotsComponent* WeakSpots; // 0x1360(0x08)
	struct UAnimAttackWindowComponent* AnimAttackWindow; // 0x1368(0x08)
	int32_t ArmorPiecesDestroyed; // 0x1370(0x04)
	int32_t MinArmorForAchievement; // 0x1374(0x04)

	void Update Ghost State(); // Function Breaker_CharacterBP.Breaker_CharacterBP_C.Update Ghost State // (None) // @ game+0xfffffffec0000000
};

