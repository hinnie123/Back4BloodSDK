// WidgetBlueprintGeneratedClass PlatformCallouts_WBP.PlatformCallouts_WBP_C
// Size: 0x4bc (Inherited: 0x450)
struct UPlatformCallouts_WBP_C : UPlatformCalloutsUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UHorizontalBox* PrimaryCallouts; // 0x458(0x08)
	struct UHorizontalBox* SecondaryCallouts; // 0x460(0x08)
	struct TMap<struct FName, struct UPlatformCalloutButtonUserWidget*> WidgetsByAction; // 0x468(0x50)
	float ChildSpacing; // 0x4b8(0x04)

	struct UPlatformCalloutButtonUserWidget* GetCalloutNative(struct FName ActionName); // Function PlatformCallouts_WBP.PlatformCallouts_WBP_C.GetCalloutNative // (None) // @ game+0xfffffffec0000000
};

