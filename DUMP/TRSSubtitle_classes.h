// Class TRSSubtitle.TRSSubtitleComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UTRSSubtitleComponent : UActorComponent {
	struct UUserWidget* SubtitleWidget; // 0xd8(0x08)

	void ShowSubtitle(struct FText Speaker, struct FText Text); // Function TRSSubtitle.TRSSubtitleComponent.ShowSubtitle // (None) // @ game+0xfffffffec0000000
};

// Class TRSSubtitle.TRSSubtitlePluginSettings
// Size: 0x68 (Inherited: 0x40)
struct UTRSSubtitlePluginSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> SubtitleWidgetClass; // 0x40(0x28)
};

// Class TRSSubtitle.TRSSubtitleWidgetInterface
// Size: 0x30 (Inherited: 0x30)
struct UTRSSubtitleWidgetInterface : UInterface {

	void ShowSubtitle(struct FText Speaker, struct FText Text); // Function TRSSubtitle.TRSSubtitleWidgetInterface.ShowSubtitle // (None) // @ game+0xfffffffec0000000
};

