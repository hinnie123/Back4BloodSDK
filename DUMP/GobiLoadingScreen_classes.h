// Class GobiLoadingScreen.GobiLoadingScreenDataSet
// Size: 0x88 (Inherited: 0x38)
struct UGobiLoadingScreenDataSet : UDataAsset {
	struct TSoftObjectPtr<UTexture2D> LoadingImage; // 0x38(0x28)
	struct TSoftObjectPtr<UTexture2D> ShowDemoLoadingImage; // 0x60(0x28)
};

// Class GobiLoadingScreen.GobiLoadingScreenSettings
// Size: 0x68 (Inherited: 0x40)
struct UGobiLoadingScreenSettings : UDeveloperSettings {
	struct TSoftObjectPtr<UGobiLoadingScreenDataSet> DataSet; // 0x40(0x28)
};

