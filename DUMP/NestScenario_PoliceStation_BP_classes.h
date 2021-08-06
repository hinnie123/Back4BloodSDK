// BlueprintGeneratedClass NestScenario_PoliceStation_BP.NestScenario_PoliceStation_BP_C
// Size: 0x470 (Inherited: 0x328)
struct UNestScenario_PoliceStation_BP_C : UBlueprintableScenarioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	int32_t NumPodsAlive; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct ANestScenarioActor_PoliceStation_C* ScenarioActor; // 0x338(0x08)
	struct TArray<struct AActor*> NestPodActorArray; // 0x340(0x10)
	bool bSpawnersEnabled; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FMulticastInlineDelegate MiniNestLocationActivated; // 0x358(0x10)
	struct ABobsBodyPart_Head_BP_Child_C* BobsHead; // 0x368(0x08)
	struct ABobsArm_Pickup_BP_C* BobsArmObj; // 0x370(0x08)
	struct ABobsBodyPart_Legs_BP_Child_C* BobsLegs; // 0x378(0x08)
	struct TArray<struct AActor*> BodsBodyParts; // 0x380(0x10)
	bool bFirstBodyPartSpawned; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FMulticastInlineDelegate ArmSpawned; // 0x398(0x10)
	int32_t TotalNumArmsToSpawn; // 0x3a8(0x04)
	int32_t NumArmsAdjustment; // 0x3ac(0x04)
	struct TArray<struct FDataTableRowHandle> CurrentDynamicChallengeCardArray; // 0x3b0(0x10)
	struct TArray<int32_t> NumOfArmsToSpawnArray; // 0x3c0(0x10)
	struct TMap<enum class EMissionDifficulty, int32_t> ArmCountByDifficulty; // 0x3d0(0x50)
	struct TMap<enum class EMissionDifficulty, int32_t> ArmCountByDifficultySolo; // 0x420(0x50)

	void RandomizeArmsPerNest(); // Function NestScenario_PoliceStation_BP.NestScenario_PoliceStation_BP_C.RandomizeArmsPerNest // (None) // @ game+0xfffffffec0000000
};

