// Class TRSSectorsAndPortals.TRSVolumeBase
// Size: 0x320 (Inherited: 0x288)
struct ATRSVolumeBase : AVolume {
	char pad_288[0x98]; // 0x288(0x98)
};

// Class TRSSectorsAndPortals.LevelVisibilityVolume
// Size: 0x380 (Inherited: 0x320)
struct ALevelVisibilityVolume : ATRSVolumeBase {
	bool bAddNewLevelsAsVisibile; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TMap<struct FName, bool> VisibleLevels; // 0x328(0x50)
	bool bAffectsSectorsAndPortalsTypes; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
};

// Class TRSSectorsAndPortals.TRSAssociativePlane
// Size: 0x360 (Inherited: 0x320)
struct ATRSAssociativePlane : ATRSVolumeBase {
	struct UModel* PlaneModel; // 0x320(0x08)
	struct UBrushComponent* PlaneBrushComponent; // 0x328(0x08)
	char pad_330[0x20]; // 0x330(0x20)
	bool bAutomaticAssociationBounds; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float AssociationBoundsWidth; // 0x354(0x04)
	enum class EAssociativePlaneVersion Version; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
};

// Class TRSSectorsAndPortals.TRSBoundOverrideComponent
// Size: 0x4c0 (Inherited: 0x4c0)
struct UTRSBoundOverrideComponent : UBillboardComponent {
};

// Class TRSSectorsAndPortals.TRSOccluder
// Size: 0x340 (Inherited: 0x320)
struct ATRSOccluder : ATRSVolumeBase {
	char pad_320[0x10]; // 0x320(0x10)
	float MaxDistance; // 0x330(0x04)
	bool bExclusiveOutdoorSector; // 0x334(0x01)
	char pad_335[0xb]; // 0x335(0x0b)
};

// Class TRSSectorsAndPortals.TRSPortal
// Size: 0x380 (Inherited: 0x360)
struct ATRSPortal : ATRSAssociativePlane {
	bool bDisableAfterDistance; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float MaxDistance; // 0x364(0x04)
	bool bEnabled; // 0x368(0x01)
	bool bIncludeOutdoorSectors; // 0x369(0x01)
	bool bExclusiveOutdoorSectors; // 0x36a(0x01)
	char pad_36B[0x15]; // 0x36b(0x15)

	void SetMaxDistance(float MaxDistance); // Function TRSSectorsAndPortals.TRSPortal.SetMaxDistance // (None) // @ game+0xfffffffec0000000
};

// Class TRSSectorsAndPortals.TRSSector
// Size: 0x320 (Inherited: 0x320)
struct ATRSSector : ATRSVolumeBase {
};

// Class TRSSectorsAndPortals.TRSOutdoorSector
// Size: 0x320 (Inherited: 0x320)
struct ATRSOutdoorSector : ATRSSector {
};

