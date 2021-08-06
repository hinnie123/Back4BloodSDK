// BlueprintGeneratedClass MiniNest_BossSpawner_BP.MiniNest_BossSpawner_BP_C
// Size: 0x671 (Inherited: 0x250)
struct AMiniNest_BossSpawner_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBoxComponent* PingableCollision; // 0x258(0x08)
	struct FNone* ProceduralSpline_Component9; // 0x260(0x08)
	struct FNone* ProceduralSpline_Component8; // 0x268(0x08)
	struct FNone* ProceduralSpline_Component7; // 0x270(0x08)
	struct FNone* ProceduralSpline_Component6; // 0x278(0x08)
	struct FNone* ProceduralSpline_Component5; // 0x280(0x08)
	struct FNone* ProceduralSpline_Component4; // 0x288(0x08)
	struct FNone* ProceduralSpline_Component3; // 0x290(0x08)
	struct FNone* ProceduralSpline_Component2; // 0x298(0x08)
	struct UNestScenarioGameCoachLessons_BP_C* NestScenarioGameCoachLessons_BP; // 0x2a0(0x08)
	struct UStaticMeshComponent* BasePodBoil; // 0x2a8(0x08)
	struct USplineComponent* SmasherArmConnector1; // 0x2b0(0x08)
	struct UStaticMeshComponent* SmasherProtectiveCasing1; // 0x2b8(0x08)
	struct USkeletalMeshComponent* Smasher1; // 0x2c0(0x08)
	struct USplineComponent* SqueezerArmConnector; // 0x2c8(0x08)
	struct UStaticMeshComponent* SqueezerProtectiveCasing; // 0x2d0(0x08)
	struct USkeletalMeshComponent* Squeezer; // 0x2d8(0x08)
	struct UHighlightComponent* Highlight; // 0x2e0(0x08)
	struct UGameplayTagsComponent* GameplayTags; // 0x2e8(0x08)
	struct UStaticMeshComponent* Boil7_2; // 0x2f0(0x08)
	struct UStaticMeshComponent* Boil7_4; // 0x2f8(0x08)
	struct UStaticMeshComponent* Boil7_3; // 0x300(0x08)
	struct USceneComponent* BoilLocation7; // 0x308(0x08)
	struct USplineComponent* ArmConnector7; // 0x310(0x08)
	struct UStaticMeshComponent* NerveCluster_7_mesh; // 0x318(0x08)
	struct UStaticMeshComponent* Boil6_2; // 0x320(0x08)
	struct UStaticMeshComponent* Boil6_4; // 0x328(0x08)
	struct UStaticMeshComponent* Boil6_3; // 0x330(0x08)
	struct USceneComponent* BoilLocation6; // 0x338(0x08)
	struct USplineComponent* ArmConnector6; // 0x340(0x08)
	struct UStaticMeshComponent* NerveCluster_6_mesh; // 0x348(0x08)
	struct USceneComponent* BoilLocation5; // 0x350(0x08)
	struct USceneComponent* BoilLocation4; // 0x358(0x08)
	struct USceneComponent* BoilLocation3; // 0x360(0x08)
	struct USceneComponent* BoilLocation2; // 0x368(0x08)
	struct USceneComponent* BoilLocation1; // 0x370(0x08)
	struct USplineComponent* ArmConnector5; // 0x378(0x08)
	struct USplineComponent* ArmConnector4; // 0x380(0x08)
	struct USplineComponent* ArmConnector3; // 0x388(0x08)
	struct USplineComponent* ArmConnector2; // 0x390(0x08)
	struct USplineComponent* ArmConnector1; // 0x398(0x08)
	struct UStaticMeshComponent* NerveCluster_5_mesh; // 0x3a0(0x08)
	struct UStaticMeshComponent* NerveCluster_4_mesh; // 0x3a8(0x08)
	struct UStaticMeshComponent* NerveCluster_3_mesh; // 0x3b0(0x08)
	struct UStaticMeshComponent* NerveCluster_2_mesh; // 0x3b8(0x08)
	struct UStaticMeshComponent* NerveCluster_1_mesh; // 0x3c0(0x08)
	struct USceneComponent* Loot spawn location; // 0x3c8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x3d0(0x08)
	struct UAkComponent* Ak_MiniNestActor; // 0x3d8(0x08)
	struct USceneComponent* TopScene; // 0x3e0(0x08)
	struct UStaticMeshComponent* Boil5_4; // 0x3e8(0x08)
	struct UStaticMeshComponent* Boil5_3; // 0x3f0(0x08)
	struct UStaticMeshComponent* Boil5_2; // 0x3f8(0x08)
	struct UStaticMeshComponent* Boil4_4; // 0x400(0x08)
	struct UStaticMeshComponent* Boil4_3; // 0x408(0x08)
	struct UStaticMeshComponent* Boil4_2; // 0x410(0x08)
	struct UStaticMeshComponent* Boil3_3; // 0x418(0x08)
	struct UStaticMeshComponent* Boil3_2; // 0x420(0x08)
	struct UStaticMeshComponent* Boil3_4; // 0x428(0x08)
	struct UStaticMeshComponent* Boil2_4; // 0x430(0x08)
	struct UStaticMeshComponent* Boil2_3; // 0x438(0x08)
	struct UStaticMeshComponent* Boil2_2; // 0x440(0x08)
	struct UStaticMeshComponent* Boil1_4; // 0x448(0x08)
	struct UStaticMeshComponent* Boil1_3; // 0x450(0x08)
	struct UStaticMeshComponent* Boil1_2; // 0x458(0x08)
	struct UStaticMeshComponent* MassWeapons; // 0x460(0x08)
	struct UAlertComponent* Alert; // 0x468(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x470(0x08)
	struct UParticleSystemComponent* VFX_Flame_Pipes_01_P; // 0x478(0x08)
	struct FVector Timeline_1_ScaleBoil_3A35BAB347051F8B569F8FBE4134F665; // 0x480(0x0c)
	enum class ETimelineDirection Timeline_1__Direction_3A35BAB347051F8B569F8FBE4134F665; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x490(0x08)
	struct FVector Timeline_0_ScaleBoil_BBE744A54F4B6A1350B4CD99260523D1; // 0x498(0x0c)
	enum class ETimelineDirection Timeline_0__Direction_BBE744A54F4B6A1350B4CD99260523D1; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x4a8(0x08)
	float LerpBubbling_Vert_Offset_Distance_BE346D664AEB79C803B0D0BDD3B4E008; // 0x4b0(0x04)
	float LerpBubbling_Time_Scale_BE346D664AEB79C803B0D0BDD3B4E008; // 0x4b4(0x04)
	enum class ETimelineDirection LerpBubbling__Direction_BE346D664AEB79C803B0D0BDD3B4E008; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UTimelineComponent* LerpBubbling; // 0x4c0(0x08)
	struct FMulticastInlineDelegate OnDeathOfBossSpawnerPod; // 0x4c8(0x10)
	bool bIsBurning; // 0x4d8(0x01)
	bool bIsPulsing; // 0x4d9(0x01)
	char pad_4DA[0x6]; // 0x4da(0x06)
	struct FMulticastInlineDelegate NerveClusterDestroyed; // 0x4e0(0x10)
	bool bIsSoloPlacedPod; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct TArray<struct AItemPickupBase_BP_C*> MeatballLootArray; // 0x4f8(0x10)
	int32_t RandomIndexReturn; // 0x508(0x04)
	int32_t NumNerveClustersKilled; // 0x50c(0x04)
	struct TArray<struct ANest_NerveCluster_Boil_BP_C*> AllNerveBoilsArray; // 0x510(0x10)
	int32_t NumArms; // 0x520(0x04)
	int32_t TotalSpawnedNerveClusters; // 0x524(0x04)
	struct TArray<int32_t> NumBoilsDead; // 0x528(0x10)
	struct TArray<struct UStaticMeshComponent*> NerveClusterArray; // 0x538(0x10)
	bool bIsPoliceStationNest; // 0x548(0x01)
	bool bIsTorsoHolder; // 0x549(0x01)
	char pad_54A[0x6]; // 0x54a(0x06)
	struct TArray<struct UStaticMeshComponent*> EditorNerveArray; // 0x550(0x10)
	bool bShouldPlaySoundSherlock; // 0x560(0x01)
	bool bHazardCardPlayed; // 0x561(0x01)
	char pad_562[0x6]; // 0x562(0x06)
	struct ANest_PodBoil_BP_C* PodBoil; // 0x568(0x08)
	struct FTransform ExposedTransform; // 0x570(0x30)
	struct FTimerHandle GentlePusling2; // 0x5a0(0x08)
	struct FTimerHandle GentlePusling; // 0x5a8(0x08)
	struct FTimerHandle FastPulse; // 0x5b0(0x08)
	struct TArray<struct AAISpawnActor*> SpawnActorArray; // 0x5b8(0x10)
	float BossSpawnCountDownTimer; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct TArray<struct UStaticMeshComponent*> DestroyedClusters; // 0x5d0(0x10)
	float LowerPodBoil; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct AGobiCharacter* BossToSpawn; // 0x5e8(0x08)
	struct AScenarioActor* OwningScenarioActor; // 0x5f0(0x08)
	bool bAIHatched; // 0x5f8(0x01)
	bool bPlayedBegin; // 0x5f9(0x01)
	char pad_5FA[0x6]; // 0x5fa(0x06)
	struct TArray<struct AGobiCharacter*> ArrayOfBosses; // 0x600(0x10)
	bool bForceSmasher; // 0x610(0x01)
	bool bForceSqueezer; // 0x611(0x01)
	char pad_612[0x6]; // 0x612(0x06)
	struct UPrimitiveComponent* ProtectiveCasing; // 0x618(0x08)
	bool bAIWasForceSelected; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct USceneComponent* ChosenBossSKM; // 0x628(0x08)
	struct TArray<struct AItemPickupBase_BP_C*> NerveClusterLootArray; // 0x630(0x10)
	int32_t PoliceStationPositionIndex; // 0x640(0x04)
	char pad_644[0x4]; // 0x644(0x04)
	struct UPrimitiveComponent* ProtectiveCasing2; // 0x648(0x08)
	struct USceneComponent* ChosenBossSKM2; // 0x650(0x08)
	bool bPlayedBegin2; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct FMulticastInlineDelegate HatcherNestIsActive; // 0x660(0x10)
	bool IsActive; // 0x670(0x01)

	void ActivateScenario(); // Function MiniNest_BossSpawner_BP.MiniNest_BossSpawner_BP_C.ActivateScenario // (None) // @ game+0xfffffffec0000000
};

