// BlueprintGeneratedClass BobsArm_Pickup_BP.BobsArm_Pickup_BP_C
// Size: 0x4b0 (Inherited: 0x488)
struct ABobsArm_Pickup_BP_C : AQuestPickupBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UHighlightComponent* Highlight; // 0x490(0x08)
	struct AMiniNest_BossSpawner_BP_C* MiniNest; // 0x498(0x08)
	struct FMulticastInlineDelegate ArmFound; // 0x4a0(0x10)

	void NotifySuccess(); // Function BobsArm_Pickup_BP.BobsArm_Pickup_BP_C.NotifySuccess // (None) // @ game+0xfffffffec0000000
};

