// WidgetBlueprintGeneratedClass PreRenderedCinematicScreen_WBP.PreRenderedCinematicScreen_WBP_C
// Size: 0x5c9 (Inherited: 0x588)
struct UPreRenderedCinematicScreen_WBP_C : UPreRenderedCinematicScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UHoldCalloutButton_WBP_C* SkipCallout; // 0x590(0x08)
	struct UImage* VideoPlayer; // 0x598(0x08)
	struct FDataTableRowHandle CinematicRowHandle_OLD; // 0x5a0(0x20)
	struct UMediaPlayer* MediaPlayer_OLD; // 0x5c0(0x08)
	bool PlayWhenReady_OLD; // 0x5c8(0x01)

	void FinalizePlayback(); // Function PreRenderedCinematicScreen_WBP.PreRenderedCinematicScreen_WBP_C.FinalizePlayback // (None) // @ game+0xfffffffec0000000
};

