// Enum TRSSectorsAndPortals.EAssociativePlaneVersion
enum class EAssociativePlaneVersion : uint8 {
	BeforeVersioning = 0,
	PlaneBrushBuilderReparented = 1,
	EAssociativePlaneVersion_MAX = 2
};

// Enum TRSSectorsAndPortals.EVisibleResult
enum class EVisibleResult : uint8 {
	Unknown = 0,
	Visible = 1,
	NeverTraversed = 2,
	InvalidIndex = 3,
	LVVCulled = 4,
	DistanceCulled = 5,
	FrustumCulled = 6,
	OccluderCulled = 7,
	ResourceCountCulled = 8,
	EVisibleResult_MAX = 9
};

