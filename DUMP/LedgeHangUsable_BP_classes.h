// BlueprintGeneratedClass LedgeHangUsable_BP.LedgeHangUsable_BP_C
// Size: 0x504 (Inherited: 0x4b8)
struct ULedgeHangUsable_BP_C : ULedgeHangUsableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	bool BeingRevived; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	float UseTime; // 0x4c4(0x04)
	float RequiredUseTime_1; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FMulticastInlineDelegate DidIncapRevive; // 0x4d0(0x10)
	struct FMulticastInlineDelegate DidRescue; // 0x4e0(0x10)
	struct FMulticastInlineDelegate DidIncapReviveStart; // 0x4f0(0x10)
	float RequiredUseTimeVOThreshold; // 0x500(0x04)

	void IsOwnerInNeedOfRescue(bool InNeedOfRescue); // Function LedgeHangUsable_BP.LedgeHangUsable_BP_C.IsOwnerInNeedOfRescue // (None) // @ game+0xfffffffec0000000
};

