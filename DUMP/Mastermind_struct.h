// Enum Mastermind.ETestSuccess
enum class ETestSuccess : uint8 {
	Default = 0,
	Success = 1,
	Failure = 2,
	ETestSuccess_MAX = 3
};

// Enum Mastermind.EMastermindMessageType
enum class EMastermindMessageType : uint8 {
	TestResult = 0,
	StepResult = 1,
	ProgressUpdate = 2,
	EMastermindMessageType_MAX = 3
};

// ScriptStruct Mastermind.MastermindMessage
// Size: 0x28 (Inherited: 0x00)
struct FMastermindMessage {
	enum class EMastermindMessageType Type; // 0x00(0x01)
	char pad_1[0x27]; // 0x01(0x27)
};

