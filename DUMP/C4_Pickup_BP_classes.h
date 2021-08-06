// BlueprintGeneratedClass C4_Pickup_BP.C4_Pickup_BP_C
// Size: 0x4a1 (Inherited: 0x478)
struct AC4_Pickup_BP_C : AItemPickupBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UAudioPhysImpactComponent_BP_C* AudioPhysImpactComponent_BP; // 0x480(0x08)
	struct UWaypointSpawnerComponent* WaypointSpawner; // 0x488(0x08)
	struct FMulticastInlineDelegate TurnOnPlantLocationWaypoints; // 0x490(0x10)
	bool Rep_SetWaypointVisibility; // 0x4a0(0x01)

	void OnRep_Rep_SetWaypointVisibility(); // Function C4_Pickup_BP.C4_Pickup_BP_C.OnRep_Rep_SetWaypointVisibility // (None) // @ game+0xfffffffec0000000
};

