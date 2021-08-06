// BlueprintGeneratedClass Common_AICharacterBP.Common_AICharacterBP_C
// Size: 0x1050 (Inherited: 0xff8)
struct ACommon_AICharacterBP_C : AZombieMelee_AICharacterBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff8(0x08)
	struct UBoxComponent* AimAssist_Torso; // 0x1000(0x08)
	struct UBoxComponent* AimAssist_Head; // 0x1008(0x08)
	struct UZombieFacialAnimationComponent* ZombieFacialAnimation; // 0x1010(0x08)
	struct UWeakSpotsComponent* WeakSpots; // 0x1018(0x08)
	struct UStumbleDamageAccumulatorComponent* DamageAccumulator; // 0x1020(0x08)
	struct UCapsuleComponent* Melee; // 0x1028(0x08)
	struct UMutilationComponent* Mutilation; // 0x1030(0x08)
	struct UStandardBoneMap_BP_C* StandardBoneMap_BP; // 0x1038(0x08)
	struct UEnemyAudioComponent_BP_C* EnemyAudioComponent_BP; // 0x1040(0x08)
	struct UPingableComponent* Pingable; // 0x1048(0x08)

	void BndEvt__Health_K2Node_ComponentBoundEvent_1_OnDamageSignature__DelegateSignature(struct FDamageInfo DamageInfo); // Function Common_AICharacterBP.Common_AICharacterBP_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_OnDamageSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

