// Class AudioMixer.SynthComponent
// Size: 0x700 (Inherited: 0x220)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x220(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x220(0x01)
	char bAllowSpatialization : 1; // 0x220(0x01)
	char bOverrideAttenuation : 1; // 0x220(0x01)
	char pad_220_4 : 4; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	char bOutputToBusOnly : 1; // 0x224(0x01)
	char pad_224_1 : 7; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct USoundAttenuation* AttenuationSettings; // 0x228(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x230(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x5d0(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5d8(0x50)
	struct USoundClass* SoundClass; // 0x628(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x630(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x638(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x640(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x650(0x10)
	struct FSoundModulation Modulation; // 0x660(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x670(0x10)
	char bIsUISound : 1; // 0x680(0x01)
	char bIsPreviewSound : 1; // 0x680(0x01)
	char pad_680_2 : 6; // 0x680(0x01)
	char pad_681[0x3]; // 0x681(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x684(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x690(0x10)
	char pad_6A0[0x20]; // 0x6a0(0x20)
	struct USynthSound* Synth; // 0x6c0(0x08)
	struct UAudioComponent* AudioComponent; // 0x6c8(0x08)
	char pad_6D0[0x30]; // 0x6d0(0x30)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (None) // @ game+0xfffffffec0000000
};

// Class AudioMixer.AudioGenerator
// Size: 0xb0 (Inherited: 0x30)
struct UAudioGenerator : UObject {
	char pad_30[0x80]; // 0x30(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (None) // @ game+0xfffffffec0000000
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x110 (Inherited: 0x48)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_48[0x78]; // 0x48(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xc0(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x90 (Inherited: 0x48)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_48[0x38]; // 0x48(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x80(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (None) // @ game+0xfffffffec0000000
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xd8 (Inherited: 0x48)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_48[0x5c]; // 0x48(0x5c)
	struct FSubmixEffectReverbSettings Settings; // 0xa4(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (None) // @ game+0xfffffffec0000000
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xe0 (Inherited: 0x48)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	char pad_48[0x60]; // 0x48(0x60)
	struct FSubmixEffectReverbFastSettings Settings; // 0xa8(0x38)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect // (None) // @ game+0xfffffffec0000000
};

// Class AudioMixer.SynthSound
// Size: 0x390 (Inherited: 0x370)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x370(0x08)
	char pad_378[0x18]; // 0x378(0x18)
};

