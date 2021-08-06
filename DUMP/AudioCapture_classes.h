// Class AudioCapture.AudioCapture
// Size: 0xb8 (Inherited: 0xb0)
struct UAudioCapture : UAudioGenerator {
	char pad_B0[0x8]; // 0xb0(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (None) // @ game+0xfffffffec0000000
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (None) // @ game+0xfffffffec0000000
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x7c0 (Inherited: 0x700)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x700(0x04)
	char pad_704[0xbc]; // 0x704(0xbc)
};

