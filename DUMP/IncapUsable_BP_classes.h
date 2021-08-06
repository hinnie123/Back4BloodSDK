// BlueprintGeneratedClass IncapUsable_BP.IncapUsable_BP_C
// Size: 0x56c (Inherited: 0x530)
struct UIncapUsable_BP_C : UIncapUsableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct FMulticastInlineDelegate DidIncapRevive; // 0x538(0x10)
	struct FMulticastInlineDelegate DidRescue; // 0x548(0x10)
	struct FMulticastInlineDelegate DidIncapReviveStart; // 0x558(0x10)
	float RequiredUseTimeVOThreshold; // 0x568(0x04)

	void IsOwnerInNeedOfRescue(bool InNeedOfRescue); // Function IncapUsable_BP.IncapUsable_BP_C.IsOwnerInNeedOfRescue // (None) // @ game+0xfffffffec0000000
};

