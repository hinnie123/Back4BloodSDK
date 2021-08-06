// Enum ObservationSystem.EObservableDebugDrawFlags
enum class EObservableDebugDrawFlags : uint8 {
	None = 0,
	MinDistance = 1,
	MaxDistance = 2,
	ViewAngle = 3,
	ObserveableToObserverViewAngle = 4,
	BoxTest = 5,
	SphereTest = 6,
	LineOfSightTest = 7,
	EObservableDebugDrawFlags_MAX = 8
};

// Enum ObservationSystem.EObservationTick
enum class EObservationTick : uint8 {
	Server = 0,
	Client = 1,
	Both = 2,
	EObservationTick_MAX = 3
};

// Enum ObservationSystem.EObservationSimpleCollisionFlags
enum class EObservationSimpleCollisionFlags : uint8 {
	None = 0,
	BoxTest = 1,
	SphereTest = 2,
	EObservationSimpleCollisionFlags_MAX = 3
};

// Enum ObservationSystem.EObservationRuleFlags
enum class EObservationRuleFlags : uint8 {
	None = 0,
	LineOfSightTest = 1,
	EObservationRuleFlags_MAX = 2
};

// ScriptStruct ObservationSystem.ObservationRule
// Size: 0x28 (Inherited: 0x00)
struct FObservationRule {
	int32_t Flags; // 0x00(0x04)
	float MinDistance; // 0x04(0x04)
	float MaxDistance; // 0x08(0x04)
	float ViewAngle; // 0x0c(0x04)
	float ForwardViewAngle; // 0x10(0x04)
	int32_t SimpleCollisionFlags; // 0x14(0x04)
	struct FVector BoxExtents; // 0x18(0x0c)
	float SphereRadius; // 0x24(0x04)
};

