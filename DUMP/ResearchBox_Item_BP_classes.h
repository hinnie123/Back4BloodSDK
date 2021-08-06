// BlueprintGeneratedClass ResearchBox_Item_BP.ResearchBox_Item_BP_C
// Size: 0x4a9 (Inherited: 0x480)
struct AResearchBox_Item_BP_C : ABaseCarriedItem_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UGameCoachLessonsComponent* GameCoachLessons; // 0x488(0x08)
	struct UTraceMeleeComponent* TraceMelee; // 0x490(0x08)
	struct UThreatComponent* Threat; // 0x498(0x08)
	struct UItemAnimationDataComponent* ItemAnimationData; // 0x4a0(0x08)
	bool EnableGameCoach; // 0x4a8(0x01)

	void ReceiveBeginPlay(); // Function ResearchBox_Item_BP.ResearchBox_Item_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

