// BlueprintGeneratedClass ResearchBox_SupplyBox_Pickup_BP_Child.ResearchBox_SupplyBox_Pickup_BP_Child_C
// Size: 0x4e1 (Inherited: 0x4a9)
struct AResearchBox_SupplyBox_Pickup_BP_Child_C : ASupplyBox_Pickup_BP_C {
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UBoxComponent* TriggerOverlap; // 0x4b8(0x08)
	struct FDataTableRowHandle CollectEquipment; // 0x4c0(0x20)
	bool Destroy; // 0x4e0(0x01)

	void OnRep_Destroy(); // Function ResearchBox_SupplyBox_Pickup_BP_Child.ResearchBox_SupplyBox_Pickup_BP_Child_C.OnRep_Destroy // (None) // @ game+0xfffffffec0000000
};

