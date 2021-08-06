// BlueprintGeneratedClass Melee_AICharacterBP.Melee_AICharacterBP_C
// Size: 0xff0 (Inherited: 0xf80)
struct AMelee_AICharacterBP_C : AGobiCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf80(0x08)
	struct UPlayDeathReactionComponent* PlayDeathReaction; // 0xf88(0x08)
	struct UDrench_Component_Zombie_BP_C* Drench; // 0xf90(0x08)
	struct UDamageFilterComponent* DamageFilter; // 0xf98(0x08)
	struct UGameplayContextComponent* GameplayContext; // 0xfa0(0x08)
	struct UAimAssistTargetComponent* AimAssistTarget; // 0xfa8(0x08)
	struct UAnimAttackWindowComponent* AnimAttackWindow; // 0xfb0(0x08)
	struct UPlayHitReactionComponent* PlayHitReaction; // 0xfb8(0x08)
	struct UAIZombieLifeStateComponent_BP_C* LifeStateComponent; // 0xfc0(0x08)
	struct UCapsuleComponent* Damage_Capsule; // 0xfc8(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0xfd0(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0xfd8(0x08)
	struct UHealthComponent* Health; // 0xfe0(0x08)
	struct UGameplayEffect* DamageFilterEffect; // 0xfe8(0x08)

	void ReceiveBeginPlay(); // Function Melee_AICharacterBP.Melee_AICharacterBP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

