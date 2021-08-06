// Class MediaAssets.MediaSource
// Size: 0x88 (Inherited: 0x30)
struct UMediaSource : UObject {
	char pad_30[0x58]; // 0x30(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.BaseMediaSource
// Size: 0x90 (Inherited: 0x88)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x88(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0xb8 (Inherited: 0x90)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x90(0x10)
	bool PrecacheFile; // 0xa0(0x01)
	char pad_A1[0x17]; // 0xa1(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.MediaComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xd8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xe0(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.MediaPlayer
// Size: 0x140 (Inherited: 0x30)
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x80(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x90(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0xa0(0x10)
	struct FTimespan CacheAhead; // 0xb0(0x08)
	struct FTimespan CacheBehind; // 0xb8(0x08)
	struct FTimespan CacheBehindGame; // 0xc0(0x08)
	bool NativeAudioOut; // 0xc8(0x01)
	bool PlayOnOpen; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	char Shuffle : 1; // 0xcc(0x01)
	char Loop : 1; // 0xcc(0x01)
	char pad_CC_2 : 6; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UMediaPlaylist* Playlist; // 0xd0(0x08)
	int32_t PlaylistIndex; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FTimespan TimeDelay; // 0xe0(0x08)
	float HorizontalFieldOfView; // 0xe8(0x04)
	float VerticalFieldOfView; // 0xec(0x04)
	struct FRotator ViewRotation; // 0xf0(0x0c)
	char pad_FC[0x2c]; // 0xfc(0x2c)
	struct FGuid PlayerGuid; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.MediaPlaylist
// Size: 0x40 (Inherited: 0x30)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x30(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x900 (Inherited: 0x700)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x700(0x04)
	bool DynamicRateAdjustment; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	float RateAdjustmentFactor; // 0x708(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x70c(0x10)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x720(0x08)
	char pad_728[0x1d8]; // 0x728(0x1d8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.MediaTexture
// Size: 0x190 (Inherited: 0xc0)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0xc0(0x01)
	enum class TextureAddress AddressY; // 0xc1(0x01)
	bool AutoClear; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	struct FLinearColor ClearColor; // 0xc4(0x10)
	bool EnableGenMips; // 0xd4(0x01)
	char NumMips; // 0xd5(0x01)
	char pad_D6[0x2]; // 0xd6(0x02)
	struct UMediaPlayer* MediaPlayer; // 0xd8(0x08)
	char pad_E0[0xb0]; // 0xe0(0xb0)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (None) // @ game+0xfffffffec0000000
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x90 (Inherited: 0x88)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x88(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0xa0 (Inherited: 0x90)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x90(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0xa0 (Inherited: 0x90)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t FrameDelay; // 0x94(0x04)
	double TimeDelay; // 0x98(0x08)
};

