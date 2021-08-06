// WidgetBlueprintGeneratedClass PlatformCalloutImage_WBP.PlatformCalloutImage_WBP_C
// Size: 0x4b0 (Inherited: 0x468)
struct UPlatformCalloutImage_WBP_C : UPlatformCalloutImageUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UImage* CalloutIcon; // 0x470(0x08)
	struct UTextBlock* CalloutText; // 0x478(0x08)
	struct FName Action; // 0x480(0x08)
	bool bShowKey; // 0x488(0x01)
	bool bShowGamepad; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct FMulticastInlineDelegate OnIconVisibilityChanged; // 0x490(0x10)
	struct FMulticastInlineDelegate OnInputChanged; // 0x4a0(0x10)

	struct FName GetAction_Internal(); // Function PlatformCalloutImage_WBP.PlatformCalloutImage_WBP_C.GetAction_Internal // (None) // @ game+0xfffffffec0000000
};

