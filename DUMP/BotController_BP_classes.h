// BlueprintGeneratedClass BotController_BP.BotController_BP_C
// Size: 0x12c0 (Inherited: 0x1198)
struct ABotController_BP_C : ABotController {
	struct UBotAIScriptingComponent* AIScripting; // 0x1198(0x08)
	struct UAIPerceptionComponent* AIPerception; // 0x11a0(0x08)
	struct USteeringBehavior* NavToAttackLoc_SB; // 0x11a8(0x08)
	struct USteeringBehavior* NavToAlertLoc_SB; // 0x11b0(0x08)
	struct USteeringBehavior* NavToWanderLoc_SB; // 0x11b8(0x08)
	struct USteeringBehavior* NavToHighPrioritySmartActor_SB; // 0x11c0(0x08)
	struct USteeringBehavior* NavToLowPrioritySmartActor_SB; // 0x11c8(0x08)
	struct FGameplayTagContainer MeleeAttackTags; // 0x11d0(0x20)
	struct FGameplayTagContainer RangedAttackTags; // 0x11f0(0x20)
	struct UAIDistanceRanges* DistanceToEnemyRanges; // 0x1210(0x08)
	struct UEnvQuery* RangedAttackLocation_EQS; // 0x1218(0x08)
	float ProjectileRange; // 0x1220(0x04)
	char pad_1224[0x4]; // 0x1224(0x04)
	struct FGameplayTagContainer IdleTags; // 0x1228(0x20)
	struct UEnvQuery* RangedThreat_EQS; // 0x1248(0x08)
	struct FGameplayTagContainer HitReactionTags; // 0x1250(0x20)
	float CombatRange; // 0x1270(0x04)
	char pad_1274[0x4]; // 0x1274(0x04)
	struct FString CombatRangeLabel; // 0x1278(0x10)
	float IdealAttackRange; // 0x1288(0x04)
	float IdealRangeAdjustment; // 0x128c(0x04)
	enum class EDMapDirectionMode WanderDirectionMode; // 0x1290(0x01)
	char pad_1291[0x7]; // 0x1291(0x07)
	struct USteeringControl* NavToAttackLoc_SC; // 0x1298(0x08)
	struct USteeringControl* NavToAlertLoc_SC; // 0x12a0(0x08)
	struct USteeringControl* NavToWanderLoc_SC; // 0x12a8(0x08)
	struct USteeringControl* NavToHighPrioritySmartActor_SC; // 0x12b0(0x08)
	struct USteeringControl* NavToLowPrioritySmartActor_SC; // 0x12b8(0x08)
};

