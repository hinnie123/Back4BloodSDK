// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool bFoundID, float Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x88 (Inherited: 0x38)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x30]; // 0x58(0x30)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0xa0 (Inherited: 0x38)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x48]; // 0x58(0x48)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x88 (Inherited: 0x38)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x30]; // 0x58(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x98 (Inherited: 0x38)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x40]; // 0x58(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x90 (Inherited: 0x38)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xb0 (Inherited: 0x30)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x70 (Inherited: 0x30)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xb0 (Inherited: 0x30)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1ad8 (Inherited: 0x1a38)
struct UIpConnection : UNetConnection {
	char pad_1A38[0x50]; // 0x1a38(0x50)
	float SocketErrorDisconnectDelay; // 0x1a88(0x04)
	char pad_1A8C[0x4c]; // 0x1a8c(0x4c)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x7d0 (Inherited: 0x760)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x760(0x01)
	char AllowPlayerPortUnreach : 1; // 0x760(0x01)
	char pad_760_2 : 6; // 0x760(0x01)
	char pad_761[0x3]; // 0x761(0x03)
	uint32_t MaxPortCountToTry; // 0x764(0x04)
	char pad_768[0xc]; // 0x768(0x0c)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x774(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x778(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x77c(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	double MaxSecondsInReceive; // 0x788(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x790(0x04)
	float ResolutionConnectionTimeout; // 0x794(0x04)
	char pad_798[0x38]; // 0x798(0x38)
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x188 (Inherited: 0x38)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x130]; // 0x58(0x130)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x70 (Inherited: 0x38)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x280 (Inherited: 0x250)
struct AOnlineBeacon : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	float BeaconConnectionInitialTimeout; // 0x258(0x04)
	float BeaconConnectionTimeout; // 0x25c(0x04)
	struct UNetDriver* NetDriver; // 0x260(0x08)
	char pad_268[0x18]; // 0x268(0x18)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x2e0 (Inherited: 0x280)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x280(0x08)
	struct UNetConnection* BeaconConnection; // 0x288(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x290(0x01)
	char pad_291[0x4f]; // 0x291(0x4f)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x338 (Inherited: 0x280)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x288(0x10)
	char pad_298[0xa0]; // 0x298(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x278 (Inherited: 0x250)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x250(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x260(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x268(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x190 (Inherited: 0x30)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct TMap<struct FName, struct FName> MappedUniqueNetIdTypes; // 0x30(0x50)
	struct TArray<struct FName> CompatibleUniqueNetIdTypes; // 0x80(0x10)
	struct FName VoiceSubsystemNameOverride; // 0x90(0x08)
	char pad_98[0xf8]; // 0x98(0xf8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x58 (Inherited: 0x40)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x48(0x10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1e8 (Inherited: 0x30)
struct UOnlineSessionClient : UOnlineSession {
	char pad_30[0x1b0]; // 0x30(0x1b0)
	bool bIsFromInvite; // 0x1e0(0x01)
	bool bHandlingDisconnect; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x3a0 (Inherited: 0x2e0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_2E0[0x30]; // 0x2e0(0x30)
	struct FString DestSessionId; // 0x310(0x10)
	struct FPartyReservation PendingReservation; // 0x320(0x50)
	enum class EClientRequestType RequestType; // 0x370(0x01)
	bool bPendingReservationSent; // 0x371(0x01)
	bool bCancelReservation; // 0x372(0x01)
	char pad_373[0x2d]; // 0x373(0x2d)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x2f0 (Inherited: 0x278)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x278(0x08)
	char pad_280[0x60]; // 0x280(0x60)
	bool bLogoutOnSessionTimeout; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float SessionTimeoutSecs; // 0x2e4(0x04)
	float TravelSessionTimeoutSecs; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x80 (Inherited: 0x30)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x30(0x08)
	int32_t NumConsumedReservations; // 0x38(0x04)
	int32_t MaxReservations; // 0x3c(0x04)
	int32_t NumTeams; // 0x40(0x04)
	int32_t NumPlayersPerTeam; // 0x44(0x04)
	struct FName TeamAssignmentMethod; // 0x48(0x08)
	int32_t ReservedHostTeamNum; // 0x50(0x04)
	int32_t ForceTeamNum; // 0x54(0x04)
	bool bRestrictCrossConsole; // 0x58(0x01)
	bool bEnableRemovalRequests; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct FPartyReservation> Reservations; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x80 (Inherited: 0x38)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x68 (Inherited: 0x38)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x3c8 (Inherited: 0x2e0)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	char pad_2E0[0x30]; // 0x2e0(0x30)
	struct FString DestSessionId; // 0x310(0x10)
	struct FSpectatorReservation PendingReservation; // 0x320(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x398(0x01)
	bool bPendingReservationSent; // 0x399(0x01)
	bool bCancelReservation; // 0x39a(0x01)
	char pad_39B[0x2d]; // 0x39b(0x2d)

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x2f0 (Inherited: 0x278)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x278(0x08)
	char pad_280[0x60]; // 0x280(0x60)
	bool bLogoutOnSessionTimeout; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float SessionTimeoutSecs; // 0x2e4(0x04)
	float TravelSessionTimeoutSecs; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x68 (Inherited: 0x30)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x30(0x08)
	int32_t NumConsumedReservations; // 0x38(0x04)
	int32_t MaxReservations; // 0x3c(0x04)
	bool bRestrictCrossConsole; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x2e0 (Inherited: 0x2e0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x278 (Inherited: 0x278)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (None) // @ game+0xfffffffec0000000
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x760 (Inherited: 0x700)
struct UVoipListenerSynthComponent : USynthComponent {
	char pad_700[0x60]; // 0x700(0x60)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (None) // @ game+0xfffffffec0000000
};

