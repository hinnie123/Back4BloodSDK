// WidgetBlueprintGeneratedClass Rating_WBP.Rating_WBP_C
// Size: 0x489 (Inherited: 0x450)
struct URating_WBP_C : UGobiUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UHorizontalBox* ButtonPanel; // 0x458(0x08)
	struct URatingButton_WBP_C* RatingButtonNegative; // 0x460(0x08)
	struct URatingButton_WBP_C* RatingButtonNeutral; // 0x468(0x08)
	struct URatingButton_WBP_C* RatingButtonPositive; // 0x470(0x08)
	struct FMulticastInlineDelegate OnRatingSelected; // 0x478(0x10)
	enum class EPostRoundFeedbackResult CurrentRating; // 0x488(0x01)

	void SetRatingInternal(struct UGobiUserWidget* Button, bool TriggerDelegate); // Function Rating_WBP.Rating_WBP_C.SetRatingInternal // (None) // @ game+0xfffffffec0000000
};

