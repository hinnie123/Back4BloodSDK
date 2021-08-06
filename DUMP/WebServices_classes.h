// Class WebServices.AtuinBeacons
// Size: 0x60 (Inherited: 0x30)
struct UAtuinBeacons : UObject {
	double ResolveTimeoutSeconds; // 0x30(0x08)
	int32_t NumResolveThreads; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	double RoundIntervalSeconds; // 0x40(0x08)
	double RoundIntervalMinSeconds; // 0x48(0x08)
	double DefaultLatencyMilliseconds; // 0x50(0x08)
	int32_t Rounds; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class WebServices.PacketRelayClientConnectionConfig
// Size: 0x40 (Inherited: 0x30)
struct UPacketRelayClientConnectionConfig : UObject {
	double HeartbeatInterval; // 0x30(0x08)
	double TimeoutSeconds; // 0x38(0x08)
};

// Class WebServices.PacketRelayServerConnectionConfig
// Size: 0x40 (Inherited: 0x30)
struct UPacketRelayServerConnectionConfig : UObject {
	double HeartbeatInterval; // 0x30(0x08)
	double TimeoutSeconds; // 0x38(0x08)
};

// Class WebServices.SessionConnectionConfig
// Size: 0xc8 (Inherited: 0x30)
struct USessionConnectionConfig : UObject {
	struct FTaskTimerConfig ReconnectTimer; // 0x30(0x70)
	double ReconnectAbandonTime; // 0xa0(0x08)
	double InGameReconnectAbandonTime; // 0xa8(0x08)
	double TaskTimeout; // 0xb0(0x08)
	double PingInterval; // 0xb8(0x08)
	int32_t NumPingsToMigrate; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class WebServices.WebServiceAgoraHydraAuthAPI
// Size: 0x40 (Inherited: 0x30)
struct UWebServiceAgoraHydraAuthAPI : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class WebServices.WebServiceAgoraHydraCommerce
// Size: 0x40 (Inherited: 0x30)
struct UWebServiceAgoraHydraCommerce : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class WebServices.WebServiceAgoraHydraInventory
// Size: 0x40 (Inherited: 0x30)
struct UWebServiceAgoraHydraInventory : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class WebServices.WebServiceAgoraHydraLeaderboards
// Size: 0x40 (Inherited: 0x30)
struct UWebServiceAgoraHydraLeaderboards : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class WebServices.WebServiceAgoraHydraSSC
// Size: 0x40 (Inherited: 0x30)
struct UWebServiceAgoraHydraSSC : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class WebServices.Endpoints
// Size: 0x58 (Inherited: 0x30)
struct UEndpoints : UObject {
	int32_t AtuinVersion; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FWebServiceEndpoint> ClientEndpoints; // 0x38(0x10)
	struct TArray<struct FWebServiceEndpoint> DediEndpoints; // 0x48(0x10)
};

// Class WebServices.WebServiceFortDediAPI
// Size: 0x40 (Inherited: 0x30)
struct UWebServiceFortDediAPI : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class WebServices.WebServiceMatchmakingAPI
// Size: 0x40 (Inherited: 0x30)
struct UWebServiceMatchmakingAPI : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class WebServices.Regions
// Size: 0x40 (Inherited: 0x30)
struct URegions : UObject {
	struct TArray<struct FWebServiceRegion> Regions; // 0x30(0x10)
};

// Class WebServices.WebServiceSessionAPI
// Size: 0x48 (Inherited: 0x30)
struct UWebServiceSessionAPI : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

