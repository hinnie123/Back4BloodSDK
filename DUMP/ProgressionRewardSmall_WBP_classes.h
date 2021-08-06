// WidgetBlueprintGeneratedClass ProgressionRewardSmall_WBP.ProgressionRewardSmall_WBP_C
// Size: 0x4a8 (Inherited: 0x450)
struct UProgressionRewardSmall_WBP_C : UGobiUserWidget {
	struct UImage* Border; // 0x450(0x08)
	struct UImage* CheckmarkBadge; // 0x458(0x08)
	struct UImage* Dimmer; // 0x460(0x08)
	struct UImage* LockBadge; // 0x468(0x08)
	struct UImage* Repeatable; // 0x470(0x08)
	struct UImage* RewardIcon; // 0x478(0x08)
	bool Unlocked; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FDataTableRowHandle RowHandle; // 0x488(0x20)

	void UpdateLocked(); // Function ProgressionRewardSmall_WBP.ProgressionRewardSmall_WBP_C.UpdateLocked // (None) // @ game+0xfffffffec0000000
};

