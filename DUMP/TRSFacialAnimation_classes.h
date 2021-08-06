// Class TRSFacialAnimation.FacialAnimationComponent
// Size: 0x1a0 (Inherited: 0xd8)
struct UFacialAnimationComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FName CurveSourceBindingName; // 0xe0(0x08)
	float ExpressionBlendTime; // 0xe8(0x04)
	float VisemeBlendOutTime; // 0xec(0x04)
	struct UFacialAnimationData* FacialAnimationData; // 0xf0(0x08)
	struct UDialogueComponent* DialogComponent; // 0xf8(0x08)
	char pad_100[0x10]; // 0x100(0x10)
	struct ULipsyncHelperSubsystem* LipsyncHelperSubsystem; // 0x110(0x08)
	char pad_118[0x88]; // 0x118(0x88)

	void SetFacialAnimationData(struct UFacialAnimationData* InFacialAnimationData); // Function TRSFacialAnimation.FacialAnimationComponent.SetFacialAnimationData // (None) // @ game+0xfffffffec0000000
};

// Class TRSFacialAnimation.FacialAnimationData
// Size: 0x200 (Inherited: 0x38)
struct UFacialAnimationData : UDataAsset {
	struct UPoseAsset* FacePoseAsset; // 0x38(0x08)
	struct FName ExpressionCurves[0xd]; // 0x40(0x68)
	float ExpressionIntensity[0x5]; // 0xa8(0x14)
	struct FName LipsyncPhonemeVisemeMapping[0x28]; // 0xbc(0x140)
	char pad_1FC[0x4]; // 0x1fc(0x04)
};

// Class TRSFacialAnimation.FacialAnimationPluginSettings
// Size: 0x88 (Inherited: 0x40)
struct UFacialAnimationPluginSettings : UDeveloperSettings {
	struct FFilePath LipsyncCommandlineTool; // 0x40(0x10)
	struct FDirectoryPath VoiceAudioFolder; // 0x50(0x10)
	struct TSoftObjectPtr<UDataTable> LocalizationTable; // 0x60(0x28)
};

// Class TRSFacialAnimation.LipsyncHelperSubsystem
// Size: 0x80 (Inherited: 0x38)
struct ULipsyncHelperSubsystem : UGameInstanceSubsystem {
	char pad_38[0x10]; // 0x38(0x10)
	struct UDataTable* CurrentLanguageLipsyncLines; // 0x48(0x08)
	struct UDataTable* LocalizationTable; // 0x50(0x08)
	char pad_58[0x28]; // 0x58(0x28)
};

