// Class OnlineSubsystemEOS.EOSArtifactSettings
// Size: 0x38 (Inherited: 0x38)
struct UEOSArtifactSettings : UDataAsset {
};

// Class OnlineSubsystemEOS.EOSSettings
// Size: 0x88 (Inherited: 0x30)
struct UEOSSettings : UObject {
	struct FString CacheDir; // 0x30(0x10)
	struct FString DefaultArtifactName; // 0x40(0x10)
	int32_t TickBudgetInMilliseconds; // 0x50(0x04)
	bool bEnableOverlay; // 0x54(0x01)
	bool bEnableSocialOverlay; // 0x55(0x01)
	bool bShouldEnforceBeingLaunchedByEGS; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct TArray<struct FString> TitleStorageTags; // 0x58(0x10)
	int32_t TitleStorageReadChunkLength; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FArtifactSettings> Artifacts; // 0x70(0x10)
	bool bUseEAS; // 0x80(0x01)
	bool bUseEOSConnect; // 0x81(0x01)
	bool bMirrorStatsToEOS; // 0x82(0x01)
	bool bMirrorAchievementsToEOS; // 0x83(0x01)
	bool bUseEOSSessions; // 0x84(0x01)
	bool bMirrorPresenceToEAS; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// Class OnlineSubsystemEOS.NetConnectionEOS
// Size: 0x1ae0 (Inherited: 0x1ad8)
struct UNetConnectionEOS : UIpConnection {
	char pad_1AD8[0x8]; // 0x1ad8(0x08)
};

// Class OnlineSubsystemEOS.NetDriverEOS
// Size: 0x7d8 (Inherited: 0x7d0)
struct UNetDriverEOS : UIpNetDriver {
	bool bIsPassthrough; // 0x7d0(0x01)
	bool bIsUsingP2PSockets; // 0x7d1(0x01)
	char pad_7D2[0x6]; // 0x7d2(0x06)
};

// Class OnlineSubsystemEOS.TRSOnlineEntitlementsEOSSettings
// Size: 0x50 (Inherited: 0x40)
struct UTRSOnlineEntitlementsEOSSettings : UDeveloperSettings {
	struct TArray<struct FString> EntitlementIds; // 0x40(0x10)
};

