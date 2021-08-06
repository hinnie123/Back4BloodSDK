// WidgetBlueprintGeneratedClass SaveSlotList_WBP.SaveSlotList_WBP_C
// Size: 0x4d0 (Inherited: 0x490)
struct USaveSlotList_WBP_C : USaveSlotListUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UTextButton_WBP_C* CreateRunButton; // 0x498(0x08)
	struct UTextBlock* NewGamePlus; // 0x4a0(0x08)
	struct UGobiScrollBox_C* SaveSlots; // 0x4a8(0x08)
	bool bIsEmptySelected; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UPlatformCallouts_WBP_C* Callouts; // 0x4b8(0x08)
	struct FMulticastInlineDelegate OnCreateNewRun; // 0x4c0(0x10)

	struct UGobiUserWidget* AddSaveSlot(struct FUIRunData RunData); // Function SaveSlotList_WBP.SaveSlotList_WBP_C.AddSaveSlot // (None) // @ game+0xfffffffec0000000
};

