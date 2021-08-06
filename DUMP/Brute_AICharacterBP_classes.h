// BlueprintGeneratedClass Brute_AICharacterBP.Brute_AICharacterBP_C
// Size: 0x1105 (Inherited: 0xff8)
struct ABrute_AICharacterBP_C : AZombieMelee_AICharacterBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff8(0x08)
	struct UBruteTumorTossComponent_C* ProjectileThrow; // 0x1000(0x08)
	struct UGobiEnemyDamageComponent* EnemyDamageTracker; // 0x1008(0x08)
	struct UBruteComponent* Brute; // 0x1010(0x08)
	struct UWaypointSpawnerComponent* WaypointSpawner; // 0x1018(0x08)
	struct UHealthBarComponent* HealthBar; // 0x1020(0x08)
	struct USkinnedDamageTextureComponent* SkinnedDamageTexture; // 0x1028(0x08)
	struct UStepOnComponent* StepOn; // 0x1030(0x08)
	struct UPrespawnComponent* Prespawn; // 0x1038(0x08)
	struct UCapsuleComponent* BreakableOverlapVolume; // 0x1040(0x08)
	struct USphereComponent* LeapAreaVolume; // 0x1048(0x08)
	struct UCapsuleComponent* Bump; // 0x1050(0x08)
	struct UCapsuleComponent* MeleeSmashNear; // 0x1058(0x08)
	struct UFleeComponent* Flee; // 0x1060(0x08)
	struct UWeakSpotsComponent* WeakSpots; // 0x1068(0x08)
	struct UStumbleDamageAccumulatorComponent* DamageAccumulator; // 0x1070(0x08)
	struct UCapsuleComponent* MeleeRight; // 0x1078(0x08)
	struct UPingableComponent* Pingable; // 0x1080(0x08)
	struct UEnemyAudioComponent_BP_C* EnemyAudioComponent_BP; // 0x1088(0x08)
	struct USphereComponent* LineOfSight; // 0x1090(0x08)
	struct UCapsuleComponent* MeleeLeft; // 0x1098(0x08)
	struct FGameplayTag DespawnTag; // 0x10a0(0x08)
	struct TArray<struct FGameplayTag> HowitzerDamageTags; // 0x10a8(0x10)
	struct FGameplayTagQuery BreakablesIgnoreTags; // 0x10b8(0x48)
	struct FDifficultyBool CallHordeOnSpawn; // 0x1100(0x05)

	void HandelBreakableCollision(struct USceneComponent* CollidedComponent, bool FromSweep, struct FVector SweepImpactPoint); // Function Brute_AICharacterBP.Brute_AICharacterBP_C.HandelBreakableCollision // (None) // @ game+0xfffffffec0000000
};

