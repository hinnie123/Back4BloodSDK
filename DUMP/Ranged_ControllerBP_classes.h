// BlueprintGeneratedClass Ranged_ControllerBP.Ranged_ControllerBP_C
// Size: 0x5e0 (Inherited: 0x3e8)
struct ARanged_ControllerBP_C : AGobiAIController_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UAIScriptingComponent* AIScripting; // 0x3f0(0x08)
	struct UAIPerceptionComponent* AIPerception; // 0x3f8(0x08)
	struct FGameplayTagContainer MeleeAttackTags; // 0x400(0x20)
	struct FGameplayTagContainer RangedAttackTags; // 0x420(0x20)
	struct UAIDistanceRanges* DistanceToEnemyRanges; // 0x440(0x08)
	struct FGameplayTagContainer AttackTags; // 0x448(0x20)
	struct UEnvQuery* RangedAttackLocation_EQS; // 0x468(0x08)
	float ProjectileRange; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct FGameplayTagContainer IdleTags; // 0x478(0x20)
	struct UEnvQuery* RangedThreat_EQS; // 0x498(0x08)
	struct FGameplayTagContainer HitReactionTags; // 0x4a0(0x20)
	struct UEnvQuery* Wander_EQS; // 0x4c0(0x08)
	float CombatRange; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FString CombatRangeLabel; // 0x4d0(0x10)
	float IdealAttackRange; // 0x4e0(0x04)
	float IdealRangeAdjustment; // 0x4e4(0x04)
	struct FGameplayTagQuery RetreatTags; // 0x4e8(0x48)
	struct FGameplayTagQuery SneakTags; // 0x530(0x48)
	struct FGameplayTagQuery SneakAdvanceTags; // 0x578(0x48)
	struct UEnvQuery* AmbushLocation_EQS; // 0x5c0(0x08)
	struct UEnvQuery* SneakAdvanceLocation_EQS; // 0x5c8(0x08)
	struct UEnvQuery* Retreat_EQS; // 0x5d0(0x08)
	struct UEnvQuery* Threat_EQS; // 0x5d8(0x08)

	void InitBBVars(); // Function Ranged_ControllerBP.Ranged_ControllerBP_C.InitBBVars // (None) // @ game+0xfffffffec0000000
};

