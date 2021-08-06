// BlueprintGeneratedClass Snitcher_AICharacterBP.Snitcher_AICharacterBP_C
// Size: 0x1079 (Inherited: 0xff8)
struct ASnitcher_AICharacterBP_C : AZombieMelee_AICharacterBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff8(0x08)
	struct UBoxComponent* AimAssist_Neck; // 0x1000(0x08)
	struct USnitchComponent* Snitch; // 0x1008(0x08)
	struct UCapsuleComponent* PingableCapsule; // 0x1010(0x08)
	struct UHealthBarComponent* HealthBar; // 0x1018(0x08)
	struct UGameCoachLessonsComponent* GameCoachLessons; // 0x1020(0x08)
	struct UStumbleDamageAccumulatorComponent* DamageAccumulator; // 0x1028(0x08)
	struct USnitcherScenario_BP_C* SnitcherScenario_BP; // 0x1030(0x08)
	struct UWeakSpotsComponent* WeakSpots; // 0x1038(0x08)
	struct USphereComponent* LineOfSight; // 0x1040(0x08)
	struct UCapsuleComponent* Melee; // 0x1048(0x08)
	struct UMutilationComponent* Mutilation; // 0x1050(0x08)
	struct UStandardBoneMap_BP_C* StandardBoneMap_BP; // 0x1058(0x08)
	struct UEnemyAudioComponent_BP_C* EnemyAudioComponent_BP; // 0x1060(0x08)
	struct UTraitsComponent* Traits; // 0x1068(0x08)
	struct UPingableComponent* Pingable; // 0x1070(0x08)
	bool HasSnitched; // 0x1078(0x01)

	void BndEvt__Health_K2Node_ComponentBoundEvent_1_OnDamageSignature__DelegateSignature(struct FDamageInfo DamageInfo); // Function Snitcher_AICharacterBP.Snitcher_AICharacterBP_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_OnDamageSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

