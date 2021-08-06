// WidgetBlueprintGeneratedClass KeybindList_WBP.KeybindList_WBP_C
// Size: 0x4c1 (Inherited: 0x458)
struct UKeybindList_WBP_C : UKeybindListUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UOptionSectionHeader_WBP_C* Header; // 0x460(0x08)
	struct UVerticalBox* OptionsList; // 0x468(0x08)
	struct FText Category; // 0x470(0x18)
	struct FMulticastInlineDelegate OnPreviewSelectKey; // 0x488(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x498(0x10)
	enum class EKeybindListInputType InputType; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct FMulticastInlineDelegate OnKeybindBlocked; // 0x4b0(0x10)
	bool ShowHeader; // 0x4c0(0x01)

	void HandleInputBlocked(struct FName BindingName, struct FKey AttemptedKey); // Function KeybindList_WBP.KeybindList_WBP_C.HandleInputBlocked // (None) // @ game+0xfffffffec0000000
};

