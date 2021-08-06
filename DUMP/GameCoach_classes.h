// Class GameCoach.GameCoach
// Size: 0x160 (Inherited: 0x30)
struct UGameCoach : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct ULocalPlayer* LocalPlayer; // 0x50(0x08)
	struct TArray<struct UGameCoachLesson*> EnabledLessons; // 0x58(0x10)
	struct TArray<struct FGameCoachQueuedEnable> QueuedEnables; // 0x68(0x10)
	char pad_78[0xe0]; // 0x78(0xe0)
	float VisiblityMinRefreshInterval; // 0x158(0x04)
	float VisiblityMaxRefreshInterval; // 0x15c(0x04)
};

// Class GameCoach.GameCoachLesson
// Size: 0xc8 (Inherited: 0x30)
struct UGameCoachLesson : UObject {
	struct ULocalPlayer* LocalPlayer; // 0x30(0x08)
	struct UGameCoach* GameCoach; // 0x38(0x08)
	char pad_40[0x30]; // 0x40(0x30)
	struct AActor* Target; // 0x70(0x08)
	struct AActor* DisplayTarget; // 0x78(0x08)
	enum class EGameCoachLessonState State; // 0x80(0x01)
	enum class EGameCoachTargetType TargetType; // 0x81(0x01)
	bool bTeachableVisibility; // 0x82(0x01)
	char pad_83[0x1]; // 0x83(0x01)
	int32_t Priority; // 0x84(0x04)
	int32_t ConcurrentLimit; // 0x88(0x04)
	enum class EGameCoachLessonReplacementPolicy ReplacementPolicy; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	int32_t VisibleLimit; // 0x90(0x04)
	int32_t SuccessLimit; // 0x94(0x04)
	int32_t PerRoundLimit; // 0x98(0x04)
	int32_t PerRoundSuccessLimit; // 0x9c(0x04)
	float MinDuration; // 0xa0(0x04)
	float MaxDuration; // 0xa4(0x04)
	float CooldownDuration; // 0xa8(0x04)
	float MaxOpportunityDuration; // 0xac(0x04)
	float OpenDelay; // 0xb0(0x04)
	float MinTeachableDistance; // 0xb4(0x04)
	float MaxTeachableDistance; // 0xb8(0x04)
	float MinFailureDistance; // 0xbc(0x04)
	float MaxFailureDistance; // 0xc0(0x04)
	bool bFailureVisibility; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)

	void StopTeaching(bool bSuccess); // Function GameCoach.GameCoachLesson.StopTeaching // (None) // @ game+0xfffffffec0000000
};

// Class GameCoach.GameCoachLessonsComponent
// Size: 0x108 (Inherited: 0xd8)
struct UGameCoachLessonsComponent : UActorComponent {
	struct TArray<struct UGameCoachLesson*> LessonClasses; // 0xd8(0x10)
	struct AActor* AlternateTarget; // 0xe8(0x08)
	struct AActor* AlternateDisplayTarget; // 0xf0(0x08)
	enum class EGameCoachRegistrationScope Scope; // 0xf8(0x01)
	enum class ECollisionChannel TraceChannel; // 0xf9(0x01)
	bool bUseCustomTraceChannel; // 0xfa(0x01)
	char pad_FB[0x1]; // 0xfb(0x01)
	struct FName CustomTraceChannel; // 0xfc(0x08)
	char pad_104[0x4]; // 0x104(0x04)

	void OnGameCoachStarted(struct UGameCoach* GameCoach, struct ULocalPlayer* LocalPlayer); // Function GameCoach.GameCoachLessonsComponent.OnGameCoachStarted // (None) // @ game+0xfffffffec0000000
};

// Class GameCoach.GameCoachPluginSettings
// Size: 0x60 (Inherited: 0x40)
struct UGameCoachPluginSettings : UDeveloperSettings {
	struct UGameCoach* GameCoachClass; // 0x40(0x08)
	struct TArray<struct UGameCoachLesson*> TipLessons; // 0x48(0x10)
	int32_t NumTipsPerLevel; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class GameCoach.GameCoachSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UGameCoachSubsystem : ULocalPlayerSubsystem {
	struct UGameCoach* GameCoach; // 0x38(0x08)
};

