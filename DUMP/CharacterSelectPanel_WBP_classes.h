// WidgetBlueprintGeneratedClass CharacterSelectPanel_WBP.CharacterSelectPanel_WBP_C
// Size: 0x5a0 (Inherited: 0x4e0)
struct UCharacterSelectPanel_WBP_C : UCharacterSelectUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* charGridInAnimation; // 0x4e8(0x08)
	struct UVerticalBox* CharacterContainer; // 0x4f0(0x08)
	struct UCharacterDetails_WBP_C* CharacterDetails; // 0x4f8(0x08)
	struct UCharacterSelectPortraitGrid_WBP_C* CharacterGrid; // 0x500(0x08)
	struct UBaseTextBlock_C* CharacterNameText; // 0x508(0x08)
	struct UVerticalBox* DetailContainer; // 0x510(0x08)
	struct UImage* Fader; // 0x518(0x08)
	struct UTextBlock* HeaderText; // 0x520(0x08)
	struct UAnotherGameplayCard_WBP_C* HeroCard; // 0x528(0x08)
	struct UImage* LevelCover; // 0x530(0x08)
	struct UOverlay* TipPanel; // 0x538(0x08)
	struct UTutorialTip_WBP_C* TutorialTip; // 0x540(0x08)
	struct FName FocusedCharacterName; // 0x548(0x08)
	struct AGobiPlayerState* GobiPlayerState; // 0x550(0x08)
	struct FName SelectedCharacterName; // 0x558(0x08)
	struct FMulticastInlineDelegate OnCharacterAccepted; // 0x560(0x10)
	struct FMulticastInlineDelegate OnOwningCharacterClaimed; // 0x570(0x10)
	struct UTweenContainer* TweenOpenContainer; // 0x580(0x08)
	struct UTweenContainer* TweenCloseContainer; // 0x588(0x08)
	struct FMulticastInlineDelegate OnLeaveTransitionStart; // 0x590(0x10)

	void OnCloseAnimEnd(struct UTweenFloat* Tween); // Function CharacterSelectPanel_WBP.CharacterSelectPanel_WBP_C.OnCloseAnimEnd // (None) // @ game+0xfffffffec0000000
};

