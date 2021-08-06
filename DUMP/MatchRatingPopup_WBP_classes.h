// WidgetBlueprintGeneratedClass MatchRatingPopup_WBP.MatchRatingPopup_WBP_C
// Size: 0x4b0 (Inherited: 0x470)
struct UMatchRatingPopup_WBP_C : UPopupUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UBackgroundBlur_WBP_C* BackgroundBlur_WBP; // 0x478(0x08)
	struct UPlatformCalloutImage_WBP_C* NextRatingCallout; // 0x480(0x08)
	struct UPlatformCalloutImage_WBP_C* PreviousRatingCallout; // 0x488(0x08)
	struct URating_WBP_C* Rating; // 0x490(0x08)
	enum class EPostRoundFeedbackResult FeedbackCount; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct FMulticastInlineDelegate OnRatingSelected; // 0x4a0(0x10)

	void SetRating(enum class EPostRoundFeedbackResult InRating); // Function MatchRatingPopup_WBP.MatchRatingPopup_WBP_C.SetRating // (None) // @ game+0xfffffffec0000000
};

