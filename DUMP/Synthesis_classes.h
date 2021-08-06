// Class Synthesis.ModularSynthPresetBank
// Size: 0x40 (Inherited: 0x30)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x30(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x30 (Inherited: 0x30)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.ModularSynthComponent
// Size: 0xda0 (Inherited: 0x700)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x700(0x04)
	char pad_704[0x69c]; // 0x704(0x69c)

	void SetSynthPreset(struct FModularSynthPreset SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x80 (Inherited: 0x48)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_48[0x30]; // 0x48(0x30)
	struct FSourceEffectBitCrusherSettings Settings; // 0x78(0x08)

	void SetSettings(struct FSourceEffectBitCrusherSettings InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0xa0 (Inherited: 0x48)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_48[0x40]; // 0x48(0x40)
	struct FSourceEffectChorusSettings Settings; // 0x88(0x18)

	void SetSettings(struct FSourceEffectChorusSettings InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xc0 (Inherited: 0x48)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_48[0x50]; // 0x48(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x98(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0xf8 (Inherited: 0xd8)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x88 (Inherited: 0x48)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_48[0x34]; // 0x48(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x7c(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0x90 (Inherited: 0x48)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_48[0x38]; // 0x48(0x38)
	struct FSourceEffectEQSettings Settings; // 0x80(0x10)

	void SetSettings(struct FSourceEffectEQSettings InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0x88 (Inherited: 0x48)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_48[0x34]; // 0x48(0x34)
	struct FSourceEffectFilterSettings Settings; // 0x7c(0x0c)

	void SetSettings(struct FSourceEffectFilterSettings InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x88 (Inherited: 0x48)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_48[0x34]; // 0x48(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x7c(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x88 (Inherited: 0x48)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_48[0x34]; // 0x48(0x34)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x7c(0x0c)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0x80 (Inherited: 0x48)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_48[0x30]; // 0x48(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x78(0x08)

	void SetSettings(struct FSourceEffectPannerSettings InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0x90 (Inherited: 0x48)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_48[0x38]; // 0x48(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0x80(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x98 (Inherited: 0x48)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_48[0x3c]; // 0x48(0x3c)
	struct FSourceEffectRingModulationSettings Settings; // 0x84(0x14)

	void SetSettings(struct FSourceEffectRingModulationSettings InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0xa0 (Inherited: 0x48)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_48[0x40]; // 0x48(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0x88(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x98 (Inherited: 0x48)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_48[0x3c]; // 0x48(0x3c)
	struct FSourceEffectStereoDelaySettings Settings; // 0x84(0x14)

	void SetSettings(struct FSourceEffectStereoDelaySettings InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x80 (Inherited: 0x48)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_48[0x30]; // 0x48(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x78(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x60 (Inherited: 0x30)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x30(0x10)
	int32_t NumChannels; // 0x40(0x04)
	int32_t SampleRate; // 0x44(0x04)
	float NormalizationVolumeDb; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<float> IRData; // 0x50(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xc0 (Inherited: 0x48)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x48(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x68(0x08)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x70(0x01)
	bool bEnableHardwareAcceleration; // 0x71(0x01)
	char pad_72[0x4e]; // 0x72(0x4e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0x98 (Inherited: 0x48)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_48[0x34]; // 0x48(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x7c(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0x88 (Inherited: 0x48)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_48[0x34]; // 0x48(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x7c(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x90 (Inherited: 0x48)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_48[0x38]; // 0x48(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0x80(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xb8 (Inherited: 0x48)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_48[0x40]; // 0x48(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0x88(0x18)
	char pad_A0[0x18]; // 0xa0(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.Synth2DSlider
// Size: 0x4e0 (Inherited: 0x148)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x148(0x04)
	float ValueY; // 0x14c(0x04)
	struct FDelegate ValueXDelegate; // 0x150(0x10)
	struct FDelegate ValueYDelegate; // 0x160(0x10)
	struct FSynth2DSliderStyle WidgetStyle; // 0x170(0x2e0)
	struct FLinearColor SliderHandleColor; // 0x450(0x10)
	bool IndentHandle; // 0x460(0x01)
	bool Locked; // 0x461(0x01)
	char pad_462[0x2]; // 0x462(0x02)
	float StepSize; // 0x464(0x04)
	bool IsFocusable; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x470(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x480(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x490(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x4b0(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x4c0(0x10)
	char pad_4D0[0x10]; // 0x4d0(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.GranularSynth
// Size: 0xac0 (Inherited: 0x700)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x700(0x08)
	char pad_708[0x3b8]; // 0x708(0x3b8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x178 (Inherited: 0x30)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x30(0x10)
	char bLockKeyframesToGridBool : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t LockKeyframesToGrid; // 0x44(0x04)
	int32_t WaveTableResolution; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x50(0x10)
	char bNormalizeWaveTables : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x117]; // 0x61(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xe40 (Inherited: 0x700)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x700(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x710(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x720(0x08)
	char pad_728[0x718]; // 0x728(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x830 (Inherited: 0x700)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x700(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x708(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x718(0x10)
	char pad_728[0x108]; // 0x728(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (None) // @ game+0xfffffffec0000000
};

// Class Synthesis.SynthKnob
// Size: 0x460 (Inherited: 0x148)
struct USynthKnob : UWidget {
	float Value; // 0x148(0x04)
	float StepSize; // 0x14c(0x04)
	float MouseSpeed; // 0x150(0x04)
	float MouseFineTuneSpeed; // 0x154(0x04)
	char ShowTooltipInfo : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FText ParameterName; // 0x160(0x18)
	struct FText ParameterUnits; // 0x178(0x18)
	struct FDelegate ValueDelegate; // 0x190(0x10)
	struct FSynthKnobStyle WidgetStyle; // 0x1a0(0x258)
	bool Locked; // 0x3f8(0x01)
	bool IsFocusable; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x400(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x410(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x420(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x430(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x440(0x10)
	char pad_450[0x10]; // 0x450(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (None) // @ game+0xfffffffec0000000
};

