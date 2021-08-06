// Class ProceduralBuilderCommon.ProceduralBuilderEditorSettings
// Size: 0x80 (Inherited: 0x30)
struct UProceduralBuilderEditorSettings : UObject {
	bool bSelectionPrefabOptionsEnabled; // 0x30(0x01)
	bool bFullMapPrefabOptionsEnabled; // 0x31(0x01)
	bool bAutoUpdatePlacedPrefabsWithoutPromptPostUpdate; // 0x32(0x01)
	bool bAutoBuildOnPlacement; // 0x33(0x01)
	bool bAutoSelectPostAutoBuild; // 0x34(0x01)
	bool bAutoUpdatePrefabsOnMapLoadForCommandlets; // 0x35(0x01)
	bool bAutoUpdatePromptForLocked; // 0x36(0x01)
	bool bAutoUpdatePromptForUnlocked; // 0x37(0x01)
	bool bReplaceSelectionWithPrefabOnCreateFromPrefab; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FString> StrictClassFilter; // 0x40(0x10)
	struct TArray<struct FString> InheritedClassFilter; // 0x50(0x10)
	struct TArray<struct FString> StrictClassAndAttachedFilter; // 0x60(0x10)
	struct TArray<struct FString> InheritedClassAndAttachedFilter; // 0x70(0x10)
};

