// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x30 (Inherited: 0x30)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1ae0 (Inherited: 0x1ad8)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1ad8(0x01)
	char pad_1AD9[0x7]; // 0x1ad9(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7d8 (Inherited: 0x7d0)
struct USteamNetDriver : UIpNetDriver {
	char pad_7D0[0x8]; // 0x7d0(0x08)
};

// Class OnlineSubsystemSteam.TRSOnlineEntitlementsSteamSettings
// Size: 0x50 (Inherited: 0x40)
struct UTRSOnlineEntitlementsSteamSettings : UDeveloperSettings {
	struct TArray<int32_t> EntitlementIds; // 0x40(0x10)
};

