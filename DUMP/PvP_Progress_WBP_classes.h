// WidgetBlueprintGeneratedClass PvP_Progress_WBP.PvP_Progress_WBP_C
// Size: 0x4a6 (Inherited: 0x450)
struct UPvP_Progress_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UCanvasPanel* BottomMarkerCanvas; // 0x458(0x08)
	struct UProgressEndpoint_WBP_C* EndPip; // 0x460(0x08)
	struct UProgressBar* Progress; // 0x468(0x08)
	struct UVerticalBox* RootVBox; // 0x470(0x08)
	struct UProgressEndpoint_WBP_C* StartPip; // 0x478(0x08)
	struct UCanvasPanel* TopMarkerCanvas; // 0x480(0x08)
	struct TArray<float> ProgressArray; // 0x488(0x10)
	float AnimProgress; // 0x498(0x04)
	float AnimProgressPerSecond; // 0x49c(0x04)
	float AnimEnd; // 0x4a0(0x04)
	bool SpawnNextPipAboveLine; // 0x4a4(0x01)
	bool Animate; // 0x4a5(0x01)

	void StartAnim(); // Function PvP_Progress_WBP.PvP_Progress_WBP_C.StartAnim // (None) // @ game+0xfffffffec0000000
};

