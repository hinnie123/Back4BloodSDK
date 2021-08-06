// Class TurtleRockAssetManager.AssetTable
// Size: 0x68 (Inherited: 0x38)
struct UAssetTable : UDataAsset {
	struct FString DebugName; // 0x38(0x10)
	struct TArray<struct FSoftObjectPath> Assets; // 0x48(0x10)
	struct TArray<struct UAkAudioBank*> SoundBanks; // 0x58(0x10)
};

// Class TurtleRockAssetManager.AssetTableOrganizer
// Size: 0x88 (Inherited: 0x38)
struct UAssetTableOrganizer : UDataAsset {
	struct TMap<struct FString, struct UAssetTable*> AssetLists; // 0x38(0x50)

	struct TArray<struct UAssetTable*> GetAssetLists(); // Function TurtleRockAssetManager.AssetTableOrganizer.GetAssetLists // (None) // @ game+0xfffffffec0000000
};

// Class TurtleRockAssetManager.AssetTableManager
// Size: 0xf8 (Inherited: 0x30)
struct UAssetTableManager : UObject {
	char pad_30[0xc8]; // 0x30(0xc8)
};

// Class TurtleRockAssetManager.TRSAssetManager
// Size: 0x30 (Inherited: 0x30)
struct UTRSAssetManager : UObject {

	void UnloadAssetTables(struct UObject* WorldContextObject, struct FName HandleContext, struct TArray<struct UAssetTable*> AssetTable); // Function TurtleRockAssetManager.TRSAssetManager.UnloadAssetTables // (None) // @ game+0xfffffffec0000000
};

