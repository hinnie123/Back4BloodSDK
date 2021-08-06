// Enum WebServices.EPacketRelayClientPacket
enum class EPacketRelayClientPacket : uint8 {
	ConnectRequest = 200,
	ConnectResponse = 201,
	Heartbeat = 202,
	HeartbeatReply = 203,
	VoicePackets = 204,
	GameData = 205,
	EPacketRelayClientPacket_MAX = 206
};

// Enum WebServices.EPacketRelayServerPacket
enum class EPacketRelayServerPacket : uint8 {
	TokenRequest = 100,
	TokenResponse = 101,
	Heartbeat = 102,
	ClientData = 103,
	EPacketRelayServerPacket_MAX = 104
};

// Enum WebServices.EWebSocketSessionTask
enum class EWebSocketSessionTask : uint8 {
	None = 0,
	CreateSession = 1,
	JoinSession = 2,
	LeaveSession = 3,
	WaitForAck = 4,
	SetSessionData = 5,
	SetUserData = 6,
	SetRegionalPings = 7,
	SendInvite = 8,
	SetCrossPlayEnabled = 9,
	JoinMatchmaking = 10,
	LeaveMatchmaking = 11,
	DebugDisconnect = 12,
	UpdateMatchmakingPrivacy = 13,
	JoinBackfillSession = 14,
	Ping = 15,
	EWebSocketSessionTask_MAX = 16
};

// Enum WebServices.EWebSocketSessionRecvMessage
enum class EWebSocketSessionRecvMessage : uint8 {
	Unknown = 0,
	sessionDirty = 1,
	operationFailed = 2,
	operationUnsupported = 3,
	messageAck = 4,
	inviteReceived = 5,
	joinedMatchmaking = 6,
	leftMatchmaking = 7,
	failedMatchmaking = 8,
	finishedMatchmaking = 9,
	failedServerReservation = 10,
	dediFinishedMatchmaking = 11,
	migrationRequested = 12,
	matchmakingTelemetry = 13,
	EWebSocketSessionRecvMessage_MAX = 14
};

// Enum WebServices.EWebSocketSessionSendMessage
enum class EWebSocketSessionSendMessage : uint8 {
	Invalid = 0,
	leaveSession = 1,
	setUserData = 2,
	setSessionData = 3,
	setRegionalPings = 4,
	sendInvite = 5,
	setCrossPlayEnabled = 6,
	mmJoin = 7,
	mmLeave = 8,
	mmUpdatePrivacy = 9,
	mmBackfill = 10,
	ping = 11,
	EWebSocketSessionSendMessage_MAX = 12
};

// Enum WebServices.EZendeskReportingCategory
enum class EZendeskReportingCategory : uint8 {
	CHEATING = 0,
	EXPLOITING = 1,
	GRIEFING = 2,
	OFFENSIVE_CONTENT = 3,
	EZendeskReportingCategory_MAX = 4
};

// Enum WebServices.EAgoraHydraGetAllowListSecuritySetting
enum class EAgoraHydraGetAllowListSecuritySetting : uint8 {
	Deny = 0,
	Allow = 1,
	Validate = 2,
	EAgoraHydraGetAllowListSecuritySetting_MAX = 3
};

// Enum WebServices.EWebServiceErrorCode
enum class EWebServiceErrorCode : uint8 {
	Success = 0,
	CouldNotConnect = 1,
	AuthError = 2,
	AuthOutdated = 3,
	HydraAuthError = 4,
	GameSessionMissingPoolId = 5,
	InvalidSession = 6,
	InvalidParticipants = 7,
	InvalidPool = 8,
	InvalidTaskData = 9,
	InvalidRegion = 10,
	FailedToSend = 11,
	TaskTimeout = 12,
	SessionFull = 13,
	SessionCrossPlayRestricted = 14,
	EWebServiceErrorCode_MAX = 15
};

// Enum WebServices.EFortDediStatus
enum class EFortDediStatus : uint8 {
	Launching = 0,
	Unassigned = 1,
	Pending = 2,
	InUse = 3,
	Resetting = 4,
	FinishingMatch = 5,
	Terminating = 6,
	EFortDediStatus_MAX = 7
};

// Enum WebServices.EWebServiceRemovedFromPoolReason
enum class EWebServiceRemovedFromPoolReason : uint8 {
	Other = 0,
	Manual = 1,
	DediFinished = 2,
	FailedToJoinPool = 3,
	FailedToJoinGameSession = 4,
	ServerAllocationFailed = 5,
	PoolFull = 6,
	ConfabTimedOut = 7,
	ConfabMissing = 8,
	ConfabAlreadyExists = 9,
	ConfabOverflow = 10,
	TeamArrangementInvalid = 11,
	QuickplayInvalid = 12,
	QueueUnrecognized = 13,
	DesiredRegionInvalid = 14,
	PrivatePartyInvalid = 15,
	EWebServiceRemovedFromPoolReason_MAX = 16
};

// ScriptStruct WebServices.TaskTimerConfig
// Size: 0x70 (Inherited: 0x00)
struct FTaskTimerConfig {
	struct FString Name; // 0x00(0x10)
	struct FTaskTimerRange Seconds; // 0x10(0x10)
	struct FTaskTimerRange AltSeconds; // 0x20(0x10)
	struct FTaskTimerRange BackoffStartSeconds; // 0x30(0x10)
	struct FTaskTimerRange BackoffAdditionalSeconds; // 0x40(0x10)
	struct FTaskTimerRange BackoffMultiplier; // 0x50(0x10)
	struct FTaskTimerRange BackoffMaxSeconds; // 0x60(0x10)
};

// ScriptStruct WebServices.TaskTimerRange
// Size: 0x10 (Inherited: 0x00)
struct FTaskTimerRange {
	double Min; // 0x00(0x08)
	double Max; // 0x08(0x08)
};

// ScriptStruct WebServices.MatchmakingTelemetry
// Size: 0x10 (Inherited: 0x00)
struct FMatchmakingTelemetry {
	struct TArray<struct FMatchmakingGameModeTelemetry> GameModes; // 0x00(0x10)
};

// ScriptStruct WebServices.MatchmakingGameModeTelemetry
// Size: 0x38 (Inherited: 0x00)
struct FMatchmakingGameModeTelemetry {
	struct FString GameMode; // 0x00(0x10)
	int32_t QueueType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FMatchmakingQueueTelemetry Data; // 0x18(0x20)
};

// ScriptStruct WebServices.MatchmakingQueueTelemetry
// Size: 0x20 (Inherited: 0x00)
struct FMatchmakingQueueTelemetry {
	int32_t Searching; // 0x00(0x04)
	int32_t Backfilling; // 0x04(0x04)
	int32_t Quickplay; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FMatchmakingRegionTelemetry> AverageWaitTimes; // 0x10(0x10)
};

// ScriptStruct WebServices.MatchmakingRegionTelemetry
// Size: 0x18 (Inherited: 0x00)
struct FMatchmakingRegionTelemetry {
	struct FString Region; // 0x00(0x10)
	int32_t WaitTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.WebSocketSessionRecvMessage_MessageAck
// Size: 0x10 (Inherited: 0x00)
struct FWebSocketSessionRecvMessage_MessageAck {
	struct TArray<int64_t> Acks; // 0x00(0x10)
};

// ScriptStruct WebServices.WebSocketSessionRecvMessage_OperationFailed
// Size: 0x28 (Inherited: 0x00)
struct FWebSocketSessionRecvMessage_OperationFailed {
	int32_t ErrorCode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ErrorMessage; // 0x08(0x10)
	struct TArray<int64_t> Acks; // 0x18(0x10)
};

// ScriptStruct WebServices.WebSocketSessionRecvMessage_SessionDirty
// Size: 0x78 (Inherited: 0x00)
struct FWebSocketSessionRecvMessage_SessionDirty {
	struct FWebServiceSession Session; // 0x00(0x68)
	struct TArray<int64_t> Acks; // 0x68(0x10)
};

// ScriptStruct WebServices.WebServiceSession
// Size: 0x68 (Inherited: 0x00)
struct FWebServiceSession {
	bool IsGameSession; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FWebServiceSessionParticipant> Participants; // 0x08(0x10)
	struct TArray<struct FWebServiceSessionPendingParticipant> PendingParticipants; // 0x18(0x10)
	struct FString SessionData; // 0x28(0x10)
	struct FString SessionId; // 0x38(0x10)
	struct FString SessionCluster; // 0x48(0x10)
	struct FString SessionHostId; // 0x58(0x10)
};

// ScriptStruct WebServices.WebServiceSessionPendingParticipant
// Size: 0x28 (Inherited: 0x00)
struct FWebServiceSessionPendingParticipant {
	struct FWebServiceSessionAddRemoveParticipant ID; // 0x00(0x18)
	struct FString Team; // 0x18(0x10)
};

// ScriptStruct WebServices.WebServiceSessionAddRemoveParticipant
// Size: 0x18 (Inherited: 0x00)
struct FWebServiceSessionAddRemoveParticipant {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.WebServiceSessionParticipant
// Size: 0x58 (Inherited: 0x00)
struct FWebServiceSessionParticipant {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UserAgoraId; // 0x18(0x10)
	struct FString UserData; // 0x28(0x10)
	struct FString Team; // 0x38(0x10)
	int64_t TimingOut; // 0x48(0x08)
	bool CrossPlayEnabled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct WebServices.WebSocketSessionRecvMessage
// Size: 0x04 (Inherited: 0x00)
struct FWebSocketSessionRecvMessage {
	enum class EWebSocketSessionRecvMessage MessageType; // 0x00(0x04)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_MmUpdatePrivacy
// Size: 0x01 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_MmUpdatePrivacy {
	bool IsPrivate; // 0x00(0x01)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_MMLeave
// Size: 0x04 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_MMLeave {
	int32_t MatchmakingSequenceId; // 0x00(0x04)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_MMJoin
// Size: 0x40 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_MMJoin {
	int32_t MatchmakingSequenceId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameMode; // 0x08(0x10)
	bool IsPrivate; // 0x18(0x01)
	bool CrossPlayEnabled; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FPoolFilterData> Filters; // 0x20(0x10)
	struct TArray<struct FWebSocketSessionSendMessage_ParticipantTeamSelection> TeamSelections; // 0x30(0x10)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_ParticipantTeamSelection
// Size: 0x28 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_ParticipantTeamSelection {
	struct FWebSocketSessionSendMessage_ParticipantId ParticipantId; // 0x00(0x18)
	struct FString Team; // 0x18(0x10)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_ParticipantId
// Size: 0x18 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_ParticipantId {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.PoolFilterData
// Size: 0x20 (Inherited: 0x00)
struct FPoolFilterData {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct FString> Values; // 0x10(0x10)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_SetSessionAndUserData
// Size: 0x20 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_SetSessionAndUserData {
	struct FString SessionData; // 0x00(0x10)
	struct FString UserData; // 0x10(0x10)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_SetCrossPlayEnabled
// Size: 0x01 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_SetCrossPlayEnabled {
	bool CrossPlayEnabled; // 0x00(0x01)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_SetUserData
// Size: 0x10 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_SetUserData {
	struct FString UserData; // 0x00(0x10)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage_SetSessionData
// Size: 0x10 (Inherited: 0x00)
struct FWebSocketSessionSendMessage_SetSessionData {
	struct FString SessionData; // 0x00(0x10)
};

// ScriptStruct WebServices.WebSocketSessionSendMessage
// Size: 0x10 (Inherited: 0x00)
struct FWebSocketSessionSendMessage {
	enum class EWebSocketSessionSendMessage MessageType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t MessageNumber; // 0x08(0x08)
};

// ScriptStruct WebServices.AgoraHydraAccessResponseData
// Size: 0x10 (Inherited: 0x00)
struct FAgoraHydraAccessResponseData {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct WebServices.AgoraHydraDeveloperAccessData
// Size: 0x20 (Inherited: 0x00)
struct FAgoraHydraDeveloperAccessData {
	struct FString Username; // 0x00(0x10)
	struct FString Password; // 0x10(0x10)
};

// ScriptStruct WebServices.AgoraHydraProductWithoutSlugJson
// Size: 0x58 (Inherited: 0x00)
struct FAgoraHydraProductWithoutSlugJson {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	bool Visible; // 0x20(0x01)
	bool available_for_purchase; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct FAgoraHydraProductItemJson> Items; // 0x28(0x10)
	struct TArray<struct FAgoraHydraProductPriceJson> prices; // 0x38(0x10)
	struct TArray<struct FString> Tags; // 0x48(0x10)
};

// ScriptStruct WebServices.AgoraHydraProductPriceJson
// Size: 0x40 (Inherited: 0x00)
struct FAgoraHydraProductPriceJson {
	struct FString Slug; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString backend_name; // 0x20(0x10)
	struct TArray<struct FAgoraHydraProductItemJson> Items; // 0x30(0x10)
};

// ScriptStruct WebServices.AgoraHydraProductItemJson
// Size: 0x18 (Inherited: 0x00)
struct FAgoraHydraProductItemJson {
	struct FString inventory_item_slug; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.AgoraHydraProductJson
// Size: 0x68 (Inherited: 0x58)
struct FAgoraHydraProductJson : FAgoraHydraProductWithoutSlugJson {
	struct FString Slug; // 0x58(0x10)
};

// ScriptStruct WebServices.AgoraHydraInventoryItemDefinitionJson
// Size: 0x28 (Inherited: 0x00)
struct FAgoraHydraInventoryItemDefinitionJson {
	struct FString Slug; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	bool Client_Access; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct WebServices.AgoraHydraInventoryItemJson
// Size: 0x28 (Inherited: 0x00)
struct FAgoraHydraInventoryItemJson {
	struct FString ID; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString item_slug; // 0x18(0x10)
};

// ScriptStruct WebServices.AgoraHydraLeaderboard
// Size: 0x20 (Inherited: 0x00)
struct FAgoraHydraLeaderboard {
	int32_t Current_Page; // 0x00(0x04)
	int32_t Total_Pages; // 0x04(0x04)
	int32_t Total_Leaders; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FAgoraHydraScoreAndRank> Leaders; // 0x10(0x10)
};

// ScriptStruct WebServices.AgoraHydraScoreAndRank
// Size: 0x70 (Inherited: 0x00)
struct FAgoraHydraScoreAndRank {
	struct FString Member; // 0x00(0x10)
	int32_t Score; // 0x10(0x04)
	int32_t Rank; // 0x14(0x04)
	struct FAgoraHydraLeaderboardProfile Profile; // 0x18(0x28)
	struct FAgoraHydraLeaderboardAccount Account; // 0x40(0x30)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardAccount
// Size: 0x30 (Inherited: 0x00)
struct FAgoraHydraLeaderboardAccount {
	struct FAgoraHydraLeaderboardAccountIdentity Identity; // 0x00(0x30)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardAccountIdentity
// Size: 0x30 (Inherited: 0x00)
struct FAgoraHydraLeaderboardAccountIdentity {
	struct FString Username; // 0x00(0x10)
	struct FJsonObjectWrapper Alternate; // 0x10(0x20)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardProfile
// Size: 0x28 (Inherited: 0x00)
struct FAgoraHydraLeaderboardProfile {
	struct FString ID; // 0x00(0x10)
	struct FAgoraHydraLeaderboardServerData Server_Data; // 0x10(0x18)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardServerData
// Size: 0x18 (Inherited: 0x00)
struct FAgoraHydraLeaderboardServerData {
	struct FAgoraHydraLeaderboardGameData Game_Data; // 0x00(0x18)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardGameData
// Size: 0x18 (Inherited: 0x00)
struct FAgoraHydraLeaderboardGameData {
	struct FAgoraHydraLeaderboardChallengeSet Challenge_Set; // 0x00(0x18)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardChallengeSet
// Size: 0x18 (Inherited: 0x00)
struct FAgoraHydraLeaderboardChallengeSet {
	struct FString ID; // 0x00(0x10)
	int32_t Rank; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardLeader
// Size: 0x01 (Inherited: 0x00)
struct FAgoraHydraLeaderboardLeader {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct WebServices.AgoraHydraLeaderboardAlternateIdentity
// Size: 0x20 (Inherited: 0x00)
struct FAgoraHydraLeaderboardAlternateIdentity {
	struct FString ID; // 0x00(0x10)
	struct FString Username; // 0x10(0x10)
};

// ScriptStruct WebServices.AgoraHydraGetAllowListSecuritySettingResponse
// Size: 0x08 (Inherited: 0x00)
struct FAgoraHydraGetAllowListSecuritySettingResponse {
	struct FAgoraHydraGetAllowListSecuritySettingBody Body; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Return_Code; // 0x04(0x04)
};

// ScriptStruct WebServices.AgoraHydraGetAllowListSecuritySettingBody
// Size: 0x01 (Inherited: 0x00)
struct FAgoraHydraGetAllowListSecuritySettingBody {
	enum class EAgoraHydraGetAllowListSecuritySetting SecuritySetting; // 0x00(0x01)
};

// ScriptStruct WebServices.AgoraHydraPurchaseOwnableResponse
// Size: 0x18 (Inherited: 0x00)
struct FAgoraHydraPurchaseOwnableResponse {
	int32_t Return_Code; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FAgoraHydraPurchaseOwnableResponseBody Body; // 0x08(0x10)
};

// ScriptStruct WebServices.AgoraHydraPurchaseOwnableResponseBody
// Size: 0x10 (Inherited: 0x00)
struct FAgoraHydraPurchaseOwnableResponseBody {
	struct TArray<struct FAgoraHydraInventoryModification> inventory_modifications; // 0x00(0x10)
};

// ScriptStruct WebServices.AgoraHydraInventoryModification
// Size: 0x28 (Inherited: 0x00)
struct FAgoraHydraInventoryModification {
	struct FString Command; // 0x00(0x10)
	struct FString Slug; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct WebServices.DediAuthToken
// Size: 0x50 (Inherited: 0x00)
struct FDediAuthToken {
	struct FString UserId; // 0x00(0x10)
	struct FString GameId; // 0x10(0x10)
	struct FString PlatformId; // 0x20(0x10)
	int32_t Nonce; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t Timestamp; // 0x38(0x08)
	struct FString BuildId; // 0x40(0x10)
};

// ScriptStruct WebServices.WebServiceAuthData
// Size: 0x50 (Inherited: 0x00)
struct FWebServiceAuthData {
	struct FString AgoraAccessToken; // 0x00(0x10)
	int32_t Nonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString GameId; // 0x18(0x10)
	struct FString BuildId; // 0x28(0x10)
	struct FString Environment; // 0x38(0x10)
	int64_t Timestamp; // 0x48(0x08)
};

// ScriptStruct WebServices.WebServiceAuthResponse
// Size: 0x30 (Inherited: 0x00)
struct FWebServiceAuthResponse {
	struct FString Token; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	struct FString WatermarkCode; // 0x20(0x10)
};

// ScriptStruct WebServices.WebServiceEndpoint
// Size: 0x58 (Inherited: 0x00)
struct FWebServiceEndpoint {
	struct FString Name; // 0x00(0x10)
	bool bSecure; // 0x10(0x01)
	bool bSigned; // 0x11(0x01)
	bool bAuthenticated; // 0x12(0x01)
	bool bValid; // 0x13(0x01)
	bool bMultiRegion; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString Host; // 0x18(0x10)
	uint16_t Port; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString Prefix; // 0x30(0x10)
	bool bAtuinService; // 0x40(0x01)
	char pad_41[0x17]; // 0x41(0x17)
};

// ScriptStruct WebServices.OvercastHeartbeatData
// Size: 0xa8 (Inherited: 0x00)
struct FOvercastHeartbeatData {
	enum class EFortDediStatus Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameMode; // 0x08(0x10)
	struct FString Map; // 0x18(0x10)
	struct FOvercastNetworkData Network; // 0x28(0x10)
	float AverageFramerate; // 0x38(0x04)
	struct FOvercastCPUData Cpu; // 0x3c(0x0c)
	struct FOvercastCPUData PeakCpu; // 0x48(0x0c)
	struct FOvercastCPUAccu CpuAccu; // 0x54(0x0c)
	struct FOvercastMemoryData Memory; // 0x60(0x08)
	struct FOvercastMemoryData PeakMemory; // 0x68(0x08)
	struct FOvercastPlayersData Players; // 0x70(0x30)
	int32_t AiCharacters; // 0xa0(0x04)
	int32_t Port; // 0xa4(0x04)
};

// ScriptStruct WebServices.OvercastPlayersData
// Size: 0x30 (Inherited: 0x00)
struct FOvercastPlayersData {
	struct FOvercastPlatformPlayersData null; // 0x00(0x08)
	struct FOvercastPlatformPlayersData Steam; // 0x08(0x08)
	struct FOvercastPlatformPlayersData EOS; // 0x10(0x08)
	struct FOvercastPlatformPlayersData PS4; // 0x18(0x08)
	struct FOvercastPlatformPlayersData PS5; // 0x20(0x08)
	struct FOvercastPlatformPlayersData GDK; // 0x28(0x08)
};

// ScriptStruct WebServices.OvercastPlatformPlayersData
// Size: 0x08 (Inherited: 0x00)
struct FOvercastPlatformPlayersData {
	int32_t Players; // 0x00(0x04)
	int32_t Expected; // 0x04(0x04)
};

// ScriptStruct WebServices.OvercastMemoryData
// Size: 0x08 (Inherited: 0x00)
struct FOvercastMemoryData {
	float PhysicalMegabytes; // 0x00(0x04)
	float VirtualMegabytes; // 0x04(0x04)
};

// ScriptStruct WebServices.OvercastCPUAccu
// Size: 0x0c (Inherited: 0x00)
struct FOvercastCPUAccu {
	float MainThreadMilliseconds; // 0x00(0x04)
	float NumFrames; // 0x04(0x04)
	float MainThreadMillisecondsSumSq; // 0x08(0x04)
};

// ScriptStruct WebServices.OvercastCPUData
// Size: 0x0c (Inherited: 0x00)
struct FOvercastCPUData {
	float TimePercent; // 0x00(0x04)
	float TimePercentRelative; // 0x04(0x04)
	float MainThreadMilliseconds; // 0x08(0x04)
};

// ScriptStruct WebServices.OvercastNetworkData
// Size: 0x10 (Inherited: 0x00)
struct FOvercastNetworkData {
	float InRateClientAvg; // 0x00(0x04)
	float OutRateClientAvg; // 0x04(0x04)
	float InRate; // 0x08(0x04)
	float OutRate; // 0x0c(0x04)
};

// ScriptStruct WebServices.FortDediUpdateDataFull
// Size: 0x38 (Inherited: 0x00)
struct FFortDediUpdateDataFull {
	enum class EFortDediStatus Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Bucket; // 0x08(0x10)
	struct FFortDediUpdateGameData GameData; // 0x18(0x20)
};

// ScriptStruct WebServices.FortDediUpdateGameData
// Size: 0x20 (Inherited: 0x00)
struct FFortDediUpdateGameData {
	struct FString GameMode; // 0x00(0x10)
	struct TArray<struct FPoolFilterData> Filters; // 0x10(0x10)
};

// ScriptStruct WebServices.FortDediUpdateData
// Size: 0x18 (Inherited: 0x00)
struct FFortDediUpdateData {
	enum class EFortDediStatus Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Bucket; // 0x08(0x10)
};

// ScriptStruct WebServices.FortDediServerData
// Size: 0x60 (Inherited: 0x00)
struct FFortDediServerData {
	enum class EFortDediStatus Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SessionId; // 0x08(0x10)
	struct FString SessionCluster; // 0x18(0x10)
	struct FString Build; // 0x28(0x10)
	struct FString GameMode; // 0x38(0x10)
	struct TArray<struct FPoolFilterData> Filters; // 0x48(0x10)
	bool IsPrivate; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct WebServices.FortDediParameterData
// Size: 0x20 (Inherited: 0x00)
struct FFortDediParameterData {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FString> Options; // 0x10(0x10)
};

// ScriptStruct WebServices.ModifyPoolPrivacyData
// Size: 0x18 (Inherited: 0x00)
struct FModifyPoolPrivacyData {
	struct FString Pool; // 0x00(0x10)
	bool IsPrivate; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct WebServices.RemoveParticipantsFromPoolData
// Size: 0x20 (Inherited: 0x00)
struct FRemoveParticipantsFromPoolData {
	struct FString Pool; // 0x00(0x10)
	struct TArray<struct FRemoveParticipantFromPoolData> Participants; // 0x10(0x10)
};

// ScriptStruct WebServices.RemoveParticipantFromPoolData
// Size: 0x18 (Inherited: 0x00)
struct FRemoveParticipantFromPoolData {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.RemoveSessionFromPoolData
// Size: 0x10 (Inherited: 0x00)
struct FRemoveSessionFromPoolData {
	struct FString Pool; // 0x00(0x10)
};

// ScriptStruct WebServices.WebServiceRegion
// Size: 0x18 (Inherited: 0x00)
struct FWebServiceRegion {
	struct FString Name; // 0x00(0x10)
	bool BeaconFirstPass; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct WebServices.WebServiceSetUserData
// Size: 0x10 (Inherited: 0x00)
struct FWebServiceSetUserData {
	struct FString UserData; // 0x00(0x10)
};

// ScriptStruct WebServices.WebServiceSetSessionData
// Size: 0x10 (Inherited: 0x00)
struct FWebServiceSetSessionData {
	struct FString SessionData; // 0x00(0x10)
};

// ScriptStruct WebServices.WebServiceSessionAddParticipantsData
// Size: 0x10 (Inherited: 0x00)
struct FWebServiceSessionAddParticipantsData {
	struct TArray<struct FWebServiceSessionAddParticipant> Participants; // 0x00(0x10)
};

// ScriptStruct WebServices.WebServiceSessionAddParticipant
// Size: 0x18 (Inherited: 0x00)
struct FWebServiceSessionAddParticipant {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.JoinBackfillSessionData
// Size: 0x30 (Inherited: 0x00)
struct FJoinBackfillSessionData {
	struct FString OriginSessionId; // 0x00(0x10)
	struct FString TargetedSessionId; // 0x10(0x10)
	struct FString Team; // 0x20(0x10)
};

// ScriptStruct WebServices.MatchmakingFailedData
// Size: 0x08 (Inherited: 0x00)
struct FMatchmakingFailedData {
	int32_t MatchmakingSequenceId; // 0x00(0x04)
	enum class EWebServiceRemovedFromPoolReason Reason; // 0x04(0x04)
};

// ScriptStruct WebServices.MatchmakingLeftData
// Size: 0x04 (Inherited: 0x00)
struct FMatchmakingLeftData {
	int32_t MatchmakingSequenceId; // 0x00(0x04)
};

// ScriptStruct WebServices.MatchmakingMatchFoundData
// Size: 0x48 (Inherited: 0x00)
struct FMatchmakingMatchFoundData {
	int32_t MatchmakingSequenceId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameSessionId; // 0x08(0x10)
	struct FString SessionCluster; // 0x18(0x10)
	bool IsTargetedBackfill; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString MatchmakerInstanceId; // 0x30(0x10)
	int32_t MatchmakerTickNumber; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct WebServices.MatchmakingPoolData
// Size: 0x48 (Inherited: 0x00)
struct FMatchmakingPoolData {
	int32_t MatchmakingSequenceId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameMode; // 0x08(0x10)
	bool IsPrivate; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FPoolFilterData> Filters; // 0x20(0x10)
	struct FString MatchmakerInstanceId; // 0x30(0x10)
	int32_t MatchmakerTickNumber; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct WebServices.AddSessionToPoolFilteredNoParticipantData
// Size: 0x80 (Inherited: 0x00)
struct FAddSessionToPoolFilteredNoParticipantData {
	struct FString GameMode; // 0x00(0x10)
	bool IsPrivate; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FPoolFilterData> Filters; // 0x18(0x10)
	struct FString Maps; // 0x28(0x10)
	struct FString Difficulties; // 0x38(0x10)
	struct FString Bucket; // 0x48(0x10)
	int32_t RunID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString RunOwner; // 0x60(0x10)
	struct FString VoicePreference; // 0x70(0x10)
};

// ScriptStruct WebServices.AddSessionToPoolFilteredData
// Size: 0xa0 (Inherited: 0x80)
struct FAddSessionToPoolFilteredData : FAddSessionToPoolFilteredNoParticipantData {
	struct TArray<struct FAddSessionToPoolParticipantData> TeamSelections; // 0x80(0x10)
	bool CrossPlayEnabled; // 0x90(0x01)
	char pad_91[0xf]; // 0x91(0x0f)
};

// ScriptStruct WebServices.AddSessionToPoolParticipantData
// Size: 0x28 (Inherited: 0x00)
struct FAddSessionToPoolParticipantData {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Team; // 0x18(0x10)
};

// ScriptStruct WebServices.ReceivedSessionInviteData
// Size: 0x48 (Inherited: 0x00)
struct FReceivedSessionInviteData {
	struct FString SourceFirstPartyId; // 0x00(0x10)
	struct FWebServiceSessionAddRemoveParticipant SourceParticipantId; // 0x10(0x18)
	struct FString SourceSessionId; // 0x28(0x10)
	struct FString SourceSessionCluster; // 0x38(0x10)
};

// ScriptStruct WebServices.SessionInviteData
// Size: 0x38 (Inherited: 0x00)
struct FSessionInviteData {
	struct FString SourceFirstPartyId; // 0x00(0x10)
	struct FString TargetSessionId; // 0x10(0x10)
	struct FWebServiceSessionAddRemoveParticipant TargetParticipantId; // 0x20(0x18)
};

// ScriptStruct WebServices.WebServiceRegionalPings
// Size: 0x10 (Inherited: 0x00)
struct FWebServiceRegionalPings {
	struct TArray<struct FWebServiceRegionPing> Pings; // 0x00(0x10)
};

// ScriptStruct WebServices.WebServiceRegionPing
// Size: 0x18 (Inherited: 0x00)
struct FWebServiceRegionPing {
	struct FString Region; // 0x00(0x10)
	int32_t Ping; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct WebServices.WebServiceSessionAddRemoveParticipants
// Size: 0x10 (Inherited: 0x00)
struct FWebServiceSessionAddRemoveParticipants {
	struct TArray<struct FWebServiceSessionAddRemoveParticipant> Participants; // 0x00(0x10)
};

// ScriptStruct WebServices.WebServiceSessionAddParticipantsWithUserData
// Size: 0x18 (Inherited: 0x00)
struct FWebServiceSessionAddParticipantsWithUserData {
	struct TArray<struct FWebServiceSessionCreateParticipant> Participants; // 0x00(0x10)
	bool bCrossPlayEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct WebServices.WebServiceSessionCreateParticipant
// Size: 0x50 (Inherited: 0x00)
struct FWebServiceSessionCreateParticipant {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UserData; // 0x18(0x10)
	struct FString SplitscreenHostId; // 0x28(0x10)
	int32_t SplitscreenHostNonce; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Token; // 0x40(0x10)
};

// ScriptStruct WebServices.WebServiceSessionCreateWithUsersData
// Size: 0x38 (Inherited: 0x00)
struct FWebServiceSessionCreateWithUsersData {
	struct FString UserData; // 0x00(0x10)
	bool bCrossPlayEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionData; // 0x18(0x10)
	struct TArray<struct FWebServiceSessionCreateParticipant> Participants; // 0x28(0x10)
};

