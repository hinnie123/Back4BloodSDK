// WidgetBlueprintGeneratedClass Waypoint_WBP.Waypoint_WBP_C
// Size: 0x3a8 (Inherited: 0x338)
struct UWaypoint_WBP_C : UWaypointUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Intro; // 0x340(0x08)
	struct UImage* Arrow; // 0x348(0x08)
	struct UOverlay* BGOverlay; // 0x350(0x08)
	struct UTextBlock* DebugTime; // 0x358(0x08)
	struct URichTextBlock* DisplayText; // 0x360(0x08)
	struct UTextBlock* DistanceText; // 0x368(0x08)
	struct UImage* Icon; // 0x370(0x08)
	struct UImage* IconBackground; // 0x378(0x08)
	struct UImage* IconBorder; // 0x380(0x08)
	struct UScaleBox* IconScaleBox; // 0x388(0x08)
	struct UVerticalBox* parentContainer; // 0x390(0x08)
	struct UCanvasPanel* StarsPanel; // 0x398(0x08)
	struct UTierStars_WBP_C* TierStars; // 0x3a0(0x08)

	void SetRemainingTime(float RemainingTime, float TotalTime); // Function Waypoint_WBP.Waypoint_WBP_C.SetRemainingTime // (None) // @ game+0xfffffffec0000000
};

