// BlueprintGeneratedClass Melee_ControllerBP.Melee_ControllerBP_C
// Size: 0x550 (Inherited: 0x3e8)
struct AMelee_ControllerBP_C : AGobiAIController_BP_C {
	struct UAIScriptingComponent* AIScripting; // 0x3e8(0x08)
	struct UAIPerceptionComponent* AIPerception; // 0x3f0(0x08)
	struct FGameplayTagContainer AttackTags; // 0x3f8(0x20)
	struct FGameplayTagContainer AlertTags; // 0x418(0x20)
	struct FGameplayTagContainer IdleTags; // 0x438(0x20)
	struct UEnvQuery* AttackLocation_EQS; // 0x458(0x08)
	struct UEnvQuery* Threat_EQS; // 0x460(0x08)
	struct FGameplayTagContainer HitReactionTags; // 0x468(0x20)
	struct UEnvQuery* Wander_EQS; // 0x488(0x08)
	struct FGameplayTagContainer AngerTags; // 0x490(0x20)
	struct UEnvQuery* AmbushLocation_EQS; // 0x4b0(0x08)
	struct UEnvQuery* SneakAdvanceLocation_EQS; // 0x4b8(0x08)
	struct FGameplayTagQuery SneakTags; // 0x4c0(0x48)
	struct FGameplayTagQuery SneakAdvanceTags; // 0x508(0x48)
};

