// Class Engine.BlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintFunctionLibrary : UObject {
};

// Class Engine.BlueprintAsyncActionBase
// Size: 0x38 (Inherited: 0x30)
struct UBlueprintAsyncActionBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void Activate(); // Function Engine.BlueprintAsyncActionBase.Activate // (None) // @ game+0xfffffffec0000000
};

// Class Engine.OnlineBlueprintCallProxyBase
// Size: 0x38 (Inherited: 0x38)
struct UOnlineBlueprintCallProxyBase : UBlueprintAsyncActionBase {
};

// Class Engine.Player
// Size: 0x50 (Inherited: 0x30)
struct UPlayer : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct APlayerController* PlayerController; // 0x38(0x08)
	int32_t CurrentNetSpeed; // 0x40(0x04)
	int32_t ConfiguredInternetSpeed; // 0x44(0x04)
	int32_t ConfiguredLanSpeed; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.NetConnection
// Size: 0x1a38 (Inherited: 0x50)
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UPackageMap* PackageMapClass; // 0x68(0x08)
	struct UPackageMap* PackageMap; // 0x70(0x08)
	struct TArray<struct UChannel*> OpenChannels; // 0x78(0x10)
	struct TArray<struct AActor*> SentTemporaries; // 0x88(0x10)
	struct AActor* ViewTarget; // 0x98(0x08)
	struct AActor* OwningActor; // 0xa0(0x08)
	int32_t MaxPacket; // 0xa8(0x04)
	char InternalAck : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0xbb]; // 0xad(0xbb)
	struct FUniqueNetIdRepl PlayerId; // 0x168(0x28)
	char pad_190[0x48]; // 0x190(0x48)
	double LastReceiveTime; // 0x1d8(0x08)
	char pad_1E0[0x1338]; // 0x1e0(0x1338)
	struct TArray<struct UChannel*> ChannelsToTick; // 0x1518(0x10)
	char pad_1528[0x510]; // 0x1528(0x510)
};

// Class Engine.NetDriver
// Size: 0x760 (Inherited: 0x30)
struct UNetDriver : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NetConnectionClassName; // 0x38(0x10)
	struct FString ReplicationDriverClassName; // 0x48(0x10)
	int32_t MaxDownloadSize; // 0x58(0x04)
	char bClampListenServerTickRate : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t NetServerMaxTickRate; // 0x60(0x04)
	int32_t MaxNetTickRate; // 0x64(0x04)
	int32_t MaxInternetClientRate; // 0x68(0x04)
	int32_t MaxClientRate; // 0x6c(0x04)
	float ServerTravelPause; // 0x70(0x04)
	float SpawnPrioritySeconds; // 0x74(0x04)
	float RelevantTimeout; // 0x78(0x04)
	float KeepAliveTime; // 0x7c(0x04)
	float InitialConnectTimeout; // 0x80(0x04)
	float ConnectionTimeout; // 0x84(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x88(0x04)
	bool bNoTimeouts; // 0x8c(0x01)
	bool bNeverApplyNetworkEmulationSettings; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	struct UNetConnection* ServerConnection; // 0x90(0x08)
	struct TArray<struct UNetConnection*> ClientConnections; // 0x98(0x10)
	char pad_A8[0x60]; // 0xa8(0x60)
	int32_t RecentlyDisconnectedTrackingTime; // 0x108(0x04)
	char pad_10C[0x3c]; // 0x10c(0x3c)
	struct UWorld* World; // 0x148(0x08)
	struct UPackage* WorldPackage; // 0x150(0x08)
	char pad_158[0x20]; // 0x158(0x20)
	struct UObject* NetConnectionClass; // 0x178(0x08)
	struct UObject* ReplicationDriverClass; // 0x180(0x08)
	char pad_188[0x10]; // 0x188(0x10)
	struct FName NetDriverName; // 0x198(0x08)
	struct TArray<struct FChannelDefinition> ChannelDefinitions; // 0x1a0(0x10)
	struct TMap<struct FName, struct FChannelDefinition> ChannelDefinitionMap; // 0x1b0(0x50)
	struct TArray<struct UChannel*> ActorChannelPool; // 0x200(0x10)
	char pad_210[0x8]; // 0x210(0x08)
	float Time; // 0x218(0x04)
	char pad_21C[0x4e4]; // 0x21c(0x4e4)
	struct UReplicationDriver* ReplicationDriver; // 0x700(0x08)
	char pad_708[0x58]; // 0x708(0x58)
};

// Class Engine.Actor
// Size: 0x250 (Inherited: 0x30)
struct AActor : UObject {
	struct FActorTickFunction PrimaryActorTick; // 0x30(0x30)
	char bNetTemporary : 1; // 0x60(0x01)
	char bNetStartup : 1; // 0x60(0x01)
	char bOnlyRelevantToOwner : 1; // 0x60(0x01)
	char bAlwaysRelevant : 1; // 0x60(0x01)
	char bReplicateMovement : 1; // 0x60(0x01)
	char bHidden : 1; // 0x60(0x01)
	char bTearOff : 1; // 0x60(0x01)
	char bExchangedRoles : 1; // 0x60(0x01)
	char bNetLoadOnClient : 1; // 0x61(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x61(0x01)
	char bRelevantForNetworkReplays : 1; // 0x61(0x01)
	char bRelevantForLevelBounds : 1; // 0x61(0x01)
	char bReplayRewindable : 1; // 0x61(0x01)
	char bAllowTickBeforeBeginPlay : 1; // 0x61(0x01)
	char bAutoDestroyWhenFinished : 1; // 0x61(0x01)
	char bBlockInput : 1; // 0x61(0x01)
	char bCollideWhenPlacing : 1; // 0x62(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x62(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x62(0x01)
	char bIgnoresOriginShifting : 1; // 0x62(0x01)
	char bEnableAutoLODGeneration : 1; // 0x62(0x01)
	char bIsEditorOnlyActor : 1; // 0x62(0x01)
	char bActorSeamlessTraveled : 1; // 0x62(0x01)
	char bReplicates : 1; // 0x62(0x01)
	char bCanBeInCluster : 1; // 0x63(0x01)
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x63(0x01)
	char pad_63_2 : 6; // 0x63(0x01)
	char pad_64_0 : 1; // 0x64(0x01)
	char bActorEnableCollision : 1; // 0x64(0x01)
	char bActorIsBeingDestroyed : 1; // 0x64(0x01)
	char pad_64_3 : 5; // 0x64(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x65(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x66(0x01)
	enum class ENetRole RemoteRole; // 0x67(0x01)
	char pad_68[0x18]; // 0x68(0x18)
	struct FRepMovement ReplicatedMovement; // 0x80(0x3c)
	float InitialLifeSpan; // 0xbc(0x04)
	char bIgnoreGlobalTimeDilation : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float CustomTimeDilation; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FRepAttachment AttachmentReplication; // 0xd0(0x40)
	struct AActor* Owner; // 0x110(0x08)
	struct FName NetDriverName; // 0x118(0x08)
	enum class ENetRole Role; // 0x120(0x01)
	enum class ENetDormancy NetDormancy; // 0x121(0x01)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x122(0x01)
	enum class EAutoReceiveInput AutoReceiveInput; // 0x123(0x01)
	int32_t InputPriority; // 0x124(0x04)
	struct UInputComponent* InputComponent; // 0x128(0x08)
	float NetCullDistanceSquared; // 0x130(0x04)
	int32_t NetTag; // 0x134(0x04)
	float NetUpdateFrequency; // 0x138(0x04)
	float MinNetUpdateFrequency; // 0x13c(0x04)
	float NetPriority; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct APawn* Instigator; // 0x148(0x08)
	struct TArray<struct AActor*> Children; // 0x150(0x10)
	struct USceneComponent* RootComponent; // 0x160(0x08)
	struct TArray<struct AMatineeActor*> ControllingMatineeActors; // 0x168(0x10)
	char pad_178[0x8]; // 0x178(0x08)
	struct TArray<struct FName> Layers; // 0x180(0x10)
	struct TWeakObjectPtr<struct UChildActorComponent> ParentComponent; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
	struct TArray<struct FName> Tags; // 0x1a0(0x10)
	struct FMulticastSparseDelegate OnActorBeginOverlap; // 0x1b0(0x01)
	struct FMulticastSparseDelegate OnActorEndOverlap; // 0x1b1(0x01)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x1b2(0x01)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x1b3(0x01)
	struct FMulticastSparseDelegate OnClicked; // 0x1b4(0x01)
	struct FMulticastSparseDelegate OnReleased; // 0x1b5(0x01)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x1b6(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x1b7(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x1b8(0x01)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x1b9(0x01)
	struct FMulticastSparseDelegate OnActorHit; // 0x1ba(0x01)
	struct FMulticastSparseDelegate OnDestroyed; // 0x1bb(0x01)
	struct FMulticastSparseDelegate OnEndPlay; // 0x1bc(0x01)
	char pad_1BD[0x63]; // 0x1bd(0x63)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x220(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x230(0x10)
	char pad_240[0x10]; // 0x240(0x10)

	bool WasRecentlyRendered(float Tolerance); // Function Engine.Actor.WasRecentlyRendered // (None) // @ game+0xfffffffec0000000
};

// Class Engine.OnlineEngineInterface
// Size: 0x30 (Inherited: 0x30)
struct UOnlineEngineInterface : UObject {
};

// Class Engine.DeveloperSettings
// Size: 0x40 (Inherited: 0x30)
struct UDeveloperSettings : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.OnlineSession
// Size: 0x30 (Inherited: 0x30)
struct UOnlineSession : UObject {
};

// Class Engine.ActorComponent
// Size: 0xd8 (Inherited: 0x30)
struct UActorComponent : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FActorComponentTickFunction PrimaryComponentTick; // 0x38(0x30)
	struct TArray<struct FName> ComponentTags; // 0x68(0x10)
	struct FGameplayTagContainer ComponentGameplayTags; // 0x78(0x20)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x98(0x10)
	char pad_A8[0x4]; // 0xa8(0x04)
	int32_t UCSSerializationIndex; // 0xac(0x04)
	char pad_B0_0 : 3; // 0xb0(0x01)
	char bNetAddressable : 1; // 0xb0(0x01)
	char bReplicates : 1; // 0xb0(0x01)
	char pad_B0_5 : 3; // 0xb0(0x01)
	char pad_B1_0 : 7; // 0xb1(0x01)
	char bAutoActivate : 1; // 0xb1(0x01)
	char bIsActive : 1; // 0xb2(0x01)
	char bEditableWhenInherited : 1; // 0xb2(0x01)
	char pad_B2_2 : 1; // 0xb2(0x01)
	char bCanEverAffectNavigation : 1; // 0xb2(0x01)
	char bAssetOverridesCanEverAffectNavigation : 1; // 0xb2(0x01)
	char pad_B2_5 : 1; // 0xb2(0x01)
	char bIsEditorOnly : 1; // 0xb2(0x01)
	char pad_B2_7 : 1; // 0xb2(0x01)
	char pad_B3[0x1]; // 0xb3(0x01)
	enum class EComponentCreationMethod CreationMethod; // 0xb4(0x01)
	struct FMulticastSparseDelegate OnComponentActivated; // 0xb5(0x01)
	struct FMulticastSparseDelegate OnComponentDeactivated; // 0xb6(0x01)
	char pad_B7[0x1]; // 0xb7(0x01)
	struct TArray<struct FSimpleMemberReference> UCSModifiedProperties; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)

	void ToggleActive(); // Function Engine.ActorComponent.ToggleActive // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SceneComponent
// Size: 0x220 (Inherited: 0xd8)
struct USceneComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct TWeakObjectPtr<struct APhysicsVolume> PhysicsVolume; // 0xe0(0x08)
	struct USceneComponent* AttachParent; // 0xe8(0x08)
	struct FName AttachSocketName; // 0xf0(0x08)
	struct TArray<struct USceneComponent*> AttachChildren; // 0xf8(0x10)
	struct TArray<struct USceneComponent*> ClientAttachedChildren; // 0x108(0x10)
	char pad_118[0x2c]; // 0x118(0x2c)
	struct FVector RelativeLocation; // 0x144(0x0c)
	struct FRotator RelativeRotation; // 0x150(0x0c)
	struct FVector RelativeScale3D; // 0x15c(0x0c)
	struct FVector ComponentVelocity; // 0x168(0x0c)
	char bComponentToWorldUpdated : 1; // 0x174(0x01)
	char pad_174_1 : 1; // 0x174(0x01)
	char bAbsoluteLocation : 1; // 0x174(0x01)
	char bAbsoluteRotation : 1; // 0x174(0x01)
	char bAbsoluteScale : 1; // 0x174(0x01)
	char bVisible : 1; // 0x174(0x01)
	char bShouldBeAttached : 1; // 0x174(0x01)
	char bShouldSnapLocationWhenAttached : 1; // 0x174(0x01)
	char bShouldSnapRotationWhenAttached : 1; // 0x175(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x175(0x01)
	char bHiddenInGame : 1; // 0x175(0x01)
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x175(0x01)
	char bUseAttachParentBound : 1; // 0x175(0x01)
	char pad_175_5 : 3; // 0x175(0x01)
	char pad_176[0x1]; // 0x176(0x01)
	enum class EComponentMobility Mobility; // 0x177(0x01)
	char bAssetDecidesDetailMode : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	enum class EDetailMode ComponentDetailMode; // 0x179(0x01)
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x17a(0x01)
	char pad_17B[0xa5]; // 0x17b(0xa5)

	void ToggleVisibility(bool bPropagateToChildren); // Function Engine.SceneComponent.ToggleVisibility // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DataAsset
// Size: 0x38 (Inherited: 0x30)
struct UDataAsset : UObject {
	struct UDataAsset* NativeClass; // 0x30(0x08)
};

// Class Engine.Commandlet
// Size: 0x88 (Inherited: 0x30)
struct UCommandlet : UObject {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
	char ShowProgress : 1; // 0x80(0x01)
	char pad_80_6 : 2; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.MovementComponent
// Size: 0x118 (Inherited: 0xd8)
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0xd8(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0xe0(0x08)
	char pad_E8[0x4]; // 0xe8(0x04)
	struct FVector Velocity; // 0xec(0x0c)
	struct FVector PlaneConstraintNormal; // 0xf8(0x0c)
	struct FVector PlaneConstraintOrigin; // 0x104(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x110(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x110(0x01)
	char bTickBeforeOwner : 1; // 0x110(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x110(0x01)
	char bConstrainToPlane : 1; // 0x110(0x01)
	char bSnapToPlaneAtStart : 1; // 0x110(0x01)
	char bAutoRegisterPhysicsVolumeUpdates : 1; // 0x110(0x01)
	char bComponentShouldUpdatePhysicsVolume : 1; // 0x110(0x01)
	char pad_111[0x2]; // 0x111(0x02)
	enum class EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0x113(0x01)
	char pad_114[0x4]; // 0x114(0x04)

	void StopMovementImmediately(); // Function Engine.MovementComponent.StopMovementImmediately // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Brush
// Size: 0x288 (Inherited: 0x250)
struct ABrush : AActor {
	enum class EBrushType BrushType; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FColor BrushColor; // 0x254(0x04)
	int32_t PolyFlags; // 0x258(0x04)
	char bColored : 1; // 0x25c(0x01)
	char bSolidWhenSelected : 1; // 0x25c(0x01)
	char bPlaceableFromClassBrowser : 1; // 0x25c(0x01)
	char bNotForClientOrServer : 1; // 0x25c(0x01)
	char pad_25C_4 : 4; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UModel* Brush; // 0x260(0x08)
	struct UBrushComponent* BrushComponent; // 0x268(0x08)
	char bInManipulation : 1; // 0x270(0x01)
	char pad_270_1 : 7; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct TArray<struct FGeomSelection> SavedSelections; // 0x278(0x10)
};

// Class Engine.Volume
// Size: 0x288 (Inherited: 0x288)
struct AVolume : ABrush {
};

// Class Engine.PrimitiveComponent
// Size: 0x4a0 (Inherited: 0x220)
struct UPrimitiveComponent : USceneComponent {
	char pad_220[0x8]; // 0x220(0x08)
	float MinDrawDistance; // 0x228(0x04)
	float LDMaxDrawDistance; // 0x22c(0x04)
	char bAssetDecidesMaxDrawDistance : 1; // 0x230(0x01)
	char pad_230_1 : 7; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float CachedMaxDrawDistance; // 0x234(0x04)
	enum class ESceneDepthPriorityGroup DepthPriorityGroup; // 0x238(0x01)
	enum class ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x239(0x01)
	enum class EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x23a(0x01)
	enum class ELightmapType LightmapType; // 0x23b(0x01)
	char bAssetDecidesEnableAutoLODGeneration : 1; // 0x23c(0x01)
	char bUseMaxLODAsImposter : 1; // 0x23c(0x01)
	char bBatchImpostersAsInstances : 1; // 0x23c(0x01)
	char bNeverDistanceCull : 1; // 0x23c(0x01)
	char pad_23C_4 : 4; // 0x23c(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x23d(0x01)
	char bGenerateOverlapEvents : 1; // 0x23d(0x01)
	char bAffectsGroundFog : 1; // 0x23d(0x01)
	char bMultiBodyOverlap : 1; // 0x23d(0x01)
	char bTraceComplexOnMove : 1; // 0x23d(0x01)
	char bReturnMaterialOnMove : 1; // 0x23d(0x01)
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x23d(0x01)
	char bAllowCullDistanceVolume : 1; // 0x23d(0x01)
	char pad_23E_0 : 1; // 0x23e(0x01)
	char bHasMotionBlurVelocityMeshes : 1; // 0x23e(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x23e(0x01)
	char bVisibleInRayTracing : 1; // 0x23e(0x01)
	char bRenderInMainPass : 1; // 0x23e(0x01)
	char bRenderInDepthPass : 1; // 0x23e(0x01)
	char bReceivesDecals : 1; // 0x23e(0x01)
	char bOwnerNoSee : 1; // 0x23e(0x01)
	char bOnlyOwnerSee : 1; // 0x23f(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x23f(0x01)
	char bUseAsOccluder : 1; // 0x23f(0x01)
	char bSelectable : 1; // 0x23f(0x01)
	char bForceMipStreaming : 1; // 0x23f(0x01)
	char bHasPerInstanceHitProxies : 1; // 0x23f(0x01)
	char CastShadow : 1; // 0x23f(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x23f(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x240(0x01)
	char bCastDynamicShadow : 1; // 0x240(0x01)
	char bCastStaticShadow : 1; // 0x240(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x240(0x01)
	char bSelfShadowOnly : 1; // 0x240(0x01)
	char bCastFarShadow : 1; // 0x240(0x01)
	char bCastInsetShadow : 1; // 0x240(0x01)
	char bCastCinematicShadow : 1; // 0x240(0x01)
	char bCastHiddenShadow : 1; // 0x241(0x01)
	char bCastShadowAsTwoSided : 1; // 0x241(0x01)
	char bLightAsIfStatic : 1; // 0x241(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x241(0x01)
	char bExcludeFromLightAttachmentGroup : 1; // 0x241(0x01)
	char bReceiveMobileCSMShadows : 1; // 0x241(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x241(0x01)
	char bIgnoreRadialImpulse : 1; // 0x241(0x01)
	char bIgnoreRadialForce : 1; // 0x242(0x01)
	char bApplyImpulseOnDamage : 1; // 0x242(0x01)
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x242(0x01)
	char bFillCollisionUnderneathForNavmesh : 1; // 0x242(0x01)
	char AlwaysLoadOnClient : 1; // 0x242(0x01)
	char AlwaysLoadOnServer : 1; // 0x242(0x01)
	char bUseEditorCompositing : 1; // 0x242(0x01)
	char bRenderCustomDepth : 1; // 0x242(0x01)
	char bRenderCustomDepthPlayer2 : 1; // 0x243(0x01)
	char bRenderForeground : 1; // 0x243(0x01)
	char pad_243_2 : 6; // 0x243(0x01)
	enum class EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x244(0x01)
	char pad_245[0x1]; // 0x245(0x01)
	enum class ECanBeCharacterBase CanCharacterStepUpOn; // 0x246(0x01)
	struct FLightingChannels LightingChannels; // 0x247(0x01)
	struct FShadowChannels ShadowChannels; // 0x248(0x01)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x249(0x01)
	char pad_24A[0x2]; // 0x24a(0x02)
	int32_t CustomDepthStencilValue; // 0x24c(0x04)
	struct FCustomPrimitiveData CustomPrimitiveData; // 0x250(0x10)
	struct FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x260(0x10)
	char pad_270[0x8]; // 0x270(0x08)
	int32_t TranslucencySortPriority; // 0x278(0x04)
	int32_t VisibilityId; // 0x27c(0x04)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x280(0x10)
	int8_t VirtualTextureLodBias; // 0x290(0x01)
	int8_t VirtualTextureCullMips; // 0x291(0x01)
	int8_t VirtualTextureMinCoverage; // 0x292(0x01)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x293(0x01)
	char pad_294[0x4]; // 0x294(0x04)
	float LpvBiasMultiplier; // 0x298(0x04)
	char pad_29C[0x8]; // 0x29c(0x08)
	float BoundsScale; // 0x2a4(0x04)
	char pad_2A8[0x10]; // 0x2a8(0x10)
	struct TArray<struct AActor*> MoveIgnoreActors; // 0x2b8(0x10)
	struct TArray<struct UPrimitiveComponent*> MoveIgnoreComponents; // 0x2c8(0x10)
	char pad_2D8[0x10]; // 0x2d8(0x10)
	struct FBodyInstance BodyInstance; // 0x2e8(0x110)
	struct FMulticastSparseDelegate OnComponentHit; // 0x3f8(0x01)
	struct FMulticastSparseDelegate OnComponentBeginOverlap; // 0x3f9(0x01)
	struct FMulticastSparseDelegate OnComponentEndOverlap; // 0x3fa(0x01)
	char pad_3FB[0x2]; // 0x3fb(0x02)
	struct FMulticastSparseDelegate OnComponentWake; // 0x3fd(0x01)
	struct FMulticastSparseDelegate OnComponentSleep; // 0x3fe(0x01)
	char pad_3FF[0x1]; // 0x3ff(0x01)
	struct FMulticastInlineDelegate OnBeginCursorOver; // 0x400(0x10)
	struct FMulticastInlineDelegate OnEndCursorOver; // 0x410(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x420(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x430(0x10)
	struct FMulticastInlineDelegate OnInputTouchBegin; // 0x440(0x10)
	struct FMulticastInlineDelegate OnInputTouchEnd; // 0x450(0x10)
	struct FMulticastInlineDelegate OnInputTouchEnter; // 0x460(0x10)
	struct FMulticastInlineDelegate OnInputTouchLeave; // 0x470(0x10)
	char pad_480[0x18]; // 0x480(0x18)
	struct UPrimitiveComponent* LODParentPrimitive; // 0x498(0x08)

	bool WasRecentlyRendered(float Tolerance); // Function Engine.PrimitiveComponent.WasRecentlyRendered // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ShapeComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UShapeComponent : UPrimitiveComponent {
	struct UBodySetup* ShapeBodySetup; // 0x4a0(0x08)
	struct UNavAreaBase* AreaClass; // 0x4a8(0x08)
	struct FColor ShapeColor; // 0x4b0(0x04)
	char bDrawOnlyIfSelected : 1; // 0x4b4(0x01)
	char bShouldCollideWhenPlacing : 1; // 0x4b4(0x01)
	char bDynamicObstacle : 1; // 0x4b4(0x01)
	char pad_4B4_3 : 5; // 0x4b4(0x01)
	char pad_4B5[0xb]; // 0x4b5(0x0b)
};

// Class Engine.BoxComponent
// Size: 0x4d0 (Inherited: 0x4c0)
struct UBoxComponent : UShapeComponent {
	struct FVector BoxExtent; // 0x4b8(0x0c)
	float LineThickness; // 0x4c4(0x04)

	void SetBoxExtent(struct FVector InBoxExtent, bool bUpdateOverlaps); // Function Engine.BoxComponent.SetBoxExtent // (None) // @ game+0xfffffffec0000000
};

// Class Engine.World
// Size: 0x730 (Inherited: 0x30)
struct UWorld : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct ULevel* PersistentLevel; // 0x38(0x08)
	struct UNetDriver* NetDriver; // 0x40(0x08)
	struct ULineBatchComponent* LineBatcher; // 0x48(0x08)
	struct ULineBatchComponent* PersistentLineBatcher; // 0x50(0x08)
	struct ULineBatchComponent* ForegroundLineBatcher; // 0x58(0x08)
	struct AGameNetworkManager* NetworkManager; // 0x60(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x68(0x08)
	struct TArray<struct UObject*> ExtraReferencedObjects; // 0x70(0x10)
	struct TArray<struct UObject*> PerModuleDataObjects; // 0x80(0x10)
	struct TArray<struct AActor*> LevelSequenceActors; // 0x90(0x10)
	struct TArray<struct ULevelStreaming*> StreamingLevels; // 0xa0(0x10)
	struct FStreamingLevelsToConsider StreamingLevelsToConsider; // 0xb0(0x28)
	struct FString StreamingLevelsPrefix; // 0xd8(0x10)
	struct ULevel* CurrentLevelPendingVisibility; // 0xe8(0x08)
	struct ULevel* CurrentLevelPendingInvisibility; // 0xf0(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0xf8(0x08)
	struct AParticleEventManager* MyParticleEventManager; // 0x100(0x08)
	struct APhysicsVolume* DefaultPhysicsVolume; // 0x108(0x08)
	char pad_110[0x16]; // 0x110(0x16)
	char pad_126_0 : 2; // 0x126(0x01)
	char bAreConstraintsDirty : 1; // 0x126(0x01)
	char pad_126_3 : 5; // 0x126(0x01)
	char pad_127[0x1]; // 0x127(0x01)
	struct UNavigationSystemBase* NavigationSystem; // 0x128(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x130(0x08)
	struct AGameStateBase* GameState; // 0x138(0x08)
	struct UAISystemBase* AISystem; // 0x140(0x08)
	struct UAvoidanceManager* AvoidanceManager; // 0x148(0x08)
	struct TArray<struct ULevel*> Levels; // 0x150(0x10)
	struct TArray<struct FLevelCollection> LevelCollections; // 0x160(0x10)
	char pad_170[0x20]; // 0x170(0x20)
	struct ULevelStreaming* DefaultSpawnLevel; // 0x190(0x08)
	struct UGameInstance* OwningGameInstance; // 0x198(0x08)
	struct TArray<struct UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x1a0(0x10)
	struct UCanvas* CanvasForRenderingToTarget; // 0x1b0(0x08)
	struct UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1b8(0x08)
	char pad_1C0[0x50]; // 0x1c0(0x50)
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x210(0x10)
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x220(0x10)
	char pad_230[0x348]; // 0x230(0x348)
	struct UWorldComposition* WorldComposition; // 0x578(0x08)
	char pad_580[0x88]; // 0x580(0x88)
	struct FWorldPSCPool PSCPool; // 0x608(0x58)
	char pad_660[0xd0]; // 0x660(0xd0)

	struct AWorldSettings* K2_GetWorldSettings(); // Function Engine.World.K2_GetWorldSettings // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimNotify
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotify : UObject {
	char pad_30[0x10]; // 0x30(0x10)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotify.Received_Notify // (None) // @ game+0xfffffffec0000000
};

// Class Engine.InterpTrack
// Size: 0x78 (Inherited: 0x30)
struct UInterpTrack : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UInterpTrack*> SubTracks; // 0x40(0x10)
	struct UInterpTrackInst* TrackInstClass; // 0x50(0x08)
	enum class ETrackActiveCondition ActiveCondition; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString TrackTitle; // 0x60(0x10)
	char bOnePerGroup : 1; // 0x70(0x01)
	char bDirGroupOnly : 1; // 0x70(0x01)
	char bDisableTrack : 1; // 0x70(0x01)
	char bIsSelected : 1; // 0x70(0x01)
	char bIsAnimControlTrack : 1; // 0x70(0x01)
	char bSubTrackOnly : 1; // 0x70(0x01)
	char bVisible : 1; // 0x70(0x01)
	char bIsRecording : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.InterpTrackVectorBase
// Size: 0x98 (Inherited: 0x78)
struct UInterpTrackVectorBase : UInterpTrack {
	struct FInterpCurveVector VectorTrack; // 0x78(0x18)
	float CurveTension; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.InterpTrackFloatBase
// Size: 0x98 (Inherited: 0x78)
struct UInterpTrackFloatBase : UInterpTrack {
	struct FInterpCurveFloat FloatTrack; // 0x78(0x18)
	float CurveTension; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.InterpTrackInst
// Size: 0x30 (Inherited: 0x30)
struct UInterpTrackInst : UObject {
};

// Class Engine.GameInstance
// Size: 0x1b0 (Inherited: 0x30)
struct UGameInstance : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct ULocalPlayer*> LocalPlayers; // 0x40(0x10)
	struct UOnlineSession* OnlineSession; // 0x50(0x08)
	struct TArray<struct UObject*> ReferencedObjects; // 0x58(0x10)
	char pad_68[0x70]; // 0x68(0x70)
	struct TArray<struct UObject*> PerModuleDataObjects; // 0xd8(0x10)
	char pad_E8[0xc8]; // 0xe8(0xc8)

	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Subsystem
// Size: 0x38 (Inherited: 0x30)
struct USubsystem : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.GameInstanceSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UGameInstanceSubsystem : USubsystem {
};

// Class Engine.WorldSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UWorldSubsystem : USubsystem {
};

// Class Engine.Info
// Size: 0x250 (Inherited: 0x250)
struct AInfo : AActor {
};

// Class Engine.Engine
// Size: 0xe00 (Inherited: 0x30)
struct UEngine : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UFont* TinyFont; // 0x38(0x08)
	struct FSoftObjectPath TinyFontName; // 0x40(0x18)
	struct UFont* SmallFont; // 0x58(0x08)
	struct FSoftObjectPath SmallFontName; // 0x60(0x18)
	struct UFont* MediumFont; // 0x78(0x08)
	struct FSoftObjectPath MediumFontName; // 0x80(0x18)
	struct UFont* LargeFont; // 0x98(0x08)
	struct FSoftObjectPath LargeFontName; // 0xa0(0x18)
	struct UFont* SubtitleFont; // 0xb8(0x08)
	struct FSoftObjectPath SubtitleFontName; // 0xc0(0x18)
	struct TArray<struct UFont*> AdditionalFonts; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<struct FString> AdditionalFontNames; // 0xf0(0x10)
	struct UConsole* ConsoleClass; // 0x100(0x08)
	struct FSoftClassPath ConsoleClassName; // 0x108(0x18)
	struct UGameViewportClient* GameViewportClientClass; // 0x120(0x08)
	struct FSoftClassPath GameViewportClientClassName; // 0x128(0x18)
	struct ULocalPlayer* LocalPlayerClass; // 0x140(0x08)
	struct FSoftClassPath LocalPlayerClassName; // 0x148(0x18)
	struct AWorldSettings* WorldSettingsClass; // 0x160(0x08)
	struct FSoftClassPath WorldSettingsClassName; // 0x168(0x18)
	struct FSoftClassPath NavigationSystemClassName; // 0x180(0x18)
	struct UNavigationSystemBase* NavigationSystemClass; // 0x198(0x08)
	struct FSoftClassPath NavigationSystemConfigClassName; // 0x1a0(0x18)
	struct UNavigationSystemConfig* NavigationSystemConfigClass; // 0x1b8(0x08)
	struct FSoftClassPath AvoidanceManagerClassName; // 0x1c0(0x18)
	struct UAvoidanceManager* AvoidanceManagerClass; // 0x1d8(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1e0(0x08)
	struct FSoftClassPath PhysicsCollisionHandlerClassName; // 0x1e8(0x18)
	struct FSoftClassPath GameUserSettingsClassName; // 0x200(0x18)
	struct UGameUserSettings* GameUserSettingsClass; // 0x218(0x08)
	struct FSoftClassPath AIControllerClassName; // 0x220(0x18)
	struct UGameUserSettings* GameUserSettings; // 0x238(0x08)
	struct ALevelScriptActor* LevelScriptActorClass; // 0x240(0x08)
	struct FSoftClassPath LevelScriptActorClassName; // 0x248(0x18)
	struct FSoftClassPath DefaultBlueprintBaseClassName; // 0x260(0x18)
	struct FSoftClassPath GameSingletonClassName; // 0x278(0x18)
	struct UObject* GameSingleton; // 0x290(0x08)
	struct FSoftClassPath AssetManagerClassName; // 0x298(0x18)
	struct UAssetManager* AssetManager; // 0x2b0(0x08)
	struct UTexture2D* DefaultTexture; // 0x2b8(0x08)
	struct FSoftObjectPath DefaultTextureName; // 0x2c0(0x18)
	struct UTexture* DefaultDiffuseTexture; // 0x2d8(0x08)
	struct FSoftObjectPath DefaultDiffuseTextureName; // 0x2e0(0x18)
	struct UTexture2D* DefaultBSPVertexTexture; // 0x2f8(0x08)
	struct FSoftObjectPath DefaultBSPVertexTextureName; // 0x300(0x18)
	struct UTexture2D* HighFrequencyNoiseTexture; // 0x318(0x08)
	struct FSoftObjectPath HighFrequencyNoiseTextureName; // 0x320(0x18)
	struct UTexture2D* DefaultBokehTexture; // 0x338(0x08)
	struct FSoftObjectPath DefaultBokehTextureName; // 0x340(0x18)
	struct UTexture2D* DefaultBloomKernelTexture; // 0x358(0x08)
	struct FSoftObjectPath DefaultBloomKernelTextureName; // 0x360(0x18)
	struct UMaterial* WireframeMaterial; // 0x378(0x08)
	struct FString WireframeMaterialName; // 0x380(0x10)
	struct UMaterial* DebugMeshMaterial; // 0x390(0x08)
	struct FSoftObjectPath DebugMeshMaterialName; // 0x398(0x18)
	struct UMaterial* EmissiveMeshMaterial; // 0x3b0(0x08)
	struct FSoftObjectPath EmissiveMeshMaterialName; // 0x3b8(0x18)
	int32_t DefaultLineBatchComponentTranslucentSortPriority; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UMaterial* LevelColorationLitMaterial; // 0x3d8(0x08)
	struct FString LevelColorationLitMaterialName; // 0x3e0(0x10)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x3f0(0x08)
	struct FString LevelColorationUnlitMaterialName; // 0x3f8(0x10)
	struct UMaterial* LightingTexelDensityMaterial; // 0x408(0x08)
	struct FString LightingTexelDensityName; // 0x410(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x420(0x08)
	struct FString ShadedLevelColorationLitMaterialName; // 0x428(0x10)
	struct UMaterial* ShadedLevelColorationUnlitMaterial; // 0x438(0x08)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x440(0x10)
	struct UMaterial* RemoveSurfaceMaterial; // 0x450(0x08)
	struct FSoftObjectPath RemoveSurfaceMaterialName; // 0x458(0x18)
	struct UMaterial* VertexColorMaterial; // 0x470(0x08)
	struct FString VertexColorMaterialName; // 0x478(0x10)
	struct UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x488(0x08)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x490(0x10)
	struct UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x4a0(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x4a8(0x10)
	struct UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4b8(0x08)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0x4c0(0x10)
	struct UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4d0(0x08)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x4d8(0x10)
	struct UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x4e8(0x08)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x4f0(0x10)
	struct FSoftObjectPath DebugEditorMaterialName; // 0x500(0x18)
	struct UMaterial* ConstraintLimitMaterial; // 0x518(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x520(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x528(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x530(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x538(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x540(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x548(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x550(0x08)
	struct UMaterial* InvalidLightmapSettingsMaterial; // 0x558(0x08)
	struct FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x560(0x18)
	struct UMaterial* PreviewShadowsIndicatorMaterial; // 0x578(0x08)
	struct FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x580(0x18)
	struct UMaterial* ArrowMaterial; // 0x598(0x08)
	struct UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x5a0(0x08)
	struct FSoftObjectPath ArrowMaterialName; // 0x5a8(0x18)
	struct FLinearColor LightingOnlyBrightness; // 0x5c0(0x10)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x5d0(0x10)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0x5e0(0x10)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x5f0(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0x600(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x610(0x10)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0x620(0x10)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0x630(0x10)
	float MaxPixelShaderAdditiveComplexityCount; // 0x640(0x04)
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x644(0x04)
	float MinLightMapDensity; // 0x648(0x04)
	float IdealLightMapDensity; // 0x64c(0x04)
	float MaxLightMapDensity; // 0x650(0x04)
	char bRenderLightMapDensityGrayscale : 1; // 0x654(0x01)
	char pad_654_1 : 7; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	float RenderLightMapDensityGrayscaleScale; // 0x658(0x04)
	float RenderLightMapDensityColorScale; // 0x65c(0x04)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0x660(0x10)
	struct FLinearColor LightMapDensitySelectedColor; // 0x670(0x10)
	struct TArray<struct FStatColorMapping> StatColorMappings; // 0x680(0x10)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x690(0x08)
	struct FSoftObjectPath DefaultPhysMaterialName; // 0x698(0x18)
	struct TArray<struct FGameNameRedirect> ActiveGameNameRedirects; // 0x6b0(0x10)
	struct TArray<struct FClassRedirect> ActiveClassRedirects; // 0x6c0(0x10)
	struct TArray<struct FPluginRedirect> ActivePluginRedirects; // 0x6d0(0x10)
	struct TArray<struct FStructRedirect> ActiveStructRedirects; // 0x6e0(0x10)
	struct UTexture2D* PreIntegratedSkinBRDFTexture; // 0x6f0(0x08)
	struct FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x6f8(0x18)
	struct UTexture2D* BlueNoiseTexture; // 0x710(0x08)
	struct FSoftObjectPath BlueNoiseTextureName; // 0x718(0x18)
	struct UTexture2D* MiniFontTexture; // 0x730(0x08)
	struct FSoftObjectPath MiniFontTextureName; // 0x738(0x18)
	struct UTexture* WeightMapPlaceholderTexture; // 0x750(0x08)
	struct FSoftObjectPath WeightMapPlaceholderTextureName; // 0x758(0x18)
	struct UTexture2D* LightMapDensityTexture; // 0x770(0x08)
	struct FSoftObjectPath LightMapDensityTextureName; // 0x778(0x18)
	char pad_790[0x8]; // 0x790(0x08)
	struct UGameViewportClient* GameViewport; // 0x798(0x08)
	struct TArray<struct FString> DeferredCommands; // 0x7a0(0x10)
	int32_t TickCycles; // 0x7b0(0x04)
	int32_t GameCycles; // 0x7b4(0x04)
	int32_t ClientCycles; // 0x7b8(0x04)
	float NearClipPlane; // 0x7bc(0x04)
	char bHardwareSurveyEnabled : 1; // 0x7c0(0x01)
	char bSubtitlesEnabled : 1; // 0x7c0(0x01)
	char bSubtitlesForcedOff : 1; // 0x7c0(0x01)
	char pad_7C0_3 : 5; // 0x7c0(0x01)
	char pad_7C1[0x3]; // 0x7c1(0x03)
	int32_t MaximumLoopIterationCount; // 0x7c4(0x04)
	char bCanBlueprintsTickByDefault : 1; // 0x7c8(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7c8(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x7c8(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x7c8(0x01)
	char pad_7C8_4 : 1; // 0x7c8(0x01)
	char bSmoothFrameRate : 1; // 0x7c8(0x01)
	char bUseFixedFrameRate : 1; // 0x7c8(0x01)
	char pad_7C8_7 : 1; // 0x7c8(0x01)
	char pad_7C9[0x3]; // 0x7c9(0x03)
	float FixedFrameRate; // 0x7cc(0x04)
	struct FFloatRange SmoothedFrameRateRange; // 0x7d0(0x10)
	struct UEngineCustomTimeStep* CustomTimeStep; // 0x7e0(0x08)
	char pad_7E8[0x20]; // 0x7e8(0x20)
	struct FSoftClassPath CustomTimeStepClassName; // 0x808(0x18)
	struct UTimecodeProvider* TimecodeProvider; // 0x820(0x08)
	char pad_828[0x20]; // 0x828(0x20)
	struct FSoftClassPath TimecodeProviderClassName; // 0x848(0x18)
	bool bGenerateDefaultTimecode; // 0x860(0x01)
	char pad_861[0x3]; // 0x861(0x03)
	struct FFrameRate GenerateDefaultTimecodeFrameRate; // 0x864(0x08)
	float GenerateDefaultTimecodeFrameDelay; // 0x86c(0x04)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x870(0x01)
	char pad_870_1 : 7; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x874(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x878(0x01)
	char pad_878_1 : 7; // 0x878(0x01)
	char pad_879[0x3]; // 0x879(0x03)
	struct FColor C_WorldBox; // 0x87c(0x04)
	struct FColor C_BrushWire; // 0x880(0x04)
	struct FColor C_AddWire; // 0x884(0x04)
	struct FColor C_SubtractWire; // 0x888(0x04)
	struct FColor C_SemiSolidWire; // 0x88c(0x04)
	struct FColor C_NonSolidWire; // 0x890(0x04)
	struct FColor C_WireBackground; // 0x894(0x04)
	struct FColor C_ScaleBoxHi; // 0x898(0x04)
	struct FColor C_VolumeCollision; // 0x89c(0x04)
	struct FColor C_BSPCollision; // 0x8a0(0x04)
	struct FColor C_OrthoBackground; // 0x8a4(0x04)
	struct FColor C_Volume; // 0x8a8(0x04)
	struct FColor C_BrushShape; // 0x8ac(0x04)
	float StreamingDistanceFactor; // 0x8b0(0x04)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct FDirectoryPath GameScreenshotSaveDirectory; // 0x8b8(0x10)
	enum class ETransitionType TransitionType; // 0x8c8(0x01)
	char pad_8C9[0x7]; // 0x8c9(0x07)
	struct FString TransitionDescription; // 0x8d0(0x10)
	struct FString TransitionGameMode; // 0x8e0(0x10)
	float MeshLODRange; // 0x8f0(0x04)
	char bAllowMatureLanguage : 1; // 0x8f4(0x01)
	char pad_8F4_1 : 7; // 0x8f4(0x01)
	char pad_8F5[0x3]; // 0x8f5(0x03)
	float CameraRotationThreshold; // 0x8f8(0x04)
	float CameraTranslationThreshold; // 0x8fc(0x04)
	float PrimitiveProbablyVisibleTime; // 0x900(0x04)
	float MaxOcclusionPixelsFraction; // 0x904(0x04)
	char bPauseOnLossOfFocus : 1; // 0x908(0x01)
	char pad_908_1 : 7; // 0x908(0x01)
	char pad_909[0x3]; // 0x909(0x03)
	int32_t MaxParticleResize; // 0x90c(0x04)
	int32_t MaxParticleResizeWarn; // 0x910(0x04)
	char pad_914[0x4]; // 0x914(0x04)
	struct TArray<struct FDropNoteInfo> PendingDroppedNotes; // 0x918(0x10)
	float NetClientTicksPerSecond; // 0x928(0x04)
	float DisplayGamma; // 0x92c(0x04)
	float MinDesiredFrameRate; // 0x930(0x04)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x934(0x10)
	struct FLinearColor SelectedMaterialColor; // 0x944(0x10)
	struct FLinearColor SelectionOutlineColor; // 0x954(0x10)
	struct FLinearColor SubduedSelectionOutlineColor; // 0x964(0x10)
	struct FLinearColor SelectedMaterialColorOverride; // 0x974(0x10)
	bool bIsOverridingSelectedColor; // 0x984(0x01)
	char pad_985[0x3]; // 0x985(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x988(0x01)
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x988(0x01)
	char bSuppressMapWarnings : 1; // 0x988(0x01)
	char bDisableAILogging : 1; // 0x988(0x01)
	char pad_988_4 : 4; // 0x988(0x01)
	char pad_989[0x3]; // 0x989(0x03)
	uint32_t bEnableVisualLogRecordingOnStart; // 0x98c(0x04)
	char pad_990[0x4]; // 0x990(0x04)
	int32_t ScreenSaverInhibitorSemaphore; // 0x994(0x04)
	char bLockReadOnlyLevels : 1; // 0x998(0x01)
	char pad_998_1 : 7; // 0x998(0x01)
	char pad_999[0x7]; // 0x999(0x07)
	struct FString ParticleEventManagerClassPath; // 0x9a0(0x10)
	float SelectionHighlightIntensity; // 0x9b0(0x04)
	float BSPSelectionHighlightIntensity; // 0x9b4(0x04)
	float SelectionHighlightIntensityBillboards; // 0x9b8(0x04)
	char pad_9BC[0x25c]; // 0x9bc(0x25c)
	struct TArray<struct FNetDriverDefinition> NetDriverDefinitions; // 0xc18(0x10)
	struct TArray<struct FString> ServerActors; // 0xc28(0x10)
	struct TArray<struct FString> RuntimeServerActors; // 0xc38(0x10)
	float NetErrorLogInterval; // 0xc48(0x04)
	char bStartedLoadMapMovie : 1; // 0xc4c(0x01)
	char pad_C4C_1 : 7; // 0xc4c(0x01)
	char pad_C4D[0x1b]; // 0xc4d(0x1b)
	int32_t NextWorldContextHandle; // 0xc68(0x04)
	char pad_C6C[0x194]; // 0xc6c(0x194)
};

// Class Engine.LocalPlayer
// Size: 0x260 (Inherited: 0x50)
struct ULocalPlayer : UPlayer {
	char pad_50[0x28]; // 0x50(0x28)
	struct UGameViewportClient* ViewportClient; // 0x78(0x08)
	char pad_80[0x1c]; // 0x80(0x1c)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct APlayerController* PendingLevelPlayerControllerClass; // 0xa0(0x08)
	char bSentSplitJoin : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)
	int32_t ControllerId; // 0xc0(0x04)
	char pad_C4[0x19c]; // 0xc4(0x19c)
};

// Class Engine.LocalPlayerSubsystem
// Size: 0x38 (Inherited: 0x38)
struct ULocalPlayerSubsystem : USubsystem {
};

// Class Engine.BillboardComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x4a0(0x08)
	char bIsScreenSizeScaled : 1; // 0x4a8(0x01)
	char pad_4A8_1 : 7; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	float ScreenSize; // 0x4ac(0x04)
	float U; // 0x4b0(0x04)
	float UL; // 0x4b4(0x04)
	float V; // 0x4b8(0x04)
	float VL; // 0x4bc(0x04)

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetUV // (None) // @ game+0xfffffffec0000000
};

// Class Engine.TargetPoint
// Size: 0x250 (Inherited: 0x250)
struct ATargetPoint : AActor {
};

// Class Engine.MeshComponent
// Size: 0x520 (Inherited: 0x4a0)
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)
	char bEnableMaterialParameterCaching : 1; // 0x4c0(0x01)
	char pad_4C0_1 : 7; // 0x4c0(0x01)
	char pad_4C1[0x5f]; // 0x4c1(0x5f)

	void SetVectorParameterValueOnMaterials(struct FName ParameterName, struct FLinearColor ParameterValue); // Function Engine.MeshComponent.SetVectorParameterValueOnMaterials // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DynamicSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UDynamicSubsystem : USubsystem {
};

// Class Engine.EngineSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UEngineSubsystem : UDynamicSubsystem {
};

// Class Engine.AnimBoneCompressionCodec
// Size: 0x40 (Inherited: 0x30)
struct UAnimBoneCompressionCodec : UObject {
	struct FString Description; // 0x30(0x10)
};

// Class Engine.AnimCurveCompressionCodec
// Size: 0x30 (Inherited: 0x30)
struct UAnimCurveCompressionCodec : UObject {
};

// Class Engine.SkinnedMeshComponent
// Size: 0x710 (Inherited: 0x520)
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0x518(0x08)
	struct TWeakObjectPtr<struct USkinnedMeshComponent> MasterPoseComponent; // 0x520(0x08)
	struct TArray<enum class ESkinCacheUsage> SkinCacheUsage; // 0x528(0x10)
	char pad_540[0xf0]; // 0x540(0xf0)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0x630(0x08)
	int32_t ForcedLodModel; // 0x638(0x04)
	int32_t MinLodModel; // 0x63c(0x04)
	int32_t IndividualLodBias; // 0x640(0x04)
	char pad_644[0x8]; // 0x644(0x08)
	float StreamingDistanceMultiplier; // 0x64c(0x04)
	char pad_650[0x8]; // 0x650(0x08)
	struct TArray<struct FSkelMeshComponentLODInfo> LODInfo; // 0x658(0x10)
	char pad_668[0x24]; // 0x668(0x24)
	enum class EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x68c(0x01)
	char pad_68D[0x1]; // 0x68d(0x01)
	char pad_68E_0 : 2; // 0x68e(0x01)
	char bOverrideMinLod : 1; // 0x68e(0x01)
	char bUseBoundsFromMasterPoseComponent : 1; // 0x68e(0x01)
	char bForceWireframe : 1; // 0x68e(0x01)
	char bDisplayBones : 1; // 0x68e(0x01)
	char bDisableMorphTarget : 1; // 0x68e(0x01)
	char bHideSkin : 1; // 0x68e(0x01)
	char bPerBoneMotionBlur : 1; // 0x68f(0x01)
	char pad_68F_1 : 7; // 0x68f(0x01)
	bool bUseSkinCacheOverride; // 0x690(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0x691(0x01)
	char bUseFixedBoundsOverrideMinMax : 1; // 0x691(0x01)
	char pad_691_2 : 6; // 0x691(0x01)
	char pad_692[0x2]; // 0x692(0x02)
	struct FVector FixedBoundsOverrideMin; // 0x694(0x0c)
	struct FVector FixedBoundsOverrideMax; // 0x6a0(0x0c)
	char bUsePhysicsAssetToCalcBounds : 1; // 0x6ac(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0x6ac(0x01)
	char bSyncAttachParentLOD : 1; // 0x6ac(0x01)
	char bCanHighlightSelectedSections : 1; // 0x6ac(0x01)
	char bRecentlyRendered : 1; // 0x6ac(0x01)
	char bCastCapsuleDirectShadow : 1; // 0x6ac(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0x6ac(0x01)
	char bCPUSkinning : 1; // 0x6ac(0x01)
	char bEnableUpdateRateOptimizations : 1; // 0x6ad(0x01)
	char bServerIgnoresUpdateRateOptimizationFrameSkip : 1; // 0x6ad(0x01)
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x6ad(0x01)
	char bRenderStatic : 1; // 0x6ad(0x01)
	char bIgnoreMasterPoseComponentLOD : 1; // 0x6ad(0x01)
	char pad_6AD_5 : 3; // 0x6ad(0x01)
	bool bStopTickingWhenNoLongerAnimating; // 0x6ae(0x01)
	char pad_6AF[0x1]; // 0x6af(0x01)
	float StopTickingWhenNoLongerAnimatingTime; // 0x6b0(0x04)
	char pad_6B4_0 : 2; // 0x6b4(0x01)
	char bCachedLocalBoundsUpToDate : 1; // 0x6b4(0x01)
	char pad_6B4_3 : 5; // 0x6b4(0x01)
	char pad_6B5[0xb]; // 0x6b5(0x0b)
	char pad_6C0_0 : 1; // 0x6c0(0x01)
	char bForceMeshObjectUpdate : 1; // 0x6c0(0x01)
	char pad_6C0_2 : 6; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	float CapsuleIndirectShadowMinVisibility; // 0x6c4(0x04)
	char pad_6C8[0x10]; // 0x6c8(0x10)
	struct FBoxSphereBounds CachedLocalSpaceBounds; // 0x6d8(0x1c)
	char pad_6F4[0x1c]; // 0x6f4(0x1c)

	void UnloadSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.UnloadSkinWeightProfile // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SkeletalMeshComponent
// Size: 0xba0 (Inherited: 0x710)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	char pad_710[0x8]; // 0x710(0x08)
	struct UObject* AnimBlueprintGeneratedClass; // 0x718(0x08)
	struct UAnimInstance* AnimClass; // 0x720(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0x728(0x08)
	struct UAnimInstance* PostProcessAnimInstance; // 0x730(0x08)
	struct FSingleAnimationPlayData AnimationData; // 0x738(0x18)
	char pad_750[0x10]; // 0x750(0x10)
	struct FVector RootBoneTranslation; // 0x760(0x0c)
	struct FVector LineCheckBoundsScale; // 0x76c(0x0c)
	char pad_778[0x20]; // 0x778(0x20)
	struct TArray<struct UAnimInstance*> LinkedInstances; // 0x798(0x10)
	struct TArray<struct FTransform> CachedBoneSpaceTransforms; // 0x7a8(0x10)
	struct TArray<struct FTransform> CachedComponentSpaceTransforms; // 0x7b8(0x10)
	char pad_7C8[0x20]; // 0x7c8(0x20)
	float GlobalAnimRateScale; // 0x7e8(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x7ec(0x01)
	enum class EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x7ed(0x01)
	char pad_7EE[0x1]; // 0x7ee(0x01)
	enum class EAnimationMode AnimationMode; // 0x7ef(0x01)
	char pad_7F0[0x1]; // 0x7f0(0x01)
	char bDisablePostProcessBlueprint : 1; // 0x7f1(0x01)
	char pad_7F1_1 : 1; // 0x7f1(0x01)
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x7f1(0x01)
	char pad_7F1_3 : 1; // 0x7f1(0x01)
	char bHasValidBodies : 1; // 0x7f1(0x01)
	char pad_7F1_5 : 1; // 0x7f1(0x01)
	char bBlendPhysics : 1; // 0x7f1(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0x7f1(0x01)
	char bUpdateJointsFromAnimation : 1; // 0x7f2(0x01)
	char bDisableClothSimulation : 1; // 0x7f2(0x01)
	char bDisableRigidBodyAnimNode : 1; // 0x7f2(0x01)
	char bAllowAnimCurveEvaluation : 1; // 0x7f2(0x01)
	char bDisableAnimCurves : 1; // 0x7f2(0x01)
	char pad_7F2_5 : 3; // 0x7f2(0x01)
	char bCollideWithEnvironment : 1; // 0x7f3(0x01)
	char bCollideWithAttachedChildren : 1; // 0x7f3(0x01)
	char bLocalSpaceSimulation : 1; // 0x7f3(0x01)
	char bResetAfterTeleport : 1; // 0x7f3(0x01)
	char pad_7F3_4 : 1; // 0x7f3(0x01)
	char bDeferKinematicBoneUpdate : 1; // 0x7f3(0x01)
	char bNoSkeletonUpdate : 1; // 0x7f3(0x01)
	char bPauseAnims : 1; // 0x7f3(0x01)
	char bUseRefPoseOnInitAnim : 1; // 0x7f4(0x01)
	char bEnablePerPolyCollision : 1; // 0x7f4(0x01)
	char bForceRefpose : 1; // 0x7f4(0x01)
	char bOnlyAllowAutonomousTickPose : 1; // 0x7f4(0x01)
	char bIsAutonomousTickPose : 1; // 0x7f4(0x01)
	char bOldForceRefPose : 1; // 0x7f4(0x01)
	char bShowPrePhysBones : 1; // 0x7f4(0x01)
	char bRequiredBonesUpToDate : 1; // 0x7f4(0x01)
	char bAnimTreeInitialised : 1; // 0x7f5(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0x7f5(0x01)
	char bEnableLineCheckWithBounds : 1; // 0x7f5(0x01)
	char bUseBendingElements : 1; // 0x7f5(0x01)
	char bUseTetrahedralConstraints : 1; // 0x7f5(0x01)
	char bUseThinShellVolumeConstraints : 1; // 0x7f5(0x01)
	char bUseSelfCollisions : 1; // 0x7f5(0x01)
	char bUseContinuousCollisionDetection : 1; // 0x7f5(0x01)
	char bPropagateCurvesToSlaves : 1; // 0x7f6(0x01)
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x7f6(0x01)
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x7f6(0x01)
	char pad_7F6_3 : 1; // 0x7f6(0x01)
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x7f6(0x01)
	char pad_7F6_5 : 3; // 0x7f6(0x01)
	char pad_7F7[0x1]; // 0x7f7(0x01)
	uint16_t CachedAnimCurveUidVersion; // 0x7f8(0x02)
	enum class EClothMassMode MassMode; // 0x7fa(0x01)
	char pad_7FB[0x1]; // 0x7fb(0x01)
	float UniformMass; // 0x7fc(0x04)
	float TotalMass; // 0x800(0x04)
	float Density; // 0x804(0x04)
	float MinPerParticleMass; // 0x808(0x04)
	float ClothBlendWeight; // 0x80c(0x04)
	float EdgeStiffness; // 0x810(0x04)
	float BendingStiffness; // 0x814(0x04)
	float AreaStiffness; // 0x818(0x04)
	float VolumeStiffness; // 0x81c(0x04)
	float StrainLimitingStiffness; // 0x820(0x04)
	float ShapeTargetStiffness; // 0x824(0x04)
	struct TArray<struct FName> DisallowedAnimCurves; // 0x828(0x10)
	struct UBodySetup* BodySetup; // 0x838(0x08)
	char pad_840[0x8]; // 0x840(0x08)
	struct FMulticastInlineDelegate OnConstraintBroken; // 0x848(0x10)
	struct UClothingSimulationFactory* ClothingSimulationFactory; // 0x858(0x08)
	char pad_860[0xc8]; // 0x860(0xc8)
	float TeleportDistanceThreshold; // 0x928(0x04)
	float TeleportRotationThreshold; // 0x92c(0x04)
	char pad_930[0x8]; // 0x930(0x08)
	uint32_t LastPoseTickFrame; // 0x938(0x04)
	char pad_93C[0x54]; // 0x93c(0x54)
	struct UClothingSimulationInteractor* ClothingInteractor; // 0x990(0x08)
	char pad_998[0xc8]; // 0x998(0xc8)
	struct FMulticastInlineDelegate OnAnimInitialized; // 0xa60(0x10)
	char pad_A70[0x130]; // 0xa70(0x130)

	void UnlinkAnimClassLayers(struct UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.UnlinkAnimClassLayers // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimInstance
// Size: 0x2c0 (Inherited: 0x30)
struct UAnimInstance : UObject {
	struct USkeleton* CurrentSkeleton; // 0x30(0x08)
	enum class ERootMotionMode RootMotionMode; // 0x38(0x01)
	char bUseMultiThreadedAnimationUpdate : 1; // 0x39(0x01)
	char bUsingCopyPoseFromMesh : 1; // 0x39(0x01)
	char pad_39_2 : 2; // 0x39(0x01)
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x39(0x01)
	char bPropagateNotifiesToLinkedInstances : 1; // 0x39(0x01)
	char bQueueMontageEvents : 1; // 0x39(0x01)
	char pad_39_7 : 1; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FMulticastInlineDelegate OnMontageBlendingOut; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)
	struct FMulticastInlineDelegate OnMontageStarted; // 0x80(0x10)
	struct FMulticastInlineDelegate OnMontageEnded; // 0x90(0x10)
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0xa0(0x10)
	char pad_B0[0x90]; // 0xb0(0x90)
	struct FAnimNotifyQueue NotifyQueue; // 0x140(0x80)
	struct TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState; // 0x1c0(0x10)
	struct UDebugTabControl* TabControl; // 0x1d0(0x08)
	char pad_1D8[0xe8]; // 0x1d8(0xe8)

	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic); // Function Engine.AnimInstance.UnlockAIResources // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AudioComponent
// Size: 0x810 (Inherited: 0x220)
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; // 0x220(0x08)
	struct TArray<struct FAudioComponentParam> InstanceParameters; // 0x228(0x10)
	struct USoundClass* SoundClassOverride; // 0x238(0x08)
	char bAutoDestroy : 1; // 0x240(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x240(0x01)
	char bShouldRemainActiveIfDropped : 1; // 0x240(0x01)
	char bAllowSpatialization : 1; // 0x240(0x01)
	char bOverrideAttenuation : 1; // 0x240(0x01)
	char bOverrideSubtitlePriority : 1; // 0x240(0x01)
	char bIsUISound : 1; // 0x240(0x01)
	char bEnableLowPassFilter : 1; // 0x240(0x01)
	char bOverridePriority : 1; // 0x241(0x01)
	char bSuppressSubtitles : 1; // 0x241(0x01)
	char pad_241_2 : 6; // 0x241(0x01)
	char pad_242_0 : 3; // 0x242(0x01)
	char bAutoManageAttachment : 1; // 0x242(0x01)
	char pad_242_4 : 4; // 0x242(0x01)
	char pad_243[0x5]; // 0x243(0x05)
	struct FName AudioComponentUserID; // 0x248(0x08)
	float PitchModulationMin; // 0x250(0x04)
	float PitchModulationMax; // 0x254(0x04)
	float VolumeModulationMin; // 0x258(0x04)
	float VolumeModulationMax; // 0x25c(0x04)
	float VolumeMultiplier; // 0x260(0x04)
	int32_t EnvelopeFollowerAttackTime; // 0x264(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x268(0x04)
	float Priority; // 0x26c(0x04)
	float SubtitlePriority; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x278(0x08)
	float PitchMultiplier; // 0x280(0x04)
	float LowPassFilterFrequency; // 0x284(0x04)
	char pad_288[0x8]; // 0x288(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x290(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x298(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x638(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x640(0x50)
	char pad_690[0xc]; // 0x690(0x0c)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x69c(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x69d(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x69e(0x01)
	char pad_69F[0x1]; // 0x69f(0x01)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x6a0(0x10)
	char pad_6B0[0x18]; // 0x6b0(0x18)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x6c8(0x10)
	char pad_6D8[0x18]; // 0x6d8(0x18)
	struct FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x6f0(0x10)
	char pad_700[0x18]; // 0x700(0x18)
	struct FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x718(0x10)
	char pad_728[0x18]; // 0x728(0x18)
	struct FSoundModulation Modulation; // 0x740(0x10)
	struct FDelegate OnQueueSubtitles; // 0x750(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x760(0x08)
	struct FName AutoAttachSocketName; // 0x768(0x08)
	char pad_770[0xa0]; // 0x770(0xa0)

	void StopDelayed(float DelayTime); // Function Engine.AudioComponent.StopDelayed // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AssetImportData
// Size: 0x30 (Inherited: 0x30)
struct UAssetImportData : UObject {
};

// Class Engine.AssetUserData
// Size: 0x30 (Inherited: 0x30)
struct UAssetUserData : UObject {
};

// Class Engine.FXSystemComponent
// Size: 0x4a0 (Inherited: 0x4a0)
struct UFXSystemComponent : UPrimitiveComponent {

	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // Function Engine.FXSystemComponent.SetVectorParameter // (None) // @ game+0xfffffffec0000000
};

// Class Engine.FXSystemAsset
// Size: 0x38 (Inherited: 0x30)
struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.AnimNotifyState
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function Engine.AnimNotifyState.Received_NotifyTick // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SoundEffectPreset
// Size: 0x48 (Inherited: 0x30)
struct USoundEffectPreset : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.SoundEffectSourcePreset
// Size: 0x48 (Inherited: 0x48)
struct USoundEffectSourcePreset : USoundEffectPreset {
};

// Class Engine.SoundEffectSubmixPreset
// Size: 0x48 (Inherited: 0x48)
struct USoundEffectSubmixPreset : USoundEffectPreset {
};

// Class Engine.NavMovementComponent
// Size: 0x158 (Inherited: 0x118)
struct UNavMovementComponent : UMovementComponent {
	struct FNavAgentProperties NavAgentProps; // 0x118(0x30)
	float FixedPathBrakingDistance; // 0x148(0x04)
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x14c(0x01)
	char bUseAccelerationForPaths : 1; // 0x14c(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x14c(0x01)
	char pad_14C_3 : 5; // 0x14c(0x01)
	struct FMovementProperties MovementState; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	struct UObject* PathFollowingComp; // 0x150(0x08)

	void StopMovementKeepPathing(); // Function Engine.NavMovementComponent.StopMovementKeepPathing // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PawnMovementComponent
// Size: 0x160 (Inherited: 0x158)
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* PawnOwner; // 0x158(0x08)

	struct FVector K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CharacterMovementComponent
// Size: 0x670 (Inherited: 0x160)
struct UCharacterMovementComponent : UPawnMovementComponent {
	char pad_160[0x10]; // 0x160(0x10)
	struct ACharacter* CharacterOwner; // 0x170(0x08)
	float GravityScale; // 0x178(0x04)
	float MaxStepHeight; // 0x17c(0x04)
	float JumpZVelocity; // 0x180(0x04)
	float JumpOffJumpZFactor; // 0x184(0x04)
	float JumpOffSpeed; // 0x188(0x04)
	float WalkableFloorAngle; // 0x18c(0x04)
	float WalkableFloorZ; // 0x190(0x04)
	enum class EMovementMode MovementMode; // 0x194(0x01)
	char CustomMovementMode; // 0x195(0x01)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x196(0x01)
	char pad_197[0x1]; // 0x197(0x01)
	float GroundFriction; // 0x198(0x04)
	char pad_19C[0x20]; // 0x19c(0x20)
	float MaxWalkSpeed; // 0x1bc(0x04)
	float MaxWalkSpeedCrouched; // 0x1c0(0x04)
	float MaxSwimSpeed; // 0x1c4(0x04)
	float MaxFlySpeed; // 0x1c8(0x04)
	float MaxCustomMovementSpeed; // 0x1cc(0x04)
	float MaxAcceleration; // 0x1d0(0x04)
	float MinAnalogWalkSpeed; // 0x1d4(0x04)
	float BrakingFrictionFactor; // 0x1d8(0x04)
	float BrakingFriction; // 0x1dc(0x04)
	float BrakingSubStepTime; // 0x1e0(0x04)
	float BrakingDecelerationWalking; // 0x1e4(0x04)
	float BrakingDecelerationFalling; // 0x1e8(0x04)
	float BrakingDecelerationSwimming; // 0x1ec(0x04)
	float BrakingDecelerationFlying; // 0x1f0(0x04)
	float AirControl; // 0x1f4(0x04)
	float AirControlBoostMultiplier; // 0x1f8(0x04)
	float AirControlBoostVelocityThreshold; // 0x1fc(0x04)
	float FallingLateralFriction; // 0x200(0x04)
	float CrouchedHalfHeight; // 0x204(0x04)
	float Buoyancy; // 0x208(0x04)
	float PerchRadiusThreshold; // 0x20c(0x04)
	float PerchAdditionalHeight; // 0x210(0x04)
	struct FRotator RotationRate; // 0x214(0x0c)
	char bUseSeparateBrakingFriction : 1; // 0x220(0x01)
	char bApplyGravityWhileJumping : 1; // 0x220(0x01)
	char bUseControllerDesiredRotation : 1; // 0x220(0x01)
	char bOrientRotationToMovement : 1; // 0x220(0x01)
	char bSweepWhileNavWalking : 1; // 0x220(0x01)
	char pad_220_5 : 1; // 0x220(0x01)
	char bMovementInProgress : 1; // 0x220(0x01)
	char bEnableScopedMovementUpdates : 1; // 0x220(0x01)
	char bEnableServerDualMoveScopedMovementUpdates : 1; // 0x221(0x01)
	char bForceMaxAccel : 1; // 0x221(0x01)
	char bRunPhysicsWithNoController : 1; // 0x221(0x01)
	char bForceNextFloorCheck : 1; // 0x221(0x01)
	char bShrinkProxyCapsule : 1; // 0x221(0x01)
	char bCanWalkOffLedges : 1; // 0x221(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x221(0x01)
	char pad_221_7 : 1; // 0x221(0x01)
	char pad_222_0 : 1; // 0x222(0x01)
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x222(0x01)
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x222(0x01)
	char bDeferUpdateMoveComponent : 1; // 0x222(0x01)
	char bEnablePhysicsInteraction : 1; // 0x222(0x01)
	char bTouchForceScaledToMass : 1; // 0x222(0x01)
	char bPushForceScaledToMass : 1; // 0x222(0x01)
	char bPushForceUsingZOffset : 1; // 0x222(0x01)
	char bScalePushForceToVelocity : 1; // 0x223(0x01)
	char pad_223_1 : 7; // 0x223(0x01)
	char pad_224[0x4]; // 0x224(0x04)
	struct USceneComponent* DeferredUpdatedMoveComponent; // 0x228(0x08)
	float MaxOutOfWaterStepHeight; // 0x230(0x04)
	float OutofWaterZ; // 0x234(0x04)
	float Mass; // 0x238(0x04)
	float StandingDownwardForceScale; // 0x23c(0x04)
	float InitialPushForceFactor; // 0x240(0x04)
	float PushForceFactor; // 0x244(0x04)
	float PushForcePointZOffsetFactor; // 0x248(0x04)
	float TouchForceFactor; // 0x24c(0x04)
	float MinTouchForce; // 0x250(0x04)
	float MaxTouchForce; // 0x254(0x04)
	float RepulsionForce; // 0x258(0x04)
	struct FVector Acceleration; // 0x25c(0x0c)
	char pad_268[0x8]; // 0x268(0x08)
	struct FQuat LastUpdateRotation; // 0x270(0x10)
	struct FVector LastUpdateLocation; // 0x280(0x0c)
	struct FVector LastUpdateVelocity; // 0x28c(0x0c)
	float ServerLastTransformUpdateTimeStamp; // 0x298(0x04)
	float ServerLastClientGoodMoveAckTime; // 0x29c(0x04)
	float ServerLastClientAdjustmentTime; // 0x2a0(0x04)
	struct FVector PendingImpulseToApply; // 0x2a4(0x0c)
	struct FVector PendingForceToApply; // 0x2b0(0x0c)
	float AnalogInputModifier; // 0x2bc(0x04)
	char pad_2C0[0xc]; // 0x2c0(0x0c)
	float MaxSimulationTimeStep; // 0x2cc(0x04)
	int32_t MaxSimulationIterations; // 0x2d0(0x04)
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x2d4(0x04)
	float MaxDepenetrationWithGeometry; // 0x2d8(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x2dc(0x04)
	float MaxDepenetrationWithPawn; // 0x2e0(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x2e4(0x04)
	float NetworkSimulatedSmoothLocationTime; // 0x2e8(0x04)
	float NetworkSimulatedSmoothRotationTime; // 0x2ec(0x04)
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2f0(0x04)
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2f4(0x04)
	float NetProxyShrinkRadius; // 0x2f8(0x04)
	float NetProxyShrinkHalfHeight; // 0x2fc(0x04)
	float NetworkMaxSmoothUpdateDistance; // 0x300(0x04)
	float NetworkNoSmoothUpdateDistance; // 0x304(0x04)
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x308(0x04)
	float NetworkMinTimeBetweenClientAdjustments; // 0x30c(0x04)
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x310(0x04)
	float NetworkLargeClientCorrectionDistance; // 0x314(0x04)
	float LedgeCheckThreshold; // 0x318(0x04)
	float JumpOutOfWaterPitch; // 0x31c(0x04)
	struct FFindFloorResult CurrentFloor; // 0x320(0x94)
	enum class EMovementMode DefaultLandMovementMode; // 0x3b4(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x3b5(0x01)
	enum class EMovementMode GroundMovementMode; // 0x3b6(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x3b7(0x01)
	char bImpartBaseVelocityX : 1; // 0x3b7(0x01)
	char bImpartBaseVelocityY : 1; // 0x3b7(0x01)
	char bImpartBaseVelocityZ : 1; // 0x3b7(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x3b7(0x01)
	char bJustTeleported : 1; // 0x3b7(0x01)
	char bNetworkUpdateReceived : 1; // 0x3b7(0x01)
	char bNetworkMovementModeChanged : 1; // 0x3b7(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x3b8(0x01)
	char bServerAcceptClientAuthoritativePosition : 1; // 0x3b8(0x01)
	char bNotifyApex : 1; // 0x3b8(0x01)
	char bCheatFlying : 1; // 0x3b8(0x01)
	char bWantsToCrouch : 1; // 0x3b8(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x3b8(0x01)
	char bIgnoreBaseRotation : 1; // 0x3b8(0x01)
	char bFastAttachedMove : 1; // 0x3b8(0x01)
	char bAlwaysCheckFloor : 1; // 0x3b9(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x3b9(0x01)
	char bPerformingJumpOff : 1; // 0x3b9(0x01)
	char bWantsToLeaveNavWalking : 1; // 0x3b9(0x01)
	char bUseRVOAvoidance : 1; // 0x3b9(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x3b9(0x01)
	char pad_3B9_6 : 2; // 0x3b9(0x01)
	char pad_3BA[0xe]; // 0x3ba(0x0e)
	char bWasSimulatingRootMotion : 1; // 0x3c8(0x01)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x3c8(0x01)
	char bHasRequestedVelocity : 1; // 0x3c8(0x01)
	char bRequestedMoveWithMaxSpeed : 1; // 0x3c8(0x01)
	char bWasAvoidanceUpdated : 1; // 0x3c8(0x01)
	char pad_3C8_5 : 2; // 0x3c8(0x01)
	char bProjectNavMeshWalking : 1; // 0x3c8(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x3c9(0x01)
	char pad_3C9_1 : 7; // 0x3c9(0x01)
	char pad_3CA[0x12]; // 0x3ca(0x12)
	float AvoidanceConsiderationRadius; // 0x3dc(0x04)
	struct FVector RequestedVelocity; // 0x3e0(0x0c)
	int32_t AvoidanceUID; // 0x3ec(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x3f0(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x3f4(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x3f8(0x04)
	float AvoidanceWeight; // 0x3fc(0x04)
	struct FVector PendingLaunchVelocity; // 0x400(0x0c)
	char pad_40C[0xa4]; // 0x40c(0xa4)
	float NavMeshProjectionInterval; // 0x4b0(0x04)
	float NavMeshProjectionTimer; // 0x4b4(0x04)
	float NavMeshProjectionInterpSpeed; // 0x4b8(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x4bc(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x4c0(0x04)
	float NavWalkingFloorDistTolerance; // 0x4c4(0x04)
	struct FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x4c8(0x30)
	char pad_4F8[0x2c]; // 0x4f8(0x2c)
	float MinTimeBetweenTimeStampResets; // 0x524(0x04)
	char pad_528[0x8]; // 0x528(0x08)
	struct FRootMotionSourceGroup CurrentRootMotion; // 0x530(0x38)
	char pad_568[0x98]; // 0x568(0x98)
	struct FRootMotionMovementParams RootMotionParams; // 0x600(0x40)
	char pad_640[0x4]; // 0x640(0x04)
	struct FVector AnimRootMotionVelocity; // 0x644(0x0c)
	char pad_650[0x20]; // 0x650(0x20)

	void SetWalkableFloorZ(float InWalkableFloorZ); // Function Engine.CharacterMovementComponent.SetWalkableFloorZ // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimMetaData
// Size: 0x30 (Inherited: 0x30)
struct UAnimMetaData : UObject {
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x90 (Inherited: 0x40)
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	struct FVector Scale; // 0x60(0x0c)
	char pad_6C[0x14]; // 0x6c(0x14)
	char Attached : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName SocketName; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0xb8 (Inherited: 0x38)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	bool bDestroyAtEnd; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName OverrideComponentTag; // 0x64(0x08)
	enum class EAttachLocation AttachLocationType; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FGameplayTagQuery TagQueryRequirment; // 0x70(0x48)
};

// Class Engine.PhysicsVolume
// Size: 0x298 (Inherited: 0x288)
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x288(0x04)
	int32_t Priority; // 0x28c(0x04)
	float FluidFriction; // 0x290(0x04)
	char bWaterVolume : 1; // 0x294(0x01)
	char bPhysicsOnContact : 1; // 0x294(0x01)
	char pad_294_2 : 6; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
};

// Class Engine.Controller
// Size: 0x2b8 (Inherited: 0x250)
struct AController : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct APlayerState* PlayerState; // 0x258(0x08)
	char pad_260[0x8]; // 0x260(0x08)
	struct FName StateName; // 0x268(0x08)
	struct APawn* Pawn; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
	struct ACharacter* Character; // 0x280(0x08)
	struct USceneComponent* TransformComponent; // 0x288(0x08)
	char pad_290[0x18]; // 0x290(0x18)
	struct FRotator ControlRotation; // 0x2a8(0x0c)
	char bAttachToPawn : 1; // 0x2b4(0x01)
	char pad_2B4_1 : 7; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)

	void UnPossess(); // Function Engine.Controller.UnPossess // (None) // @ game+0xfffffffec0000000
};

// Class Engine.GameModeBase
// Size: 0x2f0 (Inherited: 0x250)
struct AGameModeBase : AInfo {
	struct FString OptionsString; // 0x250(0x10)
	struct AGameSession* GameSessionClass; // 0x260(0x08)
	struct AGameStateBase* GameStateClass; // 0x268(0x08)
	struct APlayerController* PlayerControllerClass; // 0x270(0x08)
	struct APlayerState* PlayerStateClass; // 0x278(0x08)
	struct AHUD* HUDClass; // 0x280(0x08)
	struct APawn* DefaultPawnClass; // 0x288(0x08)
	struct ASpectatorPawn* SpectatorClass; // 0x290(0x08)
	struct APlayerController* ReplaySpectatorPlayerControllerClass; // 0x298(0x08)
	struct AServerStatReplicator* ServerStatReplicatorClass; // 0x2a0(0x08)
	struct AGameSession* GameSession; // 0x2a8(0x08)
	struct AGameStateBase* GameState; // 0x2b0(0x08)
	struct AServerStatReplicator* ServerStatReplicator; // 0x2b8(0x08)
	struct FText DefaultPlayerName; // 0x2c0(0x18)
	char bUseSeamlessTravel : 1; // 0x2d8(0x01)
	char bStartPlayersAsSpectators : 1; // 0x2d8(0x01)
	char bPauseable : 1; // 0x2d8(0x01)
	char pad_2D8_3 : 5; // 0x2d8(0x01)
	char pad_2D9[0x17]; // 0x2d9(0x17)

	void StartPlay(); // Function Engine.GameModeBase.StartPlay // (None) // @ game+0xfffffffec0000000
};

// Class Engine.GameMode
// Size: 0x338 (Inherited: 0x2f0)
struct AGameMode : AGameModeBase {
	struct FName MatchState; // 0x2f0(0x08)
	char bDelayedStart : 1; // 0x2f8(0x01)
	char pad_2F8_1 : 7; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	int32_t NumSpectators; // 0x2fc(0x04)
	int32_t NumPlayers; // 0x300(0x04)
	int32_t NumBots; // 0x304(0x04)
	float MinRespawnDelay; // 0x308(0x04)
	int32_t NumTravellingPlayers; // 0x30c(0x04)
	struct ULocalMessage* EngineMessageClass; // 0x310(0x08)
	struct TArray<struct APlayerState*> InactivePlayerArray; // 0x318(0x10)
	float InactivePlayerStateLifeSpan; // 0x328(0x04)
	int32_t MaxInactivePlayers; // 0x32c(0x04)
	bool bHandleDedicatedServerReplays; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)

	void StartMatch(); // Function Engine.GameMode.StartMatch // (None) // @ game+0xfffffffec0000000
};

// Class Engine.LevelScriptActor
// Size: 0x258 (Inherited: 0x250)
struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x250(0x01)
	char pad_250_1 : 7; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)

	void WorldOriginLocationChanged(struct FIntVector OldOriginLocation, struct FIntVector NewOriginLocation); // Function Engine.LevelScriptActor.WorldOriginLocationChanged // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CameraModifier
// Size: 0x50 (Inherited: 0x30)
struct UCameraModifier : UObject {
	char bDebug : 1; // 0x30(0x01)
	char bExclusive : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	char Priority; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x38(0x08)
	float AlphaInTime; // 0x40(0x04)
	float AlphaOutTime; // 0x44(0x04)
	float Alpha; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	bool IsPendingDisable(); // Function Engine.CameraModifier.IsPendingDisable // (None) // @ game+0xfffffffec0000000
};

// Class Engine.GameStateBase
// Size: 0x2a0 (Inherited: 0x250)
struct AGameStateBase : AInfo {
	struct AGameModeBase* GameModeClass; // 0x250(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x258(0x08)
	struct ASpectatorPawn* SpectatorClass; // 0x260(0x08)
	struct TArray<struct APlayerState*> PlayerArray; // 0x268(0x10)
	bool bReplicatedHasBegunPlay; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float ReplicatedWorldTimeSeconds; // 0x27c(0x04)
	float ServerWorldTimeSecondsDelta; // 0x280(0x04)
	float ServerWorldTimeSecondsUpdateFrequency; // 0x284(0x04)
	char pad_288[0x18]; // 0x288(0x18)

	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass // (None) // @ game+0xfffffffec0000000
};

// Class Engine.GameState
// Size: 0x2c0 (Inherited: 0x2a0)
struct AGameState : AGameStateBase {
	struct FName MatchState; // 0x2a0(0x08)
	struct FName PreviousMatchState; // 0x2a8(0x08)
	int32_t ElapsedTime; // 0x2b0(0x04)
	char pad_2B4[0xc]; // 0x2b4(0x0c)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState // (None) // @ game+0xfffffffec0000000
};

// Class Engine.BlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct ABlockingVolume : AVolume {
};

// Class Engine.TriggerVolume
// Size: 0x288 (Inherited: 0x288)
struct ATriggerVolume : AVolume {
};

// Class Engine.ParticleSystemComponent
// Size: 0x730 (Inherited: 0x4a0)
struct UParticleSystemComponent : UFXSystemComponent {
	struct UParticleSystem* Template; // 0x4a0(0x08)
	struct TArray<struct UMaterialInterface*> EmitterMaterials; // 0x4a8(0x10)
	struct TArray<struct USkeletalMeshComponent*> SkelMeshComponents; // 0x4b8(0x10)
	char pad_4C8[0x1]; // 0x4c8(0x01)
	char bResetOnDetach : 1; // 0x4c9(0x01)
	char bUpdateOnDedicatedServer : 1; // 0x4c9(0x01)
	char pad_4C9_2 : 2; // 0x4c9(0x01)
	char bAllowRecycling : 1; // 0x4c9(0x01)
	char bAutoManageAttachment : 1; // 0x4c9(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x4c9(0x01)
	char pad_4C9_7 : 1; // 0x4c9(0x01)
	char pad_4CA_0 : 1; // 0x4ca(0x01)
	char bWarmingUp : 1; // 0x4ca(0x01)
	char bOverrideLODMethod : 1; // 0x4ca(0x01)
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x4ca(0x01)
	char pad_4CA_4 : 4; // 0x4ca(0x01)
	char pad_4CB[0xa]; // 0x4cb(0x0a)
	enum class ParticleSystemLODMethod LODMethod; // 0x4d5(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0x4d6(0x01)
	char pad_4D7[0x1]; // 0x4d7(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x508(0x10)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x518(0x10)
	char pad_528[0x18]; // 0x528(0x18)
	bool bOldPositionValid; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	struct FVector OldPosition; // 0x544(0x0c)
	struct FVector PartSysVelocity; // 0x550(0x0c)
	float WarmupTime; // 0x55c(0x04)
	float WarmupTickRate; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	float SecondsBeforeInactive; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	float MaxTimeBeforeForceUpdateTransform; // 0x570(0x04)
	char pad_574[0x1c]; // 0x574(0x1c)
	struct TArray<struct UParticleSystemReplay*> ReplayClips; // 0x590(0x10)
	char pad_5A0[0x8]; // 0x5a0(0x08)
	float CustomTimeDilation; // 0x5a8(0x04)
	char pad_5AC[0x54]; // 0x5ac(0x54)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x600(0x08)
	struct FName AutoAttachSocketName; // 0x608(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x610(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x611(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x612(0x01)
	char pad_613[0x2d]; // 0x613(0x2d)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x640(0x10)
	char pad_650[0xe0]; // 0x650(0xe0)

	void SetVectorRandParameter(struct FName ParameterName, struct FVector Param, struct FVector ParamLow); // Function Engine.ParticleSystemComponent.SetVectorRandParameter // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StaticMeshComponent
// Size: 0x5b0 (Inherited: 0x520)
struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x518(0x04)
	int32_t PreviousLODLevel; // 0x51c(0x04)
	int32_t MinLOD; // 0x520(0x04)
	int32_t SubDivisionStepSize; // 0x524(0x04)
	struct UStaticMesh* StaticMesh; // 0x528(0x08)
	struct FColor WireframeColorOverride; // 0x530(0x04)
	char bEvaluateWorldPositionOffset : 1; // 0x534(0x01)
	char bOverrideWireframeColor : 1; // 0x534(0x01)
	char bOverrideMinLod : 1; // 0x534(0x01)
	char bOverrideNavigationExport : 1; // 0x534(0x01)
	char bForceNavigationObstacle : 1; // 0x534(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0x534(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0x534(0x01)
	char bOverrideLightMapRes : 1; // 0x534(0x01)
	char bCastDistanceFieldIndirectShadow : 1; // 0x535(0x01)
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x535(0x01)
	char bUseSubDivisions : 1; // 0x535(0x01)
	char bUseDefaultCollision : 1; // 0x535(0x01)
	char bUseBoundsForSectorInclusion : 1; // 0x535(0x01)
	char bIncludeOutdoorSectors : 1; // 0x535(0x01)
	char bExclusiveOutdoorSectors : 1; // 0x535(0x01)
	char bInheritLightShadowPropertiesFromMesh : 1; // 0x535(0x01)
	char bReverseCulling : 1; // 0x536(0x01)
	int32_t OverriddenLightMapRes; // 0x538(0x04)
	float DistanceFieldIndirectShadowMinVisibility; // 0x53c(0x04)
	float DistanceFieldSelfShadowBias; // 0x540(0x04)
	float StreamingDistanceMultiplier; // 0x544(0x04)
	struct TArray<struct FStaticMeshComponentLODInfo> LODData; // 0x548(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x558(0x10)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x568(0x18)
	struct FPrimitiveParameterCollectionOverrides CollectionOverrides; // 0x580(0x30)

	bool SetStaticMesh(struct UStaticMesh* NewMesh); // Function Engine.StaticMeshComponent.SetStaticMesh // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CameraShake
// Size: 0x170 (Inherited: 0x30)
struct UCameraShake : UObject {
	char bSingleInstance : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float OscillationDuration; // 0x34(0x04)
	float OscillationBlendInTime; // 0x38(0x04)
	float OscillationBlendOutTime; // 0x3c(0x04)
	struct FROscillator RotOscillation; // 0x40(0x24)
	struct FVOscillator LocOscillation; // 0x64(0x24)
	struct FFOscillator FOVOscillation; // 0x88(0x0c)
	float AnimPlayRate; // 0x94(0x04)
	float AnimScale; // 0x98(0x04)
	float AnimBlendInTime; // 0x9c(0x04)
	float AnimBlendOutTime; // 0xa0(0x04)
	float RandomAnimSegmentDuration; // 0xa4(0x04)
	struct UCameraAnim* Anim; // 0xa8(0x08)
	char bRandomAnimSegment : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x17]; // 0xb1(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc8(0x08)
	char pad_D0[0x88]; // 0xd0(0x88)
	float ShakeScale; // 0x158(0x04)
	float OscillatorTimeRemaining; // 0x15c(0x04)
	struct UCameraAnimInst* AnimInst; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)

	void ReceiveStopShake(bool bImmediately); // Function Engine.CameraShake.ReceiveStopShake // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Pawn
// Size: 0x2a8 (Inherited: 0x250)
struct APawn : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	char bUseControllerRotationPitch : 1; // 0x258(0x01)
	char bUseControllerRotationYaw : 1; // 0x258(0x01)
	char bUseControllerRotationRoll : 1; // 0x258(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x258(0x01)
	char pad_258_4 : 4; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float BaseEyeHeight; // 0x25c(0x04)
	enum class EAutoReceiveInput AutoPossessPlayer; // 0x260(0x01)
	enum class EAutoPossessAI AutoPossessAI; // 0x261(0x01)
	char RemoteViewPitch; // 0x262(0x01)
	char pad_263[0x5]; // 0x263(0x05)
	struct AController* AIControllerClass; // 0x268(0x08)
	struct APlayerState* PlayerState; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
	struct AController* Controller; // 0x280(0x08)
	char pad_288[0x4]; // 0x288(0x04)
	struct FVector ControlInputVector; // 0x28c(0x0c)
	struct FVector LastControlInputVector; // 0x298(0x0c)
	char pad_2A4[0x4]; // 0x2a4(0x04)

	void SpawnDefaultController(); // Function Engine.Pawn.SpawnDefaultController // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Character
// Size: 0x580 (Inherited: 0x2a8)
struct ACharacter : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x2a8(0x08)
	struct UCharacterMovementComponent* CharacterMovement; // 0x2b0(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x2b8(0x08)
	struct FBasedMovementInfo BasedMovement; // 0x2c0(0x30)
	struct FBasedMovementInfo ReplicatedBasedMovement; // 0x2f0(0x30)
	float AnimRootMotionTranslationScale; // 0x320(0x04)
	struct FVector BaseTranslationOffset; // 0x324(0x0c)
	struct FQuat BaseRotationOffset; // 0x330(0x10)
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x340(0x04)
	float ReplayLastTransformUpdateTimeStamp; // 0x344(0x04)
	char ReplicatedMovementMode; // 0x348(0x01)
	bool bInBaseReplication; // 0x349(0x01)
	char pad_34A[0x2]; // 0x34a(0x02)
	float CrouchedEyeHeight; // 0x34c(0x04)
	char bIsCrouched : 1; // 0x350(0x01)
	char bProxyIsJumpForceApplied : 1; // 0x350(0x01)
	char bPressedJump : 1; // 0x350(0x01)
	char bClientUpdating : 1; // 0x350(0x01)
	char bClientWasFalling : 1; // 0x350(0x01)
	char bClientResimulateRootMotion : 1; // 0x350(0x01)
	char bClientResimulateRootMotionSources : 1; // 0x350(0x01)
	char bSimGravityDisabled : 1; // 0x350(0x01)
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x351(0x01)
	char bServerMoveIgnoreRootMotion : 1; // 0x351(0x01)
	char bWasJumping : 1; // 0x351(0x01)
	char pad_351_3 : 5; // 0x351(0x01)
	char pad_352[0x2]; // 0x352(0x02)
	float JumpForceTimeRemaining; // 0x354(0x04)
	float ProxyJumpForceStartedTime; // 0x358(0x04)
	float JumpKeyHoldTime; // 0x35c(0x04)
	float JumpMaxHoldTime; // 0x360(0x04)
	int32_t JumpMaxCount; // 0x364(0x04)
	int32_t JumpCurrentCount; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FMulticastInlineDelegate OnReachedJumpApex; // 0x370(0x10)
	char pad_380[0x10]; // 0x380(0x10)
	struct FMulticastInlineDelegate MovementModeChangedDelegate; // 0x390(0x10)
	struct FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x3a0(0x10)
	struct FRootMotionSourceGroup SavedRootMotion; // 0x3b0(0x38)
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct FRootMotionMovementParams ClientRootMotionParams; // 0x3f0(0x40)
	struct TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x430(0x10)
	struct FRepRootMotionMontage RepRootMotion; // 0x440(0x98)
	struct FRepRootMotionMontageHighFreq RepRootMotionHighFreq; // 0x4d8(0x28)
	struct FRepRootMotionMontageLowFreq RepRootMotionLowFreq; // 0x500(0x70)
	char pad_570[0x10]; // 0x570(0x10)

	void UnCrouch(bool bClientSimulation); // Function Engine.Character.UnCrouch // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DPICustomScalingRule
// Size: 0x30 (Inherited: 0x30)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.PlayerController
// Size: 0x5d0 (Inherited: 0x2b8)
struct APlayerController : AController {
	struct UPlayer* Player; // 0x2b8(0x08)
	struct APawn* AcknowledgedPawn; // 0x2c0(0x08)
	struct UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2c8(0x08)
	struct AHUD* MyHUD; // 0x2d0(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x2d8(0x08)
	struct APlayerCameraManager* PlayerCameraManagerClass; // 0x2e0(0x08)
	bool bAutoManageActiveCameraTarget; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	struct FRotator TargetViewRotation; // 0x2ec(0x0c)
	char pad_2F8[0xc]; // 0x2f8(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x304(0x04)
	char pad_308[0x8]; // 0x308(0x08)
	struct TArray<struct AActor*> HiddenActors; // 0x310(0x10)
	struct TArray<struct TWeakObjectPtr<struct UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x320(0x10)
	char pad_330[0x4]; // 0x330(0x04)
	float LastSpectatorStateSynchTime; // 0x334(0x04)
	struct FVector LastSpectatorSyncLocation; // 0x338(0x0c)
	struct FRotator LastSpectatorSyncRotation; // 0x344(0x0c)
	int32_t ClientCap; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UCheatManager* CheatManager; // 0x358(0x08)
	struct UCheatManager* CheatClass; // 0x360(0x08)
	struct UPlayerInput* PlayerInputClassOverride; // 0x368(0x08)
	struct UPlayerInput* PlayerInput; // 0x370(0x08)
	struct TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x378(0x10)
	char pad_388[0x70]; // 0x388(0x70)
	char pad_3F8_0 : 4; // 0x3f8(0x01)
	char bPlayerIsWaiting : 1; // 0x3f8(0x01)
	char pad_3F8_5 : 3; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	char NetPlayerIndex; // 0x3fc(0x01)
	char pad_3FD[0x3b]; // 0x3fd(0x3b)
	struct UNetConnection* PendingSwapConnection; // 0x438(0x08)
	struct UNetConnection* NetConnection; // 0x440(0x08)
	char pad_448[0xc]; // 0x448(0x0c)
	float InputYawScale; // 0x454(0x04)
	float InputPitchScale; // 0x458(0x04)
	float InputRollScale; // 0x45c(0x04)
	char bShowMouseCursor : 1; // 0x460(0x01)
	char bEnableClickEvents : 1; // 0x460(0x01)
	char bEnableTouchEvents : 1; // 0x460(0x01)
	char bEnableMouseOverEvents : 1; // 0x460(0x01)
	char bEnableTouchOverEvents : 1; // 0x460(0x01)
	char bForceFeedbackEnabled : 1; // 0x460(0x01)
	char pad_460_6 : 2; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float ForceFeedbackScale; // 0x464(0x04)
	struct TArray<struct FKey> ClickEventKeys; // 0x468(0x10)
	enum class EMouseCursor DefaultMouseCursor; // 0x478(0x01)
	enum class EMouseCursor CurrentMouseCursor; // 0x479(0x01)
	enum class ECollisionChannel DefaultClickTraceChannel; // 0x47a(0x01)
	enum class ECollisionChannel CurrentClickTraceChannel; // 0x47b(0x01)
	float HitResultTraceDistance; // 0x47c(0x04)
	uint16_t SeamlessTravelCount; // 0x480(0x02)
	uint16_t LastCompletedSeamlessTravelCount; // 0x482(0x02)
	char pad_484[0x4]; // 0x484(0x04)
	struct FMulticastInlineDelegate OnPreUpdatePawnRotation; // 0x488(0x10)
	struct FMulticastInlineDelegate OnPostUpdatePawnRotation; // 0x498(0x10)
	char pad_4A8[0x88]; // 0x4a8(0x88)
	struct UInputComponent* InactiveStateInputComponent; // 0x530(0x08)
	char pad_538_0 : 2; // 0x538(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x538(0x01)
	char pad_538_3 : 5; // 0x538(0x01)
	char pad_539[0x17]; // 0x539(0x17)
	struct UTouchInterface* CurrentTouchInterface; // 0x550(0x08)
	char pad_558[0x50]; // 0x558(0x50)
	struct ASpectatorPawn* SpectatorPawn; // 0x5a8(0x08)
	char pad_5B0[0x4]; // 0x5b0(0x04)
	bool bIsLocalPlayerController; // 0x5b4(0x01)
	char pad_5B5[0x3]; // 0x5b5(0x03)
	struct FVector SpawnLocation; // 0x5b8(0x0c)
	char pad_5C4[0xc]; // 0x5c4(0x0c)

	bool WasInputKeyJustReleased(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustReleased // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PlayerCameraManager
// Size: 0x2830 (Inherited: 0x250)
struct APlayerCameraManager : AActor {
	struct APlayerController* PCOwner; // 0x250(0x08)
	struct USceneComponent* TransformComponent; // 0x258(0x08)
	char pad_260[0x8]; // 0x260(0x08)
	float DefaultFOV; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	float DefaultOrthoWidth; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	float DefaultAspectRatio; // 0x278(0x04)
	char pad_27C[0x44]; // 0x27c(0x44)
	struct FCameraCacheEntry CameraCache; // 0x2c0(0x600)
	struct FCameraCacheEntry LastFrameCameraCache; // 0x8c0(0x600)
	struct FTViewTarget ViewTarget; // 0xec0(0x610)
	struct FTViewTarget PendingViewTarget; // 0x14d0(0x610)
	char pad_1AE0[0x30]; // 0x1ae0(0x30)
	struct FCameraCacheEntry CameraCachePrivate; // 0x1b10(0x600)
	struct FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2110(0x600)
	struct TArray<struct UCameraModifier*> ModifierList; // 0x2710(0x10)
	struct TArray<struct UCameraModifier*> DefaultModifiers; // 0x2720(0x10)
	float FreeCamDistance; // 0x2730(0x04)
	struct FVector FreeCamOffset; // 0x2734(0x0c)
	struct FVector ViewTargetOffset; // 0x2740(0x0c)
	char pad_274C[0x14]; // 0x274c(0x14)
	struct TArray<struct AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2760(0x10)
	struct UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2770(0x08)
	struct UCameraAnimInst* AnimInstPool[0x8]; // 0x2778(0x40)
	struct TArray<struct FPostProcessSettings> PostProcessBlendCache; // 0x27b8(0x10)
	char pad_27C8[0x10]; // 0x27c8(0x10)
	struct TArray<struct UCameraAnimInst*> ActiveAnims; // 0x27d8(0x10)
	struct TArray<struct UCameraAnimInst*> FreeAnims; // 0x27e8(0x10)
	struct ACameraActor* AnimCameraActor; // 0x27f8(0x08)
	char bIsOrthographic : 1; // 0x2800(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x2800(0x01)
	char pad_2800_2 : 4; // 0x2800(0x01)
	char bClientSimulatingViewTarget : 1; // 0x2800(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x2800(0x01)
	char pad_2801_0 : 2; // 0x2801(0x01)
	char bGameCameraCutThisFrame : 1; // 0x2801(0x01)
	char pad_2801_3 : 5; // 0x2801(0x01)
	char pad_2802[0x2]; // 0x2802(0x02)
	float ViewPitchMin; // 0x2804(0x04)
	float ViewPitchMax; // 0x2808(0x04)
	float ViewYawMin; // 0x280c(0x04)
	float ViewYawMax; // 0x2810(0x04)
	float ViewRollMin; // 0x2814(0x04)
	float ViewRollMax; // 0x2818(0x04)
	char pad_281C[0x4]; // 0x281c(0x04)
	float ServerUpdateCameraTimeout; // 0x2820(0x04)
	char pad_2824[0xc]; // 0x2824(0x0c)

	void StopCameraShake(struct UCameraShake* ShakeInstance, bool bImmediately); // Function Engine.PlayerCameraManager.StopCameraShake // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PlayerInput
// Size: 0x3b0 (Inherited: 0x30)
struct UPlayerInput : UObject {
	char pad_30[0xf8]; // 0x30(0xf8)
	struct TArray<struct FKeyBind> DebugExecBindings; // 0x128(0x10)
	char pad_138[0x30]; // 0x138(0x30)
	struct TArray<struct FName> InvertedAxis; // 0x168(0x10)
	char pad_178[0x238]; // 0x178(0x238)

	void SetMouseSensitivity(float Sensitivity); // Function Engine.PlayerInput.SetMouseSensitivity // (None) // @ game+0xfffffffec0000000
};

// Class Engine.NavigationObjectBase
// Size: 0x278 (Inherited: 0x250)
struct ANavigationObjectBase : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x258(0x08)
	struct UBillboardComponent* GoodSprite; // 0x260(0x08)
	struct UBillboardComponent* BadSprite; // 0x268(0x08)
	char bIsPIEPlayerStart : 1; // 0x270(0x01)
	char pad_270_1 : 7; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
};

// Class Engine.PlayerStart
// Size: 0x280 (Inherited: 0x278)
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x278(0x08)
};

// Class Engine.PlayerState
// Size: 0x350 (Inherited: 0x250)
struct APlayerState : AInfo {
	float Score; // 0x250(0x04)
	int32_t PlayerId; // 0x254(0x04)
	char Ping; // 0x258(0x01)
	char pad_259[0x1]; // 0x259(0x01)
	char bShouldUpdateReplicatedPing : 1; // 0x25a(0x01)
	char bIsSpectator : 1; // 0x25a(0x01)
	char bOnlySpectator : 1; // 0x25a(0x01)
	char bIsABot : 1; // 0x25a(0x01)
	char pad_25A_4 : 1; // 0x25a(0x01)
	char bIsInactive : 1; // 0x25a(0x01)
	char bFromPreviousLevel : 1; // 0x25a(0x01)
	char pad_25A_7 : 1; // 0x25a(0x01)
	char pad_25B[0x1]; // 0x25b(0x01)
	int32_t StartTime; // 0x25c(0x04)
	struct ULocalMessage* EngineMessageClass; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)
	struct FString SavedNetworkAddress; // 0x270(0x10)
	struct FUniqueNetIdRepl UniqueId; // 0x280(0x28)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct APawn* PawnPrivate; // 0x2b0(0x08)
	char pad_2B8[0x78]; // 0x2b8(0x78)
	struct FString PlayerNamePrivate; // 0x330(0x10)
	char pad_340[0x10]; // 0x340(0x10)

	void ReceiveOverrideWith(struct APlayerState* OldPlayerState); // Function Engine.PlayerState.ReceiveOverrideWith // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ProjectileMovementComponent
// Size: 0x200 (Inherited: 0x118)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x118(0x04)
	float MaxSpeed; // 0x11c(0x04)
	char bRotationFollowsVelocity : 1; // 0x120(0x01)
	char bRotationRemainsVertical : 1; // 0x120(0x01)
	char bShouldBounce : 1; // 0x120(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0x120(0x01)
	char bForceSubStepping : 1; // 0x120(0x01)
	char bSimulationEnabled : 1; // 0x120(0x01)
	char bSweepCollision : 1; // 0x120(0x01)
	char bIsHomingProjectile : 1; // 0x120(0x01)
	char bBounceAngleAffectsFriction : 1; // 0x121(0x01)
	char bIsSliding : 1; // 0x121(0x01)
	char bInterpMovement : 1; // 0x121(0x01)
	char bInterpRotation : 1; // 0x121(0x01)
	char pad_121_4 : 4; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	float PreviousHitTime; // 0x124(0x04)
	struct FVector PreviousHitNormal; // 0x128(0x0c)
	float ProjectileGravityScale; // 0x134(0x04)
	float Buoyancy; // 0x138(0x04)
	float Bounciness; // 0x13c(0x04)
	float Friction; // 0x140(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x144(0x04)
	float MinFrictionFraction; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FMulticastInlineDelegate OnProjectileBounce; // 0x150(0x10)
	struct FMulticastInlineDelegate OnProjectileStop; // 0x160(0x10)
	float HomingAccelerationMagnitude; // 0x170(0x04)
	struct TWeakObjectPtr<struct USceneComponent> HomingTargetComponent; // 0x174(0x08)
	float MaxSimulationTimeStep; // 0x17c(0x04)
	int32_t MaxSimulationIterations; // 0x180(0x04)
	int32_t BounceAdditionalIterations; // 0x184(0x04)
	float InterpLocationTime; // 0x188(0x04)
	float InterpRotationTime; // 0x18c(0x04)
	float InterpLocationMaxLagDistance; // 0x190(0x04)
	float InterpLocationSnapToTargetDistance; // 0x194(0x04)
	char pad_198[0x68]; // 0x198(0x68)

	void StopSimulating(struct FHitResult HitResult); // Function Engine.ProjectileMovementComponent.StopSimulating // (None) // @ game+0xfffffffec0000000
};

// Class Engine.FloatingPawnMovement
// Size: 0x178 (Inherited: 0x160)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x160(0x04)
	float Acceleration; // 0x164(0x04)
	float Deceleration; // 0x168(0x04)
	float TurningBoost; // 0x16c(0x04)
	char bPositionCorrected : 1; // 0x170(0x01)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x180 (Inherited: 0x178)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
};

// Class Engine.DefaultPawn
// Size: 0x2d0 (Inherited: 0x2a8)
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x2a8(0x04)
	float BaseLookUpRate; // 0x2ac(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x2b0(0x08)
	struct USphereComponent* CollisionComponent; // 0x2b8(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x2c0(0x08)
	char bAddDefaultMovementBindings : 1; // 0x2c8(0x01)
	char pad_2C8_1 : 7; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)

	void TurnAtRate(float Rate); // Function Engine.DefaultPawn.TurnAtRate // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SpectatorPawn
// Size: 0x2d0 (Inherited: 0x2d0)
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.ScriptViewportClient
// Size: 0x40 (Inherited: 0x30)
struct UScriptViewportClient : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x340 (Inherited: 0x40)
struct UGameViewportClient : UScriptViewportClient {
	char pad_40[0x8]; // 0x40(0x08)
	struct UConsole* ViewportConsole; // 0x48(0x08)
	struct TArray<struct FDebugDisplayProperty> DebugProperties; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
	int32_t MaxSplitscreenPlayers; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
	struct UWorld* World; // 0x80(0x08)
	struct UGameInstance* GameInstance; // 0x88(0x08)
	char pad_90[0x2b0]; // 0x90(0x2b0)

	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers // (None) // @ game+0xfffffffec0000000
};

// Class Engine.WorldSettings
// Size: 0x3d8 (Inherited: 0x250)
struct AWorldSettings : AInfo {
	char pad_250[0x8]; // 0x250(0x08)
	struct TArray<struct FSoftObjectPath> ActiveMapsForBuild; // 0x258(0x10)
	int32_t VisibilityCellSize; // 0x268(0x04)
	enum class EVisibilityAggressiveness VisibilityAggressiveness; // 0x26c(0x01)
	char bPrecomputeVisibility : 1; // 0x26d(0x01)
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x26d(0x01)
	char bEnableWorldBoundsChecks : 1; // 0x26d(0x01)
	char bEnableNavigationSystem : 1; // 0x26d(0x01)
	char bEnableAISystem : 1; // 0x26d(0x01)
	char bEnableWorldComposition : 1; // 0x26d(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x26d(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x26d(0x01)
	char bWorldGravitySet : 1; // 0x26e(0x01)
	char bGlobalGravitySet : 1; // 0x26e(0x01)
	char bMinimizeBSPSections : 1; // 0x26e(0x01)
	char bForceNoPrecomputedLighting : 1; // 0x26e(0x01)
	char bHighPriorityLoading : 1; // 0x26e(0x01)
	char bHighPriorityLoadingLocal : 1; // 0x26e(0x01)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x26e(0x01)
	char pad_26E_7 : 1; // 0x26e(0x01)
	char pad_26F[0x1]; // 0x26f(0x01)
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x270(0x08)
	struct UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x278(0x08)
	float WorldToMeters; // 0x280(0x04)
	float KillZ; // 0x284(0x04)
	float WorldGravityZ; // 0x288(0x04)
	float GlobalGravityZ; // 0x28c(0x04)
	struct ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x290(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x298(0x08)
	struct AGameModeBase* DefaultGameMode; // 0x2a0(0x08)
	struct AGameNetworkManager* GameNetworkManagerClass; // 0x2a8(0x08)
	int32_t PackedLightAndShadowMapTextureSize; // 0x2b0(0x04)
	struct FVector DefaultColorScale; // 0x2b4(0x0c)
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x2c0(0x04)
	float GlobalDistanceFieldViewDistance; // 0x2c4(0x04)
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FReverbSettings DefaultReverbSettings; // 0x2d0(0x20)
	struct FInteriorSettings DefaultAmbientZoneSettings; // 0x2f0(0x24)
	float MonoCullingDistance; // 0x314(0x04)
	struct USoundMix* DefaultBaseSoundMix; // 0x318(0x08)
	float TimeDilation; // 0x320(0x04)
	float MatineeTimeDilation; // 0x324(0x04)
	float DemoPlayTimeDilation; // 0x328(0x04)
	float MinGlobalTimeDilation; // 0x32c(0x04)
	float MaxGlobalTimeDilation; // 0x330(0x04)
	float MinUndilatedFrameTime; // 0x334(0x04)
	float MaxUndilatedFrameTime; // 0x338(0x04)
	struct FBroadphaseSettings BroadphaseSettings; // 0x33c(0x40)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct APlayerState* Pauser; // 0x380(0x08)
	struct TArray<struct FNetViewer> ReplicationViewers; // 0x388(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x398(0x10)
	struct APlayerState* PauserPlayerState; // 0x3a8(0x08)
	int32_t MaxNumberOfBookmarks; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct UBookmarkBase* DefaultBookmarkClass; // 0x3b8(0x08)
	struct TArray<struct UBookmarkBase*> BookmarkArray; // 0x3c0(0x10)
	struct UBookmarkBase* LastBookmarkClass; // 0x3d0(0x08)

	void SetMapVisibilityToActiveList(); // Function Engine.WorldSettings.SetMapVisibilityToActiveList // (None) // @ game+0xfffffffec0000000
};

// Class Engine.NavAreaBase
// Size: 0x38 (Inherited: 0x30)
struct UNavAreaBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.GameUserSettings
// Size: 0x148 (Inherited: 0x30)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x30(0x01)
	bool bUseDynamicResolution; // 0x31(0x01)
	char pad_32[0x56]; // 0x32(0x56)
	uint32_t ResolutionSizeX; // 0x88(0x04)
	uint32_t ResolutionSizeY; // 0x8c(0x04)
	uint32_t LastUserConfirmedResolutionSizeX; // 0x90(0x04)
	uint32_t LastUserConfirmedResolutionSizeY; // 0x94(0x04)
	int32_t WindowPosX; // 0x98(0x04)
	int32_t WindowPosY; // 0x9c(0x04)
	int32_t FullscreenMode; // 0xa0(0x04)
	int32_t LastConfirmedFullscreenMode; // 0xa4(0x04)
	int32_t PreferredFullscreenMode; // 0xa8(0x04)
	uint32_t Version; // 0xac(0x04)
	int32_t AudioQualityLevel; // 0xb0(0x04)
	int32_t LastConfirmedAudioQualityLevel; // 0xb4(0x04)
	float FrameRateLimit; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	int32_t DesiredScreenWidth; // 0xc0(0x04)
	bool bUseDesiredScreenHeight; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	int32_t DesiredScreenHeight; // 0xc8(0x04)
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xcc(0x04)
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xd0(0x04)
	float LastRecommendedScreenWidth; // 0xd4(0x04)
	float LastRecommendedScreenHeight; // 0xd8(0x04)
	float LastCPUBenchmarkResult; // 0xdc(0x04)
	float LastGPUBenchmarkResult; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<float> LastCPUBenchmarkSteps; // 0xe8(0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xf8(0x10)
	float LastGPUBenchmarkMultiplier; // 0x108(0x04)
	bool bUseHDRDisplayOutput; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	int32_t HDRDisplayOutputNits; // 0x110(0x04)
	char pad_114[0x24]; // 0x114(0x24)
	struct FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x138(0x10)

	void ValidateSettings(); // Function Engine.GameUserSettings.ValidateSettings // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DecalActor
// Size: 0x258 (Inherited: 0x250)
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; // 0x250(0x08)

	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // Function Engine.DecalActor.SetDecalMaterial // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StaticMeshActor
// Size: 0x260 (Inherited: 0x250)
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x250(0x08)
	bool bStaticMeshReplicateMovement; // 0x258(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)

	void SetMobility(enum class EComponentMobility InMobility); // Function Engine.StaticMeshActor.SetMobility // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SkyLight
// Size: 0x260 (Inherited: 0x250)
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent; // 0x250(0x08)
	char bEnabled : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StreamableRenderAsset
// Size: 0x48 (Inherited: 0x30)
struct UStreamableRenderAsset : UObject {
	double ForceMipLevelsToBeResidentTimestamp; // 0x30(0x08)
	int32_t NumCinematicMipLevels; // 0x38(0x04)
	int32_t StreamingIndex; // 0x3c(0x04)
	int32_t CachedCombinedLODBias; // 0x40(0x04)
	char CachedNumResidentLODs; // 0x44(0x01)
	char bCachedReadyForStreaming : 1; // 0x45(0x01)
	char NeverStream : 1; // 0x45(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x45(0x01)
	char bIsStreamable : 1; // 0x45(0x01)
	char bHasStreamingUpdatePending : 1; // 0x45(0x01)
	char bForceMiplevelsToBeResident : 1; // 0x45(0x01)
	char bIgnoreStreamingMipBias : 1; // 0x45(0x01)
	char bUseCinematicMipLevels : 1; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// Class Engine.Texture
// Size: 0xc0 (Inherited: 0x48)
struct UTexture : UStreamableRenderAsset {
	char pad_48[0x8]; // 0x48(0x08)
	struct FGuid LightingGuid; // 0x50(0x10)
	int32_t LODBias; // 0x60(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x64(0x01)
	enum class TextureFilter Filter; // 0x65(0x01)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x66(0x01)
	enum class TextureGroup LODGroup; // 0x67(0x01)
	char SRGB : 1; // 0x68(0x01)
	char bNoTiling : 1; // 0x68(0x01)
	char VirtualTextureStreaming : 1; // 0x68(0x01)
	char CompressionYCoCg : 1; // 0x68(0x01)
	char bNotOfflineProcessed : 1; // 0x68(0x01)
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x68(0x01)
	char pad_68_6 : 2; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x70(0x10)
	char pad_80[0x40]; // 0x80(0x40)
};

// Class Engine.TextureCube
// Size: 0x118 (Inherited: 0xc0)
struct UTextureCube : UTexture {
	char pad_C0[0x58]; // 0xc0(0x58)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0x670 (Inherited: 0x5b0)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x5b0(0x10)
	int32_t NumCustomDataFloats; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct TArray<float> PerInstanceSMCustomData; // 0x5c8(0x10)
	int32_t InstancingRandomSeed; // 0x5d8(0x04)
	int32_t InstanceStartCullDistance; // 0x5dc(0x04)
	int32_t InstanceEndCullDistance; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct TArray<int32_t> InstanceReorderTable; // 0x5e8(0x10)
	char pad_5F8[0x5c]; // 0x5f8(0x5c)
	int32_t NumPendingLightmaps; // 0x654(0x04)
	struct TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings; // 0x658(0x10)
	char pad_668[0x8]; // 0x668(0x08)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform // (None) // @ game+0xfffffffec0000000
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0x760 (Inherited: 0x670)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char pad_670[0x8]; // 0x670(0x08)
	struct TArray<int32_t> SortedInstances; // 0x678(0x10)
	int32_t NumBuiltInstances; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct FBox BuiltInstanceBounds; // 0x690(0x1c)
	struct FBox UnbuiltInstanceBounds; // 0x6ac(0x1c)
	struct TArray<struct FBox> UnbuiltInstanceBoundsList; // 0x6c8(0x10)
	char bEnableDensityScaling : 1; // 0x6d8(0x01)
	char pad_6D8_1 : 7; // 0x6d8(0x01)
	char pad_6D9[0xb]; // 0x6d9(0x0b)
	int32_t OcclusionLayerNumNodes; // 0x6e4(0x04)
	struct FBoxSphereBounds CacheMeshExtendedBounds; // 0x6e8(0x1c)
	bool bDisableCollision; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	int32_t InstanceCountToRender; // 0x708(0x04)
	char pad_70C[0x54]; // 0x70c(0x54)

	bool RemoveInstances(struct TArray<int32_t> InstancesToRemove); // Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances // (None) // @ game+0xfffffffec0000000
};

// Class Engine.MaterialInterface
// Size: 0x90 (Inherited: 0x30)
struct UMaterialInterface : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
	struct FLightmassMaterialInterfaceSettings LightmassSettings; // 0x58(0x10)
	struct TArray<struct FMaterialTextureInfo> TextureStreamingData; // 0x68(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x78(0x10)
	char pad_88[0x4]; // 0x88(0x04)
	bool bAssignPhysMatToChildren; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)

	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse); // Function Engine.MaterialInterface.SetForceMipLevelsToBeResident // (None) // @ game+0xfffffffec0000000
};

// Class Engine.MaterialInstance
// Size: 0x410 (Inherited: 0x90)
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x90(0x08)
	struct UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x98(0x40)
	struct UMaterialInterface* Parent; // 0xd8(0x08)
	char bHasStaticPermutationResource : 1; // 0xe0(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0xe0(0x01)
	char pad_E0_2 : 6; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; // 0xe8(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues; // 0xf8(0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues; // 0x108(0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x118(0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues; // 0x128(0x10)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x138(0x08)
	char pad_140[0x10]; // 0x140(0x10)
	struct FStaticParameterSet StaticParameters; // 0x150(0x40)
	struct FMaterialCachedParameters CachedLayerParameters; // 0x190(0x1a0)
	struct TArray<struct UObject*> CachedReferencedTextures; // 0x330(0x10)
	char pad_340[0xd0]; // 0x340(0xd0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x418 (Inherited: 0x410)
struct UMaterialInstanceConstant : UMaterialInstance {
	struct UPhysicalMaterialMask* PhysMaterialMask; // 0x410(0x08)

	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetVectorParameterValue // (None) // @ game+0xfffffffec0000000
};

// Class Engine.MaterialExpression
// Size: 0x48 (Inherited: 0x30)
struct UMaterialExpression : UObject {
	struct UMaterial* Material; // 0x30(0x08)
	struct UMaterialFunction* Function; // 0x38(0x08)
	char bIsParameterExpression : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.MaterialExpressionCustomOutput
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionCustomOutput : UMaterialExpression {
};

// Class Engine.EngineCustomTimeStep
// Size: 0x30 (Inherited: 0x30)
struct UEngineCustomTimeStep : UObject {
};

// Class Engine.DynamicBlueprintBinding
// Size: 0x30 (Inherited: 0x30)
struct UDynamicBlueprintBinding : UObject {
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x330 (Inherited: 0x238)
struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; // 0x238(0x04)
	char bHasNativizedParent : 1; // 0x23c(0x01)
	char bHasCookedComponentInstancingData : 1; // 0x23c(0x01)
	char pad_23C_2 : 6; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct TArray<struct UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x240(0x10)
	struct TArray<struct UActorComponent*> ComponentTemplates; // 0x250(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines; // 0x260(0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; // 0x270(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x280(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x288(0x08)
	struct UStructProperty* UberGraphFramePointerProperty; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	struct UFunction* UberGraphFunction; // 0x2a0(0x08)
	struct TMap<struct FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2a8(0x50)
	char pad_2F8[0x38]; // 0x2f8(0x38)
};

// Class Engine.CameraActor
// Size: 0x7e0 (Inherited: 0x250)
struct ACameraActor : AActor {
	enum class EAutoReceiveInput AutoActivateForPlayer; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct UCameraComponent* CameraComponent; // 0x258(0x08)
	struct USceneComponent* SceneComponent; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)
	char bConstrainAspectRatio : 1; // 0x270(0x01)
	char pad_270_1 : 7; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float AspectRatio; // 0x274(0x04)
	float FOVAngle; // 0x278(0x04)
	float PostProcessBlendWeight; // 0x27c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x280(0x560)

	int32_t GetAutoActivatePlayerIndex(); // Function Engine.CameraActor.GetAutoActivatePlayerIndex // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CameraComponent
// Size: 0x800 (Inherited: 0x220)
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x220(0x04)
	float OrthoWidth; // 0x224(0x04)
	float OrthoNearClipPlane; // 0x228(0x04)
	float OrthoFarClipPlane; // 0x22c(0x04)
	float AspectRatio; // 0x230(0x04)
	char bConstrainAspectRatio : 1; // 0x234(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x234(0x01)
	char bLockToHmd : 1; // 0x234(0x01)
	char bUsePawnControlRotation : 1; // 0x234(0x01)
	char pad_234_4 : 4; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	char bUsePawnControlRotationAsRelativeRotation : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x4]; // 0x239(0x04)
	enum class ECameraProjectionMode ProjectionMode; // 0x23d(0x01)
	char pad_23E[0x32]; // 0x23e(0x32)
	float PostProcessBlendWeight; // 0x270(0x04)
	char pad_274[0x2c]; // 0x274(0x2c)
	struct FPostProcessSettings PostProcessSettings; // 0x2a0(0x560)

	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD); // Function Engine.CameraComponent.SetUseFieldOfViewForLOD // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SoundBase
// Size: 0x168 (Inherited: 0x30)
struct USoundBase : UObject {
	struct USoundClass* SoundClassObject; // 0x30(0x08)
	char bDebug : 1; // 0x38(0x01)
	char bOverrideConcurrency : 1; // 0x38(0x01)
	char bOutputToBusOnly : 1; // 0x38(0x01)
	char bHasDelayNode : 1; // 0x38(0x01)
	char bHasConcatenatorNode : 1; // 0x38(0x01)
	char bBypassVolumeScaleForPriority : 1; // 0x38(0x01)
	char pad_38_6 : 2; // 0x38(0x01)
	enum class EVirtualizationMode VirtualizationMode; // 0x39(0x01)
	char pad_3A[0x56]; // 0x3a(0x56)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x90(0x50)
	struct FSoundConcurrencySettings ConcurrencyOverrides; // 0xe0(0x20)
	float Duration; // 0x100(0x04)
	float MaxDistance; // 0x104(0x04)
	float TotalSamples; // 0x108(0x04)
	float Priority; // 0x10c(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x110(0x08)
	struct FSoundModulation Modulation; // 0x118(0x10)
	struct USoundSubmixBase* SoundSubmixObject; // 0x128(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x130(0x10)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x140(0x08)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x148(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x158(0x10)
};

// Class Engine.SoundWave
// Size: 0x318 (Inherited: 0x168)
struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x168(0x04)
	int32_t StreamingPriority; // 0x16c(0x04)
	enum class ESoundwaveSampleRateSettings SampleRateQuality; // 0x170(0x01)
	char pad_171[0x1]; // 0x171(0x01)
	enum class ESoundGroup SoundGroup; // 0x172(0x01)
	char bLooping : 1; // 0x173(0x01)
	char bStreaming : 1; // 0x173(0x01)
	char bSeekableStreaming : 1; // 0x173(0x01)
	char pad_173_3 : 5; // 0x173(0x01)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x174(0x01)
	char pad_175_0 : 5; // 0x175(0x01)
	char bMature : 1; // 0x175(0x01)
	char bManualWordWrap : 1; // 0x175(0x01)
	char bSingleLine : 1; // 0x175(0x01)
	char bIsAmbisonics : 1; // 0x176(0x01)
	char pad_176_1 : 7; // 0x176(0x01)
	char pad_177[0x1]; // 0x177(0x01)
	struct TArray<float> FrequenciesToAnalyze; // 0x178(0x10)
	struct TArray<struct FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x188(0x10)
	struct TArray<struct FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x198(0x10)
	int32_t InitialChunkSize; // 0x1a8(0x04)
	char pad_1AC[0x44]; // 0x1ac(0x44)
	struct FString SpokenText; // 0x1f0(0x10)
	float SubtitlePriority; // 0x200(0x04)
	float Volume; // 0x204(0x04)
	float Pitch; // 0x208(0x04)
	int32_t NumChannels; // 0x20c(0x04)
	int32_t SampleRate; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)
	struct TArray<struct FSubtitleCue> Subtitles; // 0x220(0x10)
	struct UCurveTable* Curves; // 0x230(0x08)
	struct UCurveTable* InternalCurves; // 0x238(0x08)
	char pad_240[0xd8]; // 0x240(0xd8)
};

// Class Engine.SoundWaveProcedural
// Size: 0x370 (Inherited: 0x318)
struct USoundWaveProcedural : USoundWave {
	char pad_318[0x58]; // 0x318(0x58)
};

// Class Engine.BlueprintCore
// Size: 0x58 (Inherited: 0x30)
struct UBlueprintCore : UObject {
	struct UObject* SkeletonGeneratedClass; // 0x30(0x08)
	struct UObject* GeneratedClass; // 0x38(0x08)
	bool bLegacyNeedToPurgeSkelRefs; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FGuid BlueprintGuid; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.Blueprint
// Size: 0xa8 (Inherited: 0x58)
struct UBlueprint : UBlueprintCore {
	struct UObject* ParentClass; // 0x58(0x08)
	enum class EBlueprintType BlueprintType; // 0x60(0x01)
	char bRecompileOnLoad : 1; // 0x61(0x01)
	char bHasBeenRegenerated : 1; // 0x61(0x01)
	char bIsRegeneratingOnLoad : 1; // 0x61(0x01)
	char pad_61_3 : 5; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32_t BlueprintSystemVersion; // 0x64(0x04)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x68(0x08)
	struct TArray<struct UActorComponent*> ComponentTemplates; // 0x70(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines; // 0x80(0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; // 0x90(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0xa0(0x08)
};

// Class Engine.Model
// Size: 0x260 (Inherited: 0x30)
struct UModel : UObject {
	char pad_30[0x230]; // 0x30(0x230)
};

// Class Engine.Channel
// Size: 0x78 (Inherited: 0x30)
struct UChannel : UObject {
	struct UNetConnection* Connection; // 0x30(0x08)
	char pad_38[0x40]; // 0x38(0x40)
};

// Class Engine.ActorChannel
// Size: 0x2a0 (Inherited: 0x78)
struct UActorChannel : UChannel {
	struct AActor* Actor; // 0x78(0x08)
	char pad_80[0xe8]; // 0x80(0xe8)
	struct TArray<struct UObject*> CreateSubObjects; // 0x168(0x10)
	char pad_178[0x128]; // 0x178(0x128)
};

// Class Engine.AnimationAsset
// Size: 0x88 (Inherited: 0x30)
struct UAnimationAsset : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct USkeleton* Skeleton; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x68(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x78(0x10)
};

// Class Engine.BlendSpaceBase
// Size: 0x150 (Inherited: 0x88)
struct UBlendSpaceBase : UAnimationAsset {
	char pad_88[0x8]; // 0x88(0x08)
	bool bRotationBlendInMeshSpace; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float AnimLength; // 0x94(0x04)
	struct FInterpolationParameter InterpolationParam[0x3]; // 0x98(0x18)
	float TargetWeightInterpolationSpeedPerSec; // 0xb0(0x04)
	enum class ENotifyTriggerMode NotifyTriggerMode; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct TArray<struct FPerBoneInterpolation> PerBoneBlend; // 0xb8(0x10)
	int32_t SampleIndexWithMarkers; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FBlendSample> SampleData; // 0xd0(0x10)
	struct TArray<struct FEditorElement> GridSamples; // 0xe0(0x10)
	struct FBlendParameter BlendParameters[0x3]; // 0xf0(0x60)
};

// Class Engine.BlendSpace
// Size: 0x158 (Inherited: 0x150)
struct UBlendSpace : UBlendSpaceBase {
	enum class EBlendSpaceAxis AxisToScaleAnimation; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x158 (Inherited: 0x158)
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x158 (Inherited: 0x150)
struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x158 (Inherited: 0x158)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.AISystemBase
// Size: 0x60 (Inherited: 0x30)
struct UAISystemBase : UObject {
	struct FSoftClassPath AISystemClassName; // 0x30(0x18)
	struct FName AISystemModuleName; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
	bool bInstantiateAISystemOnClient; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.AmbientSound
// Size: 0x258 (Inherited: 0x250)
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; // 0x250(0x08)

	void Stop(); // Function Engine.AmbientSound.Stop // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimationSettings
// Size: 0x60 (Inherited: 0x40)
struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x48(0x10)
	bool ForceRecompression; // 0x58(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x59(0x01)
	bool bForceBelowThreshold; // 0x5a(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x5b(0x01)
	bool bRaiseMaxErrorToExisting; // 0x5c(0x01)
	bool bEnablePerformanceLog; // 0x5d(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x5e(0x01)
	bool bTickAnimationOnSkeletalMeshInit; // 0x5f(0x01)
};

// Class Engine.AnimBlueprint
// Size: 0xd0 (Inherited: 0xa8)
struct UAnimBlueprint : UBlueprint {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct USkeleton* TargetSkeleton; // 0xb0(0x08)
	struct TArray<struct FAnimGroupInfo> Groups; // 0xb8(0x10)
	bool bUseMultiThreadedAnimationUpdate; // 0xc8(0x01)
	bool bWarnAboutBlueprintUsage; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x4f0 (Inherited: 0x330)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_330[0x8]; // 0x330(0x08)
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; // 0x338(0x10)
	struct USkeleton* TargetSkeleton; // 0x348(0x08)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x350(0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x360(0x50)
	char pad_3B0[0x80]; // 0x3b0(0x80)
	struct TArray<struct FName> SyncGroupNames; // 0x430(0x10)
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs; // 0x440(0x10)
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x450(0x50)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; // 0x4a0(0x50)
};

// Class Engine.AnimBoneCompressionSettings
// Size: 0x40 (Inherited: 0x30)
struct UAnimBoneCompressionSettings : UObject {
	struct TArray<struct UAnimBoneCompressionCodec*> Codecs; // 0x30(0x10)
};

// Class Engine.AnimClassData
// Size: 0x270 (Inherited: 0x30)
struct UAnimClassData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; // 0x38(0x10)
	struct USkeleton* TargetSkeleton; // 0x48(0x08)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x50(0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x60(0x50)
	struct TArray<struct FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xb0(0x10)
	struct TArray<struct FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xc0(0x10)
	struct TArray<struct TFieldPath<FStructProperty>> AnimNodeProperties; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)
	struct TArray<struct TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct TArray<struct TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)
	struct TArray<struct TFieldPath<FStructProperty>> PreUpdateNodeProperties; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)
	struct TArray<struct TFieldPath<FStructProperty>> DynamicResetNodeProperties; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	struct TArray<struct TFieldPath<FStructProperty>> StateMachineNodeProperties; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)
	struct TArray<struct TFieldPath<FStructProperty>> InitializationNodeProperties; // 0x190(0x10)
	char pad_1A0[0x10]; // 0x1a0(0x10)
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphNameAssetPlayers; // 0x1b0(0x50)
	struct TArray<struct FName> SyncGroupNames; // 0x200(0x10)
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs; // 0x210(0x10)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; // 0x220(0x50)
};

// Class Engine.AnimClassInterface
// Size: 0x30 (Inherited: 0x30)
struct UAnimClassInterface : UInterface {
};

// Class Engine.AnimSequenceBase
// Size: 0xc0 (Inherited: 0x88)
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x88(0x10)
	float SequenceLength; // 0x98(0x04)
	float RateScale; // 0x9c(0x04)
	struct FRawCurveTracks RawCurveData; // 0xa0(0x10)
	float AbsoluteRootMotionTranslationDistance; // 0xb0(0x04)
	float AbsoluteRootMotionTranslationDistance2D; // 0xb4(0x04)
	float RootMotionSpeed; // 0xb8(0x04)
	float RootMotionSpeed2D; // 0xbc(0x04)

	float GetPlayLength(); // Function Engine.AnimSequenceBase.GetPlayLength // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimCompositeBase
// Size: 0xc0 (Inherited: 0xc0)
struct UAnimCompositeBase : UAnimSequenceBase {
};

// Class Engine.AnimComposite
// Size: 0xd0 (Inherited: 0xc0)
struct UAnimComposite : UAnimCompositeBase {
	struct FAnimTrack AnimationTrack; // 0xc0(0x10)
};

// Class Engine.AnimCompress
// Size: 0x48 (Inherited: 0x40)
struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x44(0x01)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x45(0x01)
	enum class AnimationCompressionFormat ScaleCompressionFormat; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x48 (Inherited: 0x48)
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x48 (Inherited: 0x48)
struct UAnimCompress_LeastDestructive : UAnimCompress_BitwiseCompressOnly {
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x68 (Inherited: 0x48)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; // 0x48(0x04)
	float MaxAngleDiff; // 0x4c(0x04)
	float MaxScaleDiff; // 0x50(0x04)
	float MaxEffectorDiff; // 0x54(0x04)
	float MinEffectorDiff; // 0x58(0x04)
	float EffectorDiffSocket; // 0x5c(0x04)
	float ParentKeyScale; // 0x60(0x04)
	char bRetarget : 1; // 0x64(0x01)
	char bActuallyFilterLinearKeys : 1; // 0x64(0x01)
	char pad_64_2 : 6; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xe0 (Inherited: 0x68)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x68(0x04)
	float MaxPosDiffBitwise; // 0x6c(0x04)
	float MaxAngleDiffBitwise; // 0x70(0x04)
	float MaxScaleDiffBitwise; // 0x74(0x04)
	struct TArray<enum class AnimationCompressionFormat> AllowedRotationFormats; // 0x78(0x10)
	struct TArray<enum class AnimationCompressionFormat> AllowedTranslationFormats; // 0x88(0x10)
	struct TArray<enum class AnimationCompressionFormat> AllowedScaleFormats; // 0x98(0x10)
	char bResampleAnimation : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float ResampledFramerate; // 0xac(0x04)
	int32_t MinKeysForResampling; // 0xb0(0x04)
	char bUseAdaptiveError : 1; // 0xb4(0x01)
	char bUseOverrideForEndEffectors : 1; // 0xb4(0x01)
	char pad_B4_2 : 6; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32_t TrackHeightBias; // 0xb8(0x04)
	float ParentingDivisor; // 0xbc(0x04)
	float ParentingDivisorExponent; // 0xc0(0x04)
	char bUseAdaptiveError2 : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float RotationErrorSourceRatio; // 0xc8(0x04)
	float TranslationErrorSourceRatio; // 0xcc(0x04)
	float ScaleErrorSourceRatio; // 0xd0(0x04)
	float MaxErrorPerTrackRatio; // 0xd4(0x04)
	float PerturbationProbeSize; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x50 (Inherited: 0x48)
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x48(0x04)
	char bStartAtSecondKey : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x58 (Inherited: 0x48)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x48(0x04)
	float MaxAngleDiff; // 0x4c(0x04)
	float MaxScaleDiff; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.AnimCurveCompressionCodec_CompressedRichCurve
// Size: 0x30 (Inherited: 0x30)
struct UAnimCurveCompressionCodec_CompressedRichCurve : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionCodec_UniformIndexable
// Size: 0x30 (Inherited: 0x30)
struct UAnimCurveCompressionCodec_UniformIndexable : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionCodec_UniformlySampled
// Size: 0x30 (Inherited: 0x30)
struct UAnimCurveCompressionCodec_UniformlySampled : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionSettings
// Size: 0x38 (Inherited: 0x30)
struct UAnimCurveCompressionSettings : UObject {
	struct UAnimCurveCompressionCodec* Codec; // 0x30(0x08)
};

// Class Engine.AnimLayerInterface
// Size: 0x30 (Inherited: 0x30)
struct UAnimLayerInterface : UInterface {
};

// Class Engine.AnimMontage
// Size: 0x1e8 (Inherited: 0xc0)
struct UAnimMontage : UAnimCompositeBase {
	struct FAlphaBlend BlendIn; // 0xc0(0x30)
	float BlendInTime; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FAlphaBlend BlendOut; // 0xf8(0x30)
	float BlendOutTime; // 0x128(0x04)
	float BlendOutTriggerTime; // 0x12c(0x04)
	struct FName SyncGroup; // 0x130(0x08)
	int32_t SyncSlotIndex; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FMarkerSyncData MarkerData; // 0x140(0x20)
	struct TArray<struct FCompositeSection> CompositeSections; // 0x160(0x10)
	struct TArray<struct FSlotAnimationTrack> SlotAnimTracks; // 0x170(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x180(0x10)
	bool bEnableRootMotionTranslation; // 0x190(0x01)
	bool bEnableRootMotionRotation; // 0x191(0x01)
	bool bEnableAutoBlendOut; // 0x192(0x01)
	enum class ERootMotionRootLock RootMotionRootLock; // 0x193(0x01)
	char pad_194[0x4]; // 0x194(0x04)
	struct TArray<struct FBranchingPointMarker> BranchingPointMarkers; // 0x198(0x10)
	struct TArray<int32_t> BranchingPointStateNotifyIndices; // 0x1a8(0x10)
	struct FTimeStretchCurve TimeStretchCurve; // 0x1b8(0x28)
	struct FName TimeStretchCurveName; // 0x1e0(0x08)

	float GetDefaultBlendOutTime(); // Function Engine.AnimMontage.GetDefaultBlendOutTime // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimNotify_PauseClothingSimulation
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_PauseClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x60 (Inherited: 0x40)
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound; // 0x40(0x08)
	float VolumeMultiplier; // 0x48(0x04)
	float PitchMultiplier; // 0x4c(0x04)
	char bFollow : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FName AttachName; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.AnimNotify_ResetClothingSimulation
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_ResetClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotify_ResetDynamics
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_ResetDynamics : UAnimNotify {
};

// Class Engine.AnimNotify_ResumeClothingSimulation
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_ResumeClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotifyState_DisableRootMotion
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_DisableRootMotion : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x70 (Inherited: 0x38)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName FirstSocketName; // 0x40(0x08)
	struct FName SecondSocketName; // 0x48(0x08)
	enum class ETrailWidthMode WidthScaleMode; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FName WidthScaleCurve; // 0x54(0x08)
	char bRecycleSpawnedSystems : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FName OverrideComponentTag; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)

	struct UParticleSystem* OverridePSTemplate(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimSequence
// Size: 0x1b8 (Inherited: 0xc0)
struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xe8(0x08)
	struct UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xf0(0x08)
	char pad_F8[0x70]; // 0xf8(0x70)
	enum class EAdditiveAnimationType AdditiveAnimType; // 0x168(0x01)
	enum class EAdditiveBasePoseType RefPoseType; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct UAnimSequence* RefPoseSeq; // 0x170(0x08)
	int32_t RefFrameIndex; // 0x178(0x04)
	struct FName RetargetSource; // 0x17c(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x184(0x01)
	bool bEnableRootMotion; // 0x185(0x01)
	enum class ERootMotionRootLock RootMotionRootLock; // 0x186(0x01)
	bool bForceRootLock; // 0x187(0x01)
	bool bUseNormalizedRootMotionScale; // 0x188(0x01)
	bool bAnimIsComplete; // 0x189(0x01)
	bool bRootMotionSettingsCopiedFromMontage; // 0x18a(0x01)
	char pad_18B[0x5]; // 0x18b(0x05)
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x190(0x10)
	char pad_1A0[0x18]; // 0x1a0(0x18)
};

// Class Engine.AnimSet
// Size: 0xf8 (Inherited: 0x30)
struct UAnimSet : UObject {
	char bAnimRotationOnly : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FName> TrackBoneNames; // 0x38(0x10)
	struct TArray<struct FAnimSetMeshLinkup> LinkupCache; // 0x48(0x10)
	struct TArray<char> BoneUseAnimTranslation; // 0x58(0x10)
	struct TArray<char> ForceUseMeshTranslation; // 0x68(0x10)
	struct TArray<struct FName> UseTranslationBoneNames; // 0x78(0x10)
	struct TArray<struct FName> ForceMeshTranslationBoneNames; // 0x88(0x10)
	struct FName PreviewSkelMeshName; // 0x98(0x08)
	struct FName BestRatioSkelMeshName; // 0xa0(0x08)
	char pad_A8[0x50]; // 0xa8(0x50)
};

// Class Engine.AnimSingleNodeInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UAnimSingleNodeInstance : UAnimInstance {
	struct UAnimationAsset* CurrentAsset; // 0x2b8(0x08)
	struct FDelegate PostEvaluateAnimEvent; // 0x2c0(0x10)

	void StopAnim(); // Function Engine.AnimSingleNodeInstance.StopAnim // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AnimStateMachineTypes
// Size: 0x30 (Inherited: 0x30)
struct UAnimStateMachineTypes : UObject {
};

// Class Engine.AnimStreamable
// Size: 0xf8 (Inherited: 0xc0)
struct UAnimStreamable : UAnimSequenceBase {
	int32_t NumFrames; // 0xc0(0x04)
	enum class EAnimInterpolationType Interpolation; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FName RetargetSource; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xe0(0x08)
	struct UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xe8(0x08)
	bool bEnableRootMotion; // 0xf0(0x01)
	enum class ERootMotionRootLock RootMotionRootLock; // 0xf1(0x01)
	bool bForceRootLock; // 0xf2(0x01)
	bool bUseNormalizedRootMotionScale; // 0xf3(0x01)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x168 (Inherited: 0xd8)
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xd8(0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xe8(0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xf8(0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x108(0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x118(0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x128(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x138(0x10)
	struct FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x148(0x10)
	struct FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x158(0x10)
};

// Class Engine.ArrowComponent
// Size: 0x4b0 (Inherited: 0x4a0)
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; // 0x4a0(0x04)
	float ArrowSize; // 0x4a4(0x04)
	float ScreenSize; // 0x4a8(0x04)
	char bIsScreenSizeScaled : 1; // 0x4ac(0x01)
	char bTreatAsASprite : 1; // 0x4ac(0x01)
	char pad_4AC_2 : 6; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)

	void SetArrowColor(struct FLinearColor NewColor); // Function Engine.ArrowComponent.SetArrowColor // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AssetExportTask
// Size: 0x80 (Inherited: 0x30)
struct UAssetExportTask : UObject {
	struct UObject* Object; // 0x30(0x08)
	struct UExporter* Exporter; // 0x38(0x08)
	struct FString Filename; // 0x40(0x10)
	bool bSelected; // 0x50(0x01)
	bool bReplaceIdentical; // 0x51(0x01)
	bool bPrompt; // 0x52(0x01)
	bool bAutomated; // 0x53(0x01)
	bool bUseFileArchive; // 0x54(0x01)
	bool bWriteEmptyFiles; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<struct UObject*> IgnoreObjectList; // 0x58(0x10)
	struct UObject* Options; // 0x68(0x08)
	struct TArray<struct FString> Errors; // 0x70(0x10)
};

// Class Engine.AssetManager
// Size: 0x440 (Inherited: 0x30)
struct UAssetManager : UObject {
	char pad_30[0x298]; // 0x30(0x298)
	struct TArray<struct UObject*> ObjectReferenceList; // 0x2c8(0x10)
	bool bIsGlobalAsyncScanEnvironment; // 0x2d8(0x01)
	bool bShouldGuessTypeAndName; // 0x2d9(0x01)
	bool bShouldUseSynchronousLoad; // 0x2da(0x01)
	bool bIsLoadingFromPakFiles; // 0x2db(0x01)
	bool bShouldAcquireMissingChunksOnLoad; // 0x2dc(0x01)
	bool bOnlyCookProductionAssets; // 0x2dd(0x01)
	bool bIsBulkScanning; // 0x2de(0x01)
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2df(0x01)
	bool bIsManagementDatabaseCurrent; // 0x2e0(0x01)
	bool bUpdateManagementDatabaseAfterScan; // 0x2e1(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0x2e2(0x01)
	char pad_2E3[0x1]; // 0x2e3(0x01)
	int32_t NumberOfSpawnedNotifications; // 0x2e4(0x04)
	char pad_2E8[0x158]; // 0x2e8(0x158)
};

// Class Engine.AssetManagerSettings
// Size: 0x108 (Inherited: 0x40)
struct UAssetManagerSettings : UDeveloperSettings {
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x40(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x50(0x10)
	struct TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x60(0x10)
	struct TArray<struct FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x70(0x10)
	bool bOnlyCookProductionAssets; // 0x80(0x01)
	bool bShouldManagerDetermineTypeAndName; // 0x81(0x01)
	bool bShouldGuessTypeAndNameInEditor; // 0x82(0x01)
	bool bShouldAcquireMissingChunksOnLoad; // 0x83(0x01)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x88(0x10)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x98(0x10)
	struct TArray<struct FAssetManagerRedirect> AssetPathRedirects; // 0xa8(0x10)
	struct TSet<struct FName> MetaDataTagsForAssetRegistry; // 0xb8(0x50)
};

// Class Engine.AssetMappingTable
// Size: 0x40 (Inherited: 0x30)
struct UAssetMappingTable : UObject {
	struct TArray<struct FAssetMapping> MappedAssets; // 0x30(0x10)
};

// Class Engine.AsyncActionHandleSaveGame
// Size: 0x70 (Inherited: 0x38)
struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)
	struct USaveGame* SaveGameObject; // 0x68(0x08)

	struct UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(struct UObject* WorldContextObject, struct USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncSaveGameToSlot // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AsyncActionLoadPrimaryAssetBase
// Size: 0x80 (Inherited: 0x38)
struct UAsyncActionLoadPrimaryAssetBase : UBlueprintAsyncActionBase {
	char pad_38[0x48]; // 0x38(0x48)
};

// Class Engine.AsyncActionLoadPrimaryAsset
// Size: 0x90 (Inherited: 0x80)
struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x80(0x10)

	struct UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
// Size: 0x90 (Inherited: 0x80)
struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x80(0x10)

	struct UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClass.AsyncLoadPrimaryAssetClass // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AsyncActionLoadPrimaryAssetList
// Size: 0x90 (Inherited: 0x80)
struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x80(0x10)

	struct UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId> PrimaryAssetList, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
// Size: 0x90 (Inherited: 0x80)
struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x80(0x10)

	struct UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId> PrimaryAssetList, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
// Size: 0x90 (Inherited: 0x80)
struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x80(0x10)

	struct UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId> PrimaryAssetList, struct TArray<struct FName> AddBundles, struct TArray<struct FName> RemoveBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForPrimaryAssetList // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AtmosphericFog
// Size: 0x258 (Inherited: 0x250)
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; // 0x250(0x08)
};

// Class Engine.AtmosphericFogComponent
// Size: 0x330 (Inherited: 0x220)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x220(0x04)
	float FogMultiplier; // 0x224(0x04)
	float DensityMultiplier; // 0x228(0x04)
	float DensityOffset; // 0x22c(0x04)
	float DistanceScale; // 0x230(0x04)
	float AltitudeScale; // 0x234(0x04)
	float DistanceOffset; // 0x238(0x04)
	float GroundOffset; // 0x23c(0x04)
	float StartDistance; // 0x240(0x04)
	float SunDiscScale; // 0x244(0x04)
	float DefaultBrightness; // 0x248(0x04)
	struct FColor DefaultLightColor; // 0x24c(0x04)
	char bDisableSunDisk : 1; // 0x250(0x01)
	char bAtmosphereAffectsSunIlluminance : 1; // 0x250(0x01)
	char bDisableGroundScattering : 1; // 0x250(0x01)
	char pad_250_3 : 5; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FAtmospherePrecomputeParameters PrecomputeParams; // 0x254(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x280(0x08)
	struct UTexture2D* IrradianceTexture; // 0x288(0x08)
	char pad_290[0xa0]; // 0x290(0xa0)

	void StartPrecompute(); // Function Engine.AtmosphericFogComponent.StartPrecompute // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AudioSettings
// Size: 0x158 (Inherited: 0x40)
struct UAudioSettings : UDeveloperSettings {
	char bDisableUE4AudioSystem : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FSoftObjectPath DefaultSoundClassName; // 0x48(0x18)
	struct FSoftObjectPath DefaultMediaSoundClassName; // 0x60(0x18)
	struct FSoftObjectPath DefaultSoundConcurrencyName; // 0x78(0x18)
	struct FSoftObjectPath DefaultBaseSoundMix; // 0x90(0x18)
	struct FSoftObjectPath VoiPSoundClass; // 0xa8(0x18)
	struct FSoftObjectPath MasterSubmix; // 0xc0(0x18)
	struct FSoftObjectPath ReverbSubmix; // 0xd8(0x18)
	struct FSoftObjectPath EQSubmix; // 0xf0(0x18)
	enum class EVoiceSampleRate VoiPSampleRate; // 0x108(0x04)
	float DefaultReverbSendLevel; // 0x10c(0x04)
	int32_t MaximumConcurrentStreams; // 0x110(0x04)
	float GlobalMinPitchScale; // 0x114(0x04)
	float GlobalMaxPitchScale; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FAudioQualitySettings> QualityLevels; // 0x120(0x10)
	char bAllowPlayWhenSilent : 1; // 0x130(0x01)
	char bDisableMasterEQ : 1; // 0x130(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x130(0x01)
	char pad_130_3 : 5; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	uint32_t NumStoppingSources; // 0x134(0x04)
	enum class EPanningMethod PanningMethod; // 0x138(0x01)
	enum class EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FString DialogueFilenameFormat; // 0x140(0x10)
	char pad_150[0x8]; // 0x150(0x08)
};

// Class Engine.AudioVolume
// Size: 0x2d8 (Inherited: 0x288)
struct AAudioVolume : AVolume {
	float Priority; // 0x288(0x04)
	char bEnabled : 1; // 0x28c(0x01)
	char pad_28C_1 : 7; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FReverbSettings Settings; // 0x290(0x20)
	struct FInteriorSettings AmbientZoneSettings; // 0x2b0(0x24)
	char pad_2D4[0x4]; // 0x2d4(0x04)

	void SetReverbSettings(struct FReverbSettings NewReverbSettings); // Function Engine.AudioVolume.SetReverbSettings // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AutoDestroySubsystem
// Size: 0x50 (Inherited: 0x38)
struct UAutoDestroySubsystem : UWorldSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct AActor*> ActorsToPoll; // 0x40(0x10)

	void OnActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function Engine.AutoDestroySubsystem.OnActorEndPlay // (None) // @ game+0xfffffffec0000000
};

// Class Engine.AutomationTestSettings
// Size: 0x330 (Inherited: 0x30)
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules; // 0x30(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x40(0x10)
	struct FSoftObjectPath AutomationTestmap; // 0x50(0x18)
	struct TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x68(0x10)
	struct TArray<struct FSoftObjectPath> AssetsToOpen; // 0x78(0x10)
	struct FBuildPromotionTestSettings BuildPromotionTest; // 0x88(0x1f0)
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x278(0x30)
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2a8(0x10)
	struct FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2b8(0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2e8(0x10)
	struct TArray<struct FExternalToolDefinition> ExternalTools; // 0x2f8(0x10)
	struct TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x308(0x10)
	struct TArray<struct FLaunchOnTestSettings> LaunchOnSettings; // 0x318(0x10)
	struct FIntPoint DefaultScreenshotResolution; // 0x328(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe8 (Inherited: 0x30)
struct UAvoidanceManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float DefaultTimeToLive; // 0x38(0x04)
	float LockTimeAfterAvoid; // 0x3c(0x04)
	float LockTimeAfterClean; // 0x40(0x04)
	float DeltaTimeToPredict; // 0x44(0x04)
	float ArtificialRadiusExpansion; // 0x48(0x04)
	float TestHeightDifference; // 0x4c(0x04)
	float HeightCheckMargin; // 0x50(0x04)
	char pad_54[0x94]; // 0x54(0x94)

	bool RegisterMovementComponent(struct UMovementComponent* MovementComp, float AvoidanceWeight); // Function Engine.AvoidanceManager.RegisterMovementComponent // (None) // @ game+0xfffffffec0000000
};

// Class Engine.BandwidthTestActor
// Size: 0x270 (Inherited: 0x250)
struct ABandwidthTestActor : AActor {
	struct FBandwidthTestGenerator BandwidthGenerator; // 0x250(0x20)
};

// Class Engine.BlendableInterface
// Size: 0x30 (Inherited: 0x30)
struct UBlendableInterface : UInterface {
};

// Class Engine.Skeleton
// Size: 0x370 (Inherited: 0x30)
struct USkeleton : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct FBoneNode> BoneTree; // 0x40(0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x50(0x10)
	char pad_60[0x118]; // 0x60(0x118)
	struct FGuid VirtualBoneGuid; // 0x178(0x10)
	struct TArray<struct FVirtualBone> VirtualBones; // 0x188(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x198(0x10)
	char pad_1A8[0x50]; // 0x1a8(0x50)
	struct FSmartNameContainer SmartNames; // 0x1f8(0x50)
	char pad_248[0x30]; // 0x248(0x30)
	struct TArray<struct UBlendProfile*> BlendProfiles; // 0x278(0x10)
	struct TArray<struct FAnimSlotGroup> SlotGroups; // 0x288(0x10)
	char pad_298[0xc8]; // 0x298(0xc8)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x360(0x10)
};

// Class Engine.BlendProfile
// Size: 0x50 (Inherited: 0x30)
struct UBlendProfile : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USkeleton* OwningSkeleton; // 0x38(0x08)
	struct TArray<struct FBlendProfileBoneEntry> ProfileEntries; // 0x40(0x10)
};

// Class Engine.BlueprintExtension
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintExtension : UObject {
};

// Class Engine.BlueprintMapLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintMapLibrary : UBlueprintFunctionLibrary {

	void SetMapPropertyByName(struct UObject* Object, struct FName PropertyName, struct TMap<int32_t, int32_t> Value); // Function Engine.BlueprintMapLibrary.SetMapPropertyByName // (None) // @ game+0xfffffffec0000000
};

// Class Engine.BlueprintPathsLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintPathsLibrary : UBlueprintFunctionLibrary {

	struct FString VideoCaptureDir(); // Function Engine.BlueprintPathsLibrary.VideoCaptureDir // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PlatformGameInstance
// Size: 0x280 (Inherited: 0x1b0)
struct UPlatformGameInstance : UGameInstance {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x1b0(0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1c0(0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1d0(0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1e0(0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x1f0(0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x200(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x210(0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x220(0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x230(0x10)
	struct FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x240(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x250(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x260(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x270(0x10)
};

// Class Engine.BlueprintPlatformLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintPlatformLibrary : UBlueprintFunctionLibrary {

	int32_t ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, struct FText Title, struct FText Body, struct FText Action, struct FString ActivationEvent); // Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationFromNow // (None) // @ game+0xfffffffec0000000
};

// Class Engine.BlueprintSetLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintSetLibrary : UBlueprintFunctionLibrary {

	void SetSetPropertyByName(struct UObject* Object, struct FName PropertyName, struct TSet<int32_t> Value); // Function Engine.BlueprintSetLibrary.SetSetPropertyByName // (None) // @ game+0xfffffffec0000000
};

// Class Engine.BodySetup
// Size: 0x258 (Inherited: 0x30)
struct UBodySetup : UObject {
	struct FKAggregateGeom AggGeom; // 0x30(0x58)
	struct FName BoneName; // 0x88(0x08)
	enum class EPhysicsType PhysicsType; // 0x90(0x01)
	char bAlwaysFullAnimWeight : 1; // 0x91(0x01)
	char bConsiderForBounds : 1; // 0x91(0x01)
	char bMeshCollideAll : 1; // 0x91(0x01)
	char bDoubleSidedGeometry : 1; // 0x91(0x01)
	char bGenerateNonMirroredCollision : 1; // 0x91(0x01)
	char bSharedCookedData : 1; // 0x91(0x01)
	char bGenerateMirroredCollision : 1; // 0x91(0x01)
	char bSupportUVsAndFaceRemap : 1; // 0x91(0x01)
	char pad_92[0x1]; // 0x92(0x01)
	enum class EBodyCollisionResponse CollisionReponse; // 0x93(0x01)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x98(0x08)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xa0(0x10)
	char pad_B0[0x78]; // 0xb0(0x78)
	struct FBodyInstance DefaultInstance; // 0x128(0x110)
	char pad_238[0x8]; // 0x238(0x08)
	struct FVector BuildScale3D; // 0x240(0x0c)
	char pad_24C[0xc]; // 0x24c(0x0c)
};

// Class Engine.BoneMaskFilter
// Size: 0x40 (Inherited: 0x30)
struct UBoneMaskFilter : UObject {
	struct TArray<struct FInputBlendPose> BlendPoses; // 0x30(0x10)
};

// Class Engine.BookmarkBase
// Size: 0x30 (Inherited: 0x30)
struct UBookmarkBase : UObject {
};

// Class Engine.BookMark
// Size: 0x58 (Inherited: 0x30)
struct UBookMark : UBookmarkBase {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	struct TArray<struct FString> HiddenLevels; // 0x48(0x10)
};

// Class Engine.BookMark2D
// Size: 0x40 (Inherited: 0x30)
struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x30(0x04)
	struct FIntPoint Location; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.ReflectionCapture
// Size: 0x258 (Inherited: 0x250)
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x250(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x258 (Inherited: 0x258)
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x2a0 (Inherited: 0x220)
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* CaptureOffsetComponent; // 0x220(0x08)
	enum class EReflectionSourceType ReflectionSourceType; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UTextureCube* Cubemap; // 0x230(0x08)
	float SourceCubemapAngle; // 0x238(0x04)
	float Brightness; // 0x23c(0x04)
	struct FVector CaptureOffset; // 0x240(0x0c)
	struct FGuid MapBuildDataId; // 0x24c(0x10)
	char pad_25C[0x44]; // 0x25c(0x44)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x2b0 (Inherited: 0x2a0)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x298(0x04)
	struct UBoxComponent* PreviewInfluenceBox; // 0x2a0(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x2a8(0x08)
};

// Class Engine.Breakpoint
// Size: 0x48 (Inherited: 0x30)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UEdGraphNode* Node; // 0x38(0x08)
	char bStepOnce : 1; // 0x40(0x01)
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x40(0x01)
	char bStepOnce_RemoveAfterHit : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x88 (Inherited: 0x30)
struct UBrushBuilder : UObject {
	struct FString BitmapFilename; // 0x30(0x10)
	struct FString Tooltip; // 0x40(0x10)
	char NotifyBadParams : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FVector> Vertices; // 0x58(0x10)
	struct TArray<struct FBuilderPoly> Polys; // 0x68(0x10)
	struct FName Layer; // 0x78(0x08)
	char MergeCoplanars : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.BrushComponent
// Size: 0x4b0 (Inherited: 0x4a0)
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; // 0x4a0(0x08)
	struct UBodySetup* BrushBodySetup; // 0x4a8(0x08)
};

// Class Engine.BrushShape
// Size: 0x288 (Inherited: 0x288)
struct ABrushShape : ABrush {
};

// Class Engine.ButtonStyleAsset
// Size: 0x2c8 (Inherited: 0x30)
struct UButtonStyleAsset : UObject {
	struct FButtonStyle ButtonStyle; // 0x30(0x298)
};

// Class Engine.CameraAnim
// Size: 0x5d0 (Inherited: 0x30)
struct UCameraAnim : UObject {
	struct UInterpGroup* CameraInterpGroup; // 0x30(0x08)
	float AnimLength; // 0x38(0x04)
	struct FBox BoundingBox; // 0x3c(0x1c)
	char bRelativeToInitialTransform : 1; // 0x58(0x01)
	char bRelativeToInitialFOV : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float BaseFOV; // 0x5c(0x04)
	struct FPostProcessSettings BasePostProcessSettings; // 0x60(0x560)
	float BasePostProcessBlendWeight; // 0x5c0(0x04)
	char pad_5C4[0xc]; // 0x5c4(0x0c)
};

// Class Engine.CameraAnimInst
// Size: 0x120 (Inherited: 0x30)
struct UCameraAnimInst : UObject {
	struct UCameraAnim* CamAnim; // 0x30(0x08)
	struct UInterpGroupInst* InterpGroupInst; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
	float PlayRate; // 0x58(0x04)
	char pad_5C[0x14]; // 0x5c(0x14)
	struct UInterpTrackMove* MoveTrack; // 0x70(0x08)
	struct UInterpTrackInstMove* MoveInst; // 0x78(0x08)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x80(0x01)
	char pad_81[0x9f]; // 0x81(0x9f)

	void Stop(bool bImmediate); // Function Engine.CameraAnimInst.Stop // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CameraBlockingVolume
// Size: 0x288 (Inherited: 0x288)
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CameraModifier_CameraShake
// Size: 0xb8 (Inherited: 0x50)
struct UCameraModifier_CameraShake : UCameraModifier {
	struct TArray<struct FActiveCameraShakeInfo> ActiveShakes; // 0x50(0x10)
	struct TMap<struct UCameraShake*, struct FPooledCameraShakes> ExpiredPooledShakesMap; // 0x60(0x50)
	float SplitScreenShakeScale; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.CameraShakeSourceActor
// Size: 0x258 (Inherited: 0x250)
struct ACameraShakeSourceActor : AActor {
	struct UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x250(0x08)
};

// Class Engine.CameraShakeSourceComponent
// Size: 0x240 (Inherited: 0x220)
struct UCameraShakeSourceComponent : USceneComponent {
	enum class ECameraShakeAttenuation Attenuation; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float InnerAttenuationRadius; // 0x224(0x04)
	float OuterAttenuationRadius; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UCameraShake* CameraShake; // 0x230(0x08)
	bool bAutoPlay; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)

	void StopAllCameraShakes(bool bImmediately); // Function Engine.CameraShakeSourceComponent.StopAllCameraShakes // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Canvas
// Size: 0x2d0 (Inherited: 0x30)
struct UCanvas : UObject {
	float OrgX; // 0x30(0x04)
	float OrgY; // 0x34(0x04)
	float ClipX; // 0x38(0x04)
	float ClipY; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	char bCenterX : 1; // 0x44(0x01)
	char bCenterY : 1; // 0x44(0x01)
	char bNoSmooth : 1; // 0x44(0x01)
	char pad_44_3 : 5; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t SizeX; // 0x48(0x04)
	int32_t SizeY; // 0x4c(0x04)
	struct FPlane ColorModulate; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct UReporterGraph* ReporterGraph; // 0x70(0x08)
	char pad_78[0x258]; // 0x78(0x258)

	struct FVector2D K2_TextSize(struct UFont* RenderFont, struct FString RenderText, struct FVector2D Scale); // Function Engine.Canvas.K2_TextSize // (None) // @ game+0xfffffffec0000000
};

// Class Engine.TextureRenderTarget
// Size: 0xc8 (Inherited: 0xc0)
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.TextureRenderTarget2D
// Size: 0xf0 (Inherited: 0xc8)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0xc8(0x04)
	int32_t SizeY; // 0xcc(0x04)
	struct FLinearColor ClearColor; // 0xd0(0x10)
	enum class TextureAddress AddressX; // 0xe0(0x01)
	enum class TextureAddress AddressY; // 0xe1(0x01)
	char bForceLinearGamma : 1; // 0xe2(0x01)
	char bHDR : 1; // 0xe2(0x01)
	char bGPUSharedFlag : 1; // 0xe2(0x01)
	char pad_E2_3 : 5; // 0xe2(0x01)
	enum class ETextureRenderTargetFormat RenderTargetFormat; // 0xe3(0x01)
	char bAutoGenerateMips : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	enum class TextureFilter MipsSamplerFilter; // 0xe5(0x01)
	enum class TextureAddress MipsAddressU; // 0xe6(0x01)
	enum class TextureAddress MipsAddressV; // 0xe7(0x01)
	enum class EPixelFormat OverrideFormat; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.CanvasRenderTarget2D
// Size: 0x110 (Inherited: 0xf0)
struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	struct FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0xf0(0x10)
	struct TWeakObjectPtr<struct UWorld> World; // 0x100(0x08)
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	void UpdateResource(); // Function Engine.CanvasRenderTarget2D.UpdateResource // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CapsuleComponent
// Size: 0x4c0 (Inherited: 0x4c0)
struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x4b8(0x04)
	float CapsuleRadius; // 0x4bc(0x04)

	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleSize // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ChaosPhysicalMaterial
// Size: 0x50 (Inherited: 0x30)
struct UChaosPhysicalMaterial : UObject {
	float Friction; // 0x30(0x04)
	float StaticFriction; // 0x34(0x04)
	float Restitution; // 0x38(0x04)
	float LinearEtherDrag; // 0x3c(0x04)
	float AngularEtherDrag; // 0x40(0x04)
	float SleepingLinearVelocityThreshold; // 0x44(0x04)
	float SleepingAngularVelocityThreshold; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.CheatManager
// Size: 0x80 (Inherited: 0x30)
struct UCheatManager : UObject {
	struct ADebugCameraController* DebugCameraControllerRef; // 0x30(0x08)
	struct ADebugCameraController* DebugCameraControllerClass; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)

	void Walk(); // Function Engine.CheatManager.Walk // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CheckBoxStyleAsset
// Size: 0x608 (Inherited: 0x30)
struct UCheckBoxStyleAsset : UObject {
	struct FCheckBoxStyle CheckBoxStyle; // 0x30(0x5d8)
};

// Class Engine.ChildActorComponent
// Size: 0x250 (Inherited: 0x220)
struct UChildActorComponent : USceneComponent {
	struct AActor* ChildActorClass; // 0x220(0x08)
	struct AActor* ChildActor; // 0x228(0x08)
	struct AActor* ChildActorTemplate; // 0x230(0x08)
	char pad_238[0x18]; // 0x238(0x18)

	void SetChildActorClass(struct AActor* InClass); // Function Engine.ChildActorComponent.SetChildActorClass // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ChildConnection
// Size: 0x1a40 (Inherited: 0x1a38)
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; // 0x1a38(0x08)
};

// Class Engine.PlatformInterfaceBase
// Size: 0x40 (Inherited: 0x30)
struct UPlatformInterfaceBase : UObject {
	struct TArray<struct FDelegateArray> AllDelegates; // 0x30(0x10)
};

// Class Engine.CloudStorageBase
// Size: 0x58 (Inherited: 0x40)
struct UCloudStorageBase : UPlatformInterfaceBase {
	struct TArray<struct FString> LocalCloudFiles; // 0x40(0x10)
	char bSuppressDelegateCalls : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.CollisionProfile
// Size: 0x1b0 (Inherited: 0x40)
struct UCollisionProfile : UDeveloperSettings {
	struct TArray<struct FCollisionResponseTemplate> Profiles; // 0x40(0x10)
	struct TArray<struct FCustomChannelSetup> DefaultChannelResponses; // 0x50(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x60(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x70(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x80(0x10)
	struct TMap<struct FName, struct FAutoApplyProfileSettings> AutoApplySettingsPerCollisionProfile; // 0x90(0x50)
	char pad_E0[0xd0]; // 0xe0(0xd0)
};

// Class Engine.ComponentDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x30(0x10)
};

// Class Engine.CurveTable
// Size: 0xa8 (Inherited: 0x30)
struct UCurveTable : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class Engine.CompositeCurveTable
// Size: 0xd0 (Inherited: 0xa8)
struct UCompositeCurveTable : UCurveTable {
	struct TArray<struct UCurveTable*> ParentTables; // 0xa8(0x10)
	struct TArray<struct UCurveTable*> OldParentTables; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Engine.DataTable
// Size: 0xd8 (Inherited: 0x30)
struct UDataTable : UObject {
	struct UScriptStruct* RowStruct; // 0x30(0x08)
	char pad_38[0x50]; // 0x38(0x50)
	char bStripFromClientBuilds : 1; // 0x88(0x01)
	char bIgnoreExtraFields : 1; // 0x88(0x01)
	char bIgnoreMissingFields : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString ImportKeyField; // 0x90(0x10)
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class Engine.CompositeDataTable
// Size: 0x100 (Inherited: 0xd8)
struct UCompositeDataTable : UDataTable {
	struct TArray<struct UDataTable*> ParentTables; // 0xd8(0x10)
	struct TArray<struct UDataTable*> OldParentTables; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class Engine.Console
// Size: 0x148 (Inherited: 0x30)
struct UConsole : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct ULocalPlayer* ConsoleTargetPlayer; // 0x40(0x08)
	struct UTexture2D* DefaultTexture_Black; // 0x48(0x08)
	struct UTexture2D* DefaultTexture_White; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x70(0x10)
	char pad_80[0xc8]; // 0x80(0xc8)
};

// Class Engine.ControlChannel
// Size: 0x90 (Inherited: 0x78)
struct UControlChannel : UChannel {
	char pad_78[0x18]; // 0x78(0x18)
};

// Class Engine.StreamingSettings
// Size: 0x78 (Inherited: 0x40)
struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x40(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float TimeLimitExceededMultiplier; // 0x44(0x04)
	float TimeLimitExceededMinTime; // 0x48(0x04)
	int32_t MinBulkDataSizeForAsyncLoading; // 0x4c(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x50(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float AsyncLoadingTimeLimit; // 0x54(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x58(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x5c(0x04)
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x60(0x04)
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x64(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x68(0x04)
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x6c(0x04)
	char FlushStreamingOnExit : 1; // 0x70(0x01)
	char EventDrivenLoaderEnabled : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x60 (Inherited: 0x40)
struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x40(0x04)
	char FlushStreamingOnGC : 1; // 0x44(0x01)
	char AllowParallelGC : 1; // 0x44(0x01)
	char ForceParallelGCOnDedicatedServers : 1; // 0x44(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x44(0x01)
	char MultithreadedDestructionEnabled : 1; // 0x44(0x01)
	char CreateGCClusters : 1; // 0x44(0x01)
	char AssetClusteringEnabled : 1; // 0x44(0x01)
	char ActorClusteringEnabled : 1; // 0x44(0x01)
	char BlueprintClusteringEnabled : 1; // 0x45(0x01)
	char UseDisregardForGCOnDedicatedServers : 1; // 0x45(0x01)
	char pad_45_2 : 6; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	int32_t MinGCClusterSize; // 0x48(0x04)
	int32_t NumRetriesBeforeForcingGC; // 0x4c(0x04)
	int32_t MaxObjectsNotConsideredByGC; // 0x50(0x04)
	int32_t SizeOfPermanentObjectPool; // 0x54(0x04)
	int32_t MaxObjectsInGame; // 0x58(0x04)
	int32_t MaxObjectsInEditor; // 0x5c(0x04)
};

// Class Engine.CullDistanceVolume
// Size: 0x2a0 (Inherited: 0x288)
struct ACullDistanceVolume : AVolume {
	struct TArray<struct FCullDistanceSizePair> CullDistances; // 0x288(0x10)
	char bEnabled : 1; // 0x298(0x01)
	char pad_298_1 : 7; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
};

// Class Engine.CurveBase
// Size: 0x38 (Inherited: 0x30)
struct UCurveBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void GetValueRange(float MinValue, float MaxValue); // Function Engine.CurveBase.GetValueRange // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CurveEdPresetCurve
// Size: 0x30 (Inherited: 0x30)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.CurveFloat
// Size: 0xc0 (Inherited: 0x38)
struct UCurveFloat : UCurveBase {
	struct FRichCurve FloatCurve; // 0x38(0x80)
	bool bIsEventCurve; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	float GetFloatValue(float InTime); // Function Engine.CurveFloat.GetFloatValue // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CurveLinearColor
// Size: 0x258 (Inherited: 0x38)
struct UCurveLinearColor : UCurveBase {
	struct FRichCurve FloatCurves[0x4]; // 0x38(0x200)
	float AdjustHue; // 0x238(0x04)
	float AdjustSaturation; // 0x23c(0x04)
	float AdjustBrightness; // 0x240(0x04)
	float AdjustBrightnessCurve; // 0x244(0x04)
	float AdjustVibrance; // 0x248(0x04)
	float AdjustMinAlpha; // 0x24c(0x04)
	float AdjustMaxAlpha; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)

	struct FLinearColor GetLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetLinearColorValue // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Texture2D
// Size: 0xf0 (Inherited: 0xc0)
struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0xc0(0x04)
	int32_t FirstResourceMemMip; // 0xc4(0x04)
	char bTemporarilyDisableStreaming : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	enum class TextureAddress AddressX; // 0xc9(0x01)
	enum class TextureAddress AddressY; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	struct FIntPoint ImportedSize; // 0xcc(0x08)
	char pad_D4[0x1c]; // 0xd4(0x1c)

	int32_t Blueprint_GetSizeY(); // Function Engine.Texture2D.Blueprint_GetSizeY // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CurveLinearColorAtlas
// Size: 0x108 (Inherited: 0xf0)
struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct UCurveLinearColor*> GradientCurves; // 0xf8(0x10)

	bool GetCurvePosition(struct UCurveLinearColor* InCurve, float Position); // Function Engine.CurveLinearColorAtlas.GetCurvePosition // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CurveSourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UCurveSourceInterface : UInterface {

	float GetCurveValue(struct FName CurveName); // Function Engine.CurveSourceInterface.GetCurveValue // (None) // @ game+0xfffffffec0000000
};

// Class Engine.CurveVector
// Size: 0x1b8 (Inherited: 0x38)
struct UCurveVector : UCurveBase {
	struct FRichCurve FloatCurves[0x3]; // 0x38(0x180)

	struct FVector GetVectorValue(float InTime); // Function Engine.CurveVector.GetVectorValue // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DamageType
// Size: 0x48 (Inherited: 0x30)
struct UDamageType : UObject {
	char bCausedByWorld : 1; // 0x30(0x01)
	char bScaleMomentumByMass : 1; // 0x30(0x01)
	char bRadialDamageVelChange : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DamageImpulse; // 0x34(0x04)
	float DestructibleImpulse; // 0x38(0x04)
	float DestructibleDamageSpreadScale; // 0x3c(0x04)
	float DamageFalloff; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.PrimaryDataAsset
// Size: 0x38 (Inherited: 0x38)
struct UPrimaryDataAsset : UDataAsset {
};

// Class Engine.DataTableFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UDataTableFunctionLibrary : UBlueprintFunctionLibrary {

	void GetDataTableRowNames(struct UDataTable* Table, struct TArray<struct FName> OutRowNames); // Function Engine.DataTableFunctionLibrary.GetDataTableRowNames // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DebugCameraController
// Size: 0x6d0 (Inherited: 0x5d0)
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x5d0(0x01)
	char bIsFrozenRendering : 1; // 0x5d0(0x01)
	char bIsOrbitingSelectedActor : 1; // 0x5d0(0x01)
	char bOrbitPivotUseCenter : 1; // 0x5d0(0x01)
	char bEnableBufferVisualization : 1; // 0x5d0(0x01)
	char bEnableBufferVisualizationFullMode : 1; // 0x5d0(0x01)
	char bIsBufferVisualizationInputSetup : 1; // 0x5d0(0x01)
	char bLastDisplayEnabled : 1; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct UDrawFrustumComponent* DrawFrustum; // 0x5d8(0x08)
	struct AActor* SelectedActor; // 0x5e0(0x08)
	struct UPrimitiveComponent* SelectedComponent; // 0x5e8(0x08)
	struct FHitResult SelectedHitPoint; // 0x5f0(0x88)
	struct APlayerController* OriginalControllerRef; // 0x678(0x08)
	struct UPlayer* OriginalPlayer; // 0x680(0x08)
	float SpeedScale; // 0x688(0x04)
	float InitialMaxSpeed; // 0x68c(0x04)
	float InitialAccel; // 0x690(0x04)
	float InitialDecel; // 0x694(0x04)
	char pad_698[0x38]; // 0x698(0x38)

	void ToggleDisplay(); // Function Engine.DebugCameraController.ToggleDisplay // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DebugCameraControllerSettings
// Size: 0x50 (Inherited: 0x40)
struct UDebugCameraControllerSettings : UDeveloperSettings {
	struct TArray<struct FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x40(0x10)
};

// Class Engine.HUD
// Size: 0x348 (Inherited: 0x250)
struct AHUD : AActor {
	struct APlayerController* PlayerOwner; // 0x250(0x08)
	char bLostFocusPaused : 1; // 0x258(0x01)
	char bShowHUD : 1; // 0x258(0x01)
	char bShowDebugInfo : 1; // 0x258(0x01)
	char pad_258_3 : 5; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t CurrentTargetIndex; // 0x25c(0x04)
	char bShowHitBoxDebugInfo : 1; // 0x260(0x01)
	char bShowOverlays : 1; // 0x260(0x01)
	char bEnableDebugTextShadow : 1; // 0x260(0x01)
	char pad_260_3 : 5; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct TArray<struct AActor*> PostRenderedActors; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
	struct TArray<struct FName> DebugDisplay; // 0x280(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x290(0x10)
	struct UCanvas* Canvas; // 0x2a0(0x08)
	struct UCanvas* DebugCanvas; // 0x2a8(0x08)
	struct TArray<struct FDebugTextInfo> DebugTextList; // 0x2b0(0x10)
	struct AActor* ShowDebugTargetDesiredClass; // 0x2c0(0x08)
	struct AActor* ShowDebugTargetActor; // 0x2c8(0x08)
	int32_t ScrollSpeed; // 0x2d0(0x04)
	int32_t TabChangeDirection; // 0x2d4(0x04)
	char pad_2D8[0x70]; // 0x2d8(0x70)

	void ShowHUD(); // Function Engine.HUD.ShowHUD // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DebugCameraHUD
// Size: 0x348 (Inherited: 0x348)
struct ADebugCameraHUD : AHUD {
};

// Class Engine.DebugDrawService
// Size: 0x30 (Inherited: 0x30)
struct UDebugDrawService : UBlueprintFunctionLibrary {
};

// Class Engine.DebugTabControl
// Size: 0xa0 (Inherited: 0x30)
struct UDebugTabControl : UObject {
	char pad_30[0x70]; // 0x30(0x70)
};

// Class Engine.DecalComponent
// Size: 0x2b0 (Inherited: 0x220)
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x220(0x08)
	char pad_228[0x48]; // 0x228(0x48)
	int32_t SortOrder; // 0x270(0x04)
	float FadeScreenSize; // 0x274(0x04)
	float FadeStartDelay; // 0x278(0x04)
	float FadeDuration; // 0x27c(0x04)
	float FadeInDuration; // 0x280(0x04)
	float FadeInStartDelay; // 0x284(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x288(0x01)
	char pad_288_1 : 7; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FVector DecalSize; // 0x28c(0x0c)
	char pad_298[0x18]; // 0x298(0x18)

	void SetSortOrder(int32_t Value); // Function Engine.DecalComponent.SetSortOrder // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x298 (Inherited: 0x298)
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.DemoNetConnection
// Size: 0x1aa8 (Inherited: 0x1a38)
struct UDemoNetConnection : UNetConnection {
	char pad_1A38[0x70]; // 0x1a38(0x70)
};

// Class Engine.DemoNetDriver
// Size: 0x1138 (Inherited: 0x760)
struct UDemoNetDriver : UNetDriver {
	char pad_760[0xf8]; // 0x760(0xf8)
	struct TMap<struct FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x858(0x50)
	char pad_8A8[0x3c4]; // 0x8a8(0x3c4)
	float CheckpointSaveMaxMSPerFrame; // 0xc6c(0x04)
	char pad_C70[0x30]; // 0xc70(0x30)
	struct TArray<struct FMulticastRecordOptions> MulticastRecordOptions; // 0xca0(0x10)
	char pad_CB0[0x50]; // 0xcb0(0x50)
	bool bIsLocalReplay; // 0xd00(0x01)
	char pad_D01[0x7]; // 0xd01(0x07)
	struct TArray<struct APlayerController*> SpectatorControllers; // 0xd08(0x10)
	char pad_D18[0x420]; // 0xd18(0x420)
};

// Class Engine.PendingNetGame
// Size: 0xc8 (Inherited: 0x30)
struct UPendingNetGame : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x40(0x08)
	char pad_48[0x80]; // 0x48(0x80)
};

// Class Engine.DemoPendingNetGame
// Size: 0xc8 (Inherited: 0xc8)
struct UDemoPendingNetGame : UPendingNetGame {
};

// Class Engine.DestructibleInterface
// Size: 0x30 (Inherited: 0x30)
struct UDestructibleInterface : UInterface {
};

// Class Engine.TextureLODSettings
// Size: 0x40 (Inherited: 0x30)
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x30(0x10)
};

// Class Engine.DeviceProfile
// Size: 0xa0 (Inherited: 0x40)
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x40(0x10)
	struct FString BaseProfileName; // 0x50(0x10)
	struct UObject* Parent; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
	struct TArray<struct FString> CVars; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
};

// Class Engine.DeviceProfileManager
// Size: 0xb8 (Inherited: 0x30)
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; // 0x30(0x10)
	char pad_40[0x78]; // 0x40(0x78)
};

// Class Engine.DialogueSoundWaveProxy
// Size: 0x180 (Inherited: 0x168)
struct UDialogueSoundWaveProxy : USoundBase {
	char pad_168[0x18]; // 0x168(0x18)
};

// Class Engine.DialogueVoice
// Size: 0x48 (Inherited: 0x30)
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x30(0x01)
	enum class EGrammaticalNumber Plurality; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FGuid LocalizationGUID; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.DialogueWave
// Size: 0x78 (Inherited: 0x30)
struct UDialogueWave : UObject {
	char bMature : 1; // 0x30(0x01)
	char bOverride_SubtitleOverride : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString SpokenText; // 0x38(0x10)
	struct FString SubtitleOverride; // 0x48(0x10)
	struct TArray<struct FDialogueContextMapping> ContextMappings; // 0x58(0x10)
	struct FGuid LocalizationGUID; // 0x68(0x10)
};

// Class Engine.Light
// Size: 0x260 (Inherited: 0x250)
struct ALight : AActor {
	struct ULightComponent* LightComponent; // 0x250(0x08)
	char bEnabled : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void ToggleEnabled(); // Function Engine.Light.ToggleEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DirectionalLight
// Size: 0x260 (Inherited: 0x260)
struct ADirectionalLight : ALight {
};

// Class Engine.LightComponentBase
// Size: 0x250 (Inherited: 0x220)
struct ULightComponentBase : USceneComponent {
	struct FGuid LightGuid; // 0x220(0x10)
	float Brightness; // 0x230(0x04)
	float Intensity; // 0x234(0x04)
	struct FColor LightColor; // 0x238(0x04)
	char bAffectsWorld : 1; // 0x23c(0x01)
	char CastShadows : 1; // 0x23c(0x01)
	char CastStaticShadows : 1; // 0x23c(0x01)
	char CastDynamicShadows : 1; // 0x23c(0x01)
	char bAffectTranslucentLighting : 1; // 0x23c(0x01)
	char bTransmission : 1; // 0x23c(0x01)
	char bCastVolumetricShadow : 1; // 0x23c(0x01)
	char bCastDeepShadow : 1; // 0x23c(0x01)
	char bCastRaytracedShadow : 1; // 0x23d(0x01)
	char bAffectReflection : 1; // 0x23d(0x01)
	char bAffectGlobalIllumination : 1; // 0x23d(0x01)
	char pad_23D_3 : 5; // 0x23d(0x01)
	char pad_23E[0x2]; // 0x23e(0x02)
	float IndirectLightingIntensity; // 0x240(0x04)
	float VolumetricScatteringIntensity; // 0x244(0x04)
	int32_t SamplesPerPixel; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)

	void SetSamplesPerPixel(int32_t NewValue); // Function Engine.LightComponentBase.SetSamplesPerPixel // (None) // @ game+0xfffffffec0000000
};

// Class Engine.LightComponent
// Size: 0x360 (Inherited: 0x250)
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x250(0x04)
	float MaxDrawDistance; // 0x254(0x04)
	float MaxDistanceFadeRange; // 0x258(0x04)
	char bUseTemperature : 1; // 0x25c(0x01)
	char pad_25C_1 : 7; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	int32_t ShadowMapChannel; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	float MinRoughness; // 0x268(0x04)
	float SpecularScale; // 0x26c(0x04)
	float ShadowResolutionScale; // 0x270(0x04)
	float ShadowBias; // 0x274(0x04)
	float ShadowSlopeBias; // 0x278(0x04)
	float ShadowSharpen; // 0x27c(0x04)
	float ContactShadowLength; // 0x280(0x04)
	char ContactShadowLengthInWS : 1; // 0x284(0x01)
	char InverseSquaredFalloff : 1; // 0x284(0x01)
	char CastTranslucentShadows : 1; // 0x284(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x284(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x284(0x01)
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x284(0x01)
	char bAllowLightingSubsystemControl : 1; // 0x284(0x01)
	char pad_284_7 : 1; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct FLightingChannels LightingChannels; // 0x288(0x01)
	struct FShadowChannels ShadowChannels; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct UMaterialInterface* LightFunctionMaterial; // 0x290(0x08)
	struct FVector LightFunctionScale; // 0x298(0x0c)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UTextureLightProfile* IESTexture; // 0x2a8(0x08)
	char bUseIESBrightness : 1; // 0x2b0(0x01)
	char pad_2B0_1 : 7; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float IESBrightnessScale; // 0x2b4(0x04)
	float LightFunctionFadeDistance; // 0x2b8(0x04)
	float DisabledBrightness; // 0x2bc(0x04)
	char bEnableLightShaftBloom : 1; // 0x2c0(0x01)
	char pad_2C0_1 : 7; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float BloomScale; // 0x2c4(0x04)
	float BloomThreshold; // 0x2c8(0x04)
	float BloomMaxBrightness; // 0x2cc(0x04)
	struct FColor BloomTint; // 0x2d0(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	float RayStartOffsetDepthScale; // 0x2d8(0x04)
	float Hardness; // 0x2dc(0x04)
	char bOwnerNoSee : 1; // 0x2e0(0x01)
	char bOnlyOwnerSee : 1; // 0x2e0(0x01)
	char pad_2E0_2 : 6; // 0x2e0(0x01)
	bool bCanBeVisCulled; // 0x2e1(0x01)
	char pad_2E2[0x7e]; // 0x2e2(0x7e)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.LightComponent.SetVolumetricScatteringIntensity // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DirectionalLightComponent
// Size: 0x3d0 (Inherited: 0x360)
struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; // 0x358(0x04)
	char bEnableLightShaftOcclusion : 1; // 0x35c(0x01)
	float OcclusionMaskDarkness; // 0x360(0x04)
	float OcclusionDepthRange; // 0x364(0x04)
	struct FVector LightShaftOverrideDirection; // 0x368(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x374(0x04)
	float DynamicShadowDistanceMovableLight; // 0x378(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x37c(0x04)
	int32_t DynamicShadowCascades; // 0x380(0x04)
	float CascadeDistributionExponent; // 0x384(0x04)
	float CascadeTransitionFraction; // 0x388(0x04)
	float ShadowDistanceFadeoutFraction; // 0x38c(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x390(0x01)
	int32_t FarShadowCascadeCount; // 0x394(0x04)
	float FarShadowDistance; // 0x398(0x04)
	float DistanceFieldShadowDistance; // 0x39c(0x04)
	float LightSourceAngle; // 0x3a0(0x04)
	float LightSourceSoftAngle; // 0x3a4(0x04)
	float TraceDistance; // 0x3a8(0x04)
	struct FLightmassDirectionalLightSettings LightmassSettings; // 0x3ac(0x10)
	char bCastModulatedShadows : 1; // 0x3bc(0x01)
	char pad_3BC_3 : 5; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct FColor ModulatedShadowColor; // 0x3c0(0x04)
	float ShadowAmount; // 0x3c4(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x3c8(0x01)
	char pad_3C8_1 : 7; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t AtmosphereSunLightIndex; // 0x3cc(0x04)

	void SetShadowDistanceFadeoutFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Distribution
// Size: 0x38 (Inherited: 0x30)
struct UDistribution : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.DistributionFloat
// Size: 0x40 (Inherited: 0x38)
struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x38(0x01)
	char pad_38_1 : 1; // 0x38(0x01)
	char bBakedDataSuccesfully : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.DistributionFloatConstant
// Size: 0x48 (Inherited: 0x40)
struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.DistributionFloatConstantCurve
// Size: 0x58 (Inherited: 0x40)
struct UDistributionFloatConstantCurve : UDistributionFloat {
	struct FInterpCurveFloat ConstantCurve; // 0x40(0x18)
};

// Class Engine.DistributionFloatParameterBase
// Size: 0x68 (Inherited: 0x48)
struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	struct FName ParameterName; // 0x48(0x08)
	float MinInput; // 0x50(0x04)
	float MaxInput; // 0x54(0x04)
	float MinOutput; // 0x58(0x04)
	float MaxOutput; // 0x5c(0x04)
	enum class DistributionParamMode ParamMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x68 (Inherited: 0x68)
struct UDistributionFloatParticleParameter : UDistributionFloatParameterBase {
};

// Class Engine.DistributionFloatUniform
// Size: 0x48 (Inherited: 0x40)
struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
};

// Class Engine.DistributionFloatUniformCurve
// Size: 0x58 (Inherited: 0x40)
struct UDistributionFloatUniformCurve : UDistributionFloat {
	struct FInterpCurveVector2D ConstantCurve; // 0x40(0x18)
};

// Class Engine.DistributionVector
// Size: 0x40 (Inherited: 0x38)
struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x38(0x01)
	char bIsDirty : 1; // 0x38(0x01)
	char bBakedDataSuccesfully : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.DistributionVectorConstant
// Size: 0x58 (Inherited: 0x40)
struct UDistributionVectorConstant : UDistributionVector {
	struct FVector Constant; // 0x40(0x0c)
	char bLockAxes : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	enum class EDistributionVectorLockFlags LockedAxes; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.DistributionVectorConstantCurve
// Size: 0x60 (Inherited: 0x40)
struct UDistributionVectorConstantCurve : UDistributionVector {
	struct FInterpCurveVector ConstantCurve; // 0x40(0x18)
	char bLockAxes : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class EDistributionVectorLockFlags LockedAxes; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.DistributionVectorParameterBase
// Size: 0x98 (Inherited: 0x58)
struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	struct FName ParameterName; // 0x58(0x08)
	struct FVector MinInput; // 0x60(0x0c)
	struct FVector MaxInput; // 0x6c(0x0c)
	struct FVector MinOutput; // 0x78(0x0c)
	struct FVector MaxOutput; // 0x84(0x0c)
	enum class DistributionParamMode ParamModes[0x3]; // 0x90(0x03)
	char pad_93[0x5]; // 0x93(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x98 (Inherited: 0x98)
struct UDistributionVectorParticleParameter : UDistributionVectorParameterBase {
};

// Class Engine.DistributionVectorUniform
// Size: 0x68 (Inherited: 0x40)
struct UDistributionVectorUniform : UDistributionVector {
	struct FVector Max; // 0x40(0x0c)
	struct FVector Min; // 0x4c(0x0c)
	char bLockAxes : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class EDistributionVectorLockFlags LockedAxes; // 0x5c(0x01)
	enum class EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x5d(0x03)
	char bUseExtremes : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.DistributionVectorUniformCurve
// Size: 0x68 (Inherited: 0x40)
struct UDistributionVectorUniformCurve : UDistributionVector {
	struct FInterpCurveTwoVectors ConstantCurve; // 0x40(0x18)
	char bLockAxes1 : 1; // 0x58(0x01)
	char bLockAxes2 : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class EDistributionVectorLockFlags LockedAxes[0x2]; // 0x5c(0x02)
	enum class EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x5e(0x03)
	char pad_61[0x3]; // 0x61(0x03)
	char bUseExtremes : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.DocumentationActor
// Size: 0x258 (Inherited: 0x250)
struct ADocumentationActor : AActor {
	char pad_250[0x8]; // 0x250(0x08)
};

// Class Engine.DrawFrustumComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UDrawFrustumComponent : UPrimitiveComponent {
	struct FColor FrustumColor; // 0x4a0(0x04)
	float FrustumAngle; // 0x4a4(0x04)
	float FrustumAspectRatio; // 0x4a8(0x04)
	float FrustumStartDist; // 0x4ac(0x04)
	float FrustumEndDist; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UTexture* Texture; // 0x4b8(0x08)
};

// Class Engine.SphereComponent
// Size: 0x4c0 (Inherited: 0x4c0)
struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x4b8(0x04)

	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps); // Function Engine.SphereComponent.SetSphereRadius // (None) // @ game+0xfffffffec0000000
};

// Class Engine.DrawSphereComponent
// Size: 0x4c0 (Inherited: 0x4c0)
struct UDrawSphereComponent : USphereComponent {
};

// Class Engine.EdGraph
// Size: 0x68 (Inherited: 0x30)
struct UEdGraph : UObject {
	struct UEdGraphSchema* Schema; // 0x30(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x38(0x10)
	char bEditable : 1; // 0x48(0x01)
	char bAllowDeletion : 1; // 0x48(0x01)
	char bAllowRenaming : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x1f]; // 0x49(0x1f)
};

// Class Engine.GraphNodeContextMenuContext
// Size: 0x58 (Inherited: 0x30)
struct UGraphNodeContextMenuContext : UObject {
	struct UBlueprint* Blueprint; // 0x30(0x08)
	struct UEdGraph* Graph; // 0x38(0x08)
	struct UEdGraphNode* Node; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	bool bIsDebugging; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.EdGraphNode
// Size: 0xa0 (Inherited: 0x30)
struct UEdGraphNode : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; // 0x40(0x10)
	int32_t NodePosX; // 0x50(0x04)
	int32_t NodePosY; // 0x54(0x04)
	int32_t NodeWidth; // 0x58(0x04)
	int32_t NodeHeight; // 0x5c(0x04)
	enum class ENodeAdvancedPins AdvancedPinDisplay; // 0x60(0x01)
	enum class ENodeEnabledState EnabledState; // 0x61(0x01)
	char pad_62[0x1]; // 0x62(0x01)
	char pad_63_0 : 1; // 0x63(0x01)
	char bDisplayAsDisabled : 1; // 0x63(0x01)
	char bUserSetEnabledState : 1; // 0x63(0x01)
	char pad_63_3 : 1; // 0x63(0x01)
	char bIsNodeEnabled : 1; // 0x63(0x01)
	char pad_63_5 : 1; // 0x63(0x01)
	char bHasCompilerMessage : 1; // 0x63(0x01)
	char pad_63_7 : 1; // 0x63(0x01)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString NodeComment; // 0x68(0x10)
	int32_t ErrorType; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString ErrorMsg; // 0x80(0x10)
	struct FGuid NodeGuid; // 0x90(0x10)
};

// Class Engine.EdGraphNode_Documentation
// Size: 0xc0 (Inherited: 0xa0)
struct UEdGraphNode_Documentation : UEdGraphNode {
	struct FString Link; // 0xa0(0x10)
	struct FString Excerpt; // 0xb0(0x10)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x120 (Inherited: 0x30)
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName; // 0x30(0x10)
	struct FString PinToolTip; // 0x40(0x10)
	enum class EEdGraphPinDirection Direction; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FEdGraphPinType PinType; // 0x58(0x58)
	struct FString DefaultValue; // 0xb0(0x10)
	struct FString AutogeneratedDefaultValue; // 0xc0(0x10)
	struct UObject* DefaultObject; // 0xd0(0x08)
	struct FText DefaultTextValue; // 0xd8(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> LinkedTo; // 0xf0(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> SubPins; // 0x100(0x10)
	struct UEdGraphPin_Deprecated* ParentPin; // 0x110(0x08)
	struct UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x118(0x08)
};

// Class Engine.EdGraphSchema
// Size: 0x30 (Inherited: 0x30)
struct UEdGraphSchema : UObject {
};

// Class Engine.Emitter
// Size: 0x2b8 (Inherited: 0x250)
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x250(0x08)
	char bDestroyOnSystemFinish : 1; // 0x258(0x01)
	char bPostUpdateTickGroup : 1; // 0x258(0x01)
	char bCurrentlyActive : 1; // 0x258(0x01)
	char pad_258_3 : 5; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x260(0x10)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x270(0x10)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x280(0x10)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x290(0x10)
	char pad_2A0[0x18]; // 0x2a0(0x18)

	void ToggleActive(); // Function Engine.Emitter.ToggleActive // (None) // @ game+0xfffffffec0000000
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x320 (Inherited: 0x2b8)
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* PS_CameraEffect; // 0x2b8(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x2c0(0x08)
	struct APlayerCameraManager* BaseCamera; // 0x2c8(0x08)
	struct FTransform RelativeTransform; // 0x2d0(0x30)
	float BaseFOV; // 0x300(0x04)
	char bAllowMultipleInstances : 1; // 0x304(0x01)
	char bResetWhenRetriggered : 1; // 0x304(0x01)
	char pad_304_2 : 6; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct TArray<struct AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x308(0x10)
	float DistFromCamera; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
};

// Class Engine.ViewModeUtils
// Size: 0x30 (Inherited: 0x30)
struct UViewModeUtils : UObject {
};

// Class Engine.EngineBaseTypes
// Size: 0x30 (Inherited: 0x30)
struct UEngineBaseTypes : UObject {
};

// Class Engine.EngineHandlerComponentFactory
// Size: 0x30 (Inherited: 0x30)
struct UEngineHandlerComponentFactory : UHandlerComponentFactory {
};

// Class Engine.LocalMessage
// Size: 0x30 (Inherited: 0x30)
struct ULocalMessage : UObject {
};

// Class Engine.EngineMessage
// Size: 0xb0 (Inherited: 0x30)
struct UEngineMessage : ULocalMessage {
	struct FString FailedPlaceMessage; // 0x30(0x10)
	struct FString MaxedOutMessage; // 0x40(0x10)
	struct FString EnteredMessage; // 0x50(0x10)
	struct FString LeftMessage; // 0x60(0x10)
	struct FString GlobalNameChange; // 0x70(0x10)
	struct FString SpecEnteredMessage; // 0x80(0x10)
	struct FString NewPlayerMessage; // 0x90(0x10)
	struct FString NewSpecMessage; // 0xa0(0x10)
};

// Class Engine.EngineTypes
// Size: 0x30 (Inherited: 0x30)
struct UEngineTypes : UObject {
};

// Class Engine.ExponentialHeightFog
// Size: 0x260 (Inherited: 0x250)
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component; // 0x250(0x08)
	char bEnabled : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x2c0 (Inherited: 0x220)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x220(0x04)
	float FogHeightFalloff; // 0x224(0x04)
	struct FExponentialHeightFogData SecondFogData; // 0x228(0x0c)
	struct FLinearColor FogInscatteringColor; // 0x234(0x10)
	char pad_244[0x4]; // 0x244(0x04)
	struct UTextureCube* InscatteringColorCubemap; // 0x248(0x08)
	float InscatteringColorCubemapAngle; // 0x250(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x254(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x264(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x268(0x04)
	float DirectionalInscatteringExponent; // 0x26c(0x04)
	float DirectionalInscatteringStartDistance; // 0x270(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x274(0x10)
	float FogMaxOpacity; // 0x284(0x04)
	float StartDistance; // 0x288(0x04)
	float FogCutoffDistance; // 0x28c(0x04)
	bool bEnableVolumetricFog; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float VolumetricFogScatteringDistribution; // 0x294(0x04)
	struct FColor VolumetricFogAlbedo; // 0x298(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x29c(0x10)
	float VolumetricFogExtinctionScale; // 0x2ac(0x04)
	float VolumetricFogDistance; // 0x2b0(0x04)
	float VolumetricFogStaticLightingScatteringIntensity; // 0x2b4(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)

	void SetVolumetricFogScatteringDistribution(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogScatteringDistribution // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Exporter
// Size: 0x80 (Inherited: 0x30)
struct UExporter : UObject {
	struct UObject* SupportedClass; // 0x30(0x08)
	struct UObject* ExportRootScope; // 0x38(0x08)
	struct TArray<struct FString> FormatExtension; // 0x40(0x10)
	struct TArray<struct FString> FormatDescription; // 0x50(0x10)
	int32_t PreferredFormatIndex; // 0x60(0x04)
	int32_t TextIndent; // 0x64(0x04)
	char bText : 1; // 0x68(0x01)
	char bSelectedOnly : 1; // 0x68(0x01)
	char bForceFileOperations : 1; // 0x68(0x01)
	char pad_68_3 : 5; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UAssetExportTask* ExportTask; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)

	bool ScriptRunAssetExportTask(struct UAssetExportTask* Task); // Function Engine.Exporter.ScriptRunAssetExportTask // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Font
// Size: 0x1d8 (Inherited: 0x30)
struct UFont : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EFontCacheType FontCacheType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FFontCharacter> Characters; // 0x40(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x50(0x10)
	int32_t IsRemapped; // 0x60(0x04)
	float EmScale; // 0x64(0x04)
	float Ascent; // 0x68(0x04)
	float Descent; // 0x6c(0x04)
	float Leading; // 0x70(0x04)
	int32_t Kerning; // 0x74(0x04)
	struct FFontImportOptionsData ImportOptions; // 0x78(0xb0)
	int32_t NumCharacters; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<int32_t> MaxCharHeight; // 0x130(0x10)
	float ScalingFactor; // 0x140(0x04)
	int32_t LegacyFontSize; // 0x144(0x04)
	struct FName LegacyFontName; // 0x148(0x08)
	struct FCompositeFont CompositeFont; // 0x150(0x38)
	char pad_188[0x50]; // 0x188(0x50)
};

// Class Engine.FontFace
// Size: 0x60 (Inherited: 0x30)
struct UFontFace : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString SourceFilename; // 0x38(0x10)
	enum class EFontHinting Hinting; // 0x48(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x49(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x4a(0x01)
	char pad_4B[0x15]; // 0x4b(0x15)
};

// Class Engine.FontImportOptions
// Size: 0xe0 (Inherited: 0x30)
struct UFontImportOptions : UObject {
	struct FFontImportOptionsData Data; // 0x30(0xb0)
};

// Class Engine.ForceFeedbackAttenuation
// Size: 0xe0 (Inherited: 0x30)
struct UForceFeedbackAttenuation : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; // 0x30(0xb0)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x300 (Inherited: 0x220)
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x220(0x08)
	char bAutoDestroy : 1; // 0x228(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x228(0x01)
	char bLooping : 1; // 0x228(0x01)
	char bIgnoreTimeDilation : 1; // 0x228(0x01)
	char bOverrideAttenuation : 1; // 0x228(0x01)
	char pad_228_5 : 3; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float IntensityMultiplier; // 0x22c(0x04)
	struct UForceFeedbackAttenuation* AttenuationSettings; // 0x230(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x238(0xb0)
	struct FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2e8(0x10)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ForceFeedbackEffect
// Size: 0x48 (Inherited: 0x30)
struct UForceFeedbackEffect : UObject {
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails; // 0x30(0x10)
	float Duration; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.GameEngine
// Size: 0xe50 (Inherited: 0xe00)
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xe00(0x04)
	float ServerFlushLogInterval; // 0xe04(0x04)
	struct UGameInstance* GameInstance; // 0xe08(0x08)
	char pad_E10[0x40]; // 0xe10(0x40)
};

// Class Engine.GameNetworkManager
// Size: 0x300 (Inherited: 0x250)
struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; // 0x250(0x04)
	float SeverePacketLossThreshold; // 0x254(0x04)
	int32_t BadPingThreshold; // 0x258(0x04)
	int32_t SeverePingThreshold; // 0x25c(0x04)
	int32_t AdjustedNetSpeed; // 0x260(0x04)
	float LastNetSpeedUpdateTime; // 0x264(0x04)
	int32_t TotalNetBandwidth; // 0x268(0x04)
	int32_t MinDynamicBandwidth; // 0x26c(0x04)
	int32_t MaxDynamicBandwidth; // 0x270(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x274(0x01)
	char bHasStandbyCheatTriggered : 1; // 0x274(0x01)
	char pad_274_2 : 6; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	float StandbyRxCheatTime; // 0x278(0x04)
	float StandbyTxCheatTime; // 0x27c(0x04)
	float PercentMissingForRxStandby; // 0x280(0x04)
	float PercentMissingForTxStandby; // 0x284(0x04)
	float PercentForBadPing; // 0x288(0x04)
	float JoinInProgressStandbyWaitTime; // 0x28c(0x04)
	float MoveRepSize; // 0x290(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x294(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x298(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x29c(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x2a0(0x04)
	float MaxClientForcedUpdateDuration; // 0x2a4(0x04)
	float ServerForcedUpdateHitchThreshold; // 0x2a8(0x04)
	float ServerForcedUpdateHitchCooldown; // 0x2ac(0x04)
	float MaxMoveDeltaTime; // 0x2b0(0x04)
	float MaxClientSmoothingDeltaTime; // 0x2b4(0x04)
	float ClientNetSendMoveDeltaTime; // 0x2b8(0x04)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x2bc(0x04)
	float ClientNetSendMoveDeltaTimeStationary; // 0x2c0(0x04)
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x2c4(0x04)
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x2c8(0x04)
	bool ClientAuthorativePosition; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float ClientErrorUpdateRateLimit; // 0x2d0(0x04)
	float ClientNetCamUpdateDeltaTime; // 0x2d4(0x04)
	float ClientNetCamUpdatePositionLimit; // 0x2d8(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x2dc(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x2dd(0x01)
	char pad_2DE[0x2]; // 0x2de(0x02)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2e0(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2e4(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x2e8(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x2ec(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2f0(0x01)
	bool bUseDistanceBasedRelevancy; // 0x2f1(0x01)
	char pad_2F2[0xe]; // 0x2f2(0x0e)
};

// Class Engine.GameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UGameplayStatics : UBlueprintFunctionLibrary {

	void UnloadStreamLevel(struct UObject* WorldContextObject, struct FName LevelName, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload); // Function Engine.GameplayStatics.UnloadStreamLevel // (None) // @ game+0xfffffffec0000000
};

// Class Engine.GameSession
// Size: 0x268 (Inherited: 0x250)
struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x250(0x04)
	int32_t MaxPlayers; // 0x254(0x04)
	int32_t MaxPartySize; // 0x258(0x04)
	char MaxSplitscreensPerConnection; // 0x25c(0x01)
	bool bRequiresPushToTalk; // 0x25d(0x01)
	char pad_25E[0x2]; // 0x25e(0x02)
	struct FName SessionName; // 0x260(0x08)
};

// Class Engine.SpotLight
// Size: 0x268 (Inherited: 0x260)
struct ASpotLight : ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x260(0x08)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLight.SetOuterConeAngle // (None) // @ game+0xfffffffec0000000
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x268 (Inherited: 0x268)
struct AGeneratedMeshAreaLight : ASpotLight {
};

// Class Engine.GuidDataTable
// Size: 0x128 (Inherited: 0xd8)
struct UGuidDataTable : UDataTable {
	struct TMap<struct FGuid, struct FName> GuidToDisplayName; // 0xd8(0x50)
};

// Class Engine.HapticFeedbackEffect_Base
// Size: 0x30 (Inherited: 0x30)
struct UHapticFeedbackEffect_Base : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x70 (Inherited: 0x30)
struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	struct TArray<char> Amplitudes; // 0x30(0x10)
	int32_t SampleRate; // 0x40(0x04)
	char pad_44[0x2c]; // 0x44(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x140 (Inherited: 0x30)
struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	struct FHapticFeedbackDetails_Curve HapticDetails; // 0x30(0x110)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x68 (Inherited: 0x30)
struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	struct USoundWave* SoundWave; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class Engine.HealthSnapshotBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UHealthSnapshotBlueprintLibrary : UBlueprintFunctionLibrary {

	void StopPerformanceSnapshots(); // Function Engine.HealthSnapshotBlueprintLibrary.StopPerformanceSnapshots // (None) // @ game+0xfffffffec0000000
};

// Class Engine.HierarchicalInstancedSplineMeshComponent
// Size: 0x670 (Inherited: 0x670)
struct UHierarchicalInstancedSplineMeshComponent : UInstancedStaticMeshComponent {

	bool UpdateInstanceSplineData(int32_t InstanceIndex, struct FVector StartPos, struct FVector EndPos, struct FVector StartTangent, struct FVector EndTangent, bool bSmoothInterpRollScale, struct FVector2D StartScale, float StartRoll, struct FVector2D StartOffset, struct FVector2D EndScale, float EndRoll, struct FVector2D EndOffset, struct FVector SplineUpDir, enum class EInstanceSplineMeshAxis ForwardAxis, bool bMarkRenderStateDirty); // Function Engine.HierarchicalInstancedSplineMeshComponent.UpdateInstanceSplineData // (None) // @ game+0xfffffffec0000000
};

// Class Engine.HLODProxy
// Size: 0x40 (Inherited: 0x30)
struct UHLODProxy : UObject {
	struct TArray<struct FHLODProxyMesh> ProxyMeshes; // 0x30(0x10)
};

// Class Engine.ImportanceSamplingLibrary
// Size: 0x30 (Inherited: 0x30)
struct UImportanceSamplingLibrary : UBlueprintFunctionLibrary {

	float RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed); // Function Engine.ImportanceSamplingLibrary.RandomSobolFloat // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ImportantToggleSettingInterface
// Size: 0x30 (Inherited: 0x30)
struct UImportantToggleSettingInterface : UInterface {
};

// Class Engine.InGameAdManager
// Size: 0x68 (Inherited: 0x40)
struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FDelegate> ClickedBannerDelegates; // 0x48(0x10)
	struct TArray<struct FDelegate> ClosedAdDelegates; // 0x58(0x10)
};

// Class Engine.InheritableComponentHandler
// Size: 0x50 (Inherited: 0x30)
struct UInheritableComponentHandler : UObject {
	struct TArray<struct FComponentOverrideRecord> Records; // 0x30(0x10)
	struct TArray<struct UActorComponent*> UnnecessaryComponents; // 0x40(0x10)
};

// Class Engine.InputDelegateBinding
// Size: 0x30 (Inherited: 0x30)
struct UInputDelegateBinding : UDynamicBlueprintBinding {
};

// Class Engine.InputActionDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UInputActionDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x30(0x10)
};

// Class Engine.InputAxisDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UInputAxisDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x30(0x10)
};

// Class Engine.InputAxisKeyDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x30(0x10)
};

// Class Engine.InputComponent
// Size: 0x1b0 (Inherited: 0xd8)
struct UInputComponent : UActorComponent {
	char pad_D8[0x70]; // 0xd8(0x70)
	struct TArray<struct FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x148(0x10)
	char pad_158[0x58]; // 0x158(0x58)

	bool WasControllerKeyJustReleased(struct FKey Key); // Function Engine.InputComponent.WasControllerKeyJustReleased // (None) // @ game+0xfffffffec0000000
};

// Class Engine.InputKeyDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UInputKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x30(0x10)
};

// Class Engine.InputSettings
// Size: 0xf8 (Inherited: 0x30)
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x30(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x40(0x01)
	char bF11TogglesFullscreen : 1; // 0x40(0x01)
	char bUseMouseForTouch : 1; // 0x40(0x01)
	char bEnableMouseSmoothing : 1; // 0x40(0x01)
	char bEnableFOVScaling : 1; // 0x40(0x01)
	char bCaptureMouseOnLaunch : 1; // 0x40(0x01)
	char bDefaultViewportMouseLock : 1; // 0x40(0x01)
	char bAlwaysShowTouchInterface : 1; // 0x40(0x01)
	char bShowConsoleOnFourFingerTap : 1; // 0x41(0x01)
	char bEnableGestureRecognizer : 1; // 0x41(0x01)
	char pad_41_2 : 6; // 0x41(0x01)
	bool bUseAutocorrect; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct TArray<struct FString> ExcludedAutocorrectOS; // 0x48(0x10)
	struct TArray<struct FString> ExcludedAutocorrectCultures; // 0x58(0x10)
	struct TArray<struct FString> ExcludedAutocorrectDeviceModels; // 0x68(0x10)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x78(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	float FOVScale; // 0x7c(0x04)
	float DoubleClickTime; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x88(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x98(0x10)
	struct TArray<struct FInputActionSpeechMapping> SpeechMappings; // 0xa8(0x10)
	struct FSoftObjectPath DefaultTouchInterface; // 0xb8(0x18)
	struct FKey ConsoleKey; // 0xd0(0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0xe8(0x10)

	void SaveKeyMappings(); // Function Engine.InputSettings.SaveKeyMappings // (None) // @ game+0xfffffffec0000000
};

// Class Engine.InputTouchDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UInputTouchDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x30(0x10)
};

// Class Engine.InputVectorAxisDelegateBinding
// Size: 0x40 (Inherited: 0x40)
struct UInputVectorAxisDelegateBinding : UInputAxisKeyDelegateBinding {
};

// Class Engine.Interface_AssetUserData
// Size: 0x30 (Inherited: 0x30)
struct UInterface_AssetUserData : UInterface {
};

// Class Engine.Interface_CollisionDataProvider
// Size: 0x30 (Inherited: 0x30)
struct UInterface_CollisionDataProvider : UInterface {
};

// Class Engine.Interface_PostProcessVolume
// Size: 0x30 (Inherited: 0x30)
struct UInterface_PostProcessVolume : UInterface {
};

// Class Engine.Interface_PreviewMeshProvider
// Size: 0x30 (Inherited: 0x30)
struct UInterface_PreviewMeshProvider : UInterface {
};

// Class Engine.InterpCurveEdSetup
// Size: 0x48 (Inherited: 0x30)
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct FCurveEdTab> Tabs; // 0x30(0x10)
	int32_t ActiveTab; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.InterpData
// Size: 0x78 (Inherited: 0x30)
struct UInterpData : UObject {
	float InterpLength; // 0x30(0x04)
	float PathBuildTime; // 0x34(0x04)
	struct TArray<struct UInterpGroup*> InterpGroups; // 0x38(0x10)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x48(0x08)
	float EdSectionStart; // 0x50(0x04)
	float EdSectionEnd; // 0x54(0x04)
	char bShouldBakeAndPrune : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UInterpGroupDirector* CachedDirectorGroup; // 0x60(0x08)
	struct TArray<struct FName> AllEventNames; // 0x68(0x10)
};

// Class Engine.InterpFilter
// Size: 0x40 (Inherited: 0x30)
struct UInterpFilter : UObject {
	struct FString Caption; // 0x30(0x10)
};

// Class Engine.InterpFilter_Classes
// Size: 0x40 (Inherited: 0x40)
struct UInterpFilter_Classes : UInterpFilter {
};

// Class Engine.InterpFilter_Custom
// Size: 0x40 (Inherited: 0x40)
struct UInterpFilter_Custom : UInterpFilter {
};

// Class Engine.InterpGroup
// Size: 0x58 (Inherited: 0x30)
struct UInterpGroup : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UInterpTrack*> InterpTracks; // 0x38(0x10)
	struct FName GroupName; // 0x48(0x08)
	struct FColor GroupColor; // 0x50(0x04)
	char bCollapsed : 1; // 0x54(0x01)
	char bVisible : 1; // 0x54(0x01)
	char bIsFolder : 1; // 0x54(0x01)
	char bIsParented : 1; // 0x54(0x01)
	char bIsSelected : 1; // 0x54(0x01)
	char pad_54_5 : 3; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.InterpGroupCamera
// Size: 0x68 (Inherited: 0x58)
struct UInterpGroupCamera : UInterpGroup {
	struct UCameraAnim* CameraAnimInst; // 0x58(0x08)
	float CompressTolerance; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.InterpGroupDirector
// Size: 0x58 (Inherited: 0x58)
struct UInterpGroupDirector : UInterpGroup {
};

// Class Engine.InterpGroupInst
// Size: 0x50 (Inherited: 0x30)
struct UInterpGroupInst : UObject {
	struct UInterpGroup* Group; // 0x30(0x08)
	struct AActor* GroupActor; // 0x38(0x08)
	struct TArray<struct UInterpTrackInst*> TrackInst; // 0x40(0x10)
};

// Class Engine.InterpGroupInstCamera
// Size: 0x50 (Inherited: 0x50)
struct UInterpGroupInstCamera : UInterpGroupInst {
};

// Class Engine.InterpGroupInstDirector
// Size: 0x50 (Inherited: 0x50)
struct UInterpGroupInstDirector : UInterpGroupInst {
};

// Class Engine.InterpToMovementComponent
// Size: 0x1b8 (Inherited: 0x118)
struct UInterpToMovementComponent : UMovementComponent {
	float Duration; // 0x118(0x04)
	char bPauseOnImpact : 1; // 0x11c(0x01)
	char pad_11C_1 : 7; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	bool bSweep; // 0x120(0x01)
	enum class ETeleportType TeleportType; // 0x121(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0x122(0x01)
	bool bCheckIfStillInWorld; // 0x123(0x01)
	char bForceSubStepping : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FMulticastInlineDelegate OnInterpToReverse; // 0x128(0x10)
	struct FMulticastInlineDelegate OnInterpToStop; // 0x138(0x10)
	struct FMulticastInlineDelegate OnWaitBeginDelegate; // 0x148(0x10)
	struct FMulticastInlineDelegate OnWaitEndDelegate; // 0x158(0x10)
	struct FMulticastInlineDelegate OnResetDelegate; // 0x168(0x10)
	float MaxSimulationTimeStep; // 0x178(0x04)
	int32_t MaxSimulationIterations; // 0x17c(0x04)
	struct TArray<struct FInterpControlPoint> ControlPoints; // 0x180(0x10)
	char pad_190[0x28]; // 0x190(0x28)

	void StopSimulating(struct FHitResult HitResult); // Function Engine.InterpToMovementComponent.StopSimulating // (None) // @ game+0xfffffffec0000000
};

// Class Engine.InterpTrackAnimControl
// Size: 0xb8 (Inherited: 0x98)
struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	struct FName SlotName; // 0x98(0x08)
	struct TArray<struct FAnimControlTrackKey> AnimSeqs; // 0xa0(0x10)
	char bSkipAnimNotifiers : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Engine.InterpTrackAudioMaster
// Size: 0x98 (Inherited: 0x98)
struct UInterpTrackAudioMaster : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackBoolProp
// Size: 0x90 (Inherited: 0x78)
struct UInterpTrackBoolProp : UInterpTrack {
	struct TArray<struct FBoolTrackKey> BoolTrack; // 0x78(0x10)
	struct FName PropertyName; // 0x88(0x08)
};

// Class Engine.InterpTrackColorProp
// Size: 0xa0 (Inherited: 0x98)
struct UInterpTrackColorProp : UInterpTrackVectorBase {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.InterpTrackColorScale
// Size: 0x98 (Inherited: 0x98)
struct UInterpTrackColorScale : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackDirector
// Size: 0x90 (Inherited: 0x78)
struct UInterpTrackDirector : UInterpTrack {
	struct TArray<struct FDirectorTrackCut> CutTrack; // 0x78(0x10)
	char bSimulateCameraCutsOnClients : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.InterpTrackEvent
// Size: 0x90 (Inherited: 0x78)
struct UInterpTrackEvent : UInterpTrack {
	struct TArray<struct FEventTrackKey> EventTrack; // 0x78(0x10)
	char bFireEventsWhenForwards : 1; // 0x88(0x01)
	char bFireEventsWhenBackwards : 1; // 0x88(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x88(0x01)
	char bUseCustomEventName : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.InterpTrackFade
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x98(0x01)
	char bFadeAudio : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FLinearColor FadeColor; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Engine.InterpTrackFloatAnimBPParam
// Size: 0xb8 (Inherited: 0x98)
struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	struct UObject* AnimBlueprintClass; // 0x98(0x08)
	struct UAnimInstance* AnimClass; // 0xa0(0x08)
	struct FName ParamName; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class Engine.InterpTrackFloatMaterialParam
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.InterpTrackFloatParticleParam
// Size: 0xa0 (Inherited: 0x98)
struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	struct FName ParamName; // 0x98(0x08)
};

// Class Engine.InterpTrackFloatProp
// Size: 0xa0 (Inherited: 0x98)
struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.InterpTrackInstAnimControl
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.InterpTrackInstAudioMaster
// Size: 0x30 (Inherited: 0x30)
struct UInterpTrackInstAudioMaster : UInterpTrackInst {
};

// Class Engine.InterpTrackInstProperty
// Size: 0x58 (Inherited: 0x30)
struct UInterpTrackInstProperty : UInterpTrackInst {
	struct TFieldPath<FProperty> InterpProperty; // 0x30(0x20)
	struct UObject* PropertyOuterObjectInst; // 0x50(0x08)
};

// Class Engine.InterpTrackInstBoolProp
// Size: 0x70 (Inherited: 0x58)
struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	char pad_58[0x10]; // 0x58(0x10)
	bool ResetBool; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.InterpTrackInstColorProp
// Size: 0x68 (Inherited: 0x58)
struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	char pad_58[0x8]; // 0x58(0x08)
	struct FColor ResetColor; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.InterpTrackInstColorScale
// Size: 0x30 (Inherited: 0x30)
struct UInterpTrackInstColorScale : UInterpTrackInst {
};

// Class Engine.InterpTrackInstDirector
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstDirector : UInterpTrackInst {
	struct AActor* OldViewTarget; // 0x30(0x08)
};

// Class Engine.InterpTrackInstEvent
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.InterpTrackInstFade
// Size: 0x30 (Inherited: 0x30)
struct UInterpTrackInstFade : UInterpTrackInst {
};

// Class Engine.InterpTrackInstFloatAnimBPParam
// Size: 0x48 (Inherited: 0x30)
struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	struct UAnimInstance* AnimScriptInstance; // 0x30(0x08)
	float ResetFloat; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// Class Engine.InterpTrackInstFloatMaterialParam
// Size: 0x68 (Inherited: 0x30)
struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<float> ResetFloats; // 0x40(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x50(0x10)
	struct UInterpTrackFloatMaterialParam* InstancedTrack; // 0x60(0x08)
};

// Class Engine.InterpTrackInstFloatParticleParam
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.InterpTrackInstFloatProp
// Size: 0x68 (Inherited: 0x58)
struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	char pad_58[0x8]; // 0x58(0x08)
	float ResetFloat; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.InterpTrackInstLinearColorProp
// Size: 0x70 (Inherited: 0x58)
struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	char pad_58[0x8]; // 0x58(0x08)
	struct FLinearColor ResetColor; // 0x60(0x10)
};

// Class Engine.InterpTrackInstMove
// Size: 0x48 (Inherited: 0x30)
struct UInterpTrackInstMove : UInterpTrackInst {
	struct FVector ResetLocation; // 0x30(0x0c)
	struct FRotator ResetRotation; // 0x3c(0x0c)
};

// Class Engine.InterpTrackInstParticleReplay
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.InterpTrackInstSlomo
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.InterpTrackInstSound
// Size: 0x40 (Inherited: 0x30)
struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UAudioComponent* PlayAudioComp; // 0x38(0x08)
};

// Class Engine.InterpTrackInstToggle
// Size: 0x40 (Inherited: 0x30)
struct UInterpTrackInstToggle : UInterpTrackInst {
	enum class ETrackToggleAction Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float LastUpdatePosition; // 0x34(0x04)
	char bSavedActiveState : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.InterpTrackInstVectorMaterialParam
// Size: 0x68 (Inherited: 0x30)
struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<struct FVector> ResetVectors; // 0x40(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x50(0x10)
	struct UInterpTrackVectorMaterialParam* InstancedTrack; // 0x60(0x08)
};

// Class Engine.InterpTrackInstVectorProp
// Size: 0x70 (Inherited: 0x58)
struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	char pad_58[0x8]; // 0x58(0x08)
	struct FVector ResetVector; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.InterpTrackInstVisibility
// Size: 0x38 (Inherited: 0x30)
struct UInterpTrackInstVisibility : UInterpTrackInst {
	enum class EVisibilityTrackAction Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float LastUpdatePosition; // 0x34(0x04)
};

// Class Engine.InterpTrackLinearColorBase
// Size: 0x98 (Inherited: 0x78)
struct UInterpTrackLinearColorBase : UInterpTrack {
	struct FInterpCurveLinearColor LinearColorTrack; // 0x78(0x18)
	float CurveTension; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.InterpTrackLinearColorProp
// Size: 0xa0 (Inherited: 0x98)
struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.InterpTrackMove
// Size: 0xd0 (Inherited: 0x78)
struct UInterpTrackMove : UInterpTrack {
	struct FInterpCurveVector PosTrack; // 0x78(0x18)
	struct FInterpCurveVector EulerTrack; // 0x90(0x18)
	struct FInterpLookupTrack LookupTrack; // 0xa8(0x10)
	struct FName LookAtGroupName; // 0xb8(0x08)
	float LinCurveTension; // 0xc0(0x04)
	float AngCurveTension; // 0xc4(0x04)
	char bUseQuatInterpolation : 1; // 0xc8(0x01)
	char bShowArrowAtKeys : 1; // 0xc8(0x01)
	char bDisableMovement : 1; // 0xc8(0x01)
	char bShowTranslationOnCurveEd : 1; // 0xc8(0x01)
	char bShowRotationOnCurveEd : 1; // 0xc8(0x01)
	char bHide3DTrack : 1; // 0xc8(0x01)
	char pad_C8_6 : 2; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class EInterpTrackMoveRotMode RotMode; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class Engine.InterpTrackMoveAxis
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	enum class EInterpMoveAxis MoveAxis; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FInterpLookupTrack LookupTrack; // 0xa0(0x10)
};

// Class Engine.InterpTrackParticleReplay
// Size: 0x88 (Inherited: 0x78)
struct UInterpTrackParticleReplay : UInterpTrack {
	struct TArray<struct FParticleReplayTrackKey> TrackKeys; // 0x78(0x10)
};

// Class Engine.InterpTrackSlomo
// Size: 0x98 (Inherited: 0x98)
struct UInterpTrackSlomo : UInterpTrackFloatBase {
};

// Class Engine.InterpTrackSound
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackSound : UInterpTrackVectorBase {
	struct TArray<struct FSoundTrackKey> Sounds; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueSoundOnMatineeEnd : 1; // 0xa8(0x01)
	char bSuppressSubtitles : 1; // 0xa8(0x01)
	char bTreatAsDialogue : 1; // 0xa8(0x01)
	char bAttach : 1; // 0xa8(0x01)
	char pad_A8_5 : 3; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.InterpTrackToggle
// Size: 0x90 (Inherited: 0x78)
struct UInterpTrackToggle : UInterpTrack {
	struct TArray<struct FToggleTrackKey> ToggleTrack; // 0x78(0x10)
	char bActivateSystemEachUpdate : 1; // 0x88(0x01)
	char bActivateWithJustAttachedFlag : 1; // 0x88(0x01)
	char bFireEventsWhenForwards : 1; // 0x88(0x01)
	char bFireEventsWhenBackwards : 1; // 0x88(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x88(0x01)
	char pad_88_5 : 3; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.InterpTrackVectorMaterialParam
// Size: 0xb0 (Inherited: 0x98)
struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.InterpTrackVectorProp
// Size: 0xa0 (Inherited: 0x98)
struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.InterpTrackVisibility
// Size: 0x90 (Inherited: 0x78)
struct UInterpTrackVisibility : UInterpTrack {
	struct TArray<struct FVisibilityTrackKey> VisibilityTrack; // 0x78(0x10)
	char bFireEventsWhenForwards : 1; // 0x88(0x01)
	char bFireEventsWhenBackwards : 1; // 0x88(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.IntSerialization
// Size: 0x58 (Inherited: 0x30)
struct UIntSerialization : UObject {
	uint16_t UnsignedInt16Variable; // 0x30(0x02)
	char pad_32[0x2]; // 0x32(0x02)
	uint32_t UnsignedInt32Variable; // 0x34(0x04)
	uint64_t UnsignedInt64Variable; // 0x38(0x08)
	int8_t SignedInt8Variable; // 0x40(0x01)
	char pad_41[0x1]; // 0x41(0x01)
	int16_t SignedInt16Variable; // 0x42(0x02)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t SignedInt64Variable; // 0x48(0x08)
	char UnsignedInt8Variable; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t SignedInt32Variable; // 0x54(0x04)
};

// Class Engine.KillZVolume
// Size: 0x298 (Inherited: 0x298)
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.KismetArrayLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	void SetArrayPropertyByName(struct UObject* Object, struct FName PropertyName, struct TArray<int32_t> Value); // Function Engine.KismetArrayLibrary.SetArrayPropertyByName // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetGuidLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetGuidLibrary : UBlueprintFunctionLibrary {

	void Parse_StringToGuid(struct FString GuidString, struct FGuid OutGuid, bool Success); // Function Engine.KismetGuidLibrary.Parse_StringToGuid // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetInputLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	bool PointerEvent_IsTouchEvent(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_IsTouchEvent // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetInternationalizationLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetInternationalizationLibrary : UBlueprintFunctionLibrary {

	bool SetCurrentLocale(struct FString Culture, bool SaveToConfig); // Function Engine.KismetInternationalizationLibrary.SetCurrentLocale // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetMaterialLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	void SetVectorParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName, struct FLinearColor ParameterValue); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetMathLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	int32_t Xor_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Xor_IntInt // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetMeshLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetMeshLibrary : UBlueprintFunctionLibrary {

	void MergeSocketResults(struct TArray<struct FSpawnDetails> ConnectedSockets, struct UStaticMesh* SourceMesh, struct FPlaceProceduralActorsInput Output); // Function Engine.KismetMeshLibrary.MergeSocketResults // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetNodeHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetNodeHelperLibrary : UBlueprintFunctionLibrary {

	void MarkBit(int32_t Data, int32_t Index); // Function Engine.KismetNodeHelperLibrary.MarkBit // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetRenderingLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	void SetCastInsetShadowForAllAttachments(struct UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup); // Function Engine.KismetRenderingLibrary.SetCastInsetShadowForAllAttachments // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetStringLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetStringLibrary : UBlueprintFunctionLibrary {

	struct FString TrimTrailing(struct FString SourceString); // Function Engine.KismetStringLibrary.TrimTrailing // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetStringTableLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetStringTableLibrary : UBlueprintFunctionLibrary {

	bool IsRegisteredTableId(struct FName TableId); // Function Engine.KismetStringTableLibrary.IsRegisteredTableId // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetSystemLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	void UnregisterForRemoteNotifications(); // Function Engine.KismetSystemLibrary.UnregisterForRemoteNotifications // (None) // @ game+0xfffffffec0000000
};

// Class Engine.KismetTextLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetTextLibrary : UBlueprintFunctionLibrary {

	struct FText TextTrimTrailing(struct FText InText); // Function Engine.KismetTextLibrary.TextTrimTrailing // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Layer
// Size: 0x50 (Inherited: 0x30)
struct ULayer : UObject {
	struct FName LayerName; // 0x30(0x08)
	char bIsVisible : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FLayerActorStats> ActorStats; // 0x40(0x10)
};

// Class Engine.LevelPartitionInterface
// Size: 0x30 (Inherited: 0x30)
struct ULevelPartitionInterface : UInterface {
};

// Class Engine.Level
// Size: 0x2a8 (Inherited: 0x30)
struct ULevel : UObject {
	char pad_30[0x90]; // 0x30(0x90)
	struct UWorld* OwningWorld; // 0xc0(0x08)
	struct UModel* Model; // 0xc8(0x08)
	struct TArray<struct UModelComponent*> ModelComponents; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)
	struct TArray<struct FString> WhitelistedActorFactoryNames; // 0xf0(0x10)
	struct ULevelActorContainer* ActorCluster; // 0x100(0x08)
	int32_t NumTextureStreamingUnbuiltComponents; // 0x108(0x04)
	int32_t NumTextureStreamingDirtyResources; // 0x10c(0x04)
	struct ALevelScriptActor* LevelScriptActor; // 0x110(0x08)
	struct ANavigationObjectBase* NavListStart; // 0x118(0x08)
	struct ANavigationObjectBase* NavListEnd; // 0x120(0x08)
	struct TArray<struct UNavigationDataChunk*> NavDataChunks; // 0x128(0x10)
	float LightmapTotalSize; // 0x138(0x04)
	float ShadowmapTotalSize; // 0x13c(0x04)
	struct TArray<struct FVector> StaticNavigableGeometry; // 0x140(0x10)
	struct TArray<struct FGuid> StreamingTextureGuids; // 0x150(0x10)
	char pad_160[0x98]; // 0x160(0x98)
	struct FGuid LevelBuildDataId; // 0x1f8(0x10)
	struct UMapBuildDataRegistry* MapBuildData; // 0x208(0x08)
	struct FIntVector LightBuildLevelOffset; // 0x210(0x0c)
	char bIsLightingScenario : 1; // 0x21c(0x01)
	char pad_21C_1 : 2; // 0x21c(0x01)
	char bTextureStreamingRotationChanged : 1; // 0x21c(0x01)
	char bStaticComponentsRegisteredInStreamingManager : 1; // 0x21c(0x01)
	char bIsVisible : 1; // 0x21c(0x01)
	char pad_21C_6 : 2; // 0x21c(0x01)
	char pad_21D[0x4b]; // 0x21d(0x4b)
	struct AWorldSettings* WorldSettings; // 0x268(0x08)
	char pad_270[0x8]; // 0x270(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)
	struct TArray<struct FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x298(0x10)
};

// Class Engine.LevelActorContainer
// Size: 0x40 (Inherited: 0x30)
struct ULevelActorContainer : UObject {
	struct TArray<struct AActor*> Actors; // 0x30(0x10)
};

// Class Engine.LevelBounds
// Size: 0x260 (Inherited: 0x250)
struct ALevelBounds : AActor {
	struct UBoxComponent* BoxComponent; // 0x250(0x08)
	bool bAutoUpdateBounds; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class Engine.LevelScriptBlueprint
// Size: 0xa8 (Inherited: 0xa8)
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.LevelStreaming
// Size: 0x150 (Inherited: 0x30)
struct ULevelStreaming : UObject {
	struct TSoftObjectPtr<UWorld> WorldAsset; // 0x30(0x28)
	struct FName PackageNameToLoad; // 0x58(0x08)
	struct TArray<struct FName> LODPackageNames; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
	struct FTransform LevelTransform; // 0x80(0x30)
	int32_t LevelLODIndex; // 0xb0(0x04)
	int32_t StreamingPriority; // 0xb4(0x04)
	char pad_B8[0x2]; // 0xb8(0x02)
	char pad_BA_0 : 3; // 0xba(0x01)
	char bShouldBeVisible : 1; // 0xba(0x01)
	char bShouldBeLoaded : 1; // 0xba(0x01)
	char bLocked : 1; // 0xba(0x01)
	char bIsStatic : 1; // 0xba(0x01)
	char bShouldBlockOnLoad : 1; // 0xba(0x01)
	char bShouldBlockOnUnload : 1; // 0xbb(0x01)
	char bDisableDistanceStreaming : 1; // 0xbb(0x01)
	char bDrawOnLevelStatusMap : 1; // 0xbb(0x01)
	char pad_BB_3 : 5; // 0xbb(0x01)
	struct FLinearColor LevelColor; // 0xbc(0x10)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0(0x10)
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMulticastInlineDelegate OnLevelLoaded; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnLevelUnloaded; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnLevelShown; // 0x108(0x10)
	struct FMulticastInlineDelegate OnLevelHidden; // 0x118(0x10)
	struct ULevel* LoadedLevel; // 0x128(0x08)
	struct ULevel* PendingUnloadLevel; // 0x130(0x08)
	char pad_138[0x18]; // 0x138(0x18)

	bool ShouldBeLoaded(); // Function Engine.LevelStreaming.ShouldBeLoaded // (None) // @ game+0xfffffffec0000000
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x150 (Inherited: 0x150)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingDynamic
// Size: 0x150 (Inherited: 0x150)
struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148(0x01)
	char bInitiallyVisible : 1; // 0x148(0x01)
	char bReloadOnSoftReset : 1; // 0x14c(0x01)
	char bDefaultSpawnLevel : 1; // 0x14c(0x01)

	struct ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, struct FVector Location, struct FRotator Rotation, bool bOutSuccess); // Function Engine.LevelStreamingDynamic.LoadLevelInstanceBySoftObjectPtr // (None) // @ game+0xfffffffec0000000
};

// Class Engine.LevelStreamingPersistent
// Size: 0x150 (Inherited: 0x150)
struct ULevelStreamingPersistent : ULevelStreaming {
};

// Class Engine.LevelStreamingVolume
// Size: 0x2a0 (Inherited: 0x288)
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames; // 0x288(0x10)
	char bEditorPreVisOnly : 1; // 0x298(0x01)
	char bDisabled : 1; // 0x298(0x01)
	char pad_298_2 : 6; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	enum class EStreamingVolumeUsage StreamingUsage; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
};

// Class Engine.LightmappedSurfaceCollection
// Size: 0x48 (Inherited: 0x30)
struct ULightmappedSurfaceCollection : UObject {
	struct UModel* SourceModel; // 0x30(0x08)
	struct TArray<int32_t> Surfaces; // 0x38(0x10)
};

// Class Engine.LightMapTexture2D
// Size: 0xf8 (Inherited: 0xf0)
struct ULightMapTexture2D : UTexture2D {
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x288 (Inherited: 0x288)
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
// Size: 0x288 (Inherited: 0x288)
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.LightmassPortal
// Size: 0x258 (Inherited: 0x250)
struct ALightmassPortal : AActor {
	struct ULightmassPortalComponent* PortalComponent; // 0x250(0x08)
};

// Class Engine.LightmassPortalComponent
// Size: 0x230 (Inherited: 0x220)
struct ULightmassPortalComponent : USceneComponent {
	struct UBoxComponent* PreviewBox; // 0x220(0x08)
	char pad_228[0x8]; // 0x228(0x08)
};

// Class Engine.LightmassPrimitiveSettingsObject
// Size: 0x48 (Inherited: 0x30)
struct ULightmassPrimitiveSettingsObject : UObject {
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x30(0x18)
};

// Class Engine.LineBatchComponent
// Size: 0x4e0 (Inherited: 0x4a0)
struct ULineBatchComponent : UPrimitiveComponent {
	char pad_4A0[0x40]; // 0x4a0(0x40)
};

// Class Engine.LocalLightComponent
// Size: 0x370 (Inherited: 0x360)
struct ULocalLightComponent : ULightComponent {
	enum class ELightUnits IntensityUnits; // 0x358(0x01)
	float Radius; // 0x35c(0x04)
	float AttenuationRadius; // 0x360(0x04)
	struct FLightmassPointLightSettings LightmassSettings; // 0x364(0x0c)

	void SetIntensityUnits(enum class ELightUnits NewIntensityUnits); // Function Engine.LocalLightComponent.SetIntensityUnits // (None) // @ game+0xfffffffec0000000
};

// Class Engine.LocDirectExportStringsCommandlet
// Size: 0x88 (Inherited: 0x88)
struct ULocDirectExportStringsCommandlet : UCommandlet {
};

// Class Engine.LODActor
// Size: 0x2d8 (Inherited: 0x250)
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x250(0x08)
	struct TMap<struct UMaterialInterface*, struct UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x258(0x50)
	struct UHLODProxy* Proxy; // 0x2a8(0x08)
	struct FName Key; // 0x2b0(0x08)
	float LODDrawDistance; // 0x2b8(0x04)
	int32_t LODLevel; // 0x2bc(0x04)
	struct TArray<struct AActor*> SubActors; // 0x2c0(0x10)
	char CachedNumHLODLevels; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x240 (Inherited: 0x30)
struct UMapBuildDataRegistry : UObject {
	enum class ELightingBuildQuality LevelLightingQuality; // 0x30(0x01)
	char pad_31[0x20f]; // 0x31(0x20f)
};

// Class Engine.Material
// Size: 0x4f8 (Inherited: 0x90)
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x90(0x08)
	struct UPhysicalMaterialMask* PhysMaterialMask; // 0x98(0x08)
	struct UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0xa0(0x40)
	struct FScalarMaterialInput Metallic; // 0xe0(0x0c)
	char pad_EC[0x8]; // 0xec(0x08)
	struct FScalarMaterialInput Specular; // 0xf4(0x0c)
	char pad_100[0x8]; // 0x100(0x08)
	struct FScalarMaterialInput Anisotropy; // 0x108(0x0c)
	char pad_114[0x8]; // 0x114(0x08)
	struct FVectorMaterialInput Normal; // 0x11c(0x0c)
	char pad_128[0x8]; // 0x128(0x08)
	struct FVectorMaterialInput Tangent; // 0x130(0x0c)
	char pad_13C[0x8]; // 0x13c(0x08)
	struct FColorMaterialInput EmissiveColor; // 0x144(0x0c)
	char pad_150[0x8]; // 0x150(0x08)
	enum class EMaterialDomain MaterialDomain; // 0x158(0x01)
	enum class EBlendMode BlendMode; // 0x159(0x01)
	enum class EDecalBlendMode DecalBlendMode; // 0x15a(0x01)
	enum class EMaterialDecalResponse MaterialDecalResponse; // 0x15b(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x15c(0x01)
	char bCastDynamicShadowAsMasked : 1; // 0x15d(0x01)
	char pad_15D_1 : 7; // 0x15d(0x01)
	struct FMaterialShadingModelField ShadingModels; // 0x15e(0x02)
	float OpacityMaskClipValue; // 0x160(0x04)
	struct FVectorMaterialInput WorldPositionOffset; // 0x164(0x0c)
	char pad_170[0x8]; // 0x170(0x08)
	struct FScalarMaterialInput Refraction; // 0x178(0x0c)
	char pad_184[0x8]; // 0x184(0x08)
	struct FMaterialAttributesInput MaterialAttributes; // 0x18c(0x10)
	char pad_19C[0x8]; // 0x19c(0x08)
	struct FScalarMaterialInput PixelDepthOffset; // 0x1a4(0x0c)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x1b8(0x0c)
	char pad_1C4[0x8]; // 0x1c4(0x08)
	char bEnableSeparateTranslucency : 1; // 0x1cc(0x01)
	char bEnableResponsiveAA : 1; // 0x1cc(0x01)
	char bScreenSpaceReflections : 1; // 0x1cc(0x01)
	char bContactShadows : 1; // 0x1cc(0x01)
	char TwoSided : 1; // 0x1cc(0x01)
	char DitheredLODTransition : 1; // 0x1cc(0x01)
	char DitherOpacityMask : 1; // 0x1cc(0x01)
	char bAllowNegativeEmissiveColor : 1; // 0x1cc(0x01)
	enum class ETranslucencyLightingMode TranslucencyLightingMode; // 0x1cd(0x01)
	char bEnableMobileSeparateTranslucency : 1; // 0x1ce(0x01)
	char pad_1CE_1 : 7; // 0x1ce(0x01)
	char pad_1CF[0x1]; // 0x1cf(0x01)
	int32_t NumCustomizedUVs; // 0x1d0(0x04)
	float TranslucencyDirectionalLightingIntensity; // 0x1d4(0x04)
	char TranslucentCustomDepthWritesEveryPixel : 1; // 0x1d8(0x01)
	char pad_1D8_1 : 7; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float TranslucentShadowDensityScale; // 0x1dc(0x04)
	float TranslucentSelfShadowDensityScale; // 0x1e0(0x04)
	float TranslucentSelfShadowSecondDensityScale; // 0x1e4(0x04)
	float TranslucentSelfShadowSecondOpacity; // 0x1e8(0x04)
	float TranslucentBackscatteringExponent; // 0x1ec(0x04)
	struct FLinearColor TranslucentMultipleScatteringExtinction; // 0x1f0(0x10)
	float TranslucentShadowStartOffset; // 0x200(0x04)
	char bDisableDepthTest : 1; // 0x204(0x01)
	char bWriteOnlyAlpha : 1; // 0x204(0x01)
	char bGenerateSphericalParticleNormals : 1; // 0x204(0x01)
	char bTangentSpaceNormal : 1; // 0x204(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x204(0x01)
	char bBlockGI : 1; // 0x204(0x01)
	char bUsedAsSpecialEngineMaterial : 1; // 0x204(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x204(0x01)
	char bUsedWithEditorCompositing : 1; // 0x205(0x01)
	char bUsedWithParticleSprites : 1; // 0x205(0x01)
	char bUsedWithBeamTrails : 1; // 0x205(0x01)
	char bUsedWithMeshParticles : 1; // 0x205(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x205(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x205(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x205(0x01)
	char bUsedWithGeometryCache : 1; // 0x205(0x01)
	char bUsedWithStaticLighting : 1; // 0x206(0x01)
	char bUsedWithMorphTargets : 1; // 0x206(0x01)
	char bUsedWithSplineMeshes : 1; // 0x206(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x206(0x01)
	char bUsedWithGeometryCollections : 1; // 0x206(0x01)
	char bUsesDistortion : 1; // 0x206(0x01)
	char bUsedWithClothing : 1; // 0x206(0x01)
	char pad_206_7 : 1; // 0x206(0x01)
	char pad_207[0x1]; // 0x207(0x01)
	char bUsedWithWater : 1; // 0x208(0x01)
	char bUsedWithHairStrands : 1; // 0x208(0x01)
	char bUsedWithLidarPointCloud : 1; // 0x208(0x01)
	char pad_208_3 : 5; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	char bUsedWithUI : 1; // 0x20c(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x20c(0x01)
	char bFullyRough : 1; // 0x20c(0x01)
	char bUseFullPrecision : 1; // 0x20c(0x01)
	char bUseLightmapDirectionality : 1; // 0x20c(0x01)
	char pad_20C_5 : 3; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x210(0x01)
	char pad_210_1 : 7; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	char bUseHQForwardReflections : 1; // 0x214(0x01)
	char bUsePlanarForwardReflections : 1; // 0x214(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x214(0x01)
	char pad_214_3 : 5; // 0x214(0x01)
	enum class EMaterialTessellationMode D3D11TessellationMode; // 0x215(0x01)
	char bEnableCrackFreeDisplacement : 1; // 0x216(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x216(0x01)
	char AllowTranslucentCustomDepthWrites : 1; // 0x216(0x01)
	char Wireframe : 1; // 0x216(0x01)
	char pad_216_4 : 4; // 0x216(0x01)
	enum class EMaterialShadingRate ShadingRate; // 0x217(0x01)
	char bCanMaskedBeAssumedOpaque : 1; // 0x218(0x01)
	char bIsMasked : 1; // 0x218(0x01)
	char bIsPreviewMaterial : 1; // 0x218(0x01)
	char bIsFunctionPreviewMaterial : 1; // 0x218(0x01)
	char bUseMaterialAttributes : 1; // 0x218(0x01)
	char bCastRayTracedShadows : 1; // 0x218(0x01)
	char bUseTranslucencyVertexFog : 1; // 0x218(0x01)
	char bIsSky : 1; // 0x218(0x01)
	char bComputeFogPerPixel : 1; // 0x219(0x01)
	char bOutputTranslucentVelocity : 1; // 0x219(0x01)
	char bAllowDevelopmentShaderCompile : 1; // 0x219(0x01)
	char bIsMaterialEditorStatsMaterial : 1; // 0x219(0x01)
	char pad_219_4 : 4; // 0x219(0x01)
	enum class EBlendableLocation BlendableLocation; // 0x21a(0x01)
	char BlendableOutputAlpha : 1; // 0x21b(0x01)
	char bEnableStencilTest : 1; // 0x21b(0x01)
	char pad_21B_2 : 6; // 0x21b(0x01)
	enum class EMaterialStencilCompare StencilCompare; // 0x21c(0x01)
	char StencilRefValue; // 0x21d(0x01)
	enum class ERefractionMode RefractionMode; // 0x21e(0x01)
	char pad_21F[0x1]; // 0x21f(0x01)
	int32_t BlendablePriority; // 0x220(0x04)
	char bIsBlendable : 1; // 0x224(0x01)
	char pad_224_1 : 7; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	uint32_t UsageFlagWarnings; // 0x228(0x04)
	float RefractionDepthBias; // 0x22c(0x04)
	struct FGuid StateId; // 0x230(0x10)
	float MaxDisplacement; // 0x240(0x04)
	char pad_244[0x8c]; // 0x244(0x8c)
	struct FMaterialCachedExpressionData CachedExpressionData; // 0x2d0(0x228)
};

// Class Engine.MaterialBillboardComponent
// Size: 0x4b0 (Inherited: 0x4a0)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct FMaterialSpriteElement> Elements; // 0x4a0(0x10)

	void SetElements(struct TArray<struct FMaterialSpriteElement> NewElements); // Function Engine.MaterialBillboardComponent.SetElements // (None) // @ game+0xfffffffec0000000
};

// Class Engine.MaterialExpressionAbs
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionAbs : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionActorPositionWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionActorPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float ConstA; // 0x70(0x04)
	float ConstB; // 0x74(0x04)
};

// Class Engine.MaterialExpressionTextureBase
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionTextureBase : UMaterialExpression {
	struct UTexture* Texture; // 0x48(0x08)
	enum class EMaterialSamplerType SamplerType; // 0x50(0x01)
	char IsDefaultMeshpaintTexture : 1; // 0x51(0x01)
	char pad_51_1 : 7; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0xd8 (Inherited: 0x58)
struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	struct FExpressionInput Coordinates; // 0x58(0x0c)
	char pad_64[0x8]; // 0x64(0x08)
	struct FExpressionInput TextureObject; // 0x6c(0x0c)
	char pad_78[0x8]; // 0x78(0x08)
	struct FExpressionInput MipValue; // 0x80(0x0c)
	char pad_8C[0x8]; // 0x8c(0x08)
	struct FExpressionInput CoordinatesDX; // 0x94(0x0c)
	char pad_A0[0x8]; // 0xa0(0x08)
	struct FExpressionInput CoordinatesDY; // 0xa8(0x0c)
	char pad_B4[0x8]; // 0xb4(0x08)
	struct FExpressionInput AutomaticViewMipBiasValue; // 0xbc(0x0c)
	char pad_C8[0x8]; // 0xc8(0x08)
	enum class ETextureMipValueMode MipValueMode; // 0xd0(0x01)
	enum class ESamplerSourceMode SamplerSource; // 0xd1(0x01)
	char AutomaticViewMipBias : 1; // 0xd2(0x01)
	char pad_D2_1 : 7; // 0xd2(0x01)
	char ConstCoordinate; // 0xd3(0x01)
	int32_t ConstMipValue; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionTextureSampleParameter
// Size: 0xf8 (Inherited: 0xd8)
struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0xd8(0x08)
	struct FGuid ExpressionGUID; // 0xe0(0x10)
	struct FName Group; // 0xf0(0x08)
};

// Class Engine.MaterialExpressionTextureSampleParameter2D
// Size: 0xf8 (Inherited: 0xf8)
struct UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
// Size: 0x100 (Inherited: 0xf8)
struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0xf8(0x04)
	enum class ETextureColorChannel Channel; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

// Class Engine.MaterialExpressionAppendVector
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionAppendVector : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionArccosine
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionArccosine : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArccosineFast
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionArccosineFast : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArcsine
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionArcsine : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArcsineFast
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionArcsineFast : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArctangent
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionArctangent : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArctangent2
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionArctangent2 : UMaterialExpression {
	struct FExpressionInput Y; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput X; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionArctangent2Fast
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	struct FExpressionInput Y; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput X; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionArctangentFast
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionArctangentFast : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionAtmosphericFogColor
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionBentNormalCustomOutput
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionBlendMaterialAttributes
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput A; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FMaterialAttributesInput B; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
	struct FExpressionInput Alpha; // 0x78(0x0c)
	char pad_84[0x8]; // 0x84(0x08)
	enum class EMaterialAttributeBlend PixelAttributeBlendType; // 0x8c(0x01)
	enum class EMaterialAttributeBlend VertexAttributeBlendType; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Height; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput HeightRatioInput; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	float HeightRatio; // 0x84(0x04)
	float ReferencePlane; // 0x88(0x04)
	uint32_t ConstCoordinate; // 0x8c(0x04)
};

// Class Engine.MaterialExpressionCameraPositionWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionCameraPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCameraVectorWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionCameraVectorWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCeil
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionCeil : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionParameter
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionParameter : UMaterialExpression {
	struct FName ParameterName; // 0x48(0x08)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x78 (Inherited: 0x60)
struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	struct FLinearColor DefaultValue; // 0x60(0x10)
	bool bUseCustomPrimitiveData; // 0x70(0x01)
	char PrimitiveDataIndex; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class Engine.MaterialExpressionChannelMaskParameter
// Size: 0x90 (Inherited: 0x78)
struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	enum class EChannelMaskParameterColor MaskChannel; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FExpressionInput Input; // 0x7c(0x0c)
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Engine.MaterialExpressionClamp
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionClamp : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Min; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Max; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	enum class EClampMode ClampMode; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float MinDefault; // 0x88(0x04)
	float MaxDefault; // 0x8c(0x04)
};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionCollectionParameter
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x48(0x08)
	struct FName ParameterName; // 0x50(0x08)
	struct FGuid ParameterId; // 0x58(0x10)
};

// Class Engine.MaterialExpressionComment
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x48(0x04)
	int32_t SizeY; // 0x4c(0x04)
	struct FString Text; // 0x50(0x10)
	struct FLinearColor CommentColor; // 0x60(0x10)
	int32_t FontSize; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.MaterialExpressionComponentMask
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionComponentMask : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	char R : 1; // 0x5c(0x01)
	char G : 1; // 0x5c(0x01)
	char B : 1; // 0x5c(0x01)
	char A : 1; // 0x5c(0x01)
	char pad_5C_4 : 4; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x48(0x04)
	float G; // 0x4c(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x48(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x48(0x10)
};

// Class Engine.MaterialExpressionConstantBiasScale
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float Bias; // 0x5c(0x04)
	float Scale; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionCosine
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionCosine : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float Period; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionCrossProduct
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionCrossProduct : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x68 (Inherited: 0x60)
struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x60(0x04)
	bool bUseCustomPrimitiveData; // 0x64(0x01)
	char PrimitiveDataIndex; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
// Size: 0x90 (Inherited: 0x68)
struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	struct UCurveLinearColor* Curve; // 0x68(0x08)
	struct UCurveLinearColorAtlas* Atlas; // 0x70(0x08)
	struct FExpressionInput InputTime; // 0x78(0x0c)
	char pad_84[0xc]; // 0x84(0x0c)
};

// Class Engine.MaterialExpressionCustom
// Size: 0xa0 (Inherited: 0x48)
struct UMaterialExpressionCustom : UMaterialExpression {
	struct FString Code; // 0x48(0x10)
	enum class ECustomMaterialOutputType OutputType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString Description; // 0x60(0x10)
	struct TArray<struct FCustomInput> Inputs; // 0x70(0x10)
	struct TArray<struct FCustomDefine> AdditionalDefines; // 0x80(0x10)
	struct TArray<struct FString> IncludeFilePaths; // 0x90(0x10)
};

// Class Engine.MaterialExpressionDDX
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionDDX : UMaterialExpression {
	struct FExpressionInput Value; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionDDY
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionDDY : UMaterialExpression {
	struct FExpressionInput Value; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionDecalDerivative
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionDecalDerivative : UMaterialExpression {
};

// Class Engine.MaterialExpressionDecalLifetimeOpacity
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionDecalLifetimeOpacity : UMaterialExpression {
};

// Class Engine.MaterialExpressionDecalMipmapLevel
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float ConstWidth; // 0x5c(0x04)
	float ConstHeight; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionDeltaTime
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionDeltaTime : UMaterialExpression {
};

// Class Engine.MaterialExpressionDepthFade
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionDepthFade : UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput FadeDistance; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float OpacityDefault; // 0x70(0x04)
	float FadeDistanceDefault; // 0x74(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class EDepthOfFieldFunctionValue FunctionValue; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FExpressionInput Depth; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Engine.MaterialExpressionDeriveNormalZ
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	struct FExpressionInput InXY; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionDesaturation
// Size: 0x80 (Inherited: 0x48)
struct UMaterialExpressionDesaturation : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Fraction; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FLinearColor LuminanceFactors; // 0x70(0x10)
};

// Class Engine.MaterialExpressionDistance
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionDistance : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionDistanceCullFade
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionDistanceCullFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionDistanceFieldGradient
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	struct FExpressionInput Position; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	struct FExpressionInput Position; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionDivide
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float ConstA; // 0x70(0x04)
	float ConstB; // 0x74(0x04)
};

// Class Engine.MaterialExpressionDotProduct
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionDotProduct : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionDynamicParameter
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x48(0x10)
	struct FLinearColor DefaultValue; // 0x58(0x10)
	uint32_t ParameterIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionEyeAdaptation
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionEyeAdaptation : UMaterialExpression {
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
// Size: 0xb0 (Inherited: 0x48)
struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	struct FExpressionInput Default; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Inputs[0x4]; // 0x5c(0x30)
	char pad_8C[0x24]; // 0x8c(0x24)
};

// Class Engine.MaterialExpressionFloor
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionFloor : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionFmod
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionFmod : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionFontSample
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionFontSample : UMaterialExpression {
	struct UFont* Font; // 0x48(0x08)
	int32_t FontTexturePage; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.MaterialExpressionFontSampleParameter
// Size: 0x78 (Inherited: 0x58)
struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	struct FName ParameterName; // 0x58(0x08)
	struct FGuid ExpressionGUID; // 0x60(0x10)
	struct FName Group; // 0x70(0x08)
};

// Class Engine.MaterialExpressionFrac
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionFrac : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionFresnel
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionFresnel : UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float Exponent; // 0x5c(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0x60(0x0c)
	char pad_6C[0x8]; // 0x6c(0x08)
	float BaseReflectFraction; // 0x74(0x04)
	struct FExpressionInput Normal; // 0x78(0x0c)
	char pad_84[0xc]; // 0x84(0x0c)
};

// Class Engine.MaterialExpressionFunctionInput
// Size: 0xc0 (Inherited: 0x48)
struct UMaterialExpressionFunctionInput : UMaterialExpression {
	struct FExpressionInput Preview; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FName InputName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString Description; // 0x68(0x10)
	struct FGuid ID; // 0x78(0x10)
	enum class EFunctionInputType InputType; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FVector4 PreviewValue; // 0x90(0x10)
	char bUsePreviewValueAsDefault : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t SortPriority; // 0xa4(0x04)
	char bCompilingFunctionPreview : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)
};

// Class Engine.MaterialExpressionFunctionOutput
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	struct FName OutputName; // 0x48(0x08)
	struct FString Description; // 0x50(0x10)
	int32_t SortPriority; // 0x60(0x04)
	struct FExpressionInput A; // 0x64(0x0c)
	char pad_70[0x8]; // 0x70(0x08)
	char bLastPreviewed : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FGuid ID; // 0x7c(0x10)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct TArray<struct FGuid> AttributeGetTypes; // 0x60(0x10)
};

// Class Engine.MaterialExpressionGIReplace
// Size: 0x88 (Inherited: 0x48)
struct UMaterialExpressionGIReplace : UMaterialExpression {
	struct FExpressionInput Default; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput StaticIndirect; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput DynamicIndirect; // 0x70(0x0c)
	char pad_7C[0xc]; // 0x7c(0x0c)
};

// Class Engine.MaterialExpressionHairAttributes
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionHairAttributes : UMaterialExpression {
};

// Class Engine.MaterialExpressionIf
// Size: 0xb8 (Inherited: 0x48)
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput AGreaterThanB; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	struct FExpressionInput AEqualsB; // 0x84(0x0c)
	char pad_90[0x8]; // 0x90(0x08)
	struct FExpressionInput ALessThanB; // 0x98(0x0c)
	char pad_A4[0x8]; // 0xa4(0x08)
	float EqualsThreshold; // 0xac(0x04)
	float ConstB; // 0xb0(0x04)
	float ConstAEqualsB; // 0xb4(0x04)
};

// Class Engine.MaterialExpressionLightmapUVs
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionLightmapUVs : UMaterialExpression {
};

// Class Engine.MaterialExpressionLightmassReplace
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	struct FExpressionInput Realtime; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Lightmass; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionLightVector
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Alpha; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	float ConstA; // 0x84(0x04)
	float ConstB; // 0x88(0x04)
	float ConstAlpha; // 0x8c(0x04)
};

// Class Engine.MaterialExpressionLogarithm10
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	struct FExpressionInput X; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionLogarithm2
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	struct FExpressionInput X; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
// Size: 0x278 (Inherited: 0x48)
struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Metallic; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Specular; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	struct FExpressionInput Roughness; // 0x84(0x0c)
	char pad_90[0x8]; // 0x90(0x08)
	struct FExpressionInput Anisotropy; // 0x98(0x0c)
	char pad_A4[0x8]; // 0xa4(0x08)
	struct FExpressionInput EmissiveColor; // 0xac(0x0c)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FExpressionInput Opacity; // 0xc0(0x0c)
	char pad_CC[0x8]; // 0xcc(0x08)
	struct FExpressionInput OpacityMask; // 0xd4(0x0c)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct FExpressionInput Normal; // 0xe8(0x0c)
	char pad_F4[0x8]; // 0xf4(0x08)
	struct FExpressionInput Tangent; // 0xfc(0x0c)
	char pad_108[0x8]; // 0x108(0x08)
	struct FExpressionInput WorldPositionOffset; // 0x110(0x0c)
	char pad_11C[0x8]; // 0x11c(0x08)
	struct FExpressionInput WorldDisplacement; // 0x124(0x0c)
	char pad_130[0x8]; // 0x130(0x08)
	struct FExpressionInput TessellationMultiplier; // 0x138(0x0c)
	char pad_144[0x8]; // 0x144(0x08)
	struct FExpressionInput SubsurfaceColor; // 0x14c(0x0c)
	char pad_158[0x8]; // 0x158(0x08)
	struct FExpressionInput ClearCoat; // 0x160(0x0c)
	char pad_16C[0x8]; // 0x16c(0x08)
	struct FExpressionInput ClearCoatRoughness; // 0x174(0x0c)
	char pad_180[0x8]; // 0x180(0x08)
	struct FExpressionInput AmbientOcclusion; // 0x188(0x0c)
	char pad_194[0x8]; // 0x194(0x08)
	struct FExpressionInput Refraction; // 0x19c(0x0c)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct FExpressionInput CustomizedUVs[0x8]; // 0x1b0(0x60)
	char pad_210[0x40]; // 0x210(0x40)
	struct FExpressionInput PixelDepthOffset; // 0x250(0x0c)
	char pad_25C[0x8]; // 0x25c(0x08)
	struct FExpressionInput ShadingModel; // 0x264(0x0c)
	char pad_270[0x8]; // 0x270(0x08)
};

// Class Engine.MaterialExpressionMapARPassthroughCameraUV
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionMaterialAttributeLayers
// Size: 0xf0 (Inherited: 0x48)
struct UMaterialExpressionMaterialAttributeLayers : UMaterialExpression {
	struct FName ParameterName; // 0x48(0x08)
	struct FGuid ExpressionGUID; // 0x50(0x10)
	struct FMaterialAttributesInput Input; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
	struct FMaterialLayersFunctions DefaultLayers; // 0x78(0x40)
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xb8(0x10)
	int32_t NumActiveLayerCallers; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xd0(0x10)
	int32_t NumActiveBlendCallers; // 0xe0(0x04)
	bool bIsLayerGraphBuilt; // 0xe4(0x01)
	char pad_E5[0xb]; // 0xe5(0x0b)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunctionInterface* MaterialFunction; // 0x48(0x08)
	struct FMaterialParameterInfo FunctionParameterInfo; // 0x50(0x18)
};

// Class Engine.MaterialExpressionMaterialLayerOutput
// Size: 0x90 (Inherited: 0x90)
struct UMaterialExpressionMaterialLayerOutput : UMaterialExpressionFunctionOutput {
};

// Class Engine.MaterialExpressionMaterialProxyReplace
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	struct FExpressionInput Realtime; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput MaterialProxy; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionMax
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionMax : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float ConstA; // 0x70(0x04)
	float ConstB; // 0x74(0x04)
};

// Class Engine.MaterialExpressionMin
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionMin : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float ConstA; // 0x70(0x04)
	float ConstB; // 0x74(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float ConstA; // 0x70(0x04)
	float ConstB; // 0x74(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0x98 (Inherited: 0x48)
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput FilterWidth; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float Scale; // 0x70(0x04)
	int32_t Quality; // 0x74(0x04)
	enum class ENoiseFunction NoiseFunction; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	char bTurbulence : 1; // 0x7c(0x01)
	char pad_7C_1 : 7; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	int32_t Levels; // 0x80(0x04)
	float OutputMin; // 0x84(0x04)
	float OutputMax; // 0x88(0x04)
	float LevelScale; // 0x8c(0x04)
	char bTiling : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	uint32_t RepeatSize; // 0x94(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput VectorInput; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionObjectBounds
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionObjectBounds : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectOrientation
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionObjectOrientation : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectPositionWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionObjectPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectRadius
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionObjectRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x98 (Inherited: 0x48)
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Time; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Speed; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	float SpeedX; // 0x84(0x04)
	float SpeedY; // 0x88(0x04)
	uint32_t ConstCoordinate; // 0x8c(0x04)
	bool bFractionalPart; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.MaterialExpressionParticleColor
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleDirection
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleDirection : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMacroUV
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleMacroUV : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMotionBlurFade
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleMotionBlurFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticlePositionWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticlePositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRadius
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRandom
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleRandom : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRelativeTime
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleRelativeTime : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSize
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSpeed
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleSpeed : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSubUV
// Size: 0xe0 (Inherited: 0xd8)
struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class Engine.MaterialExpressionParticleSubUVProperties
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionParticleSubUVProperties : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceCustomData
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	struct FExpressionInput DefaultValue; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float ConstDefaultValue; // 0x5c(0x04)
	uint32_t DataIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionPerInstanceFadeAmount
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPerInstanceFadeAmount : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceRandom
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPerInstanceRandom : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelDepth
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPixelDepth : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelNormalWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPixelNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Exponent; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float ConstExponent; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.MaterialExpressionPrecomputedAOMask
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPrecomputedAOMask : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedLocalBounds
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPreSkinnedLocalBounds : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedNormal
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPreSkinnedNormal : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedPosition
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionPreSkinnedPosition : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreviousFrameSwitch
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	struct FExpressionInput CurrentFrame; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput PreviousFrame; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionPrimitiveParameter
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionPrimitiveParameter : UMaterialExpression {
	struct UPrimitiveParameterCollection* Collection; // 0x48(0x08)
	struct FName ParameterName; // 0x50(0x08)
	int32_t ParameterIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionQualitySwitch
// Size: 0x98 (Inherited: 0x48)
struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	struct FExpressionInput Default; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Inputs[0x3]; // 0x5c(0x24)
	char pad_80[0x18]; // 0x80(0x18)
};

// Class Engine.MaterialExpressionRayTracingQualitySwitch
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	struct FExpressionInput Normal; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput RayTraced; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput CustomWorldNormal; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	char bNormalizeCustomWorldNormal : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.MaterialExpressionReroute
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionReroute : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionRotateAboutAxis
// Size: 0xa0 (Inherited: 0x48)
struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	struct FExpressionInput NormalizedRotationAxis; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput RotationAngle; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput PivotPoint; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	struct FExpressionInput Position; // 0x84(0x0c)
	char pad_90[0x8]; // 0x90(0x08)
	float Period; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.MaterialExpressionRotator
// Size: 0x80 (Inherited: 0x48)
struct UMaterialExpressionRotator : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Time; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float CenterX; // 0x70(0x04)
	float CenterY; // 0x74(0x04)
	float Speed; // 0x78(0x04)
	uint32_t ConstCoordinate; // 0x7c(0x04)
};

// Class Engine.MaterialExpressionRound
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionRound : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
// Size: 0xd8 (Inherited: 0x48)
struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput BaseColor; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Specular; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Roughness; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	struct FExpressionInput Normal; // 0x84(0x0c)
	char pad_90[0x8]; // 0x90(0x08)
	struct FExpressionInput WorldHeight; // 0x98(0x0c)
	char pad_A4[0x8]; // 0xa4(0x08)
	struct FExpressionInput Opacity; // 0xac(0x0c)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FExpressionInput Mask; // 0xc0(0x0c)
	char pad_CC[0xc]; // 0xcc(0x0c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	struct FExpressionInput Default; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput VirtualTextureOutput; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
// Size: 0x98 (Inherited: 0x48)
struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput WorldPosition; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput MipValue; // 0x70(0x0c)
	char pad_7C[0xc]; // 0x7c(0x0c)
	struct URuntimeVirtualTexture* VirtualTexture; // 0x88(0x08)
	enum class ERuntimeVirtualTextureMaterialType MaterialType; // 0x90(0x01)
	bool bSinglePhysicalSpace; // 0x91(0x01)
	enum class ERuntimeVirtualTextureMipValueMode MipValueMode; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
// Size: 0xb8 (Inherited: 0x98)
struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	struct FName ParameterName; // 0x98(0x08)
	struct FGuid ExpressionGUID; // 0xa0(0x10)
	struct FName Group; // 0xb0(0x08)
};

// Class Engine.MaterialExpressionSaturate
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSaturate : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionSceneColor
// Size: 0x80 (Inherited: 0x48)
struct UMaterialExpressionSceneColor : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FExpressionInput Input; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
	struct FExpressionInput OffsetFraction; // 0x60(0x0c)
	char pad_6C[0x8]; // 0x6c(0x08)
	struct FVector2D ConstInput; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Engine.MaterialExpressionSceneDepth
// Size: 0x80 (Inherited: 0x48)
struct UMaterialExpressionSceneDepth : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FExpressionInput Input; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
	struct FExpressionInput Coordinates; // 0x60(0x0c)
	char pad_6C[0x8]; // 0x6c(0x08)
	struct FVector2D ConstInput; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Engine.MaterialExpressionSceneTexelSize
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionSceneTexelSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionSceneTexture
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSceneTexture : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	enum class ESceneTextureId SceneTextureId; // 0x5c(0x01)
	bool bFiltered; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
};

// Class Engine.MaterialExpressionScreenPosition
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionScreenPosition : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; // 0x48(0x10)
	struct TArray<struct FGuid> AttributeSetTypes; // 0x58(0x10)
};

// Class Engine.MaterialExpressionShaderStageSwitch
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	struct FExpressionInput PixelShader; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput VertexShader; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionShadingModel
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionShadingModel : UMaterialExpression {
	enum class EMaterialShadingModel ShadingModel; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.MaterialExpressionShadingPathSwitch
// Size: 0x98 (Inherited: 0x48)
struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	struct FExpressionInput Default; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Inputs[0x3]; // 0x5c(0x24)
	char pad_80[0x18]; // 0x80(0x18)
};

// Class Engine.MaterialExpressionShadowReplace
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionShadowReplace : UMaterialExpression {
	struct FExpressionInput Default; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Shadow; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionSign
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSign : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionSine
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSine : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float Period; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
// Size: 0x88 (Inherited: 0x48)
struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput ScatteringCoefficients; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput AbsorptionCoefficients; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput PhaseG; // 0x70(0x0c)
	char pad_7C[0xc]; // 0x7c(0x0c)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x48(0x04)
	struct FExpressionInput WorldPosition; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : UMaterialExpression {
};

// Class Engine.MaterialExpressionSkyAtmosphereViewLuminance
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionSkyAtmosphereViewLuminance : UMaterialExpression {
};

// Class Engine.MaterialExpressionSobol
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionSobol : UMaterialExpression {
	struct FExpressionInput Cell; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Index; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Seed; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	uint32_t ConstIndex; // 0x84(0x04)
	struct FVector2D ConstSeed; // 0x88(0x08)
};

// Class Engine.MaterialExpressionSpeedTree
// Size: 0xa8 (Inherited: 0x48)
struct UMaterialExpressionSpeedTree : UMaterialExpression {
	struct FExpressionInput GeometryInput; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput WindInput; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput LODInput; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	struct FExpressionInput ExtraBendWS; // 0x84(0x0c)
	char pad_90[0x8]; // 0x90(0x08)
	enum class ESpeedTreeGeometryType GeometryType; // 0x98(0x01)
	enum class ESpeedTreeWindType WindType; // 0x99(0x01)
	enum class ESpeedTreeLODType LODType; // 0x9a(0x01)
	char pad_9B[0x1]; // 0x9b(0x01)
	float BillboardThreshold; // 0x9c(0x04)
	bool bAccurateWindVelocities; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.MaterialExpressionSphereMask
// Size: 0xa0 (Inherited: 0x48)
struct UMaterialExpressionSphereMask : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Radius; // 0x70(0x0c)
	char pad_7C[0x8]; // 0x7c(0x08)
	struct FExpressionInput Hardness; // 0x84(0x0c)
	char pad_90[0x8]; // 0x90(0x08)
	float AttenuationRadius; // 0x98(0x04)
	float HardnessPercent; // 0x9c(0x04)
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	struct FExpressionInput Density; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float ConstantDensity; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionSquareRoot
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionSquareRoot : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionStaticBool
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.MaterialExpressionStaticBoolParameter
// Size: 0x68 (Inherited: 0x60)
struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
// Size: 0x78 (Inherited: 0x60)
struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	struct FExpressionInput Input; // 0x60(0x0c)
	char pad_6C[0x8]; // 0x6c(0x08)
	char DefaultR : 1; // 0x74(0x01)
	char DefaultG : 1; // 0x74(0x01)
	char DefaultB : 1; // 0x74(0x01)
	char DefaultA : 1; // 0x74(0x01)
	char pad_74_4 : 4; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.MaterialExpressionStaticSwitch
// Size: 0x88 (Inherited: 0x48)
struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FExpressionInput A; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
	struct FExpressionInput B; // 0x60(0x0c)
	char pad_6C[0x8]; // 0x6c(0x08)
	struct FExpressionInput Value; // 0x74(0x0c)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Engine.MaterialExpressionStaticSwitchParameter
// Size: 0x90 (Inherited: 0x68)
struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
	struct FExpressionInput A; // 0x68(0x0c)
	char pad_74[0x8]; // 0x74(0x08)
	struct FExpressionInput B; // 0x7c(0x0c)
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Engine.MaterialExpressionSubtract
// Size: 0x78 (Inherited: 0x48)
struct UMaterialExpressionSubtract : UMaterialExpression {
	struct FExpressionInput A; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput B; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	float ConstA; // 0x70(0x04)
	float ConstB; // 0x74(0x04)
};

// Class Engine.MaterialExpressionTangent
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionTangent : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	float Period; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionTangentOutput
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionTemporalSobol
// Size: 0x80 (Inherited: 0x48)
struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	struct FExpressionInput Index; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Seed; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	uint32_t ConstIndex; // 0x70(0x04)
	struct FVector2D ConstSeed; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x48(0x04)
	float UTiling; // 0x4c(0x04)
	float VTiling; // 0x50(0x04)
	char UnMirrorU : 1; // 0x54(0x01)
	char UnMirrorV : 1; // 0x54(0x01)
	char pad_54_2 : 6; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.MaterialExpressionTextureObject
// Size: 0x58 (Inherited: 0x58)
struct UMaterialExpressionTextureObject : UMaterialExpressionTextureBase {
};

// Class Engine.MaterialExpressionTextureObjectParameter
// Size: 0xf8 (Inherited: 0xf8)
struct UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureProperty
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionTextureProperty : UMaterialExpression {
	struct FExpressionInput TextureObject; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	enum class EMaterialExposedTextureProperty Property; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.MaterialExpressionTextureSampleParameter2DArray
// Size: 0xf8 (Inherited: 0xf8)
struct UMaterialExpressionTextureSampleParameter2DArray : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureSampleParameterCube
// Size: 0xf8 (Inherited: 0xf8)
struct UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// Size: 0x100 (Inherited: 0xf8)
struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class Engine.MaterialExpressionTextureSampleParameterVolume
// Size: 0xf8 (Inherited: 0xf8)
struct UMaterialExpressionTextureSampleParameterVolume : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	struct FExpressionInput TransmittanceColor; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionTime
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x48(0x01)
	char bOverride_Period : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float Period; // 0x4c(0x04)
};

// Class Engine.MaterialExpressionTransform
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionTransform : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	enum class EMaterialVectorCoordTransformSource TransformSourceType; // 0x5c(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
};

// Class Engine.MaterialExpressionTransformPosition
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionTransformPosition : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	enum class EMaterialPositionTransformSource TransformSourceType; // 0x5c(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
};

// Class Engine.MaterialExpressionTruncate
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionTruncate : UMaterialExpression {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionTwoSidedSign
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionTwoSidedSign : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	enum class EVectorNoiseFunction NoiseFunction; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t Quality; // 0x60(0x04)
	char bTiling : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	uint32_t TileSize; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionVertexColor
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionVertexColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexInterpolator
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x48(0x0c)
	char pad_54[0x14]; // 0x54(0x14)
};

// Class Engine.MaterialExpressionVertexNormalWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionVertexNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexTangentWS
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionVertexTangentWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionViewProperty
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionViewProperty : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.MaterialExpressionViewSize
// Size: 0x48 (Inherited: 0x48)
struct UMaterialExpressionViewSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
// Size: 0x70 (Inherited: 0x48)
struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	struct FExpressionInput No; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Yes; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.MaterialExpressionWorldPosition
// Size: 0x50 (Inherited: 0x48)
struct UMaterialExpressionWorldPosition : UMaterialExpression {
	enum class EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.MaterialFunctionInterface
// Size: 0x48 (Inherited: 0x30)
struct UMaterialFunctionInterface : UObject {
	struct FGuid StateId; // 0x30(0x10)
	enum class EMaterialFunctionUsage MaterialFunctionUsage; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x68 (Inherited: 0x48)
struct UMaterialFunction : UMaterialFunctionInterface {
	struct FString Description; // 0x48(0x10)
	char bExposeToLibrary : 1; // 0x58(0x01)
	char bPrefixParameterNames : 1; // 0x58(0x01)
	char bSuffixParameterNames : 1; // 0x58(0x01)
	char pad_58_3 : 5; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	uint32_t ParameterNamesSuffixPadding; // 0x5c(0x04)
	uint32_t ParameterNamesSuffix; // 0x60(0x04)
	char bReentrantFlag : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.MaterialFunctionInstance
// Size: 0xc8 (Inherited: 0x48)
struct UMaterialFunctionInstance : UMaterialFunctionInterface {
	struct UMaterialFunctionInterface* Parent; // 0x48(0x08)
	struct UMaterialFunctionInterface* Base; // 0x50(0x08)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; // 0x58(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues; // 0x68(0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues; // 0x78(0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues; // 0x88(0x10)
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameterValues; // 0x98(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xa8(0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xb8(0x10)
};

// Class Engine.MaterialFunctionMaterialLayer
// Size: 0x68 (Inherited: 0x68)
struct UMaterialFunctionMaterialLayer : UMaterialFunction {
};

// Class Engine.MaterialFunctionMaterialLayerInstance
// Size: 0xc8 (Inherited: 0xc8)
struct UMaterialFunctionMaterialLayerInstance : UMaterialFunctionInstance {
};

// Class Engine.MaterialFunctionMaterialLayerBlend
// Size: 0x68 (Inherited: 0x68)
struct UMaterialFunctionMaterialLayerBlend : UMaterialFunction {
};

// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// Size: 0xc8 (Inherited: 0xc8)
struct UMaterialFunctionMaterialLayerBlendInstance : UMaterialFunctionInstance {
};

// Class Engine.MaterialInstanceActor
// Size: 0x260 (Inherited: 0x250)
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors; // 0x250(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x460 (Inherited: 0x410)
struct UMaterialInstanceDynamic : UMaterialInstance {
	char pad_410[0x50]; // 0x410(0x50)

	void SetVectorParameterValueByInfo(struct FMaterialParameterInfo ParameterInfo, struct FLinearColor Value); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValueByInfo // (None) // @ game+0xfffffffec0000000
};

// Class Engine.MaterialParameterCollection
// Size: 0x80 (Inherited: 0x30)
struct UMaterialParameterCollection : UObject {
	struct FGuid StateId; // 0x30(0x10)
	struct TArray<struct FCollectionScalarParameter> ScalarParameters; // 0x40(0x10)
	struct TArray<struct FCollectionVectorParameter> VectorParameters; // 0x50(0x10)
	char pad_60[0x20]; // 0x60(0x20)
};

// Class Engine.MaterialParameterCollectionInstance
// Size: 0xf8 (Inherited: 0x30)
struct UMaterialParameterCollectionInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UMaterialParameterCollection* Collection; // 0x38(0x08)
	char pad_40[0xb8]; // 0x40(0xb8)
};

// Class Engine.MatineeActor
// Size: 0x2f8 (Inherited: 0x250)
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData; // 0x250(0x08)
	struct FName MatineeControllerName; // 0x258(0x08)
	float PlayRate; // 0x260(0x04)
	char bPlayOnLevelLoad : 1; // 0x264(0x01)
	char bForceStartPos : 1; // 0x264(0x01)
	char pad_264_2 : 6; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	float ForceStartPosition; // 0x268(0x04)
	char bLooping : 1; // 0x26c(0x01)
	char bRewindOnPlay : 1; // 0x26c(0x01)
	char bNoResetOnRewind : 1; // 0x26c(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x26c(0x01)
	char bDisableRadioFilter : 1; // 0x26c(0x01)
	char bClientSideOnly : 1; // 0x26c(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x26c(0x01)
	char bIsSkippable : 1; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	int32_t PreferredSplitScreenNum; // 0x270(0x04)
	char bDisableMovementInput : 1; // 0x274(0x01)
	char bDisableLookAtInput : 1; // 0x274(0x01)
	char bHidePlayer : 1; // 0x274(0x01)
	char bHideHud : 1; // 0x274(0x01)
	char pad_274_4 : 4; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct TArray<struct FInterpGroupActorInfo> GroupActorInfos; // 0x278(0x10)
	char bShouldShowGore : 1; // 0x288(0x01)
	char pad_288_1 : 7; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct UInterpGroupInst*> GroupInst; // 0x290(0x10)
	struct TArray<struct FCameraCutInfo> CameraCuts; // 0x2a0(0x10)
	char bIsPlaying : 1; // 0x2b0(0x01)
	char bReversePlayback : 1; // 0x2b0(0x01)
	char bPaused : 1; // 0x2b0(0x01)
	char bPendingStop : 1; // 0x2b0(0x01)
	char pad_2B0_4 : 4; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float InterpPosition; // 0x2b4(0x04)
	char pad_2B8[0x4]; // 0x2b8(0x04)
	char ReplicationForceIsPlaying; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct FMulticastInlineDelegate OnPlay; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x2e0(0x10)
	char pad_2F0[0x8]; // 0x2f0(0x08)

	void Stop(); // Function Engine.MatineeActor.Stop // (None) // @ game+0xfffffffec0000000
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x300 (Inherited: 0x2f8)
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x2f8(0x08)
};

// Class Engine.MatineeAnimInterface
// Size: 0x30 (Inherited: 0x30)
struct UMatineeAnimInterface : UInterface {
};

// Class Engine.MatineeInterface
// Size: 0x30 (Inherited: 0x30)
struct UMatineeInterface : UInterface {
};

// Class Engine.MeshMergeCullingVolume
// Size: 0x288 (Inherited: 0x288)
struct AMeshMergeCullingVolume : AVolume {
};

// Class Engine.MeshSimplificationSettings
// Size: 0x48 (Inherited: 0x40)
struct UMeshSimplificationSettings : UDeveloperSettings {
	struct FName MeshReductionModuleName; // 0x40(0x08)
};

// Class Engine.MeshVertexPainterKismetLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMeshVertexPainterKismetLibrary : UBlueprintFunctionLibrary {

	void RemovePaintedVertices(struct UStaticMeshComponent* StaticMeshComponent); // Function Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices // (None) // @ game+0xfffffffec0000000
};

// Class Engine.MicroTransactionBase
// Size: 0x70 (Inherited: 0x40)
struct UMicroTransactionBase : UPlatformInterfaceBase {
	struct TArray<struct FPurchaseInfo> AvailableProducts; // 0x40(0x10)
	struct FString LastError; // 0x50(0x10)
	struct FString LastErrorSolution; // 0x60(0x10)
};

// Class Engine.ModelComponent
// Size: 0x4e0 (Inherited: 0x4a0)
struct UModelComponent : UPrimitiveComponent {
	char pad_4A0[0x18]; // 0x4a0(0x18)
	struct UBodySetup* ModelBodySetup; // 0x4b8(0x08)
	char pad_4C0[0x20]; // 0x4c0(0x20)
};

// Class Engine.MorphTarget
// Size: 0x48 (Inherited: 0x30)
struct UMorphTarget : UObject {
	struct USkeletalMesh* BaseSkelMesh; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Engine.NavAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavAgentInterface : UInterface {
};

// Class Engine.NavCollisionBase
// Size: 0x78 (Inherited: 0x30)
struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x47]; // 0x31(0x47)
};

// Class Engine.NavEdgeProviderInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavEdgeProviderInterface : UInterface {
};

// Class Engine.NavigationDataChunk
// Size: 0x38 (Inherited: 0x30)
struct UNavigationDataChunk : UObject {
	struct FName NavigationDataName; // 0x30(0x08)
};

// Class Engine.NavigationDataInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavigationDataInterface : UInterface {
};

// Class Engine.NavigationSystemBase
// Size: 0x30 (Inherited: 0x30)
struct UNavigationSystemBase : UObject {
};

// Class Engine.NavigationSystemConfig
// Size: 0x58 (Inherited: 0x30)
struct UNavigationSystemConfig : UObject {
	struct FSoftClassPath NavigationSystemClass; // 0x30(0x18)
	struct FNavAgentSelector SupportedAgentsMask; // 0x48(0x04)
	struct FName DefaultAgentName; // 0x4c(0x08)
	char bIsOverriden : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.NullNavSysConfig
// Size: 0x58 (Inherited: 0x58)
struct UNullNavSysConfig : UNavigationSystemConfig {
};

// Class Engine.NavLinkDefinition
// Size: 0x58 (Inherited: 0x30)
struct UNavLinkDefinition : UObject {
	struct TArray<struct FNavigationLink> Links; // 0x30(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Engine.NavPathObserverInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavPathObserverInterface : UInterface {
};

// Class Engine.NavRelevantInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavRelevantInterface : UInterface {
};

// Class Engine.SimulatedClientNetConnection
// Size: 0x1a38 (Inherited: 0x1a38)
struct USimulatedClientNetConnection : UNetConnection {
};

// Class Engine.NetPushModelHelpers
// Size: 0x30 (Inherited: 0x30)
struct UNetPushModelHelpers : UBlueprintFunctionLibrary {

	void MarkPropertyDirtyFromRepIndex(struct UObject* Object, int32_t RepIndex, struct FName PropertyName); // Function Engine.NetPushModelHelpers.MarkPropertyDirtyFromRepIndex // (None) // @ game+0xfffffffec0000000
};

// Class Engine.NetworkPredictionInterface
// Size: 0x30 (Inherited: 0x30)
struct UNetworkPredictionInterface : UInterface {
};

// Class Engine.NetworkSettings
// Size: 0x60 (Inherited: 0x40)
struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x40(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t MaxRepArraySize; // 0x44(0x04)
	int32_t MaxRepArrayMemory; // 0x48(0x04)
	int32_t PlayerNameMaxLength; // 0x4c(0x04)
	struct TArray<struct FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x50(0x10)
};

// Class Engine.NineSliceAssetUserData
// Size: 0x48 (Inherited: 0x30)
struct UNineSliceAssetUserData : UAssetUserData {
	enum class ESlateBrushDrawType DrawAs; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FMargin Margin; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.NodeMappingContainer
// Size: 0x170 (Inherited: 0x30)
struct UNodeMappingContainer : UObject {
	struct TMap<struct FName, struct FNodeItem> SourceItems; // 0x30(0x50)
	struct TMap<struct FName, struct FNodeItem> TargetItems; // 0x80(0x50)
	struct TMap<struct FName, struct FName> SourceToTarget; // 0xd0(0x50)
	struct TSoftObjectPtr<UObject> SourceAsset; // 0x120(0x28)
	struct TSoftObjectPtr<UObject> TargetAsset; // 0x148(0x28)
};

// Class Engine.NodeMappingProviderInterface
// Size: 0x30 (Inherited: 0x30)
struct UNodeMappingProviderInterface : UInterface {
};

// Class Engine.Note
// Size: 0x250 (Inherited: 0x250)
struct ANote : AActor {
};

// Class Engine.ObjectLibrary
// Size: 0xb0 (Inherited: 0x30)
struct UObjectLibrary : UObject {
	struct UObject* ObjectBaseClass; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct UObject*> Objects; // 0x40(0x10)
	struct TArray<struct TWeakObjectPtr<struct UObject>> WeakObjects; // 0x50(0x10)
	bool bUseWeakReferences; // 0x60(0x01)
	bool bIsFullyLoaded; // 0x61(0x01)
	char pad_62[0x4e]; // 0x62(0x4e)
};

// Class Engine.ObjectReferencer
// Size: 0x40 (Inherited: 0x30)
struct UObjectReferencer : UObject {
	struct TArray<struct UObject*> ReferencedObjects; // 0x30(0x10)
};

// Class Engine.ObjectTraceWorldSubsystem
// Size: 0x40 (Inherited: 0x38)
struct UObjectTraceWorldSubsystem : UWorldSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Engine.PackageMapClient
// Size: 0x400 (Inherited: 0xe8)
struct UPackageMapClient : UPackageMap {
	char pad_E8[0x318]; // 0xe8(0x318)
};

// Class Engine.ParticleEmitter
// Size: 0x1c0 (Inherited: 0x30)
struct UParticleEmitter : UObject {
	struct FName EmitterName; // 0x30(0x08)
	int32_t SubUVDataOffset; // 0x38(0x04)
	enum class EEmitterRenderMode EmitterRenderMode; // 0x3c(0x01)
	enum class EParticleSignificanceLevel SignificanceLevel; // 0x3d(0x01)
	char pad_3E[0x1]; // 0x3e(0x01)
	char bUseLegacySpawningBehavior : 1; // 0x3f(0x01)
	char pad_3F_1 : 3; // 0x3f(0x01)
	char ConvertedModules : 1; // 0x3f(0x01)
	char bIsSoloing : 1; // 0x3f(0x01)
	char bCookedOut : 1; // 0x3f(0x01)
	char bDisabledLODsKeepEmitterAlive : 1; // 0x3f(0x01)
	char bDisableWhenInsignficant : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UParticleLODLevel*> LODLevels; // 0x48(0x10)
	int32_t PeakActiveParticles; // 0x58(0x04)
	int32_t InitialAllocationCount; // 0x5c(0x04)
	float QualityLevelSpawnRateScale; // 0x60(0x04)
	uint32_t DetailModeBitmask; // 0x64(0x04)
	char pad_68[0x158]; // 0x68(0x158)
};

// Class Engine.ParticleEventManager
// Size: 0x250 (Inherited: 0x250)
struct AParticleEventManager : AActor {
};

// Class Engine.ParticleLODLevel
// Size: 0xc0 (Inherited: 0x30)
struct UParticleLODLevel : UObject {
	int32_t Level; // 0x30(0x04)
	char bEnabled : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UParticleModuleRequired* RequiredModule; // 0x38(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x40(0x10)
	struct UParticleModuleTypeDataBase* TypeDataModule; // 0x50(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x58(0x08)
	struct UParticleModuleEventGenerator* EventGenerator; // 0x60(0x08)
	struct TArray<struct UParticleModuleSpawnBase*> SpawningModules; // 0x68(0x10)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x78(0x10)
	struct TArray<struct UParticleModule*> UpdateModules; // 0x88(0x10)
	struct TArray<struct UParticleModuleOrbit*> OrbitModules; // 0x98(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa8(0x10)
	char ConvertedModules : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t PeakActiveParticles; // 0xbc(0x04)
};

// Class Engine.ParticleModule
// Size: 0x38 (Inherited: 0x30)
struct UParticleModule : UObject {
	char bSpawnModule : 1; // 0x30(0x01)
	char bUpdateModule : 1; // 0x30(0x01)
	char bFinalUpdateModule : 1; // 0x30(0x01)
	char bUpdateForGPUEmitter : 1; // 0x30(0x01)
	char bCurvesAsColor : 1; // 0x30(0x01)
	char b3DDrawMode : 1; // 0x30(0x01)
	char bSupported3DDrawMode : 1; // 0x30(0x01)
	char bEnabled : 1; // 0x30(0x01)
	char bEditable : 1; // 0x31(0x01)
	char LODDuplicate : 1; // 0x31(0x01)
	char bSupportsRandomSeed : 1; // 0x31(0x01)
	char bRequiresLoopingNotification : 1; // 0x31(0x01)
	char pad_31_4 : 4; // 0x31(0x01)
	char LODValidity; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class Engine.ParticleModuleAccelerationBase
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x90 (Inherited: 0x40)
struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	struct FRawDistributionVector Acceleration; // 0x40(0x48)
	char bApplyOwnerScale : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleAccelerationConstant
// Size: 0x50 (Inherited: 0x40)
struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	struct FVector Acceleration; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x78 (Inherited: 0x40)
struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragCoefficient; // 0x40(0x08)
	struct FRawDistributionFloat DragCoefficientRaw; // 0x48(0x30)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x78 (Inherited: 0x40)
struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragScale; // 0x40(0x08)
	struct FRawDistributionFloat DragScaleRaw; // 0x48(0x30)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x88 (Inherited: 0x40)
struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	struct FRawDistributionVector AccelOverLife; // 0x40(0x48)
};

// Class Engine.ParticleModuleAttractorBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleAttractorBase : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xb0 (Inherited: 0x38)
struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	struct FVector EndPoint0; // 0x38(0x0c)
	struct FVector EndPoint1; // 0x44(0x0c)
	struct FRawDistributionFloat Range; // 0x50(0x30)
	struct FRawDistributionFloat Strength; // 0x80(0x30)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xb8 (Inherited: 0x38)
struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	struct FName EmitterName; // 0x38(0x08)
	struct FRawDistributionFloat Range; // 0x40(0x30)
	char bStrengthByDistance : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FRawDistributionFloat Strength; // 0x78(0x30)
	char bAffectBaseVelocity : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class EAttractorParticleSelectionMethod SelectionMethod; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	char bRenewSource : 1; // 0xb0(0x01)
	char bInheritSourceVel : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t LastSelIndex; // 0xb4(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0xe8 (Inherited: 0x38)
struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	struct FRawDistributionVector Position; // 0x38(0x48)
	struct FRawDistributionFloat Range; // 0x80(0x30)
	struct FRawDistributionFloat Strength; // 0xb0(0x30)
	char StrengthByDistance : 1; // 0xe0(0x01)
	char bAffectBaseVelocity : 1; // 0xe0(0x01)
	char bOverrideVelocity : 1; // 0xe0(0x01)
	char bUseWorldSpacePosition : 1; // 0xe0(0x01)
	char Positive_X : 1; // 0xe0(0x01)
	char Positive_Y : 1; // 0xe0(0x01)
	char Positive_Z : 1; // 0xe0(0x01)
	char Negative_X : 1; // 0xe0(0x01)
	char Negative_Y : 1; // 0xe1(0x01)
	char Negative_Z : 1; // 0xe1(0x01)
	char pad_E1_2 : 6; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	struct FVector Position; // 0x38(0x0c)
	float Radius; // 0x44(0x04)
	struct UDistributionFloat* Strength; // 0x48(0x08)
	struct FRawDistributionFloat StrengthRaw; // 0x50(0x30)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.ParticleModuleBeamModifier
// Size: 0x110 (Inherited: 0x38)
struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	enum class BeamModifierType ModifierType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FBeamModifierOptions PositionOptions; // 0x3c(0x04)
	struct FRawDistributionVector Position; // 0x40(0x48)
	struct FBeamModifierOptions TangentOptions; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FRawDistributionVector Tangent; // 0x90(0x48)
	char bAbsoluteTangent : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FBeamModifierOptions StrengthOptions; // 0xdc(0x04)
	struct FRawDistributionFloat Strength; // 0xe0(0x30)
};

// Class Engine.ParticleModuleBeamNoise
// Size: 0x198 (Inherited: 0x38)
struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t Frequency; // 0x3c(0x04)
	int32_t Frequency_LowRange; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRawDistributionVector NoiseRange; // 0x48(0x48)
	struct FRawDistributionFloat NoiseRangeScale; // 0x90(0x30)
	char bNRScaleEmitterTime : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FRawDistributionVector NoiseSpeed; // 0xc8(0x48)
	char bSmooth : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float NoiseLockRadius; // 0x114(0x04)
	char bNoiseLock : 1; // 0x118(0x01)
	char bOscillate : 1; // 0x118(0x01)
	char pad_118_2 : 6; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float NoiseLockTime; // 0x11c(0x04)
	float NoiseTension; // 0x120(0x04)
	char bUseNoiseTangents : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FRawDistributionFloat NoiseTangentStrength; // 0x128(0x30)
	int32_t NoiseTessellation; // 0x158(0x04)
	char bTargetNoise : 1; // 0x15c(0x01)
	char pad_15C_1 : 7; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	float FrequencyDistance; // 0x160(0x04)
	char bApplyNoiseScale : 1; // 0x164(0x01)
	char pad_164_1 : 7; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	struct FRawDistributionFloat NoiseScale; // 0x168(0x30)
};

// Class Engine.ParticleModuleBeamSource
// Size: 0x120 (Inherited: 0x38)
struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	enum class Beam2SourceTargetMethod SourceMethod; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName SourceName; // 0x3c(0x08)
	char bSourceAbsolute : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FRawDistributionVector Source; // 0x48(0x48)
	char bLockSource : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	enum class Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRawDistributionVector SourceTangent; // 0x98(0x48)
	char bLockSourceTangent : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FRawDistributionFloat SourceStrength; // 0xe8(0x30)
	char bLockSourceStength : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class Engine.ParticleModuleBeamTarget
// Size: 0x128 (Inherited: 0x38)
struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	enum class Beam2SourceTargetMethod TargetMethod; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName TargetName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRawDistributionVector Target; // 0x48(0x48)
	char bTargetAbsolute : 1; // 0x90(0x01)
	char bLockTarget : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	enum class Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRawDistributionVector TargetTangent; // 0x98(0x48)
	char bLockTargetTangent : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FRawDistributionFloat TargetStrength; // 0xe8(0x30)
	char bLockTargetStength : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float LockRadius; // 0x11c(0x04)
	char pad_120[0x8]; // 0x120(0x08)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.ParticleModuleCameraOffset
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	struct FRawDistributionFloat CameraOffset; // 0x38(0x30)
	char bSpawnTimeOnly : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.ParticleModuleCollisionBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleCollisionBase : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x198 (Inherited: 0x38)
struct UParticleModuleCollision : UParticleModuleCollisionBase {
	struct FRawDistributionVector DampingFactor; // 0x38(0x48)
	struct FRawDistributionVector DampingFactorRotation; // 0x80(0x48)
	struct FRawDistributionFloat MaxCollisions; // 0xc8(0x30)
	enum class EParticleCollisionComplete CollisionCompletionOption; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<enum class EObjectTypeQuery> CollisionTypes; // 0x100(0x10)
	char pad_110[0x8]; // 0x110(0x08)
	char bApplyPhysics : 1; // 0x118(0x01)
	char bIgnoreTriggerVolumes : 1; // 0x118(0x01)
	char pad_118_2 : 6; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FRawDistributionFloat ParticleMass; // 0x120(0x30)
	float DirScalar; // 0x150(0x04)
	char bPawnsDoNotDecrementCount : 1; // 0x154(0x01)
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x154(0x01)
	char pad_154_2 : 6; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float VerticalFudgeFactor; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FRawDistributionFloat DelayAmount; // 0x160(0x30)
	char bDropDetail : 1; // 0x190(0x01)
	char bCollideOnlyIfVisible : 1; // 0x190(0x01)
	char bIgnoreSourceActor : 1; // 0x190(0x01)
	char pad_190_3 : 5; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float MaxCollisionDistance; // 0x194(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xb0 (Inherited: 0x38)
struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	struct FRawDistributionFloat Resilience; // 0x38(0x30)
	struct FRawDistributionFloat ResilienceScaleOverLife; // 0x68(0x30)
	float Friction; // 0x98(0x04)
	float RandomSpread; // 0x9c(0x04)
	float RandomDistribution; // 0xa0(0x04)
	float RadiusScale; // 0xa4(0x04)
	float RadiusBias; // 0xa8(0x04)
	enum class EParticleCollisionResponse Response; // 0xac(0x01)
	enum class EParticleCollisionMode CollisionMode; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
};

// Class Engine.ParticleModuleColorBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleColorBase : UParticleModule {
};

// Class Engine.ParticleModuleColor
// Size: 0xb8 (Inherited: 0x38)
struct UParticleModuleColor : UParticleModuleColorBase {
	struct FRawDistributionVector StartColor; // 0x38(0x48)
	struct FRawDistributionFloat StartAlpha; // 0x80(0x30)
	char bClampAlpha : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Engine.ParticleModuleColor_Seeded
// Size: 0xd8 (Inherited: 0xb8)
struct UParticleModuleColor_Seeded : UParticleModuleColor {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0xb8(0x20)
};

// Class Engine.ParticleModuleColorOverLife
// Size: 0xb8 (Inherited: 0x38)
struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	struct FRawDistributionVector ColorOverLife; // 0x38(0x48)
	struct FRawDistributionFloat AlphaOverLife; // 0x80(0x30)
	char bClampAlpha : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Engine.ParticleModuleColorScaleOverLife
// Size: 0xb8 (Inherited: 0x38)
struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	struct FRawDistributionVector ColorScaleOverLife; // 0x38(0x48)
	struct FRawDistributionFloat AlphaScaleOverLife; // 0x80(0x30)
	char bEmitterTime : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Engine.ParticleModuleEventBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleEventBase : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	struct TArray<struct FParticleEvent_GenerateInfo> Events; // 0x38(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	enum class EParticleEventType EventGeneratorType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName EventName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleEventReceiverKillParticles
// Size: 0x50 (Inherited: 0x48)
struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.ParticleModuleEventReceiverSpawn
// Size: 0xe0 (Inherited: 0x48)
struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	struct FRawDistributionFloat SpawnCount; // 0x48(0x30)
	char bUseParticleTime : 1; // 0x78(0x01)
	char bUsePSysLocation : 1; // 0x78(0x01)
	char bInheritVelocity : 1; // 0x78(0x01)
	char pad_78_3 : 5; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRawDistributionVector InheritVelocityScale; // 0x80(0x48)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xc8(0x10)
	char bBanPhysicalMaterials : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class Engine.ParticleModuleEventSendToGame
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleEventSendToGame : UObject {
};

// Class Engine.ParticleModuleKillBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.ParticleModuleKillBox
// Size: 0xd0 (Inherited: 0x38)
struct UParticleModuleKillBox : UParticleModuleKillBase {
	struct FRawDistributionVector LowerLeftCorner; // 0x38(0x48)
	struct FRawDistributionVector UpperRightCorner; // 0x80(0x48)
	char bAbsolute : 1; // 0xc8(0x01)
	char bKillInside : 1; // 0xc8(0x01)
	char bAxisAlignedAndFixedSize : 1; // 0xc8(0x01)
	char pad_C8_3 : 5; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class Engine.ParticleModuleKillHeight
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleKillHeight : UParticleModuleKillBase {
	struct FRawDistributionFloat Height; // 0x38(0x30)
	char bAbsolute : 1; // 0x68(0x01)
	char bFloor : 1; // 0x68(0x01)
	char bApplyPSysScale : 1; // 0x68(0x01)
	char pad_68_3 : 5; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.ParticleModuleLifetimeBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleLifetimeBase : UParticleModule {
};

// Class Engine.ParticleModuleLifetime
// Size: 0x68 (Inherited: 0x38)
struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	struct FRawDistributionFloat Lifetime; // 0x38(0x30)
};

// Class Engine.ParticleModuleLifetime_Seeded
// Size: 0x88 (Inherited: 0x68)
struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x68(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.ParticleModuleLight
// Size: 0x138 (Inherited: 0x38)
struct UParticleModuleLight : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x38(0x01)
	bool bAffectsTranslucency; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float Hardness; // 0x3c(0x04)
	float SpecularScale; // 0x40(0x04)
	bool bPreviewLightRadius; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float SpawnFraction; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FRawDistributionVector ColorScaleOverLife; // 0x50(0x48)
	struct FRawDistributionFloat BrightnessOverLife; // 0x98(0x30)
	struct FRawDistributionFloat RadiusScale; // 0xc8(0x30)
	struct FRawDistributionFloat LightExponent; // 0xf8(0x30)
	struct FLightingChannels LightingChannels; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float VolumetricScatteringIntensity; // 0x12c(0x04)
	bool bHighQualityLights; // 0x130(0x01)
	bool bShadowCastingLights; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
};

// Class Engine.ParticleModuleLight_Seeded
// Size: 0x158 (Inherited: 0x138)
struct UParticleModuleLight_Seeded : UParticleModuleLight {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x138(0x20)
};

// Class Engine.ParticleModuleLocationBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleLocationBase : UParticleModule {
};

// Class Engine.ParticleModuleLocation
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleLocation : UParticleModuleLocationBase {
	struct FRawDistributionVector StartLocation; // 0x38(0x48)
	float DistributeOverNPoints; // 0x80(0x04)
	float DistributeThreshold; // 0x84(0x04)
};

// Class Engine.ParticleModuleLocation_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x88(0x20)
};

// Class Engine.ParticleModuleLocationBoneSocket
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	enum class ELocationBoneSocketSource SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector UniversalOffset; // 0x3c(0x0c)
	struct TArray<struct FLocationBoneSocketInfo> SourceLocations; // 0x48(0x10)
	enum class ELocationBoneSocketSelectionMethod SelectionMethod; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	char bUpdatePositionEachFrame : 1; // 0x5c(0x01)
	char bOrientMeshEmitters : 1; // 0x5c(0x01)
	char bInheritBoneVelocity : 1; // 0x5c(0x01)
	char pad_5C_3 : 5; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float InheritVelocityScale; // 0x60(0x04)
	struct FName SkelMeshActorParamName; // 0x64(0x08)
	int32_t NumPreSelectedIndices; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x158 (Inherited: 0x38)
struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	struct FRawDistributionVector Location; // 0x38(0x48)
	struct FRawDistributionVector LocationOffset; // 0x80(0x48)
	struct FRawDistributionVector ScaleFactor; // 0xc8(0x48)
	struct FRawDistributionVector Direction; // 0x110(0x48)
};

// Class Engine.ParticleModuleLocationEmitter
// Size: 0x58 (Inherited: 0x38)
struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	struct FName EmitterName; // 0x38(0x08)
	enum class ELocationEmitterSelectionMethod SelectionMethod; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char InheritSourceVelocity : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float InheritSourceVelocityScale; // 0x48(0x04)
	char bInheritSourceRotation : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float InheritSourceRotationScale; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	struct FName EmitterName; // 0x38(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xb8 (Inherited: 0x38)
struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X : 1; // 0x38(0x01)
	char Positive_Y : 1; // 0x38(0x01)
	char Positive_Z : 1; // 0x38(0x01)
	char Negative_X : 1; // 0x38(0x01)
	char Negative_Y : 1; // 0x38(0x01)
	char Negative_Z : 1; // 0x38(0x01)
	char SurfaceOnly : 1; // 0x38(0x01)
	char Velocity : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FRawDistributionFloat VelocityScale; // 0x40(0x30)
	struct FRawDistributionVector StartLocation; // 0x70(0x48)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
// Size: 0x128 (Inherited: 0xb8)
struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FRawDistributionFloat StartRadius; // 0xc0(0x30)
	struct FRawDistributionFloat StartHeight; // 0xf0(0x30)
	enum class CylinderHeightAxis HeightAxis; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// Size: 0x148 (Inherited: 0x128)
struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x128(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
// Size: 0xe8 (Inherited: 0xb8)
struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	struct FRawDistributionFloat StartRadius; // 0xb8(0x30)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// Size: 0x108 (Inherited: 0xe8)
struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0xe8(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
// Size: 0x110 (Inherited: 0x38)
struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	struct FRawDistributionVector StartOffset; // 0x38(0x48)
	struct FRawDistributionFloat Height; // 0x80(0x30)
	struct FRawDistributionFloat Angle; // 0xb0(0x30)
	struct FRawDistributionFloat Thickness; // 0xe0(0x30)
};

// Class Engine.ParticleModuleLocationSkelVertSurface
// Size: 0x98 (Inherited: 0x38)
struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	enum class ELocationSkelVertSurfaceSource SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector UniversalOffset; // 0x3c(0x0c)
	char bUpdatePositionEachFrame : 1; // 0x48(0x01)
	char bOrientMeshEmitters : 1; // 0x48(0x01)
	char bInheritBoneVelocity : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float InheritVelocityScale; // 0x4c(0x04)
	struct FName SkelMeshActorParamName; // 0x50(0x08)
	struct TArray<struct FName> ValidAssociatedBones; // 0x58(0x10)
	char bEnforceNormalCheck : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector NormalToCompare; // 0x6c(0x0c)
	float NormalCheckToleranceDegrees; // 0x78(0x04)
	float NormalCheckTolerance; // 0x7c(0x04)
	struct TArray<int32_t> ValidMaterialIndices; // 0x80(0x10)
	char bInheritVertexColor : 1; // 0x90(0x01)
	char bInheritUV : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	uint32_t InheritUVChannel; // 0x94(0x04)
};

// Class Engine.ParticleModuleLocationWorldOffset
// Size: 0x88 (Inherited: 0x88)
struct UParticleModuleLocationWorldOffset : UParticleModuleLocation {
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x88(0x20)
};

// Class Engine.ParticleModuleMaterialBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleMaterialBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	struct TArray<struct UMaterialInterface*> MeshMaterials; // 0x38(0x10)
};

// Class Engine.ParticleModuleRotationBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleRotationBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	struct FRawDistributionVector StartRotation; // 0x38(0x48)
	char bInheritParent : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x88(0x20)
};

// Class Engine.ParticleModuleRotationRateBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleRotationRateBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	struct FRawDistributionVector StartRotationRate; // 0x38(0x48)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x48)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	struct FRawDistributionVector RotRate; // 0x38(0x48)
	char bScaleRotRate : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleOrbitBase
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x138 (Inherited: 0x40)
struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	enum class EOrbitChainMode ChainMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x48(0x48)
	struct FOrbitOptions OffsetOptions; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector RotationAmount; // 0x98(0x48)
	struct FOrbitOptions RotationOptions; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xe8(0x48)
	struct FOrbitOptions RotationRateOptions; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// Class Engine.ParticleModuleOrientationBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleOrientationBase : UParticleModule {
};

// Class Engine.ParticleModuleOrientationAxisLock
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	enum class EParticleAxisLock LockAxisFlags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.ParticleModuleParameterDynamic
// Size: 0x50 (Inherited: 0x38)
struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	struct TArray<struct FEmitterDynamicParameter> DynamicParams; // 0x38(0x10)
	int32_t UpdateFlags; // 0x48(0x04)
	char bUsesVelocity : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
// Size: 0x70 (Inherited: 0x50)
struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x50(0x20)
};

// Class Engine.ParticleModulePivotOffset
// Size: 0x40 (Inherited: 0x38)
struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	struct FVector2D PivotOffset; // 0x38(0x08)
};

// Class Engine.ParticleModuleRequired
// Size: 0x148 (Inherited: 0x38)
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material; // 0x38(0x08)
	float MinFacingCameraBlendDistance; // 0x40(0x04)
	float MaxFacingCameraBlendDistance; // 0x44(0x04)
	struct FVector EmitterOrigin; // 0x48(0x0c)
	struct FRotator EmitterRotation; // 0x54(0x0c)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x60(0x01)
	char bUseLocalSpace : 1; // 0x61(0x01)
	char bKillOnDeactivate : 1; // 0x61(0x01)
	char bKillOnCompleted : 1; // 0x61(0x01)
	char pad_61_3 : 5; // 0x61(0x01)
	enum class EParticleSortMode SortMode; // 0x62(0x01)
	char bUseLegacyEmitterTime : 1; // 0x63(0x01)
	char bRemoveHMDRoll : 1; // 0x63(0x01)
	char bEmitterDurationUseRange : 1; // 0x63(0x01)
	char pad_63_3 : 5; // 0x63(0x01)
	float EmitterDuration; // 0x64(0x04)
	struct FRawDistributionFloat SpawnRate; // 0x68(0x30)
	struct TArray<struct FParticleBurst> BurstList; // 0x98(0x10)
	float EmitterDelay; // 0xa8(0x04)
	float EmitterDelayLow; // 0xac(0x04)
	char bDelayFirstLoopOnly : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xb1(0x01)
	char bScaleUV : 1; // 0xb2(0x01)
	char bEmitterDelayUseRange : 1; // 0xb2(0x01)
	char pad_B2_2 : 6; // 0xb2(0x01)
	enum class EParticleBurstMethod ParticleBurstMethod; // 0xb3(0x01)
	char bOverrideSystemMacroUV : 1; // 0xb4(0x01)
	char bUseMaxDrawCount : 1; // 0xb4(0x01)
	char pad_B4_2 : 6; // 0xb4(0x01)
	enum class EOpacitySourceMode OpacitySourceMode; // 0xb5(0x01)
	enum class EEmitterNormalsMode EmitterNormalsMode; // 0xb6(0x01)
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0xb7(0x01)
	char pad_B7_1 : 7; // 0xb7(0x01)
	int32_t SubImages_Horizontal; // 0xb8(0x04)
	int32_t SubImages_Vertical; // 0xbc(0x04)
	float RandomImageTime; // 0xc0(0x04)
	int32_t RandomImageChanges; // 0xc4(0x04)
	struct FVector MacroUVPosition; // 0xc8(0x0c)
	float MacroUVRadius; // 0xd4(0x04)
	enum class EParticleUVFlipMode UVFlippingMode; // 0xd8(0x01)
	enum class ESubUVBoundingVertexCount BoundingMode; // 0xd9(0x01)
	char bDurationRecalcEachLoop : 1; // 0xda(0x01)
	char pad_DA_1 : 7; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	struct FVector NormalsSphereCenter; // 0xdc(0x0c)
	float AlphaThreshold; // 0xe8(0x04)
	int32_t EmitterLoops; // 0xec(0x04)
	struct UTexture2D* CutoutTexture; // 0xf0(0x08)
	int32_t MaxDrawCount; // 0xf8(0x04)
	float EmitterDurationLow; // 0xfc(0x04)
	struct FVector NormalsCylinderDirection; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FName> NamedMaterialOverrides; // 0x110(0x10)
	char pad_120[0x28]; // 0x120(0x28)
};

// Class Engine.ParticleModuleRotation
// Size: 0x68 (Inherited: 0x38)
struct UParticleModuleRotation : UParticleModuleRotationBase {
	struct FRawDistributionFloat StartRotation; // 0x38(0x30)
};

// Class Engine.ParticleModuleRotation_Seeded
// Size: 0x88 (Inherited: 0x68)
struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	struct FRawDistributionFloat RotationOverLife; // 0x38(0x30)
	char Scale : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.ParticleModuleRotationRate
// Size: 0x68 (Inherited: 0x38)
struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	struct FRawDistributionFloat StartRotationRate; // 0x38(0x30)
};

// Class Engine.ParticleModuleRotationRate_Seeded
// Size: 0x88 (Inherited: 0x68)
struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x68 (Inherited: 0x38)
struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct FRawDistributionFloat LifeMultiplier; // 0x38(0x30)
};

// Class Engine.ParticleModuleSizeBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleSizeBase : UParticleModule {
};

// Class Engine.ParticleModuleSize
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleSize : UParticleModuleSizeBase {
	struct FRawDistributionVector StartSize; // 0x38(0x48)
};

// Class Engine.ParticleModuleSize_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleSize_Seeded : UParticleModuleSize {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x48)
	char MultiplyX : 1; // 0x80(0x01)
	char MultiplyY : 1; // 0x80(0x01)
	char MultiplyZ : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	struct FRawDistributionVector SizeScale; // 0x38(0x48)
	char EnableX : 1; // 0x80(0x01)
	char EnableY : 1; // 0x80(0x01)
	char EnableZ : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	struct FVector2D SpeedScale; // 0x38(0x08)
	struct FVector2D MaxScale; // 0x40(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	struct FRawDistributionVector SourceMovementScale; // 0x38(0x48)
};

// Class Engine.ParticleModuleSpawnBase
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x38(0x01)
	char bProcessBurstList : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0xf0 (Inherited: 0x40)
struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	struct FRawDistributionFloat Rate; // 0x40(0x30)
	struct FRawDistributionFloat RateScale; // 0x70(0x30)
	enum class EParticleBurstMethod ParticleBurstMethod; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct FParticleBurst> BurstList; // 0xa8(0x10)
	struct FRawDistributionFloat BurstScale; // 0xb8(0x30)
	char bApplyGlobalSpawnRateScale : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.ParticleModuleSpawnPerUnit
// Size: 0x80 (Inherited: 0x40)
struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; // 0x40(0x04)
	float MovementTolerance; // 0x44(0x04)
	struct FRawDistributionFloat SpawnPerUnit; // 0x48(0x30)
	float MaxFrameDistance; // 0x78(0x04)
	char bIgnoreSpawnRateWhenMoving : 1; // 0x7c(0x01)
	char bIgnoreMovementAlongX : 1; // 0x7c(0x01)
	char bIgnoreMovementAlongY : 1; // 0x7c(0x01)
	char bIgnoreMovementAlongZ : 1; // 0x7c(0x01)
	char pad_7C_4 : 4; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// Class Engine.ParticleModuleSubUVBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleSubUVBase : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	struct USubUVAnimation* Animation; // 0x38(0x08)
	struct FRawDistributionFloat SubImageIndex; // 0x40(0x30)
	char bUseRealTime : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xb8 (Inherited: 0x78)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRawDistributionFloat FrameRate; // 0x80(0x30)
	int32_t StartingFrame; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.ParticleModuleTrailSource
// Size: 0x98 (Inherited: 0x38)
struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	enum class ETrail2SourceMethod SourceMethod; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName SourceName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRawDistributionFloat SourceStrength; // 0x48(0x30)
	char bLockSourceStength : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t SourceOffsetCount; // 0x7c(0x04)
	struct TArray<struct FVector> SourceOffsetDefaults; // 0x80(0x10)
	enum class EParticleSourceSelectionMethod SelectionMethod; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char bInheritRotation : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.ParticleModuleTypeDataAnimTrail
// Size: 0x50 (Inherited: 0x38)
struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 1; // 0x38(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x38(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TilingDistance; // 0x3c(0x04)
	float DistanceTessellationStepSize; // 0x40(0x04)
	float TangentTessellationStepSize; // 0x44(0x04)
	float WidthTessellationStepSize; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x158 (Inherited: 0x38)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class EBeam2Method BeamMethod; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t TextureTile; // 0x3c(0x04)
	float TextureTileDistance; // 0x40(0x04)
	int32_t Sheets; // 0x44(0x04)
	int32_t MaxBeamCount; // 0x48(0x04)
	float Speed; // 0x4c(0x04)
	int32_t InterpolationPoints; // 0x50(0x04)
	char bAlwaysOn : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t UpVectorStepSize; // 0x58(0x04)
	struct FName BranchParentName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct FRawDistributionFloat Distance; // 0x68(0x30)
	enum class EBeamTaperMethod TaperMethod; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FRawDistributionFloat TaperFactor; // 0xa0(0x30)
	struct FRawDistributionFloat TaperScale; // 0xd0(0x30)
	char RenderGeometry : 1; // 0x100(0x01)
	char RenderDirectLine : 1; // 0x100(0x01)
	char RenderLines : 1; // 0x100(0x01)
	char RenderTessellation : 1; // 0x100(0x01)
	char pad_100_4 : 4; // 0x100(0x01)
	char pad_101[0x57]; // 0x101(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x430 (Inherited: 0x38)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FGPUSpriteEmitterInfo EmitterInfo; // 0x40(0x280)
	struct FGPUSpriteResourceData ResourceData; // 0x2c0(0x160)
	float CameraMotionBlurAmount; // 0x420(0x04)
	char bClearExistingParticlesOnInit : 1; // 0x424(0x01)
	char pad_424_1 : 7; // 0x424(0x01)
	char pad_425[0xb]; // 0x425(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xb0 (Inherited: 0x38)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
	float LODSizeScale; // 0x58(0x04)
	char bUseStaticMeshLODs : 1; // 0x5c(0x01)
	char CastShadows : 1; // 0x5c(0x01)
	char DoCollisions : 1; // 0x5c(0x01)
	char pad_5C_3 : 5; // 0x5c(0x01)
	enum class EMeshScreenAlignment MeshAlignment; // 0x5d(0x01)
	char bOverrideMaterial : 1; // 0x5e(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x5e(0x01)
	char bEnableMotionBlur : 1; // 0x5e(0x01)
	char pad_5E_3 : 5; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	struct FRawDistributionVector RollPitchYawRange; // 0x60(0x48)
	enum class EParticleAxisLock AxisLockOption; // 0xa8(0x01)
	char bCameraFacing : 1; // 0xa9(0x01)
	char pad_A9_1 : 7; // 0xa9(0x01)
	enum class EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0xaa(0x01)
	enum class EMeshCameraFacingOptions CameraFacingOption; // 0xab(0x01)
	char bApplyParticleRotationAsSpin : 1; // 0xac(0x01)
	char bFaceCameraDirectionRatherThanPosition : 1; // 0xac(0x01)
	char bCollisionsConsiderPartilceSize : 1; // 0xac(0x01)
	char pad_AC_3 : 5; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x68 (Inherited: 0x38)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x38(0x04)
	int32_t SheetsPerTrail; // 0x3c(0x04)
	int32_t MaxTrailCount; // 0x40(0x04)
	int32_t MaxParticleInTrailCount; // 0x44(0x04)
	char bDeadTrailsOnDeactivate : 1; // 0x48(0x01)
	char bDeadTrailsOnSourceLoss : 1; // 0x48(0x01)
	char bClipSourceSegement : 1; // 0x48(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x48(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x48(0x01)
	char bSpawnInitialParticle : 1; // 0x48(0x01)
	char pad_48_6 : 2; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	enum class ETrailsRenderAxisOption RenderAxis; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float TangentSpawningScalar; // 0x50(0x04)
	char bRenderGeometry : 1; // 0x54(0x01)
	char bRenderSpawnPoints : 1; // 0x54(0x01)
	char bRenderTangents : 1; // 0x54(0x01)
	char bRenderTessellation : 1; // 0x54(0x01)
	char pad_54_4 : 4; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float TilingDistance; // 0x58(0x04)
	float DistanceTessellationStepSize; // 0x5c(0x04)
	char bEnableTangentDiffInterpScale : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float TangentTessellationScalar; // 0x64(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.ParticleModuleVectorFieldGlobal
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float GlobalVectorFieldScale; // 0x3c(0x04)
	float GlobalVectorFieldTightness; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleVectorFieldLocal
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x38(0x08)
	struct FVector RelativeTranslation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale3D; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float Tightness; // 0x68(0x04)
	char bIgnoreComponentTransform : 1; // 0x6c(0x01)
	char bTileX : 1; // 0x6c(0x01)
	char bTileY : 1; // 0x6c(0x01)
	char bTileZ : 1; // 0x6c(0x01)
	char bUseFixDT : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.ParticleModuleVectorFieldRotation
// Size: 0x50 (Inherited: 0x38)
struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	struct FVector MinInitialRotation; // 0x38(0x0c)
	struct FVector MaxInitialRotation; // 0x44(0x0c)
};

// Class Engine.ParticleModuleVectorFieldRotationRate
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScale; // 0x38(0x08)
	struct FRawDistributionFloat VectorFieldScaleRaw; // 0x40(0x30)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScaleOverLife; // 0x38(0x08)
	struct FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x40(0x30)
};

// Class Engine.ParticleModuleVelocityBase
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x38(0x01)
	char bApplyOwnerScale : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleVelocity
// Size: 0xb8 (Inherited: 0x40)
struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	struct FRawDistributionVector StartVelocity; // 0x40(0x48)
	struct FRawDistributionFloat StartVelocityRadial; // 0x88(0x30)
};

// Class Engine.ParticleModuleVelocity_Seeded
// Size: 0xd8 (Inherited: 0xb8)
struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0xb8(0x20)
};

// Class Engine.ParticleModuleVelocityCone
// Size: 0xb0 (Inherited: 0x40)
struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	struct FRawDistributionFloat Angle; // 0x40(0x30)
	struct FRawDistributionFloat Velocity; // 0x70(0x30)
	struct FVector Direction; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Engine.ParticleModuleVelocityInheritParent
// Size: 0x88 (Inherited: 0x40)
struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	struct FRawDistributionVector Scale; // 0x40(0x48)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x90 (Inherited: 0x40)
struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	struct FRawDistributionVector VelOverLife; // 0x40(0x48)
	char Absolute : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleSpriteEmitter
// Size: 0x1c0 (Inherited: 0x1c0)
struct UParticleSpriteEmitter : UParticleEmitter {
};

// Class Engine.ParticleSystem
// Size: 0x128 (Inherited: 0x38)
struct UParticleSystem : UFXSystemAsset {
	float UpdateTime_FPS; // 0x38(0x04)
	float UpdateTime_Delta; // 0x3c(0x04)
	float WarmupTime; // 0x40(0x04)
	float WarmupTickRate; // 0x44(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x48(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x58(0x08)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x60(0x08)
	float LODDistanceCheckTime; // 0x68(0x04)
	float MacroUVRadius; // 0x6c(0x04)
	struct TArray<float> LODDistances; // 0x70(0x10)
	struct TArray<struct FParticleSystemLOD> LODSettings; // 0x80(0x10)
	struct FBox FixedRelativeBoundingBox; // 0x90(0x1c)
	float SecondsBeforeInactive; // 0xac(0x04)
	float Delay; // 0xb0(0x04)
	float DelayLow; // 0xb4(0x04)
	char bOrientZAxisTowardCamera : 1; // 0xb8(0x01)
	char bUseFixedRelativeBoundingBox : 1; // 0xb8(0x01)
	char bShouldResetPeakCounts : 1; // 0xb8(0x01)
	char bHasPhysics : 1; // 0xb8(0x01)
	char bUseRealtimeThumbnail : 1; // 0xb8(0x01)
	char ThumbnailImageOutOfDate : 1; // 0xb8(0x01)
	char pad_B8_6 : 2; // 0xb8(0x01)
	char bUseDelayRange : 1; // 0xb9(0x01)
	char bAllowManagedTicking : 1; // 0xb9(0x01)
	char bAutoDeactivate : 1; // 0xb9(0x01)
	char bRegenerateLODDuplicate : 1; // 0xb9(0x01)
	char pad_B9_4 : 4; // 0xb9(0x01)
	enum class EParticleSystemUpdateMode SystemUpdateMode; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	struct FName TRSSpawnCullingGroup; // 0xbc(0x08)
	enum class ParticleSystemLODMethod LODMethod; // 0xc4(0x01)
	enum class EParticleSystemInsignificanceReaction InsignificantReaction; // 0xc5(0x01)
	enum class EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xc6(0x01)
	char pad_C7[0x1]; // 0xc7(0x01)
	enum class EParticleSignificanceLevel MaxSignificanceLevel; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	uint32_t MinTimeBetweenTicks; // 0xcc(0x04)
	float InsignificanceDelay; // 0xd0(0x04)
	struct FVector MacroUVPosition; // 0xd4(0x0c)
	struct FBox CustomOcclusionBounds; // 0xe0(0x1c)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct FLODSoloTrack> SoloTracking; // 0x100(0x10)
	struct TArray<struct FNamedEmitterMaterial> NamedMaterialSlots; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)

	bool ContainsEmitterType(struct UObject* TypeData); // Function Engine.ParticleSystem.ContainsEmitterType // (None) // @ game+0xfffffffec0000000
};

// Class Engine.ParticleSystemReplay
// Size: 0x48 (Inherited: 0x30)
struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x30(0x04)
	char pad_34[0x14]; // 0x34(0x14)
};

// Class Engine.PathFollowingAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UPathFollowingAgentInterface : UInterface {
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0x100 (Inherited: 0xd8)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FVector LastRemoteNoisePosition; // 0xdc(0x0c)
	float NoiseLifetime; // 0xe8(0x04)
	float LastRemoteNoiseVolume; // 0xec(0x04)
	float LastRemoteNoiseTime; // 0xf0(0x04)
	float LastLocalNoiseVolume; // 0xf4(0x04)
	float LastLocalNoiseTime; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MakeNoise(struct AActor* NoiseMaker, float Loudness, struct FVector NoiseLocation); // Function Engine.PawnNoiseEmitterComponent.MakeNoise // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PhysicalAnimationComponent
// Size: 0x120 (Inherited: 0xd8)
struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0xe0(0x08)
	char pad_E8[0x38]; // 0xe8(0x38)

	void SetStrengthMultiplyer(float InStrengthMultiplyer); // Function Engine.PhysicalAnimationComponent.SetStrengthMultiplyer // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PhysicalMaterial
// Size: 0x88 (Inherited: 0x30)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x30(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x34(0x01)
	bool bOverrideFrictionCombineMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Restitution; // 0x38(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x3c(0x01)
	bool bOverrideRestitutionCombineMode; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float Density; // 0x40(0x04)
	float RaiseMassToPower; // 0x44(0x04)
	float DestructibleDamageThresholdScale; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x50(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float TireFrictionScale; // 0x5c(0x04)
	struct TArray<struct FTireFrictionScalePair> TireFrictionScales; // 0x60(0x10)
	char pad_70[0x18]; // 0x70(0x18)
};

// Class Engine.PhysicalMaterialMask
// Size: 0x38 (Inherited: 0x30)
struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x30(0x04)
	enum class TextureAddress AddressX; // 0x34(0x01)
	enum class TextureAddress AddressY; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x30 (Inherited: 0x30)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsAsset
// Size: 0x140 (Inherited: 0x30)
struct UPhysicsAsset : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<int32_t> BoundsBodies; // 0x38(0x10)
	struct TArray<struct USkeletalBodySetup*> SkeletalBodySetups; // 0x48(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> ConstraintSetup; // 0x58(0x10)
	struct FSolverIterations SolverIterations; // 0x68(0x18)
	char bNotForDedicatedServer : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0xa7]; // 0x81(0xa7)
	struct UThumbnailInfo* ThumbnailInfo; // 0x128(0x08)
	struct TArray<struct UBodySetup*> BodySetup; // 0x130(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x270 (Inherited: 0x258)
struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct TArray<struct FPhysicalAnimationProfile> PhysicalAnimationData; // 0x260(0x10)
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x48 (Inherited: 0x30)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x30(0x04)
	float ImpactReFireDelay; // 0x34(0x04)
	struct USoundBase* DefaultImpactSound; // 0x38(0x08)
	float LastImpactSoundTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.RigidBodyBase
// Size: 0x250 (Inherited: 0x250)
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x270 (Inherited: 0x250)
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; // 0x250(0x08)
	struct AActor* ConstraintActor1; // 0x258(0x08)
	struct AActor* ConstraintActor2; // 0x260(0x08)
	char bDisableCollision : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x420 (Inherited: 0x220)
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* ConstraintActor1; // 0x220(0x08)
	struct FConstrainComponentPropName ComponentName1; // 0x228(0x08)
	struct AActor* ConstraintActor2; // 0x230(0x08)
	struct FConstrainComponentPropName ComponentName2; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x250(0x08)
	struct FMulticastInlineDelegate OnConstraintBroken; // 0x258(0x10)
	struct FConstraintInstance ConstraintInstance; // 0x268(0x1b8)

	void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveTwistAndSwing // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x300 (Inherited: 0x30)
struct UPhysicsConstraintTemplate : UObject {
	struct FConstraintInstance DefaultInstance; // 0x30(0x1b8)
	struct TArray<struct FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e8(0x10)
	struct FConstraintProfileProperties DefaultProfile; // 0x1f8(0x104)
	char pad_2FC[0x4]; // 0x2fc(0x04)
};

// Class Engine.PhysicsHandleComponent
// Size: 0x180 (Inherited: 0xd8)
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* GrabbedComponent; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
	char pad_E8_0 : 1; // 0xe8(0x01)
	char bSoftAngularConstraint : 1; // 0xe8(0x01)
	char bSoftLinearConstraint : 1; // 0xe8(0x01)
	char bInterpolateTarget : 1; // 0xe8(0x01)
	char pad_E8_4 : 4; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float LinearDamping; // 0xec(0x04)
	float LinearStiffness; // 0xf0(0x04)
	float AngularDamping; // 0xf4(0x04)
	float AngularStiffness; // 0xf8(0x04)
	char pad_FC[0x64]; // 0xfc(0x64)
	float InterpolationSpeed; // 0x160(0x04)
	char pad_164[0x1c]; // 0x164(0x1c)

	void SetTargetRotation(struct FRotator NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetRotation // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PhysicsSettings
// Size: 0x140 (Inherited: 0x40)
struct UPhysicsSettings : UDeveloperSettings {
	float DefaultGravityZ; // 0x40(0x04)
	float DefaultTerminalVelocity; // 0x44(0x04)
	float DefaultFluidFriction; // 0x48(0x04)
	int32_t SimulateScratchMemorySize; // 0x4c(0x04)
	int32_t RagdollAggregateThreshold; // 0x50(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x54(0x04)
	bool bEnableShapeSharing; // 0x58(0x01)
	bool bEnablePCM; // 0x59(0x01)
	bool bEnableStabilization; // 0x5a(0x01)
	bool bWarnMissingLocks; // 0x5b(0x01)
	bool bEnable2DPhysics; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x60(0x34)
	enum class ESettingsLockedAxis LockedAxis; // 0x94(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	float BounceThresholdVelocity; // 0x98(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x9c(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	float MaxAngularVelocity; // 0xa0(0x04)
	float MaxDepenetrationVelocity; // 0xa4(0x04)
	float ContactOffsetMultiplier; // 0xa8(0x04)
	float MinContactOffset; // 0xac(0x04)
	float MaxContactOffset; // 0xb0(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0xb4(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0xb5(0x01)
	bool bDefaultHasComplexCollision; // 0xb6(0x01)
	bool bSuppressFaceRemapTable; // 0xb7(0x01)
	bool bSupportUVFromHitResults; // 0xb8(0x01)
	bool bDisableActiveActors; // 0xb9(0x01)
	bool bDisableKinematicStaticPairs; // 0xba(0x01)
	bool bDisableKinematicKinematicPairs; // 0xbb(0x01)
	bool bDisableCCD; // 0xbc(0x01)
	bool bEnableEnhancedDeterminism; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	float AnimPhysicsMinDeltaTime; // 0xc0(0x04)
	bool bSimulateAnimPhysicsAfterReset; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float MaxPhysicsDeltaTime; // 0xc8(0x04)
	bool bSubstepping; // 0xcc(0x01)
	bool bSubsteppingAsync; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	float MaxSubstepDeltaTime; // 0xd0(0x04)
	int32_t MaxSubsteps; // 0xd4(0x04)
	float SyncSceneSmoothingFactor; // 0xd8(0x04)
	float InitialAverageFrameRate; // 0xdc(0x04)
	int32_t PhysXTreeRebuildRate; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FPhysicalSurfaceName> PhysicalSurfaces; // 0xe8(0x10)
	struct FBroadphaseSettings DefaultBroadphaseSettings; // 0xf8(0x40)
	struct FChaosPhysicsSettings ChaosSettings; // 0x138(0x03)
	char pad_13B[0x5]; // 0x13b(0x05)
};

// Class Engine.PhysicsSpringComponent
// Size: 0x250 (Inherited: 0x220)
struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x220(0x04)
	float SpringDamping; // 0x224(0x04)
	float SpringLengthAtRest; // 0x228(0x04)
	float SpringRadius; // 0x22c(0x04)
	enum class ECollisionChannel SpringChannel; // 0x230(0x01)
	bool bIgnoreSelf; // 0x231(0x01)
	char pad_232[0x2]; // 0x232(0x02)
	float SpringCompression; // 0x234(0x04)
	char pad_238[0x18]; // 0x238(0x18)

	struct FVector GetSpringRestingPoint(); // Function Engine.PhysicsSpringComponent.GetSpringRestingPoint // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PhysicsThruster
// Size: 0x258 (Inherited: 0x250)
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; // 0x250(0x08)
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x230 (Inherited: 0x220)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x220(0x04)
	char pad_224[0xc]; // 0x224(0x0c)
};

// Class Engine.SceneCapture
// Size: 0x260 (Inherited: 0x250)
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x250(0x08)
	struct USceneComponent* SceneComponent; // 0x258(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x270 (Inherited: 0x260)
struct APlanarReflection : ASceneCapture {
	struct UPlanarReflectionComponent* PlanarReflectionComponent; // 0x260(0x08)
	bool bShowPreviewPlane; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)

	void OnInterpToggle(bool bEnable); // Function Engine.PlanarReflection.OnInterpToggle // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SceneCaptureComponent
// Size: 0x2c0 (Inherited: 0x220)
struct USceneCaptureComponent : USceneComponent {
	enum class ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x220(0x01)
	enum class ESceneCaptureSource CaptureSource; // 0x221(0x01)
	char bCaptureEveryFrame : 1; // 0x222(0x01)
	char bCaptureOnMovement : 1; // 0x222(0x01)
	char pad_222_2 : 6; // 0x222(0x01)
	bool bAlwaysPersistRenderingState; // 0x223(0x01)
	char pad_224[0x4]; // 0x224(0x04)
	struct TArray<struct TWeakObjectPtr<struct UPrimitiveComponent>> HiddenComponents; // 0x228(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x238(0x10)
	struct TArray<struct TWeakObjectPtr<struct UPrimitiveComponent>> ShowOnlyComponents; // 0x248(0x10)
	struct TArray<struct AActor*> ShowOnlyActors; // 0x258(0x10)
	float LODDistanceFactor; // 0x268(0x04)
	float MaxViewDistanceOverride; // 0x26c(0x04)
	int32_t CaptureSortPriority; // 0x270(0x04)
	bool bUseRayTracingIfEnabled; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct TArray<struct FEngineShowFlagsSetting> ShowFlagSettings; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)
	struct FString ProfilingEventName; // 0x298(0x10)
	char pad_2A8[0x18]; // 0x2a8(0x18)

	void ShowOnlyComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.ShowOnlyComponent // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PlanarReflectionComponent
// Size: 0x3a0 (Inherited: 0x2c0)
struct UPlanarReflectionComponent : USceneCaptureComponent {
	struct UBoxComponent* PreviewBox; // 0x2b8(0x08)
	float NormalDistortionStrength; // 0x2c0(0x04)
	float PrefilterRoughness; // 0x2c4(0x04)
	float PrefilterRoughnessDistance; // 0x2c8(0x04)
	int32_t ScreenPercentage; // 0x2cc(0x04)
	float ExtraFOV; // 0x2d0(0x04)
	float DistanceFromPlaneFadeStart; // 0x2d4(0x04)
	float DistanceFromPlaneFadeEnd; // 0x2d8(0x04)
	float DistanceFromPlaneFadeoutStart; // 0x2dc(0x04)
	float DistanceFromPlaneFadeoutEnd; // 0x2e0(0x04)
	float AngleFromPlaneFadeStart; // 0x2e4(0x04)
	float AngleFromPlaneFadeEnd; // 0x2e8(0x04)
	bool bShowPreviewPlane; // 0x2ec(0x01)
	bool bRenderSceneTwoSided; // 0x2ed(0x01)
	char pad_2F6[0xaa]; // 0x2f6(0xaa)
};

// Class Engine.PlaneReflectionCapture
// Size: 0x258 (Inherited: 0x258)
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCaptureComponent
// Size: 0x2b0 (Inherited: 0x2a0)
struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x298(0x04)
	struct UDrawSphereComponent* PreviewInfluenceRadius; // 0x2a0(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x2a8(0x08)
};

// Class Engine.PlatformEventsComponent
// Size: 0xf8 (Inherited: 0xd8)
struct UPlatformEventsComponent : UActorComponent {
	struct FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xd8(0x10)
	struct FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xe8(0x10)

	bool SupportsConvertibleLaptops(); // Function Engine.PlatformEventsComponent.SupportsConvertibleLaptops // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PlatformInterfaceWebResponse
// Size: 0xb8 (Inherited: 0x30)
struct UPlatformInterfaceWebResponse : UObject {
	struct FString OriginalURL; // 0x30(0x10)
	int32_t ResponseCode; // 0x40(0x04)
	int32_t Tag; // 0x44(0x04)
	struct FString StringResponse; // 0x48(0x10)
	struct TArray<char> BinaryResponse; // 0x58(0x10)
	char pad_68[0x50]; // 0x68(0x50)

	int32_t GetNumHeaders(); // Function Engine.PlatformInterfaceWebResponse.GetNumHeaders // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PlayerStartPIE
// Size: 0x280 (Inherited: 0x280)
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.PluginCommandlet
// Size: 0xa8 (Inherited: 0x88)
struct UPluginCommandlet : UCommandlet {
	char pad_88[0x20]; // 0x88(0x20)
};

// Class Engine.PointLight
// Size: 0x268 (Inherited: 0x260)
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; // 0x260(0x08)

	void SetRadius(float NewRadius); // Function Engine.PointLight.SetRadius // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PointLightComponent
// Size: 0x390 (Inherited: 0x370)
struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x370(0x01)
	char pad_370_1 : 7; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	float LightFalloffExponent; // 0x374(0x04)
	float SourceRadius; // 0x378(0x04)
	float SoftSourceRadius; // 0x37c(0x04)
	float SourceLength; // 0x380(0x04)
	char pad_384[0xc]; // 0x384(0x0c)

	void SetSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSourceRadius // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Polys
// Size: 0x40 (Inherited: 0x30)
struct UPolys : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.PoseableMeshComponent
// Size: 0x870 (Inherited: 0x710)
struct UPoseableMeshComponent : USkinnedMeshComponent {
	char pad_710[0x160]; // 0x710(0x160)

	void SetBoneTransformByName(struct FName BoneName, struct FTransform InTransform, enum class EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneTransformByName // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PoseAsset
// Size: 0x128 (Inherited: 0x88)
struct UPoseAsset : UAnimationAsset {
	struct FPoseDataContainer PoseContainer; // 0x88(0x90)
	bool bAdditivePose; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32_t BasePoseIndex; // 0x11c(0x04)
	struct FName RetargetSource; // 0x120(0x08)
};

// Class Engine.PoseWatch
// Size: 0x40 (Inherited: 0x30)
struct UPoseWatch : UObject {
	struct UEdGraphNode* Node; // 0x30(0x08)
	struct FColor PoseWatchColour; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.PostProcessComponent
// Size: 0x7a0 (Inherited: 0x220)
struct UPostProcessComponent : USceneComponent {
	char pad_220[0x10]; // 0x220(0x10)
	struct FPostProcessSettings Settings; // 0x230(0x560)
	float Priority; // 0x790(0x04)
	float BlendRadius; // 0x794(0x04)
	float BlendWeight; // 0x798(0x04)
	char bEnabled : 1; // 0x79c(0x01)
	char bUnbound : 1; // 0x79c(0x01)
	char pad_79C_2 : 6; // 0x79c(0x01)
	char pad_79D[0x3]; // 0x79d(0x03)

	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // Function Engine.PostProcessComponent.AddOrUpdateBlendable // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PostProcessVolume
// Size: 0x800 (Inherited: 0x288)
struct APostProcessVolume : AVolume {
	char pad_288[0x8]; // 0x288(0x08)
	struct FPostProcessSettings Settings; // 0x290(0x560)
	float Priority; // 0x7f0(0x04)
	float BlendRadius; // 0x7f4(0x04)
	float BlendWeight; // 0x7f8(0x04)
	char bEnabled : 1; // 0x7fc(0x01)
	char bUnbound : 1; // 0x7fc(0x01)
	char pad_7FC_2 : 6; // 0x7fc(0x01)
	char pad_7FD[0x3]; // 0x7fd(0x03)

	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // Function Engine.PostProcessVolume.AddOrUpdateBlendable // (None) // @ game+0xfffffffec0000000
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x2b8 (Inherited: 0x288)
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; // 0x288(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors; // 0x298(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x2a8(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x288 (Inherited: 0x288)
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.PreviewCollectionInterface
// Size: 0x30 (Inherited: 0x30)
struct UPreviewCollectionInterface : UInterface {
};

// Class Engine.PreviewMeshCollection
// Size: 0x58 (Inherited: 0x38)
struct UPreviewMeshCollection : UDataAsset {
	char pad_38[0x8]; // 0x38(0x08)
	struct USkeleton* Skeleton; // 0x40(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x48(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x88 (Inherited: 0x38)
struct UPrimaryAssetLabel : UPrimaryDataAsset {
	struct FPrimaryAssetRules Rules; // 0x38(0x20)
	char bLabelAssetsInMyDirectory : 1; // 0x58(0x01)
	char bIsRuntimeLabel : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct TSoftObjectPtr<UObject>> ExplicitAssets; // 0x60(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x70(0x10)
	struct FCollectionReference AssetCollection; // 0x80(0x08)
};

// Class Engine.PrimitiveParameterCollection
// Size: 0x70 (Inherited: 0x38)
struct UPrimitiveParameterCollection : UDataAsset {
	struct TArray<struct FPrimitiveFloatParameter> FloatParameters; // 0x38(0x10)
	struct TArray<struct FPrimitiveVectorParameter> VectorParameters; // 0x48(0x10)
	struct FGuid StateId; // 0x58(0x10)
	int32_t TotalNumberOfFloats; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.ProxyLODMeshSimplificationSettings
// Size: 0x48 (Inherited: 0x40)
struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	struct FName ProxyLODMeshReductionModuleName; // 0x40(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x258 (Inherited: 0x250)
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; // 0x250(0x08)

	void ToggleForce(); // Function Engine.RadialForceActor.ToggleForce // (None) // @ game+0xfffffffec0000000
};

// Class Engine.RadialForceComponent
// Size: 0x250 (Inherited: 0x220)
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x220(0x04)
	enum class ERadialImpulseFalloff Falloff; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	float ImpulseStrength; // 0x228(0x04)
	char bImpulseVelChange : 1; // 0x22c(0x01)
	char bIgnoreOwningActor : 1; // 0x22c(0x01)
	char pad_22C_2 : 6; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	float ForceStrength; // 0x230(0x04)
	float DestructibleDamage; // 0x234(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)

	void RemoveObjectTypeToAffect(enum class EObjectTypeQuery ObjectType); // Function Engine.RadialForceComponent.RemoveObjectTypeToAffect // (None) // @ game+0xfffffffec0000000
};

// Class Engine.RectLight
// Size: 0x268 (Inherited: 0x260)
struct ARectLight : ALight {
	struct URectLightComponent* RectLightComponent; // 0x260(0x08)
};

// Class Engine.RectLightComponent
// Size: 0x390 (Inherited: 0x370)
struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x370(0x04)
	float SourceHeight; // 0x374(0x04)
	float BarnDoorAngle; // 0x378(0x04)
	float BarnDoorLength; // 0x37c(0x04)
	struct UTexture* SourceTexture; // 0x380(0x08)
	char pad_388[0x8]; // 0x388(0x08)

	void SetSourceWidth(float bNewValue); // Function Engine.RectLightComponent.SetSourceWidth // (None) // @ game+0xfffffffec0000000
};

// Class Engine.RendererSettings
// Size: 0x110 (Inherited: 0x40)
struct URendererSettings : UDeveloperSettings {
	char bMobileDisableVertexFog : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t MaxMobileCascades; // 0x44(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	char bMobileUseLegacyShadingModel : 1; // 0x4c(0x01)
	char bMobileAllowDitheredLODTransition : 1; // 0x4c(0x01)
	char bMobileAllowSoftwareOcclusionCulling : 1; // 0x4c(0x01)
	char bMobileVirtualTextures : 1; // 0x4c(0x01)
	char bDiscardUnusedQualityLevels : 1; // 0x4c(0x01)
	char bOcclusionCulling : 1; // 0x4c(0x01)
	char pad_4C_6 : 2; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float MinScreenRadiusForLights; // 0x50(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x54(0x04)
	float MinScreenRadiusForCSMdepth; // 0x58(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x5c(0x01)
	char bTextureStreaming : 1; // 0x5c(0x01)
	char bUseDXT5NormalMaps : 1; // 0x5c(0x01)
	char bUseDX11Formats : 1; // 0x5c(0x01)
	char bVirtualTextures : 1; // 0x5c(0x01)
	char bVirtualTexturedLightmaps : 1; // 0x5c(0x01)
	char pad_5C_6 : 2; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	uint32_t VirtualTextureTileSize; // 0x60(0x04)
	uint32_t VirtualTextureTileBorderSize; // 0x64(0x04)
	uint32_t VirtualTextureFeedbackFactor; // 0x68(0x04)
	char bVirtualTextureEnableCompressZlib : 1; // 0x6c(0x01)
	char bVirtualTextureEnableCompressCrunch : 1; // 0x6c(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x6c(0x01)
	char bAnisotropicBRDF : 1; // 0x6c(0x01)
	char pad_6C_4 : 4; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	int32_t ReflectionCaptureResolution; // 0x70(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x74(0x01)
	char bForwardShading : 1; // 0x74(0x01)
	char bVertexFoggingForOpaque : 1; // 0x74(0x01)
	char bAllowStaticLighting : 1; // 0x74(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x74(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x74(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x74(0x01)
	char bGenerateLandscapeGIData : 1; // 0x74(0x01)
	char bCompressMeshDistanceFields : 1; // 0x75(0x01)
	char pad_75_1 : 7; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	float TessellationAdaptivePixelsPerTriangle; // 0x78(0x04)
	char bSeparateTranslucency : 1; // 0x7c(0x01)
	char pad_7C_1 : 7; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	enum class ETranslucentSortPolicy TranslucentSortPolicy; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FVector TranslucentSortAxis; // 0x84(0x0c)
	enum class ECustomDepthStencil CustomDepthStencil; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char bCustomDepthTaaJitter : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	enum class EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString NGXAppId; // 0xa0(0x10)
	char bDefaultFeatureBloom : 1; // 0xb0(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0xb0(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0xb0(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0xb0(0x01)
	char pad_B0_4 : 4; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float DefaultFeatureAutoExposureBias; // 0xb8(0x04)
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xbc(0x01)
	char bUsePreExposure : 1; // 0xbc(0x01)
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xbc(0x01)
	char bDefaultFeatureMotionBlur : 1; // 0xbc(0x01)
	char bDefaultFeatureLensFlare : 1; // 0xbc(0x01)
	char bTemporalUpsampling : 1; // 0xbc(0x01)
	char bSSGI : 1; // 0xbc(0x01)
	char pad_BC_7 : 1; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	enum class EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xc0(0x01)
	enum class ELightUnits DefaultLightUnits; // 0xc1(0x01)
	enum class EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	char bRenderUnbuiltPreviewLightsInGame : 1; // 0xc4(0x01)
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xc4(0x01)
	char bStencilForLODDither : 1; // 0xc4(0x01)
	char pad_C4_3 : 5; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	enum class EEarlyZPass EarlyZPass; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xcc(0x01)
	char bDBuffer : 1; // 0xcc(0x01)
	char pad_CC_2 : 6; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	enum class EClearSceneOptions ClearSceneMethod; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	char bBasePassOutputsVelocity : 1; // 0xd4(0x01)
	char bVertexDeformationOutputsVelocity : 1; // 0xd4(0x01)
	char bSelectiveBasePassOutputs : 1; // 0xd4(0x01)
	char bDefaultParticleCutouts : 1; // 0xd4(0x01)
	char pad_D4_4 : 4; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	int32_t GPUSimulationTextureSizeX; // 0xd8(0x04)
	int32_t GPUSimulationTextureSizeY; // 0xdc(0x04)
	char bGlobalClipPlane : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	enum class EGBufferFormat GBufferFormat; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	char bUseGPUMorphTargets : 1; // 0xe8(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xe8(0x01)
	char bMultiView : 1; // 0xe8(0x01)
	char bMobilePostProcessing : 1; // 0xe8(0x01)
	char bMobileMultiView : 1; // 0xe8(0x01)
	char bMobileUseHWsRGBEncoding : 1; // 0xe8(0x01)
	char bRoundRobinOcclusion : 1; // 0xe8(0x01)
	char bODSCapture : 1; // 0xe8(0x01)
	char bMeshStreaming : 1; // 0xe9(0x01)
	char pad_E9_1 : 7; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float WireframeCullThreshold; // 0xec(0x04)
	char bEnableRayTracing : 1; // 0xf0(0x01)
	char bEnableRayTracingTextureLOD : 1; // 0xf0(0x01)
	char bSupportStationarySkylight : 1; // 0xf0(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xf0(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xf0(0x01)
	char bSupportAtmosphericFog : 1; // 0xf0(0x01)
	char bSupportSkyAtmosphere : 1; // 0xf0(0x01)
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xf0(0x01)
	char bSupportSkinCacheShaders : 1; // 0xf1(0x01)
	char pad_F1_1 : 7; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	enum class ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float SkinCacheSceneMemoryLimitInMB; // 0xf8(0x04)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xfc(0x01)
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xfc(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xfc(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xfc(0x01)
	char pad_FC_4 : 4; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	uint32_t MobileNumDynamicPointLights; // 0x100(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0x104(0x01)
	char bMobileAllowMovableSpotlights : 1; // 0x104(0x01)
	char bSupport16BitBoneIndex : 1; // 0x104(0x01)
	char bGPUSkinLimit2BoneInfluences : 1; // 0x104(0x01)
	char bSupportDepthOnlyIndexBuffers : 1; // 0x104(0x01)
	char bSupportReversedIndexBuffers : 1; // 0x104(0x01)
	char bSupportMaterialLayers : 1; // 0x104(0x01)
	char bLPV : 1; // 0x104(0x01)
	char bSupportAlphaToCoverage : 1; // 0x105(0x01)
	char pad_105_1 : 7; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	float TRSMobileLuminance; // 0x108(0x04)
	char bEnableNonCSMProjectedWholeSceneShadows : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
};

// Class Engine.RendererOverrideSettings
// Size: 0x48 (Inherited: 0x40)
struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x40(0x01)
	char bForceRecomputeTangents : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.ReplicationDriver
// Size: 0x30 (Inherited: 0x30)
struct UReplicationDriver : UObject {
};

// Class Engine.ReplicationConnectionDriver
// Size: 0x30 (Inherited: 0x30)
struct UReplicationConnectionDriver : UObject {
};

// Class Engine.ReporterBase
// Size: 0x38 (Inherited: 0x30)
struct UReporterBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.ReporterGraph
// Size: 0xb0 (Inherited: 0x38)
struct UReporterGraph : UReporterBase {
	char pad_38[0x78]; // 0x38(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x60 (Inherited: 0x30)
struct UReverbEffect : UObject {
	float Density; // 0x30(0x04)
	float Diffusion; // 0x34(0x04)
	float Gain; // 0x38(0x04)
	float GainHF; // 0x3c(0x04)
	float DecayTime; // 0x40(0x04)
	float DecayHFRatio; // 0x44(0x04)
	float ReflectionsGain; // 0x48(0x04)
	float ReflectionsDelay; // 0x4c(0x04)
	float LateGain; // 0x50(0x04)
	float LateDelay; // 0x54(0x04)
	float AirAbsorptionGainHF; // 0x58(0x04)
	float RoomRolloffFactor; // 0x5c(0x04)
};

// Class Engine.Rig
// Size: 0x58 (Inherited: 0x30)
struct URig : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FTransformBase> TransformBases; // 0x38(0x10)
	struct TArray<struct FNode> Nodes; // 0x48(0x10)
};

// Class Engine.RotatingMovementComponent
// Size: 0x138 (Inherited: 0x118)
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; // 0x118(0x0c)
	struct FVector PivotTranslation; // 0x124(0x0c)
	char bRotationInLocalSpace : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// Class Engine.RuntimeOptionsBase
// Size: 0x40 (Inherited: 0x30)
struct URuntimeOptionsBase : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.RuntimeVirtualTexture
// Size: 0xb0 (Inherited: 0x30)
struct URuntimeVirtualTexture : UObject {
	enum class ERuntimeVirtualTextureMaterialType MaterialType; // 0x30(0x01)
	bool bCompressTextures; // 0x31(0x01)
	bool bEnable; // 0x32(0x01)
	bool bClearTextures; // 0x33(0x01)
	bool bSinglePhysicalSpace; // 0x34(0x01)
	bool bPrivateSpace; // 0x35(0x01)
	bool bEnableScalability; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	int32_t Size; // 0x38(0x04)
	int32_t TileCount; // 0x3c(0x04)
	int32_t TileSize; // 0x40(0x04)
	int32_t TileBorderSize; // 0x44(0x04)
	int32_t StreamLowMips; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x50(0x08)
	bool bEnableCompressCrunch; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t RemoveLowMips; // 0x5c(0x04)
	char pad_60[0x50]; // 0x60(0x50)

	int32_t GetTileSize(); // Function Engine.RuntimeVirtualTexture.GetTileSize // (None) // @ game+0xfffffffec0000000
};

// Class Engine.RuntimeVirtualTextureComponent
// Size: 0x240 (Inherited: 0x220)
struct URuntimeVirtualTextureComponent : USceneComponent {
	struct URuntimeVirtualTexture* VirtualTexture; // 0x220(0x08)
	bool bUseStreamingLowMipsInEditor; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct AActor* BoundsSourceActor; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)

	struct FTransform GetVirtualTextureTransform(); // Function Engine.RuntimeVirtualTextureComponent.GetVirtualTextureTransform // (None) // @ game+0xfffffffec0000000
};

// Class Engine.RuntimeVirtualTextureStreamingProxy
// Size: 0x108 (Inherited: 0xf0)
struct URuntimeVirtualTextureStreamingProxy : UTexture2D {
	struct FVirtualTextureBuildSettings Settings; // 0xf0(0x0c)
	bool bSinglePhysicalSpace; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	uint32_t BuildHash; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class Engine.RuntimeVirtualTextureVolume
// Size: 0x258 (Inherited: 0x250)
struct ARuntimeVirtualTextureVolume : AActor {
	struct URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x250(0x08)
};

// Class Engine.RVOAvoidanceInterface
// Size: 0x30 (Inherited: 0x30)
struct URVOAvoidanceInterface : UInterface {
};

// Class Engine.SaveGame
// Size: 0x30 (Inherited: 0x30)
struct USaveGame : UObject {
};

// Class Engine.Scene
// Size: 0x30 (Inherited: 0x30)
struct UScene : UObject {
};

// Class Engine.SceneCapture2D
// Size: 0x268 (Inherited: 0x260)
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x260(0x08)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCapture2D.OnInterpToggle // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SceneCaptureComponent2D
// Size: 0x8d0 (Inherited: 0x2c0)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x2b8(0x01)
	float FOVAngle; // 0x2bc(0x04)
	float OrthoWidth; // 0x2c0(0x04)
	struct UTextureRenderTarget2D* TextureTarget; // 0x2c8(0x08)
	enum class ESceneCaptureCompositeMode CompositeMode; // 0x2d0(0x01)
	char pad_2D2[0xe]; // 0x2d2(0x0e)
	struct FPostProcessSettings PostProcessSettings; // 0x2e0(0x560)
	float PostProcessBlendWeight; // 0x840(0x04)
	char bOverride_CustomNearClippingPlane : 1; // 0x844(0x01)
	char pad_844_1 : 7; // 0x844(0x01)
	char pad_845[0x3]; // 0x845(0x03)
	float CustomNearClippingPlane; // 0x848(0x04)
	bool bUseCustomProjectionMatrix; // 0x84c(0x01)
	char pad_84D[0x3]; // 0x84d(0x03)
	struct FMatrix CustomProjectionMatrix; // 0x850(0x40)
	bool bEnableClipPlane; // 0x890(0x01)
	char pad_891[0x3]; // 0x891(0x03)
	struct FVector ClipPlaneBase; // 0x894(0x0c)
	struct FVector ClipPlaneNormal; // 0x8a0(0x0c)
	char bCameraCutThisFrame : 1; // 0x8ac(0x01)
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x8ac(0x01)
	char pad_8AC_2 : 6; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	bool bDisableFlipCopyGLES; // 0x8b0(0x01)
	char pad_8B1[0x1f]; // 0x8b1(0x1f)

	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x2f0 (Inherited: 0x2c0)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x2b8(0x08)
	bool bCaptureRotation; // 0x2c0(0x01)
	struct UTextureRenderTargetCube* TextureTargetLeft; // 0x2c8(0x08)
	struct UTextureRenderTargetCube* TextureTargetRight; // 0x2d0(0x08)
	struct UTextureRenderTarget2D* TextureTargetODS; // 0x2d8(0x08)
	float IPD; // 0x2e0(0x04)
	char pad_2E5[0xb]; // 0x2e5(0x0b)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SceneCaptureCube
// Size: 0x268 (Inherited: 0x260)
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x260(0x08)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCaptureCube.OnInterpToggle // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SCS_Node
// Size: 0xe0 (Inherited: 0x30)
struct USCS_Node : UObject {
	struct UObject* ComponentClass; // 0x30(0x08)
	struct UActorComponent* ComponentTemplate; // 0x38(0x08)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x40(0x48)
	struct FName AttachToName; // 0x88(0x08)
	struct FName ParentComponentOrVariableName; // 0x90(0x08)
	struct FName ParentComponentOwnerClassName; // 0x98(0x08)
	bool bIsParentComponentNative; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct USCS_Node*> ChildNodes; // 0xa8(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xb8(0x10)
	struct FGuid VariableGuid; // 0xc8(0x10)
	struct FName InternalVariableName; // 0xd8(0x08)
};

// Class Engine.Selection
// Size: 0xa8 (Inherited: 0x30)
struct USelection : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class Engine.ServerStatReplicator
// Size: 0x318 (Inherited: 0x250)
struct AServerStatReplicator : AInfo {
	bool bUpdateStatNet; // 0x250(0x01)
	bool bOverwriteClientStats; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	uint32_t Channels; // 0x254(0x04)
	uint32_t InRate; // 0x258(0x04)
	uint32_t OutRate; // 0x25c(0x04)
	char pad_260[0x4]; // 0x260(0x04)
	uint32_t MaxPacketOverhead; // 0x264(0x04)
	uint32_t InRateClientMax; // 0x268(0x04)
	uint32_t InRateClientMin; // 0x26c(0x04)
	uint32_t InRateClientAvg; // 0x270(0x04)
	uint32_t InPacketsClientMax; // 0x274(0x04)
	uint32_t InPacketsClientMin; // 0x278(0x04)
	uint32_t InPacketsClientAvg; // 0x27c(0x04)
	uint32_t OutRateClientMax; // 0x280(0x04)
	uint32_t OutRateClientMin; // 0x284(0x04)
	uint32_t OutRateClientAvg; // 0x288(0x04)
	uint32_t OutPacketsClientMax; // 0x28c(0x04)
	uint32_t OutPacketsClientMin; // 0x290(0x04)
	uint32_t OutPacketsClientAvg; // 0x294(0x04)
	uint32_t NetNumClients; // 0x298(0x04)
	uint32_t InPackets; // 0x29c(0x04)
	uint32_t OutPackets; // 0x2a0(0x04)
	uint32_t InBunches; // 0x2a4(0x04)
	uint32_t OutBunches; // 0x2a8(0x04)
	uint32_t OutLoss; // 0x2ac(0x04)
	uint32_t InLoss; // 0x2b0(0x04)
	uint32_t VoiceBytesSent; // 0x2b4(0x04)
	uint32_t VoiceBytesRecv; // 0x2b8(0x04)
	uint32_t VoicePacketsSent; // 0x2bc(0x04)
	uint32_t VoicePacketsRecv; // 0x2c0(0x04)
	uint32_t PercentInVoice; // 0x2c4(0x04)
	uint32_t PercentOutVoice; // 0x2c8(0x04)
	uint32_t NumActorChannels; // 0x2cc(0x04)
	uint32_t NumConsideredActors; // 0x2d0(0x04)
	uint32_t PrioritizedActors; // 0x2d4(0x04)
	uint32_t NumRelevantActors; // 0x2d8(0x04)
	uint32_t NumRelevantDeletedActors; // 0x2dc(0x04)
	uint32_t NumReplicatedActorAttempts; // 0x2e0(0x04)
	uint32_t NumReplicatedActors; // 0x2e4(0x04)
	uint32_t NumActors; // 0x2e8(0x04)
	uint32_t NumNetActors; // 0x2ec(0x04)
	uint32_t NumDormantActors; // 0x2f0(0x04)
	uint32_t NumInitiallyDormantActors; // 0x2f4(0x04)
	uint32_t NumNetGUIDsAckd; // 0x2f8(0x04)
	uint32_t NumNetGUIDsPending; // 0x2fc(0x04)
	uint32_t NumNetGUIDsUnAckd; // 0x300(0x04)
	uint32_t ObjPathBytes; // 0x304(0x04)
	uint32_t NetGUIDOutRate; // 0x308(0x04)
	uint32_t NetGUIDInRate; // 0x30c(0x04)
	uint32_t NetSaturated; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
};

// Class Engine.ShadowMapTexture2D
// Size: 0xf8 (Inherited: 0xf0)
struct UShadowMapTexture2D : UTexture2D {
	enum class EShadowMapFlags ShadowmapFlags; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// Class Engine.SimpleConstructionScript
// Size: 0xa8 (Inherited: 0x30)
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> RootNodes; // 0x30(0x10)
	struct TArray<struct USCS_Node*> AllNodes; // 0x40(0x10)
	struct USCS_Node* DefaultSceneRootNode; // 0x50(0x08)
	char pad_58[0x50]; // 0x58(0x50)
};

// Class Engine.SkeletalMesh
// Size: 0x3b8 (Inherited: 0x48)
struct USkeletalMesh : UStreamableRenderAsset {
	char pad_48[0x20]; // 0x48(0x20)
	struct USkeleton* Skeleton; // 0x68(0x08)
	struct FBoxSphereBounds ImportedBounds; // 0x70(0x1c)
	struct FBoxSphereBounds ExtendedBounds; // 0x8c(0x1c)
	struct FVector PositiveBoundsExtension; // 0xa8(0x0c)
	struct FVector NegativeBoundsExtension; // 0xb4(0x0c)
	char pad_C0[0x20]; // 0xc0(0x20)
	struct TArray<struct FSkeletalMaterial> Materials; // 0xe0(0x10)
	struct TArray<struct FBoneMirrorInfo> SkelMirrorTable; // 0xf0(0x10)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0x100(0x10)
	char pad_110[0x50]; // 0x110(0x50)
	struct FPerPlatformInt MinLOD; // 0x160(0x04)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0x164(0x01)
	bool bServerUsesOnlyHighestIndexLOD; // 0x165(0x01)
	enum class EAxis SkelMirrorAxis; // 0x166(0x01)
	enum class EAxis SkelMirrorFlipAxis; // 0x167(0x01)
	char bUseFullPrecisionUVs : 1; // 0x168(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x168(0x01)
	char bExplicitCPUSkinning : 1; // 0x168(0x01)
	char bCPUAccessOnly : 1; // 0x168(0x01)
	char bHasBeenSimplified : 1; // 0x168(0x01)
	char bHasVertexColors : 1; // 0x168(0x01)
	char pad_168_6 : 1; // 0x168(0x01)
	char bEnablePerPolyCollision : 1; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct UBodySetup* BodySetup; // 0x170(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x178(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0x180(0x08)
	struct TArray<struct UNodeMappingContainer*> NodeMappingData; // 0x188(0x10)
	char bSupportRayTracing : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0x1a0(0x10)
	char pad_1B0[0x178]; // 0x1b0(0x178)
	struct UAnimInstance* PostProcessAnimBlueprint; // 0x328(0x08)
	struct TArray<struct UClothingAssetBase*> MeshClothingAssets; // 0x330(0x10)
	struct FSkeletalMeshSamplingInfo SamplingInfo; // 0x340(0x30)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x370(0x10)
	char pad_380[0x8]; // 0x380(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x388(0x10)
	char pad_398[0x10]; // 0x398(0x10)
	struct TArray<struct FSkinWeightProfileInfo> SkinWeightProfiles; // 0x3a8(0x10)

	void SetLODSettings(struct USkeletalMeshLODSettings* InLODSettings); // Function Engine.SkeletalMesh.SetLODSettings // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SkeletalMeshActor
// Size: 0x2d8 (Inherited: 0x250)
struct ASkeletalMeshActor : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	char bShouldDoAnimNotifies : 1; // 0x258(0x01)
	char bWakeOnLevelStart : 1; // 0x258(0x01)
	char pad_258_2 : 6; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x260(0x08)
	struct USkeletalMesh* ReplicatedMesh; // 0x268(0x08)
	struct UPhysicsAsset* ReplicatedPhysAsset; // 0x270(0x08)
	struct UMaterialInterface* ReplicatedMaterial0; // 0x278(0x08)
	struct UMaterialInterface* ReplicatedMaterial1; // 0x280(0x08)
	char pad_288[0x50]; // 0x288(0x50)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SkeletalMeshEditorData
// Size: 0x30 (Inherited: 0x30)
struct USkeletalMeshEditorData : UObject {
};

// Class Engine.SkeletalMeshLODSettings
// Size: 0x58 (Inherited: 0x38)
struct USkeletalMeshLODSettings : UDataAsset {
	struct FPerPlatformInt MinLOD; // 0x38(0x04)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0x3c(0x01)
	struct FPerPlatformBool bSupportLODStreaming; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FPerPlatformInt MaxNumStreamedLODs; // 0x40(0x04)
	struct FPerPlatformInt MaxNumOptionalLODs; // 0x44(0x04)
	struct TArray<struct FSkeletalMeshLODGroupSettings> LODGroups; // 0x48(0x10)
};

// Class Engine.SkeletalMeshSimplificationSettings
// Size: 0x48 (Inherited: 0x40)
struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	struct FName SkeletalMeshReductionModuleName; // 0x40(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x68 (Inherited: 0x30)
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FName BoneName; // 0x38(0x08)
	struct FVector RelativeLocation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale; // 0x58(0x0c)
	bool bForceAlwaysAnimated; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)

	void InitializeSocketFromLocation(struct USkeletalMeshComponent* SkelComp, struct FVector WorldLocation, struct FVector WorldNormal); // Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SkyAtmosphereComponent
// Size: 0x2f0 (Inherited: 0x220)
struct USkyAtmosphereComponent : USceneComponent {
	enum class ESkyAtmosphereTransformMode TransformMode; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float BottomRadius; // 0x224(0x04)
	struct FColor GroundAlbedo; // 0x228(0x04)
	float AtmosphereHeight; // 0x22c(0x04)
	float MultiScatteringFactor; // 0x230(0x04)
	float RayleighScatteringScale; // 0x234(0x04)
	struct FLinearColor RayleighScattering; // 0x238(0x10)
	float RayleighExponentialDistribution; // 0x248(0x04)
	float MieScatteringScale; // 0x24c(0x04)
	struct FLinearColor MieScattering; // 0x250(0x10)
	float MieAbsorptionScale; // 0x260(0x04)
	struct FLinearColor MieAbsorption; // 0x264(0x10)
	float MieAnisotropy; // 0x274(0x04)
	float MieExponentialDistribution; // 0x278(0x04)
	float OtherAbsorptionScale; // 0x27c(0x04)
	struct FLinearColor OtherAbsorption; // 0x280(0x10)
	struct FTentDistribution OtherTentDistribution; // 0x290(0x0c)
	struct FLinearColor SkyLuminanceFactor; // 0x29c(0x10)
	float AerialPespectiveViewDistanceScale; // 0x2ac(0x04)
	float HeightFogContribution; // 0x2b0(0x04)
	float TransmittanceMinLightElevationAngle; // 0x2b4(0x04)
	char pad_2B8[0x24]; // 0x2b8(0x24)
	struct FGuid bStaticLightingBuiltGUID; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void SetSkyLuminanceFactor(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetSkyLuminanceFactor // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SkyAtmosphere
// Size: 0x258 (Inherited: 0x250)
struct ASkyAtmosphere : AInfo {
	struct USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x250(0x08)
};

// Class Engine.SkyLightComponent
// Size: 0x420 (Inherited: 0x250)
struct USkyLightComponent : ULightComponentBase {
	enum class ESkyLightSourceType SourceType; // 0x250(0x01)
	char pad_251[0xf]; // 0x251(0x0f)
	float SourceCubemapAngle; // 0x260(0x04)
	int32_t CubemapResolution; // 0x264(0x04)
	float SkyDistanceThreshold; // 0x268(0x04)
	bool bCaptureEmissiveOnly; // 0x26c(0x01)
	bool bLowerHemisphereIsBlack; // 0x26d(0x01)
	char pad_26E[0x2]; // 0x26e(0x02)
	struct FLinearColor LowerHemisphereColor; // 0x270(0x10)
	float OcclusionMaxDistance; // 0x280(0x04)
	float Contrast; // 0x284(0x04)
	float OcclusionExponent; // 0x288(0x04)
	float MinOcclusion; // 0x28c(0x04)
	struct FColor OcclusionTint; // 0x290(0x04)
	enum class EOcclusionCombineMode OcclusionCombineMode; // 0x294(0x01)
	char pad_295[0xb3]; // 0x295(0xb3)
	struct UTextureCube* BlendDestinationCubemap; // 0x348(0x08)
	char pad_350[0xd0]; // 0x350(0xd0)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetVolumetricScatteringIntensity // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SlateBrushAsset
// Size: 0xc0 (Inherited: 0x30)
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; // 0x30(0x90)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x30 (Inherited: 0x30)
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SmokeTestCommandlet
// Size: 0x88 (Inherited: 0x88)
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.SoundAttenuation
// Size: 0x3d0 (Inherited: 0x30)
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation; // 0x30(0x3a0)
};

// Class Engine.SoundClass
// Size: 0xc0 (Inherited: 0x30)
struct USoundClass : UObject {
	struct FSoundClassProperties Properties; // 0x30(0x58)
	struct TArray<struct USoundClass*> ChildClasses; // 0x88(0x10)
	struct TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x98(0x10)
	struct FSoundModulation Modulation; // 0xa8(0x10)
	struct USoundClass* ParentClass; // 0xb8(0x08)
};

// Class Engine.SoundConcurrency
// Size: 0x50 (Inherited: 0x30)
struct USoundConcurrency : UObject {
	struct FSoundConcurrencySettings Concurrency; // 0x30(0x20)
};

// Class Engine.SoundCue
// Size: 0x540 (Inherited: 0x168)
struct USoundCue : USoundBase {
	char bPrimeOnLoad : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct USoundNode* FirstNode; // 0x170(0x08)
	float VolumeMultiplier; // 0x178(0x04)
	float PitchMultiplier; // 0x17c(0x04)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x180(0x3a0)
	float SubtitlePriority; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	char bOverrideAttenuation : 1; // 0x528(0x01)
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x528(0x01)
	char pad_528_2 : 6; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	int32_t CookedQualityIndex; // 0x52c(0x04)
	char bHasPlayWhenSilent : 1; // 0x530(0x01)
	char pad_530_1 : 7; // 0x530(0x01)
	char pad_531[0xf]; // 0x531(0x0f)
};

// Class Engine.SoundEffectSourcePresetChain
// Size: 0x48 (Inherited: 0x30)
struct USoundEffectSourcePresetChain : UObject {
	struct TArray<struct FSourceEffectChainEntry> Chain; // 0x30(0x10)
	char bPlayEffectChainTails : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.SoundGroups
// Size: 0x90 (Inherited: 0x30)
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class Engine.SoundMix
// Size: 0x98 (Inherited: 0x30)
struct USoundMix : UObject {
	char bApplyEQ : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float EQPriority; // 0x34(0x04)
	struct FAudioEQEffect EQSettings; // 0x38(0x40)
	struct TArray<struct FSoundClassAdjuster> SoundClassEffects; // 0x78(0x10)
	float InitialDelay; // 0x88(0x04)
	float FadeInTime; // 0x8c(0x04)
	float Duration; // 0x90(0x04)
	float FadeOutTime; // 0x94(0x04)
};

// Class Engine.SoundNode
// Size: 0x60 (Inherited: 0x30)
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x30(0x10)
	char pad_40[0x20]; // 0x40(0x20)
};

// Class Engine.SoundNodeAssetReferencer
// Size: 0x60 (Inherited: 0x60)
struct USoundNodeAssetReferencer : USoundNode {
};

// Class Engine.SoundNodeAttenuation
// Size: 0x410 (Inherited: 0x60)
struct USoundNodeAttenuation : USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x60(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x68(0x3a0)
	char bOverrideAttenuation : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x68 (Inherited: 0x60)
struct USoundNodeBranch : USoundNode {
	struct FName BoolParameterName; // 0x60(0x08)
};

// Class Engine.SoundNodeConcatenator
// Size: 0x70 (Inherited: 0x60)
struct USoundNodeConcatenator : USoundNode {
	struct TArray<float> InputVolume; // 0x60(0x10)
};

// Class Engine.SoundNodeDelay
// Size: 0x68 (Inherited: 0x60)
struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x60(0x04)
	float DelayMax; // 0x64(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x88 (Inherited: 0x60)
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x60(0x20)
	char bLooping : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.SoundNodeDistanceCrossFade
// Size: 0x70 (Inherited: 0x60)
struct USoundNodeDistanceCrossFade : USoundNode {
	struct TArray<struct FDistanceDatum> CrossFadeInput; // 0x60(0x10)
};

// Class Engine.SoundNodeDoppler
// Size: 0x70 (Inherited: 0x60)
struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x60(0x04)
	bool bUseSmoothing; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float SmoothingInterpSpeed; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.SoundNodeEnveloper
// Size: 0x1a8 (Inherited: 0x60)
struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x60(0x04)
	float LoopEnd; // 0x64(0x04)
	float DurationAfterLoop; // 0x68(0x04)
	int32_t LoopCount; // 0x6c(0x04)
	char bLoopIndefinitely : 1; // 0x70(0x01)
	char bLoop : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x78(0x08)
	struct UDistributionFloatConstantCurve* PitchInterpCurve; // 0x80(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x88(0x88)
	struct FRuntimeFloatCurve PitchCurve; // 0x110(0x88)
	float PitchMin; // 0x198(0x04)
	float PitchMax; // 0x19c(0x04)
	float VolumeMin; // 0x1a0(0x04)
	float VolumeMax; // 0x1a4(0x04)
};

// Class Engine.SoundNodeGroupControl
// Size: 0x70 (Inherited: 0x60)
struct USoundNodeGroupControl : USoundNode {
	struct TArray<int32_t> GroupSizes; // 0x60(0x10)
};

// Class Engine.SoundNodeLooping
// Size: 0x68 (Inherited: 0x60)
struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x60(0x04)
	char bLoopIndefinitely : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x60 (Inherited: 0x60)
struct USoundNodeMature : USoundNode {
};

// Class Engine.SoundNodeMixer
// Size: 0x70 (Inherited: 0x60)
struct USoundNodeMixer : USoundNode {
	struct TArray<float> InputVolume; // 0x60(0x10)
};

// Class Engine.SoundNodeModulator
// Size: 0x70 (Inherited: 0x60)
struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x60(0x04)
	float PitchMax; // 0x64(0x04)
	float VolumeMin; // 0x68(0x04)
	float VolumeMax; // 0x6c(0x04)
};

// Class Engine.SoundNodeModulatorContinuous
// Size: 0xa0 (Inherited: 0x60)
struct USoundNodeModulatorContinuous : USoundNode {
	struct FModulatorContinuousParams PitchModulationParams; // 0x60(0x20)
	struct FModulatorContinuousParams VolumeModulationParams; // 0x80(0x20)
};

// Class Engine.SoundNodeOscillator
// Size: 0x88 (Inherited: 0x60)
struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 1; // 0x60(0x01)
	char bModulatePitch : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float AmplitudeMin; // 0x64(0x04)
	float AmplitudeMax; // 0x68(0x04)
	float FrequencyMin; // 0x6c(0x04)
	float FrequencyMax; // 0x70(0x04)
	float OffsetMin; // 0x74(0x04)
	float OffsetMax; // 0x78(0x04)
	float CenterMin; // 0x7c(0x04)
	float CenterMax; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Engine.SoundNodeParamCrossFade
// Size: 0x78 (Inherited: 0x70)
struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	struct FName ParamName; // 0x70(0x08)
};

// Class Engine.SoundNodeQualityLevel
// Size: 0x60 (Inherited: 0x60)
struct USoundNodeQualityLevel : USoundNode {
};

// Class Engine.SoundNodeRandom
// Size: 0x90 (Inherited: 0x60)
struct USoundNodeRandom : USoundNode {
	struct TArray<float> Weights; // 0x60(0x10)
	struct TArray<bool> HasBeenUsed; // 0x70(0x10)
	int32_t NumRandomUsed; // 0x80(0x04)
	int32_t PreselectAtLevelLoad; // 0x84(0x04)
	char bShouldExcludeFromBranchCulling : 1; // 0x88(0x01)
	char bSoundCueExcludedFromBranchCulling : 1; // 0x88(0x01)
	char bRandomizeWithoutReplacement : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.SoundNodeSoundClass
// Size: 0x70 (Inherited: 0x60)
struct USoundNodeSoundClass : USoundNode {
	struct USoundClass* SoundClassOverride; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x68 (Inherited: 0x60)
struct USoundNodeSwitch : USoundNode {
	struct FName IntParameterName; // 0x60(0x08)
};

// Class Engine.SoundNodeWaveParam
// Size: 0x68 (Inherited: 0x60)
struct USoundNodeWaveParam : USoundNode {
	struct FName WaveParameterName; // 0x60(0x08)
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x98 (Inherited: 0x60)
struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	struct TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x60(0x28)
	struct USoundWave* SoundWave; // 0x88(0x08)
	char pad_90_0 : 1; // 0x90(0x01)
	char bLooping : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.SoundSourceBus
// Size: 0x330 (Inherited: 0x318)
struct USoundSourceBus : USoundWave {
	enum class ESourceBusChannels SourceBusChannels; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float SourceBusDuration; // 0x31c(0x04)
	char bAutoDeactivateWhenSilent : 1; // 0x320(0x01)
	char pad_320_1 : 7; // 0x320(0x01)
	char pad_321[0xf]; // 0x321(0x0f)
};

// Class Engine.SoundSubmixBase
// Size: 0x40 (Inherited: 0x30)
struct USoundSubmixBase : UObject {
	struct TArray<struct USoundSubmixBase*> ChildSubmixes; // 0x30(0x10)
};

// Class Engine.SoundSubmixWithParentBase
// Size: 0x48 (Inherited: 0x40)
struct USoundSubmixWithParentBase : USoundSubmixBase {
	struct USoundSubmixBase* ParentSubmix; // 0x40(0x08)
};

// Class Engine.SoundSubmix
// Size: 0x90 (Inherited: 0x48)
struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain; // 0x50(0x10)
	struct USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x60(0x08)
	int32_t EnvelopeFollowerAttackTime; // 0x68(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x6c(0x04)
	float OutputVolume; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)

	void StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundWave* ExistingSoundWaveToOverwrite); // Function Engine.SoundSubmix.StopRecordingOutput // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SoundfieldSubmix
// Size: 0x70 (Inherited: 0x48)
struct USoundfieldSubmix : USoundSubmixWithParentBase {
	struct FName SoundfieldEncodingFormat; // 0x48(0x08)
	struct USoundfieldEncodingSettingsBase* EncodingSettings; // 0x50(0x08)
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain; // 0x58(0x10)
	struct USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x68(0x08)
};

// Class Engine.EndpointSubmix
// Size: 0x58 (Inherited: 0x40)
struct UEndpointSubmix : USoundSubmixBase {
	struct FName EndpointType; // 0x40(0x08)
	struct UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x48(0x08)
	struct UAudioEndpointSettingsBase* EndpointSettings; // 0x50(0x08)
};

// Class Engine.SoundfieldEndpointSubmix
// Size: 0x78 (Inherited: 0x40)
struct USoundfieldEndpointSubmix : USoundSubmixBase {
	struct FName SoundfieldEndpointType; // 0x40(0x08)
	struct UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x48(0x08)
	struct USoundfieldEndpointSettingsBase* EndpointSettings; // 0x50(0x08)
	struct USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x58(0x08)
	struct USoundfieldEncodingSettingsBase* EncodingSettings; // 0x60(0x08)
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain; // 0x68(0x10)
};

// Class Engine.SphereReflectionCapture
// Size: 0x260 (Inherited: 0x258)
struct ASphereReflectionCapture : AReflectionCapture {
	struct UDrawSphereComponent* DrawCaptureRadius; // 0x258(0x08)
};

// Class Engine.SphereReflectionCaptureComponent
// Size: 0x2b0 (Inherited: 0x2a0)
struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x298(0x04)
	float CaptureDistanceScale; // 0x29c(0x04)
	struct UDrawSphereComponent* PreviewInfluenceRadius; // 0x2a0(0x08)
};

// Class Engine.SplineMetadata
// Size: 0x30 (Inherited: 0x30)
struct USplineMetadata : UObject {
};

// Class Engine.SplineComponent
// Size: 0x5a0 (Inherited: 0x4a0)
struct USplineComponent : UPrimitiveComponent {
	bool bShowSnapPointsToGround; // 0x4a0(0x01)
	bool bSnapPointsToGround; // 0x4a1(0x01)
	enum class ECollisionChannel SearchChannel; // 0x4a2(0x01)
	char pad_4A3[0x1]; // 0x4a3(0x01)
	float SearchUp; // 0x4a4(0x04)
	float SearchDown; // 0x4a8(0x04)
	float Offset; // 0x4ac(0x04)
	struct FSplineCurves SplineCurves; // 0x4b0(0x68)
	struct FInterpCurveVector SplineInfo; // 0x518(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0x530(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0x548(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0x560(0x18)
	bool bAllowSplineEditingPerInstance; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	int32_t ReparamStepsPerSegment; // 0x57c(0x04)
	float Duration; // 0x580(0x04)
	bool bStationaryEndpoints; // 0x584(0x01)
	bool bSplineHasBeenEdited; // 0x585(0x01)
	bool bModifiedByConstructionScript; // 0x586(0x01)
	enum class ESplinePointType ForcePointType; // 0x587(0x01)
	bool bForcePointType; // 0x588(0x01)
	bool bInputSplinePointsToConstructionScript; // 0x589(0x01)
	bool bDrawDebug; // 0x58a(0x01)
	bool bClosedLoop; // 0x58b(0x01)
	bool bLoopPositionOverride; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	float LoopPosition; // 0x590(0x04)
	struct FVector DefaultUpVector; // 0x594(0x0c)

	void UpdateSpline(); // Function Engine.SplineComponent.UpdateSpline // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SplineMeshActor
// Size: 0x258 (Inherited: 0x250)
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x250(0x08)
};

// Class Engine.SplineMeshComponent
// Size: 0x650 (Inherited: 0x5b0)
struct USplineMeshComponent : UStaticMeshComponent {
	char pad_5B0[0x8]; // 0x5b0(0x08)
	struct FSplineMeshParams SplineParams; // 0x5b8(0x58)
	struct FVector SplineUpDir; // 0x610(0x0c)
	float SplineBoundaryMin; // 0x61c(0x04)
	struct FGuid CachedMeshBodySetupGuid; // 0x620(0x10)
	struct UBodySetup* BodySetup; // 0x630(0x08)
	float SplineBoundaryMax; // 0x638(0x04)
	char bAllowSplineEditingPerInstance : 1; // 0x63c(0x01)
	char bSmoothInterpRollScale : 1; // 0x63c(0x01)
	char bMeshDirty : 1; // 0x63c(0x01)
	char pad_63C_3 : 5; // 0x63c(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x63d(0x01)
	char pad_63E[0x2]; // 0x63e(0x02)
	float VirtualTextureMainPassMaxDrawDistance; // 0x640(0x04)
	char pad_644[0xc]; // 0x644(0x0c)

	void UpdateMesh(); // Function Engine.SplineMeshComponent.UpdateMesh // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SpotLightComponent
// Size: 0x3a0 (Inherited: 0x390)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x388(0x04)
	float OuterConeAngle; // 0x38c(0x04)
	float LightShaftConeAngle; // 0x390(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLightComponent.SetOuterConeAngle // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SpringArmComponent
// Size: 0x350 (Inherited: 0x220)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x220(0x04)
	struct FVector SocketOffset; // 0x224(0x0c)
	struct FVector TargetOffset; // 0x230(0x0c)
	float ProbeSize; // 0x23c(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	char bDoCollisionTest : 1; // 0x244(0x01)
	char bUsePawnControlRotation : 1; // 0x244(0x01)
	char bInheritPitch : 1; // 0x244(0x01)
	char bInheritYaw : 1; // 0x244(0x01)
	char bInheritRoll : 1; // 0x244(0x01)
	char bEnableCameraLag : 1; // 0x244(0x01)
	char bEnableCameraRotationLag : 1; // 0x244(0x01)
	char bUseCameraLagSubstepping : 1; // 0x244(0x01)
	char bDrawDebugLagMarkers : 1; // 0x245(0x01)
	char pad_245_1 : 7; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	float CameraLagSpeed; // 0x248(0x04)
	float CameraRotationLagSpeed; // 0x24c(0x04)
	bool bCollisionTargetOffsetEnabled; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FVector CollisionTargetOffset; // 0x254(0x0c)
	struct FVector CollisionSocketOffset; // 0x260(0x0c)
	float CollisionTargetOffsetLagSpeed; // 0x26c(0x04)
	float CameraArmLengthLagSpeed; // 0x270(0x04)
	float CameraReplicationRotationInterpSpeed; // 0x274(0x04)
	float CameraLagMaxTimeStep; // 0x278(0x04)
	float CameraLagMaxDistance; // 0x27c(0x04)
	char pad_280[0xd0]; // 0x280(0xd0)

	bool IsCollisionFixApplied(); // Function Engine.SpringArmComponent.IsCollisionFixApplied // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StaticMesh
// Size: 0x180 (Inherited: 0x48)
struct UStaticMesh : UStreamableRenderAsset {
	char pad_48[0x20]; // 0x48(0x20)
	struct FPerPlatformInt MinLOD; // 0x68(0x04)
	float LpvBiasMultiplier; // 0x6c(0x04)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0x70(0x10)
	float LightmapUVDensity; // 0x80(0x04)
	int32_t LightMapResolution; // 0x84(0x04)
	int32_t LightMapCoordinateIndex; // 0x88(0x04)
	float DistanceFieldSelfShadowBias; // 0x8c(0x04)
	struct UBodySetup* BodySetup; // 0x90(0x08)
	int32_t LODForCollision; // 0x98(0x04)
	char bGenerateMeshDistanceField : 1; // 0x9c(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x9c(0x01)
	char bHasNavigationData : 1; // 0x9c(0x01)
	char bAffectsNavigationOverride : 1; // 0x9c(0x01)
	char pad_9C_4 : 4; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float MaxDrawDistance; // 0xa0(0x04)
	enum class EStaticMeshDetailMode DetailMode; // 0xa4(0x01)
	char bSupportUniformlyDistributedSampling : 1; // 0xa5(0x01)
	char bSupportPhysicalMaterialMasks : 1; // 0xa5(0x01)
	char bSupportRayTracing : 1; // 0xa5(0x01)
	char bIsBuiltAtRuntime : 1; // 0xa5(0x01)
	char pad_A5_4 : 4; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	struct FPrimitiveParameterCollectionOverrides CollectionOverrides; // 0xa8(0x30)
	char bHeuristicVolumetricLighting : 1; // 0xd8(0x01)
	char bOverride_LightmapType : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	enum class ELightmapType LightmapType; // 0xd9(0x01)
	char bHeuristicLightOccluder : 1; // 0xda(0x01)
	char bOverride_LightOccluder : 1; // 0xda(0x01)
	char bLightOccluder : 1; // 0xda(0x01)
	char bAffectsGroundFog : 1; // 0xda(0x01)
	char pad_DA_4 : 1; // 0xda(0x01)
	char bAllowCPUAccess : 1; // 0xda(0x01)
	char bSupportGpuUniformlyDistributedSampling : 1; // 0xda(0x01)
	char pad_DA_7 : 1; // 0xda(0x01)
	char pad_DB[0x25]; // 0xdb(0x25)
	struct TArray<struct UStaticMeshSocket*> Sockets; // 0x100(0x10)
	char pad_110[0x10]; // 0x110(0x10)
	struct FVector PositiveBoundsExtension; // 0x120(0x0c)
	struct FVector NegativeBoundsExtension; // 0x12c(0x0c)
	struct FBoxSphereBounds ExtendedBounds; // 0x138(0x1c)
	int32_t ElementToIgnoreForTexFactor; // 0x154(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
	struct UObject* EditableMesh; // 0x170(0x08)
	struct UNavCollisionBase* NavCollision; // 0x178(0x08)

	void RemoveSocket(struct UStaticMeshSocket* Socket); // Function Engine.StaticMesh.RemoveSocket // (None) // @ game+0xfffffffec0000000
};

// Class Engine.LodClipboardContent
// Size: 0x58 (Inherited: 0x30)
struct ULodClipboardContent : UObject {
	struct FRawLodInfo LODInfo; // 0x30(0x28)
};

// Class Engine.StaticMeshSocket
// Size: 0x70 (Inherited: 0x30)
struct UStaticMeshSocket : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Tag; // 0x60(0x10)
};

// Class Engine.StereoLayerComponent
// Size: 0x310 (Inherited: 0x220)
struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 1; // 0x220(0x01)
	char bSupportsDepth : 1; // 0x220(0x01)
	char bNoAlphaChannel : 1; // 0x220(0x01)
	char pad_220_3 : 5; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct UTexture* Texture; // 0x228(0x08)
	struct UTexture* LeftTexture; // 0x230(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	struct FVector2D QuadSize; // 0x23c(0x08)
	struct FBox2D UVRect; // 0x244(0x14)
	float CylinderRadius; // 0x258(0x04)
	float CylinderOverlayArc; // 0x25c(0x04)
	int32_t CylinderHeight; // 0x260(0x04)
	struct FEquirectProps EquirectProps; // 0x264(0x48)
	enum class EStereoLayerType StereoLayerType; // 0x2ac(0x01)
	enum class EStereoLayerShape StereoLayerShape; // 0x2ad(0x01)
	char pad_2AE[0x2]; // 0x2ae(0x02)
	struct UStereoLayerShape* Shape; // 0x2b0(0x08)
	int32_t Priority; // 0x2b8(0x04)
	char pad_2BC[0x54]; // 0x2bc(0x54)

	void SetUVRect(struct FBox2D InUVRect); // Function Engine.StereoLayerComponent.SetUVRect // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StereoLayerShape
// Size: 0x30 (Inherited: 0x30)
struct UStereoLayerShape : UObject {
};

// Class Engine.StereoLayerShapeQuad
// Size: 0x30 (Inherited: 0x30)
struct UStereoLayerShapeQuad : UStereoLayerShape {
};

// Class Engine.StereoLayerShapeCylinder
// Size: 0x40 (Inherited: 0x30)
struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x30(0x04)
	float OverlayArc; // 0x34(0x04)
	int32_t Height; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	void SetRadius(float InRadius); // Function Engine.StereoLayerShapeCylinder.SetRadius // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StereoLayerShapeCubemap
// Size: 0x30 (Inherited: 0x30)
struct UStereoLayerShapeCubemap : UStereoLayerShape {
};

// Class Engine.StereoLayerShapeEquirect
// Size: 0x78 (Inherited: 0x30)
struct UStereoLayerShapeEquirect : UStereoLayerShape {
	struct FBox2D LeftUVRect; // 0x30(0x14)
	struct FBox2D RightUVRect; // 0x44(0x14)
	struct FVector2D LeftScale; // 0x58(0x08)
	struct FVector2D RightScale; // 0x60(0x08)
	struct FVector2D LeftBias; // 0x68(0x08)
	struct FVector2D RightBias; // 0x70(0x08)

	void SetEquirectProps(struct FEquirectProps InScaleBiases); // Function Engine.StereoLayerShapeEquirect.SetEquirectProps // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StereoLayerFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UStereoLayerFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowSplashScreen(); // Function Engine.StereoLayerFunctionLibrary.ShowSplashScreen // (None) // @ game+0xfffffffec0000000
};

// Class Engine.StringTable
// Size: 0x48 (Inherited: 0x30)
struct UStringTable : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0xc0 (Inherited: 0x30)
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x30(0x8c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.SubsystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct USubsystemBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UWorldSubsystem* GetWorldSubsystem(struct UObject* ContextObject, struct UWorldSubsystem* Class); // Function Engine.SubsystemBlueprintLibrary.GetWorldSubsystem // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SubUVAnimation
// Size: 0x70 (Inherited: 0x30)
struct USubUVAnimation : UObject {
	struct UTexture2D* SubUVTexture; // 0x30(0x08)
	int32_t SubImages_Horizontal; // 0x38(0x04)
	int32_t SubImages_Vertical; // 0x3c(0x04)
	enum class ESubUVBoundingVertexCount BoundingMode; // 0x40(0x01)
	enum class EOpacitySourceMode OpacitySourceMode; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float AlphaThreshold; // 0x44(0x04)
	char pad_48[0x28]; // 0x48(0x28)
};

// Class Engine.TimecodeProvider
// Size: 0x38 (Inherited: 0x30)
struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	struct FTimecode GetTimecode(); // Function Engine.TimecodeProvider.GetTimecode // (None) // @ game+0xfffffffec0000000
};

// Class Engine.SystemTimeTimecodeProvider
// Size: 0x48 (Inherited: 0x38)
struct USystemTimeTimecodeProvider : UTimecodeProvider {
	struct FFrameRate FrameRate; // 0x38(0x08)
	bool bGenerateFullFrame; // 0x40(0x01)
	bool bUseHighPerformanceClock; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class Engine.TextPropertyTestObject
// Size: 0x78 (Inherited: 0x30)
struct UTextPropertyTestObject : UObject {
	struct FText DefaultedText; // 0x30(0x18)
	struct FText UndefaultedText; // 0x48(0x18)
	struct FText TransientText; // 0x60(0x18)
};

// Class Engine.TextRenderActor
// Size: 0x258 (Inherited: 0x250)
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender; // 0x250(0x08)
};

// Class Engine.TextRenderComponent
// Size: 0x4f0 (Inherited: 0x4a0)
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x4a0(0x18)
	struct UMaterialInterface* TextMaterial; // 0x4b8(0x08)
	struct UFont* Font; // 0x4c0(0x08)
	enum class EHorizTextAligment HorizontalAlignment; // 0x4c8(0x01)
	enum class EVerticalTextAligment VerticalAlignment; // 0x4c9(0x01)
	char pad_4CA[0x2]; // 0x4ca(0x02)
	struct FColor TextRenderColor; // 0x4cc(0x04)
	float XScale; // 0x4d0(0x04)
	float YScale; // 0x4d4(0x04)
	float WorldSize; // 0x4d8(0x04)
	float InvDefaultSize; // 0x4dc(0x04)
	float HorizSpacingAdjust; // 0x4e0(0x04)
	float VertSpacingAdjust; // 0x4e4(0x04)
	char bAlwaysRenderAsText : 1; // 0x4e8(0x01)
	char pad_4E8_1 : 7; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)

	void SetYScale(float Value); // Function Engine.TextRenderComponent.SetYScale // (None) // @ game+0xfffffffec0000000
};

// Class Engine.Texture2DArray
// Size: 0x118 (Inherited: 0xc0)
struct UTexture2DArray : UTexture {
	char pad_C0[0x58]; // 0xc0(0x58)
};

// Class Engine.Texture2DDynamic
// Size: 0xd8 (Inherited: 0xc0)
struct UTexture2DDynamic : UTexture {
	char pad_C0[0x8]; // 0xc0(0x08)
	enum class EPixelFormat Format; // 0xc8(0x01)
	char pad_C9[0xf]; // 0xc9(0x0f)
};

// Class Engine.TextureLightProfile
// Size: 0xf8 (Inherited: 0xf0)
struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0xf0(0x04)
	float TextureMultiplier; // 0xf4(0x04)
};

// Class Engine.TextureMipDataProviderFactory
// Size: 0x30 (Inherited: 0x30)
struct UTextureMipDataProviderFactory : UAssetUserData {
};

// Class Engine.TextureRenderTargetCube
// Size: 0xe0 (Inherited: 0xc8)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xc8(0x04)
	struct FLinearColor ClearColor; // 0xcc(0x10)
	enum class EPixelFormat OverrideFormat; // 0xdc(0x01)
	char bHDR : 1; // 0xdd(0x01)
	char bForceLinearGamma : 1; // 0xdd(0x01)
	char pad_DD_2 : 6; // 0xdd(0x01)
	char pad_DE[0x2]; // 0xde(0x02)
};

// Class Engine.ThumbnailInfo
// Size: 0x30 (Inherited: 0x30)
struct UThumbnailInfo : UObject {
};

// Class Engine.TimelineComponent
// Size: 0x178 (Inherited: 0xd8)
struct UTimelineComponent : UActorComponent {
	struct FTimeline TheTimeline; // 0xd8(0x98)
	char bIgnoreTimeDilation : 1; // 0x170(0x01)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)

	void Stop(); // Function Engine.TimelineComponent.Stop // (None) // @ game+0xfffffffec0000000
};

// Class Engine.TimelineTemplate
// Size: 0xb8 (Inherited: 0x30)
struct UTimelineTemplate : UObject {
	float TimelineLength; // 0x30(0x04)
	enum class ETimelineLengthMode LengthMode; // 0x34(0x01)
	char bAutoPlay : 1; // 0x35(0x01)
	char bLoop : 1; // 0x35(0x01)
	char bReplicated : 1; // 0x35(0x01)
	char bIgnoreTimeDilation : 1; // 0x35(0x01)
	char pad_35_4 : 4; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct TArray<struct FTTEventTrack> EventTracks; // 0x38(0x10)
	struct TArray<struct FTTFloatTrack> FloatTracks; // 0x48(0x10)
	struct TArray<struct FTTVectorTrack> VectorTracks; // 0x58(0x10)
	struct TArray<struct FTTLinearColorTrack> LinearColorTracks; // 0x68(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0x78(0x10)
	struct FGuid TimelineGuid; // 0x88(0x10)
	struct FName VariableName; // 0x98(0x08)
	struct FName DirectionPropertyName; // 0xa0(0x08)
	struct FName UpdateFunctionName; // 0xa8(0x08)
	struct FName FinishedFunctionName; // 0xb0(0x08)
};

// Class Engine.TireType
// Size: 0x40 (Inherited: 0x38)
struct UTireType : UDataAsset {
	float FrictionScale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.TouchInterface
// Size: 0x60 (Inherited: 0x30)
struct UTouchInterface : UObject {
	struct TArray<struct FTouchInputControl> Controls; // 0x30(0x10)
	float ActiveOpacity; // 0x40(0x04)
	float InactiveOpacity; // 0x44(0x04)
	float TimeUntilDeactive; // 0x48(0x04)
	float TimeUntilReset; // 0x4c(0x04)
	float ActivationDelay; // 0x50(0x04)
	bool bPreventRecenter; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float StartupDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.TriggerBase
// Size: 0x258 (Inherited: 0x250)
struct ATriggerBase : AActor {
	struct UShapeComponent* CollisionComponent; // 0x250(0x08)
};

// Class Engine.TriggerBox
// Size: 0x258 (Inherited: 0x258)
struct ATriggerBox : ATriggerBase {
};

// Class Engine.TriggerCapsule
// Size: 0x258 (Inherited: 0x258)
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
// Size: 0x258 (Inherited: 0x258)
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.TRSEngineSettings
// Size: 0x70 (Inherited: 0x40)
struct UTRSEngineSettings : UDeveloperSettings {
	bool bPrimitiveComponentDefaultToNoCollision; // 0x40(0x01)
	bool bPrimitiveComponentDefaultToGenerateOverlapEvents; // 0x41(0x01)
	bool bTextRenderComponentDefaultToEditorOnly; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	float AkComponentDefaultOcclusionRefreshInterval; // 0x44(0x04)
	float MaxOcclusionDistance; // 0x48(0x04)
	enum class ECollisionChannel AudioOcclusionChannel; // 0x4c(0x01)
	enum class EVisibilityBasedAnimTickOption SkinnedMeshComponentMeshUpdateFlag; // 0x4d(0x01)
	bool bEnableSkinnedMeshUpdateRateOptimizations; // 0x4e(0x01)
	bool bSkinnedMeshStopTickingWhenNoLongerAnimating; // 0x4f(0x01)
	bool bSkinnedMeshUpdateOverlapsOnAnimationFinalize; // 0x50(0x01)
	bool bSceneCaptureComponent_CaptureEveryFrame; // 0x51(0x01)
	bool bSceneCaptureComponent_CaptureOnMovement; // 0x52(0x01)
	bool bSceneCaptureActor_EditorOnly; // 0x53(0x01)
	int32_t ScreenMessageOffsetX; // 0x54(0x04)
	int32_t ScreenMessageOffsetY; // 0x58(0x04)
	float IndirectLightingSmoothness; // 0x5c(0x04)
	bool bCompileEditorWithBrofiler; // 0x60(0x01)
	bool bCompilePCGameWithBrofiler; // 0x61(0x01)
	bool bCompileAndroidGameWithBrofiler; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	int32_t BuildLightingSkipsBSP; // 0x64(0x04)
	bool bGameOverridesVisibilityId; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.TwitterIntegrationBase
// Size: 0x40 (Inherited: 0x40)
struct UTwitterIntegrationBase : UPlatformInterfaceBase {

	bool TwitterRequest(struct FString URL, struct TArray<struct FString> ParamKeysAndValues, enum class ETwitterRequestMethod RequestMethod, int32_t AccountIndex); // Function Engine.TwitterIntegrationBase.TwitterRequest // (None) // @ game+0xfffffffec0000000
};

// Class Engine.UserDefinedEnum
// Size: 0xb8 (Inherited: 0x68)
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> DisplayNameMap; // 0x68(0x50)
};

// Class Engine.UserDefinedStruct
// Size: 0x110 (Inherited: 0xc8)
struct UUserDefinedStruct : UScriptStruct {
	enum class EUserDefinedStructureStatus Status; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FGuid Guid; // 0xcc(0x10)
	char pad_DC[0x34]; // 0xdc(0x34)
};

// Class Engine.UserInterfaceSettings
// Size: 0x298 (Inherited: 0x40)
struct UUserInterfaceSettings : UDeveloperSettings {
	enum class ERenderFocusRule RenderFocusRule; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TMap<enum class EMouseCursor, struct FHardwareCursorReference> HardwareCursors; // 0x48(0x50)
	struct TMap<enum class EMouseCursor, struct FSoftClassPath> SoftwareCursors; // 0x98(0x50)
	struct FSoftClassPath DefaultCursor; // 0xe8(0x18)
	struct FSoftClassPath TextEditBeamCursor; // 0x100(0x18)
	struct FSoftClassPath CrosshairsCursor; // 0x118(0x18)
	struct FSoftClassPath HandCursor; // 0x130(0x18)
	struct FSoftClassPath GrabHandCursor; // 0x148(0x18)
	struct FSoftClassPath GrabHandClosedCursor; // 0x160(0x18)
	struct FSoftClassPath SlashedCircleCursor; // 0x178(0x18)
	float ApplicationScale; // 0x190(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	struct FSoftClassPath CustomScalingRuleClass; // 0x198(0x18)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x1b0(0x88)
	bool bAllowHighDPIInGameMode; // 0x238(0x01)
	bool bLoadWidgetsOnDedicatedServer; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct TSoftObjectPtr<UGlobalStyle> GlobalStyle; // 0x240(0x28)
	struct TArray<struct UObject*> CursorClasses; // 0x268(0x10)
	struct UObject* CustomScalingRuleClassInstance; // 0x278(0x08)
	struct UDPICustomScalingRule* CustomScalingRule; // 0x280(0x08)
	char pad_288[0x10]; // 0x288(0x10)
};

// Class Engine.VectorField
// Size: 0x50 (Inherited: 0x30)
struct UVectorField : UObject {
	struct FBox Bounds; // 0x30(0x1c)
	float Intensity; // 0x4c(0x04)
};

// Class Engine.VectorFieldAnimated
// Size: 0x90 (Inherited: 0x50)
struct UVectorFieldAnimated : UVectorField {
	struct UTexture2D* Texture; // 0x50(0x08)
	enum class EVectorFieldConstructionOp ConstructionOp; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t VolumeSizeX; // 0x5c(0x04)
	int32_t VolumeSizeY; // 0x60(0x04)
	int32_t VolumeSizeZ; // 0x64(0x04)
	int32_t SubImagesX; // 0x68(0x04)
	int32_t SubImagesY; // 0x6c(0x04)
	int32_t FrameCount; // 0x70(0x04)
	float FramesPerSecond; // 0x74(0x04)
	char bLoop : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UVectorFieldStatic* NoiseField; // 0x80(0x08)
	float NoiseScale; // 0x88(0x04)
	float NoiseMax; // 0x8c(0x04)
};

// Class Engine.VectorFieldComponent
// Size: 0x4e0 (Inherited: 0x4a0)
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x4a0(0x08)
	float Intensity; // 0x4a8(0x04)
	float Tightness; // 0x4ac(0x04)
	char bPreviewVectorField : 1; // 0x4b0(0x01)
	char pad_4B0_1 : 7; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	int32_t CreationPointCountX; // 0x4b4(0x04)
	int32_t CreationPointCountY; // 0x4b8(0x04)
	int32_t CreationPointCountZ; // 0x4bc(0x04)
	struct FVector CreationFlowVector; // 0x4c0(0x0c)
	float CreationMaxDistanceToCollider; // 0x4cc(0x04)
	char pad_4D0[0x10]; // 0x4d0(0x10)

	void SetIntensity(float NewIntensity); // Function Engine.VectorFieldComponent.SetIntensity // (None) // @ game+0xfffffffec0000000
};

// Class Engine.VectorFieldStatic
// Size: 0xa0 (Inherited: 0x50)
struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x50(0x04)
	int32_t SizeY; // 0x54(0x04)
	int32_t SizeZ; // 0x58(0x04)
	bool bAllowCPUAccess; // 0x5c(0x01)
	char pad_5D[0x33]; // 0x5d(0x33)
	struct TArray<struct FVector4> CPUData; // 0x90(0x10)
};

// Class Engine.VectorFieldVolume
// Size: 0x258 (Inherited: 0x250)
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent; // 0x250(0x08)
};

// Class Engine.VirtualTexture
// Size: 0x30 (Inherited: 0x30)
struct UVirtualTexture : UObject {
};

// Class Engine.LightMapVirtualTexture
// Size: 0x30 (Inherited: 0x30)
struct ULightMapVirtualTexture : UVirtualTexture {
};

// Class Engine.LightMapVirtualTexture2D
// Size: 0x100 (Inherited: 0xf0)
struct ULightMapVirtualTexture2D : UTexture2D {
	struct TArray<int8_t> TypeToLayer; // 0xf0(0x10)
};

// Class Engine.VirtualTexturePoolConfig
// Size: 0x48 (Inherited: 0x30)
struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FVirtualTextureSpacePoolConfig> Pools; // 0x38(0x10)
};

// Class Engine.VisualLoggerAutomationTests
// Size: 0x30 (Inherited: 0x30)
struct UVisualLoggerAutomationTests : UObject {
};

// Class Engine.VisualLoggerDebugSnapshotInterface
// Size: 0x30 (Inherited: 0x30)
struct UVisualLoggerDebugSnapshotInterface : UInterface {
};

// Class Engine.VisualLoggerKismetLibrary
// Size: 0x30 (Inherited: 0x30)
struct UVisualLoggerKismetLibrary : UBlueprintFunctionLibrary {

	void RedirectVislog(struct UObject* SourceOwner, struct UObject* DestinationOwner); // Function Engine.VisualLoggerKismetLibrary.RedirectVislog // (None) // @ game+0xfffffffec0000000
};

// Class Engine.VoiceChannel
// Size: 0x88 (Inherited: 0x78)
struct UVoiceChannel : UChannel {
	char pad_78[0x10]; // 0x78(0x10)
};

// Class Engine.VOIPTalker
// Size: 0x110 (Inherited: 0xd8)
struct UVOIPTalker : UActorComponent {
	struct FVoiceSettings Settings; // 0xd8(0x18)
	char pad_F0[0x20]; // 0xf0(0x20)

	void RegisterWithPlayerState(struct APlayerState* OwningState); // Function Engine.VOIPTalker.RegisterWithPlayerState // (None) // @ game+0xfffffffec0000000
};

// Class Engine.VOIPStatics
// Size: 0x30 (Inherited: 0x30)
struct UVOIPStatics : UBlueprintFunctionLibrary {

	void SetMicThreshold(float InThreshold); // Function Engine.VOIPStatics.SetMicThreshold // (None) // @ game+0xfffffffec0000000
};

// Class Engine.VolumeTexture
// Size: 0x120 (Inherited: 0xc0)
struct UVolumeTexture : UTexture {
	char pad_C0[0x58]; // 0xc0(0x58)
	char UAV : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class Engine.VolumetricLightmapDensityVolume
// Size: 0x290 (Inherited: 0x288)
struct AVolumetricLightmapDensityVolume : AVolume {
	struct FInt32Interval AllowedMipLevelRange; // 0x288(0x08)
};

// Class Engine.WindDirectionalSource
// Size: 0x258 (Inherited: 0x250)
struct AWindDirectionalSource : AInfo {
	struct UWindDirectionalSourceComponent* Component; // 0x250(0x08)
};

// Class Engine.WindDirectionalSourceComponent
// Size: 0x240 (Inherited: 0x220)
struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x220(0x04)
	float Speed; // 0x224(0x04)
	float MinGustAmount; // 0x228(0x04)
	float MaxGustAmount; // 0x22c(0x04)
	float Radius; // 0x230(0x04)
	char bPointWind : 1; // 0x234(0x01)
	char pad_234_1 : 7; // 0x234(0x01)
	char pad_235[0xb]; // 0x235(0x0b)

	void SetWindType(enum class EWindSourceType InNewType); // Function Engine.WindDirectionalSourceComponent.SetWindType // (None) // @ game+0xfffffffec0000000
};

// Class Engine.WorldComposition
// Size: 0x70 (Inherited: 0x30)
struct UWorldComposition : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct TArray<struct ULevelStreaming*> TilesStreaming; // 0x50(0x10)
	double TilesStreamingTimeThreshold; // 0x60(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x68(0x01)
	bool bRebaseOriginIn3DSpace; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float RebaseOriginDistance; // 0x6c(0x04)
};

// Class Engine.HierarchicalLODSetup
// Size: 0x68 (Inherited: 0x30)
struct UHierarchicalLODSetup : UObject {
	struct TArray<struct FHierarchicalSimplification> HierarchicalLODSetup; // 0x30(0x10)
	struct TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x40(0x28)
};

