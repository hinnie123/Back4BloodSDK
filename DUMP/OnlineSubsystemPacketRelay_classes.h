// Class OnlineSubsystemPacketRelay.PacketRelayNetConnection
// Size: 0x1ae0 (Inherited: 0x1ad8)
struct UPacketRelayNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1ad8(0x01)
	char pad_1AD9[0x7]; // 0x1ad9(0x07)
};

// Class OnlineSubsystemPacketRelay.PacketRelayNetDriver
// Size: 0x7d8 (Inherited: 0x7d0)
struct UPacketRelayNetDriver : UIpNetDriver {
	char pad_7D0[0x8]; // 0x7d0(0x08)
};

