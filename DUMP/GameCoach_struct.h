// Enum GameCoach.EGameCoachLessonState
enum class EGameCoachLessonState : uint8 {
	Idle = 0,
	Teachable = 1,
	TeachingDelay = 2,
	Teaching = 3,
	Cooldown = 4,
	EGameCoachLessonState_MAX = 5
};

// Enum GameCoach.EGameCoachRegistrationScope
enum class EGameCoachRegistrationScope : uint8 {
	Manual = 0,
	Always = 1,
	Count = 2,
	EGameCoachRegistrationScope_MAX = 3
};

// Enum GameCoach.EGameCoachTargetType
enum class EGameCoachTargetType : uint8 {
	LocalPlayer = 0,
	Teammate = 1,
	Enemy = 2,
	Other = 3,
	EGameCoachTargetType_MAX = 4
};

// Enum GameCoach.EGameCoachLessonReplacementPolicy
enum class EGameCoachLessonReplacementPolicy : uint8 {
	None = 0,
	BestViewAngle = 1,
	EGameCoachLessonReplacementPolicy_MAX = 2
};

// ScriptStruct GameCoach.GameCoachQueuedEnable
// Size: 0x18 (Inherited: 0x00)
struct FGameCoachQueuedEnable {
	struct UGameCoachLesson* LessonCDO; // 0x00(0x08)
	struct AActor* Target; // 0x08(0x08)
	struct AActor* DisplayTarget; // 0x10(0x08)
};

