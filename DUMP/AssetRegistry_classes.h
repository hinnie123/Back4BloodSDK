// Class AssetRegistry.AssetRegistryImpl
// Size: 0x780 (Inherited: 0x30)
struct UAssetRegistryImpl : UObject {
	char pad_30[0x750]; // 0x30(0x750)
};

// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x30 (Inherited: 0x30)
struct UAssetRegistryHelpers : UObject {

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath // (None) // @ game+0xfffffffec0000000
};

// Class AssetRegistry.AssetRegistry
// Size: 0x30 (Inherited: 0x30)
struct UAssetRegistry : UInterface {

	void UseFilterToExcludeAssets(struct TArray<struct FAssetData> AssetDataList, struct FARFilter Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets // (None) // @ game+0xfffffffec0000000
};

