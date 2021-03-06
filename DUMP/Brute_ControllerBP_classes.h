// BlueprintGeneratedClass Brute_ControllerBP.Brute_ControllerBP_C
// Size: 0x688 (Inherited: 0x550)
struct ABrute_ControllerBP_C : AMelee_ControllerBP_C {
	float MeleeMoveRadius; // 0x550(0x04)
	float MinAttackRange; // 0x554(0x04)
	float MaxAttackRange; // 0x558(0x04)
	float MinTossRange; // 0x55c(0x04)
	float MaxTossRange; // 0x560(0x04)
	int32_t MaxAttackFailures; // 0x564(0x04)
	float MaxTimeAfterEnemyDamage; // 0x568(0x04)
	bool EnemyDistanceUsesAttackLocation; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	float MinDistanceFromAttackFailure; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UEnvQuery* TossAttackLocation_EQS; // 0x578(0x08)
	float MinWanderDistance; // 0x580(0x04)
	float MaxWanderDistance; // 0x584(0x04)
	float WanderSpacing; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FGameplayTagContainer FallbackTags; // 0x590(0x20)
	struct FGameplayTagQuery MeleeTags; // 0x5b0(0x48)
	struct FGameplayTagQuery TumorTossTags; // 0x5f8(0x48)
	struct FGameplayTagQuery TauntTags; // 0x640(0x48)
};

