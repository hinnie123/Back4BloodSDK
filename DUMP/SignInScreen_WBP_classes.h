// WidgetBlueprintGeneratedClass SignInScreen_WBP.SignInScreen_WBP_C
// Size: 0x6e0 (Inherited: 0x620)
struct USignInScreen_WBP_C : USignInScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x628(0x08)
	struct UBaseTextBlock_C* AcceptingInviteText; // 0x630(0x08)
	struct UImage* BG; // 0x638(0x08)
	struct UImage* BGImage; // 0x640(0x08)
	struct UBaseTextBlock_C* CreatingGroupText; // 0x648(0x08)
	struct UBaseTextBlock_C* CreatingPartyText; // 0x650(0x08)
	struct UEnvironmentStatus_WBP_C* EnvironmentStatus_WBP; // 0x658(0x08)
	struct UBaseTextBlock_C* FetchingProfileText; // 0x660(0x08)
	struct UImage* Frame; // 0x668(0x08)
	struct UBaseTextBlock_C* SigningInText; // 0x670(0x08)
	struct UOverlay* SignInPrompt; // 0x678(0x08)
	struct URichTextBlock* SignInPromptText; // 0x680(0x08)
	struct UTaskManRelayStatus_WBP_C* TaskManRelayStatus; // 0x688(0x08)
	struct UCircularThrobber* WaitingForServerThrobber; // 0x690(0x08)
	enum class ESignInScreenState SignInState; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)
	struct TArray<struct FKey> CancelKeys; // 0x6a0(0x10)
	struct TSoftObjectPtr<UTexture2D> BGTexture; // 0x6b0(0x28)
	struct UTweenContainer* TweenOpenContainer; // 0x6d8(0x08)

	void SetOpenTween(); // Function SignInScreen_WBP.SignInScreen_WBP_C.SetOpenTween // (None) // @ game+0xfffffffec0000000
};

