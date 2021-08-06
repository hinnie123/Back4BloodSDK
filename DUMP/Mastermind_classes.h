// Class Mastermind.MastermindBPLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMastermindBPLibrary : UBlueprintFunctionLibrary {

	void SimulateTappedInput(struct UObject* InWorldContextObject, struct FKey InInputKey); // Function Mastermind.MastermindBPLibrary.SimulateTappedInput // (None) // @ game+0xfffffffec0000000
};

// Class Mastermind.MastermindDebugCommandManager
// Size: 0x58 (Inherited: 0x30)
struct UMastermindDebugCommandManager : UObject {
	char pad_30[0x28]; // 0x30(0x28)

	void QATakeScreenshot(struct FString InFilename); // Function Mastermind.MastermindDebugCommandManager.QATakeScreenshot // (None) // @ game+0xfffffffec0000000
};

// Class Mastermind.MastermindJsonObject
// Size: 0x80 (Inherited: 0x30)
struct UMastermindJsonObject : UObject {
	char pad_30[0x50]; // 0x30(0x50)

	struct FString ToJsonString(); // Function Mastermind.MastermindJsonObject.ToJsonString // (None) // @ game+0xfffffffec0000000
};

// Class Mastermind.MastermindServer
// Size: 0xd0 (Inherited: 0x30)
struct UMastermindServer : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

// Class Mastermind.MastermindSettings
// Size: 0x70 (Inherited: 0x40)
struct UMastermindSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> MastermindDebugCommandManagerClass; // 0x40(0x28)
	int32_t MastermindTCPPort; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Mastermind.MastermindSystem
// Size: 0x30 (Inherited: 0x30)
struct UMastermindSystem : UObject {
};

