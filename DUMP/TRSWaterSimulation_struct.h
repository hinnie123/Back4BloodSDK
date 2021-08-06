// Enum TRSWaterSimulation.WaterForceChannelType
enum class WaterForceChannelType : uint8 {
	GlobalForceChannel = 0,
	DetailForceChannel = 1,
	AllChannels = 2,
	WaterForceChannelType_MAX = 3
};

// Enum TRSWaterSimulation.InjectionType
enum class InjectionType : uint8 {
	VelocityPressure = 0,
	Color = 1,
	Blocker = 2,
	Dampener = 3,
	AbsoluteVelocityPressure = 4,
	InjectionType_MAX = 5
};

