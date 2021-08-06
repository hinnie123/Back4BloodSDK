// WidgetBlueprintGeneratedClass GameCoachNotification_WBP.GameCoachNotification_WBP_C
// Size: 0x4a0 (Inherited: 0x450)
struct UGameCoachNotification_WBP_C : UGameCoachNotificationUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* NotificationFade; // 0x458(0x08)
	struct UWidgetAnimation* NormalFade; // 0x460(0x08)
	struct UWidgetAnimation* WaypointFade; // 0x468(0x08)
	struct URichTextBlock* DescriptionText; // 0x470(0x08)
	struct UImage* Icon; // 0x478(0x08)
	struct FMulticastInlineDelegate OnFadeFinished; // 0x480(0x10)
	struct UGobiGameCoachLesson* Lesson; // 0x490(0x08)
	struct UWidgetAnimation* PrevAnimation; // 0x498(0x08)

	void UpdateNotificationText(); // Function GameCoachNotification_WBP.GameCoachNotification_WBP_C.UpdateNotificationText // (None) // @ game+0xfffffffec0000000
};

