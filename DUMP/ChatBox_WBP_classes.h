// WidgetBlueprintGeneratedClass ChatBox_WBP.ChatBox_WBP_C
// Size: 0x4cc (Inherited: 0x4a8)
struct UChatBox_WBP_C : UChatBoxUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UOverlay* InputPanel; // 0x4b0(0x08)
	struct UEditableText* MessageInput; // 0x4b8(0x08)
	struct UListView* MessageListView; // 0x4c0(0x08)
	int32_t MessageLengthLimit; // 0x4c8(0x04)

	bool IsTypedCharValid(struct FString TypedCharacter); // Function ChatBox_WBP.ChatBox_WBP_C.IsTypedCharValid // (None) // @ game+0xfffffffec0000000
};

