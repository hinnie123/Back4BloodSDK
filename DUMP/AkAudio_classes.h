// Class AkAudio.AcousticVolume
// Size: 0x2c8 (Inherited: 0x288)
struct AAcousticVolume : AVolume {
	char pad_288[0x20]; // 0x288(0x20)
	struct FBox BoundingBox; // 0x2a8(0x1c)
	char pad_2C4[0x4]; // 0x2c4(0x04)
};

// Class AkAudio.AkAcousticPortal
// Size: 0x328 (Inherited: 0x2c8)
struct AAkAcousticPortal : AAcousticVolume {
	char pad_2C8[0x30]; // 0x2c8(0x30)
	enum class AkAcousticPortalState InitialState; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	float ObstructionRefreshInterval; // 0x2fc(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x300(0x01)
	char pad_301[0x27]; // 0x301(0x27)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkPortalComponent
// Size: 0x220 (Inherited: 0x220)
struct UAkPortalComponent : USceneComponent {
};

// Class AkAudio.AkAcousticPortalComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UAkAcousticPortalComponent : UBoxComponent {
	char pad_4D0[0x28]; // 0x4d0(0x28)
	enum class AkAcousticPortalState InitialState; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float ObstructionRefreshInterval; // 0x4fc(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x500(0x01)
	char pad_501[0x27]; // 0x501(0x27)
	bool bPortalEnabled; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)

	void SetPortalEnable(bool bEnable, bool bInit); // Function AkAudio.AkAcousticPortalComponent.SetPortalEnable // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkAcousticTexture
// Size: 0x30 (Inherited: 0x30)
struct UAkAcousticTexture : UObject {
};

// Class AkAudio.AkActivatedPlugins
// Size: 0x80 (Inherited: 0x30)
struct UAkActivatedPlugins : UObject {
	struct TMap<struct FString, struct FAkPluginList> Platforms; // 0x30(0x50)
};

// Class AkAudio.AkAmbientSound
// Size: 0x260 (Inherited: 0x250)
struct AAkAmbientSound : AActor {
	struct UAkComponent* AkComponent; // 0x250(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x258(0x01)
	bool AutoPost; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkAndroidInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkAudioBank
// Size: 0x48 (Inherited: 0x30)
struct UAkAudioBank : UObject {
	bool IsDialogueBank; // 0x30(0x01)
	bool IsCacheManaged; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FString> MemberEvents; // 0x38(0x10)
};

// Class AkAudio.AkAudioEvent
// Size: 0xf0 (Inherited: 0x30)
struct UAkAudioEvent : UObject {
	struct UAkAudioBank* RequiredBank; // 0x30(0x08)
	float MaxAttenuationRadius; // 0x38(0x04)
	bool IsInfinite; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinimumDuration; // 0x40(0x04)
	float MaximumDuration; // 0x44(0x04)
	struct TMap<struct FName, float> MaxDurationForLanguage; // 0x48(0x50)
	struct TMap<struct FName, float> MinDurationForLanguage; // 0x98(0x50)
	int32_t DataVersion; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkComponentBase
// Size: 0x360 (Inherited: 0x220)
struct UAkComponentBase : USceneComponent {
	char pad_220[0x28]; // 0x220(0x28)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x248(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x250(0x10)
	float EarlyReflectionBusSendGain; // 0x260(0x04)
	char EnableSpotReflectors : 1; // 0x264(0x01)
	char DrawFirstOrderReflections : 1; // 0x264(0x01)
	char DrawSecondOrderReflections : 1; // 0x264(0x01)
	char DrawHigherOrderReflections : 1; // 0x264(0x01)
	char DrawDiffraction : 1; // 0x264(0x01)
	char pad_264_5 : 3; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	bool StopWhenOwnerDestroyed; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float OcclusionRefreshInterval; // 0x26c(0x04)
	bool bUseReverbVolumes; // 0x270(0x01)
	char pad_271[0xef]; // 0x271(0xef)

	void Stop(); // Function AkAudio.AkComponentBase.Stop // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkComponent
// Size: 0x3d0 (Inherited: 0x360)
struct UAkComponent : UAkComponentBase {
	float AttenuationScalingFactor; // 0x358(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x360(0x08)
	struct FString EventName; // 0x368(0x10)
	bool IsManagedAmbientSound; // 0x378(0x01)
	char pad_37D[0x53]; // 0x37d(0x53)

	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x400 (Inherited: 0x3d0)
struct UAkAudioInputComponent : UAkComponent {
	char pad_3D0[0x30]; // 0x3d0(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkAudioInputObject
// Size: 0x88 (Inherited: 0x30)
struct UAkAudioInputObject : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class AkAudio.AkAuxBus
// Size: 0x38 (Inherited: 0x30)
struct UAkAuxBus : UObject {
	struct UAkAudioBank* RequiredBank; // 0x30(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xbe0 (Inherited: 0x160)
struct UAkCheckBox : UContentWidget {
	char pad_160[0x3b8]; // 0x160(0x3b8)
	enum class ECheckBoxState CheckedState; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	struct FDelegate CheckedStateDelegate; // 0x51c(0x10)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x530(0x5d8)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xb08(0x01)
	bool IsFocusable; // 0xb09(0x01)
	char pad_B0A[0x6]; // 0xb0a(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xb10(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xb20(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xb60(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xb70(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xb80(0x10)
	char pad_B90[0x50]; // 0xb90(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkGameObject
// Size: 0x240 (Inherited: 0x220)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x220(0x08)
	struct FString EventName; // 0x228(0x10)
	char pad_238[0x8]; // 0x238(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkGameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkCallbackInfo : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	int32_t EventID; // 0x3c(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x40)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_40[0x8]; // 0x40(0x08)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x40(0x04)
	int32_t Position; // 0x44(0x04)
	struct FString Label; // 0x48(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x40(0x04)
	float EstimatedDuration; // 0x44(0x04)
	int32_t AudioNodeID; // 0x48(0x04)
	int32_t MediaID; // 0x4c(0x04)
	bool bStreaming; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x78 (Inherited: 0x38)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x3c(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString UserCueName; // 0x68(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x340 (Inherited: 0x220)
struct UAkGeometryComponent : USceneComponent {
	enum class AkMeshType MeshType; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	int32_t LOD; // 0x224(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x228(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x278(0x10)
	char bEnableDiffraction : 1; // 0x288(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x288(0x01)
	char pad_288_2 : 6; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct AActor* AssociatedRoom; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	struct FAkGeometryData GeometryData; // 0x2a0(0x50)
	char pad_2F0[0x50]; // 0x2f0(0x50)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkIOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x34)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0x104(0x04)
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x188 (Inherited: 0x148)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkItemProperties
// Size: 0x188 (Inherited: 0x148)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x260 (Inherited: 0x220)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x220(0x01)
	char pad_220_1 : 7; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct UAkAuxBus* AuxBus; // 0x228(0x08)
	struct FString AuxBusName; // 0x230(0x10)
	float SendLevel; // 0x240(0x04)
	float FadeRate; // 0x244(0x04)
	float Priority; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkLinuxInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkLuminInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkMacInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkPS5InitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkPS5InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPellegrinoAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkPS4InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkReverbVolume
// Size: 0x300 (Inherited: 0x2c8)
struct AAkReverbVolume : AAcousticVolume {
	char bEnabled : 1; // 0x2c8(0x01)
	char pad_2C8_1 : 7; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UAkAuxBus* AuxBus; // 0x2d0(0x08)
	struct FString AuxBusName; // 0x2d8(0x10)
	float SendLevel; // 0x2e8(0x04)
	float FadeRate; // 0x2ec(0x04)
	float Priority; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x2f8(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x2c0 (Inherited: 0x220)
struct UAkRoomComponent : USceneComponent {
	char pad_220[0x28]; // 0x220(0x28)
	char bEnable : 1; // 0x248(0x01)
	char pad_248_1 : 7; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x250(0x08)
	float Priority; // 0x258(0x04)
	float WallOcclusion; // 0x25c(0x04)
	struct FString AuxBusName; // 0x260(0x10)
	float ReverbLevel; // 0x270(0x04)
	float AuxSendLevel; // 0x274(0x04)
	bool AutoPost; // 0x278(0x01)
	char pad_279[0x47]; // 0x279(0x47)
};

// Class AkAudio.AkSettings
// Size: 0x280 (Inherited: 0x30)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FFilePath WwiseProjectPath; // 0x38(0x10)
	struct FDirectoryPath WwiseSoundBankFolder; // 0x48(0x10)
	bool bAutoConnectToWAAPI; // 0x58(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	struct FNavAgentSelector NavMeshSelector; // 0x5c(0x04)
	char pad_60[0x50]; // 0x60(0x50)
	bool bEnableMultiCoreRendering; // 0xb0(0x01)
	bool MigratedEnableMultiCoreRendering; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0xb8(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0xc8(0x10)
	bool bUseHeadphoneStateGroup; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FString HeadphoneStateGroupName; // 0xe0(0x10)
	struct FString PluggedInStateName; // 0xf0(0x10)
	struct FString UnpluggedStateName; // 0x100(0x10)
	bool bUsePlatformEQStateGroup; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FString PlatformEQStateGroupName; // 0x118(0x10)
	struct FString AndroidEQStateName; // 0x128(0x10)
	struct FString OculusGoEQStateName; // 0x138(0x10)
	struct FString OculusSantaCruzEQStateName; // 0x148(0x10)
	struct FString WindowsEQStateName; // 0x158(0x10)
	bool bLinkDialogueLanguageToTextCulture; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TMap<struct FString, struct FString> CultureToWwiseLanguageDirectory; // 0x170(0x50)
	bool bUseDistanceTickOptimizations; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float AlwaysTickDistance; // 0x1c4(0x04)
	float SlowTickDistance; // 0x1c8(0x04)
	float TargetTickInterval; // 0x1cc(0x04)
	float SlowTickMaxInterval; // 0x1d0(0x04)
	bool bStopTickingInactiveComponents; // 0x1d4(0x01)
	bool bUsingVelocitySensitiveTicking; // 0x1d5(0x01)
	char pad_1D6[0x2]; // 0x1d6(0x02)
	float AngleGranularity; // 0x1d8(0x04)
	float RadiusRatio; // 0x1dc(0x04)
	struct FString FirstPersonRTPCName; // 0x1e0(0x10)
	bool bUsingSoundBankCachingSystem; // 0x1f0(0x01)
	bool bEnableAmbientSoundManagement; // 0x1f1(0x01)
	char pad_1F2[0x6]; // 0x1f2(0x06)
	double CacheManagerThrashingTimestep; // 0x1f8(0x08)
	float ExtraDistancePadding; // 0x200(0x04)
	bool bEnableAcousticPortalManagement; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float AcousticPortalMaxAudibleDistance; // 0x208(0x04)
	int32_t MaxNumAudibleAcousticPortal; // 0x20c(0x04)
	float ManagerUpdateRate; // 0x210(0x04)
	float ActivePortalTickRate; // 0x214(0x04)
	struct UTRSListenerManager* ListenerManagerClass; // 0x218(0x08)
	struct TArray<struct TSoftObjectPtr<UAkAudioBank>> InitializationBanks; // 0x220(0x10)
	struct FString ImportToolDestinationFolderName; // 0x230(0x10)
	char pad_240[0x40]; // 0x240(0x40)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x68 (Inherited: 0x30)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x30(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x40(0x10)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x04)
	bool SuppressWwiseProjectPathWarnings; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class AkAudio.AkSimpleComponent
// Size: 0x100 (Inherited: 0xd8)
struct UAkSimpleComponent : UActorComponent {
	char pad_D8[0x28]; // 0xd8(0x28)

	void SetSwitch(struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkSimpleComponent.SetSwitch // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkSkeletalComponent
// Size: 0x450 (Inherited: 0x360)
struct UAkSkeletalComponent : UAkComponentBase {
	char pad_360[0xf0]; // 0x360(0xf0)

	int32_t PostAkEventToBoneAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FName BoneName, bool StopWhenBoneDestroyed, struct FString in_EventName, struct FLatentActionInfo LatentInfo, struct USkeletalMeshComponent* RequestedMesh); // Function AkAudio.AkSkeletalComponent.PostAkEventToBoneAndWaitForEnd // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkSlider
// Size: 0x5a0 (Inherited: 0x148)
struct UAkSlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x10)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FSliderStyle WidgetStyle; // 0x160(0x370)
	enum class EOrientation Orientation; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	struct FLinearColor SliderBarColor; // 0x4d4(0x10)
	struct FLinearColor SliderHandleColor; // 0x4e4(0x10)
	bool IndentHandle; // 0x4f4(0x01)
	bool Locked; // 0x4f5(0x01)
	char pad_4F6[0x2]; // 0x4f6(0x02)
	float StepSize; // 0x4f8(0x04)
	bool IsFocusable; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x500(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x510(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x550(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x560(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x570(0x10)
	char pad_580[0x20]; // 0x580(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x2e0 (Inherited: 0x2c8)
struct AAkSpatialAudioVolume : AAcousticVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x2c8(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x2d0(0x08)
	struct UAkRoomComponent* Room; // 0x2d8(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x278 (Inherited: 0x250)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x250(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x258(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x268(0x08)
	float DistanceScalingFactor; // 0x270(0x04)
	float Level; // 0x274(0x04)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x260 (Inherited: 0x220)
struct UAkSurfaceReflectorSetComponent : USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x220(0x01)
	char pad_220_1 : 7; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x228(0x10)
	char bEnableDiffraction : 1; // 0x238(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x238(0x01)
	char pad_238_2 : 6; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct AActor* AssociatedRoom; // 0x240(0x08)
	char pad_248[0x18]; // 0x248(0x18)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
struct UAkSwitchInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettings CommunicationSettings; // 0x98(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkWaapiCalls
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId SubscriptionId, bool UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x30 (Inherited: 0x30)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkWindowsInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkWwiseTree
// Size: 0x188 (Inherited: 0x148)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x158(0x10)
	char pad_168[0x20]; // 0x168(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x1a8 (Inherited: 0x148)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x158(0x10)
	char pad_168[0x40]; // 0x168(0x40)
};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkXboxOneGDKInitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x3c)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkXSXInitializationSettings
// Size: 0x100 (Inherited: 0x30)
struct UAkXSXInitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x3c)
	struct FAkTRSPerPlatformSettings TRSSettings; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.AkMPXInitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkMPXInitializationSettings : UAkXSXInitializationSettings {
};

// Class AkAudio.AnimNotify_AkEvent
// Size: 0x78 (Inherited: 0x40)
struct UAnimNotify_AkEvent : UAnimNotify {
	struct FName AttachName; // 0x40(0x08)
	struct UAkAudioEvent* Event; // 0x48(0x08)
	bool Follow; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString EventName; // 0x58(0x10)
	struct FVector PositionOffset; // 0x68(0x0c)
	bool Debug; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_E8[0x40]; // 0xe8(0x40)
	struct UAkAudioEvent* Event; // 0x128(0x08)
	bool RetriggerEvent; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t ScrubTailLengthMs; // 0x134(0x04)
	bool StopAtSectionEnd; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FString EventName; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)
	float MaxSourceDuration; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString MaxDurationSourceID; // 0x178(0x10)
	char pad_188[0x48]; // 0x188(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x78 (Inherited: 0x60)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	char bIsAMasterTrack : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x78 (Inherited: 0x78)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x248 (Inherited: 0xe8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct FString Name; // 0xe8(0x10)
	struct FRichCurve FloatCurve; // 0xf8(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1a8(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x78 (Inherited: 0x78)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class AkAudio.PlayerTrackingAudioVolume
// Size: 0x2f8 (Inherited: 0x2c8)
struct APlayerTrackingAudioVolume : AAcousticVolume {
	struct UAkComponent* SoundSource; // 0x2c8(0x08)
	bool bAudioPlayOnStart; // 0x2d0(0x01)
	bool bDrawDebugSphere; // 0x2d1(0x01)
	char pad_2D2[0x26]; // 0x2d2(0x26)

	void StopSound(); // Function AkAudio.PlayerTrackingAudioVolume.StopSound // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.TRSAcousticPortalDistanceManager
// Size: 0x100 (Inherited: 0x30)
struct UTRSAcousticPortalDistanceManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UWorld* World; // 0x38(0x08)
	char pad_40[0xc0]; // 0x40(0xc0)
};

// Class AkAudio.TRSAmbientSoundManager
// Size: 0xa8 (Inherited: 0x30)
struct UTRSAmbientSoundManager : UObject {
	struct UWorld* World; // 0x30(0x08)
	char pad_38[0x70]; // 0x38(0x70)
};

// Class AkAudio.TRSAudioDebugger
// Size: 0x40 (Inherited: 0x30)
struct UTRSAudioDebugger : UObject {
	struct UWorld* World; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class AkAudio.TRSAudioTickManager
// Size: 0xa0 (Inherited: 0x30)
struct UTRSAudioTickManager : UObject {
	struct UWorld* World; // 0x30(0x08)
	char pad_38[0x68]; // 0x38(0x68)
};

// Class AkAudio.TRSListenerManager
// Size: 0xd8 (Inherited: 0x30)
struct UTRSListenerManager : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class AkAudio.TRSListenerManagerSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UTRSListenerManagerSubsystem : UGameInstanceSubsystem {
	struct UTRSListenerManager* Manager; // 0x38(0x08)
};

// Class AkAudio.TRSPostEventEndNotification
// Size: 0x70 (Inherited: 0x38)
struct UTRSPostEventEndNotification : UBlueprintAsyncActionBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMulticastInlineDelegate OnEndOfEvent; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UTRSPostEventEndNotification* PostEventWithEndNotification(struct UAkAudioEvent* AkEvent, struct AActor* Actor); // Function AkAudio.TRSPostEventEndNotification.PostEventWithEndNotification // (None) // @ game+0xfffffffec0000000
};

// Class AkAudio.TRSSplineAudioSource
// Size: 0x298 (Inherited: 0x250)
struct ATRSSplineAudioSource : AActor {
	struct UAkComponent* SoundSource; // 0x250(0x08)
	struct USplineComponent* SoundSpline; // 0x258(0x08)
	bool bAudioPlayOnStart; // 0x260(0x01)
	bool bDrawDebugSphere; // 0x261(0x01)
	enum class ESplineMovementMode MoveType; // 0x262(0x01)
	char pad_263[0x1]; // 0x263(0x01)
	float SplineRate; // 0x264(0x04)
	char pad_268[0x30]; // 0x268(0x30)

	void StopSound(); // Function AkAudio.TRSSplineAudioSource.StopSound // (None) // @ game+0xfffffffec0000000
};

