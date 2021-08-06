// Class NavigationSystem.NavigationQueryFilter
// Size: 0x50 (Inherited: 0x30)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x30(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x40(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UNavLinkComponent : UPrimitiveComponent {
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x4a8(0x10)
	char pad_4B8[0x8]; // 0x4b8(0x08)
};

// Class NavigationSystem.NavigationData
// Size: 0x430 (Inherited: 0x250)
struct ANavigationData : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x258(0x08)
	struct FNavDataConfig NavDataConfig; // 0x260(0x78)
	char bEnableDrawing : 1; // 0x2d8(0x01)
	char bForceRebuildOnLoad : 1; // 0x2d8(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x2d8(0x01)
	char bCanBeMainNavData : 1; // 0x2d8(0x01)
	char bCanSpawnOnRebuild : 1; // 0x2d8(0x01)
	char bRebuildAtRuntime : 1; // 0x2d8(0x01)
	char pad_2D8_6 : 2; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	float ObservedPathsTickInterval; // 0x2e0(0x04)
	uint32_t DataVersion; // 0x2e4(0x04)
	char pad_2E8[0xe0]; // 0x2e8(0xe0)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x3c8(0x10)
	char pad_3D8[0x58]; // 0x3d8(0x58)
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x4e8 (Inherited: 0x430)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x430(0x01)
	char bDrawPolyEdges : 1; // 0x430(0x01)
	char bDrawFilledPolys : 1; // 0x430(0x01)
	char bDrawNavMeshEdges : 1; // 0x430(0x01)
	char bDrawTileBounds : 1; // 0x430(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x430(0x01)
	char bDrawTileLabels : 1; // 0x430(0x01)
	char bDrawPolygonLabels : 1; // 0x430(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x431(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x431(0x01)
	char bDrawNavLinks : 1; // 0x431(0x01)
	char bDrawFailedNavLinks : 1; // 0x431(0x01)
	char bDrawClusters : 1; // 0x431(0x01)
	char bDrawOctree : 1; // 0x431(0x01)
	char bDrawOctreeDetails : 1; // 0x431(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x431(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x432(0x01)
	char bDrawNavMesh : 1; // 0x432(0x01)
	char pad_432_2 : 6; // 0x432(0x01)
	char pad_433[0x1]; // 0x433(0x01)
	float DrawOffset; // 0x434(0x04)
	char bFixedTilePoolSize : 1; // 0x438(0x01)
	char pad_438_1 : 7; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	int32_t TilePoolSize; // 0x43c(0x04)
	float TileSizeUU; // 0x440(0x04)
	float CellSize; // 0x444(0x04)
	float CellHeight; // 0x448(0x04)
	float AgentRadius; // 0x44c(0x04)
	float AgentHeight; // 0x450(0x04)
	float AgentMaxHeight; // 0x454(0x04)
	float AgentMaxSlope; // 0x458(0x04)
	float AgentMaxStepHeight; // 0x45c(0x04)
	float MinRegionArea; // 0x460(0x04)
	float MergeRegionSize; // 0x464(0x04)
	float MaxSimplificationError; // 0x468(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x46c(0x04)
	int32_t TileNumberHardLimit; // 0x470(0x04)
	int32_t PolyRefTileBits; // 0x474(0x04)
	int32_t PolyRefNavPolyBits; // 0x478(0x04)
	int32_t PolyRefSaltBits; // 0x47c(0x04)
	struct FVector NavMeshOriginOffset; // 0x480(0x0c)
	float DefaultDrawDistance; // 0x48c(0x04)
	float DefaultMaxSearchNodes; // 0x490(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x494(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x498(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x499(0x01)
	char pad_49A[0x2]; // 0x49a(0x02)
	int32_t RegionChunkSplits; // 0x49c(0x04)
	int32_t LayerChunkSplits; // 0x4a0(0x04)
	char bSortNavigationAreasByCost : 1; // 0x4a4(0x01)
	char bPerformVoxelFiltering : 1; // 0x4a4(0x01)
	char bMarkLowHeightAreas : 1; // 0x4a4(0x01)
	char bFilterLowSpanSequences : 1; // 0x4a4(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x4a4(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x4a4(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x4a4(0x01)
	char bStoreEmptyTileLayers : 1; // 0x4a4(0x01)
	char bUseVirtualFilters : 1; // 0x4a5(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x4a5(0x01)
	char bUseVoxelCache : 1; // 0x4a5(0x01)
	char pad_4A5_3 : 5; // 0x4a5(0x01)
	char pad_4A6[0x2]; // 0x4a6(0x02)
	float TileSetUpdateInterval; // 0x4a8(0x04)
	float HeuristicScale; // 0x4ac(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x4b0(0x04)
	char pad_4B4[0x34]; // 0x4b4(0x34)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (None) // @ game+0xfffffffec0000000
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0x108 (Inherited: 0xd8)
struct UNavRelevantComponent : UActorComponent {
	char pad_D8[0x24]; // 0xd8(0x24)
	char bAttachToOwnersRoot : 1; // 0xfc(0x01)
	char pad_FC_1 : 7; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct UObject* CachedNavParent; // 0x100(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (None) // @ game+0xfffffffec0000000
};

// Class NavigationSystem.NavArea
// Size: 0x58 (Inherited: 0x38)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x38(0x04)
	float FixedAreaEnteringCost; // 0x3c(0x04)
	char pad_40[0x4]; // 0x40(0x04)
	float RandomCost; // 0x44(0x04)
	struct FColor DrawColor; // 0x48(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x4c(0x04)
	char bSupportsAgent0 : 1; // 0x50(0x01)
	char bSupportsAgent1 : 1; // 0x50(0x01)
	char bSupportsAgent2 : 1; // 0x50(0x01)
	char bSupportsAgent3 : 1; // 0x50(0x01)
	char bSupportsAgent4 : 1; // 0x50(0x01)
	char bSupportsAgent5 : 1; // 0x50(0x01)
	char bSupportsAgent6 : 1; // 0x50(0x01)
	char bSupportsAgent7 : 1; // 0x50(0x01)
	char bSupportsAgent8 : 1; // 0x51(0x01)
	char bSupportsAgent9 : 1; // 0x51(0x01)
	char bSupportsAgent10 : 1; // 0x51(0x01)
	char bSupportsAgent11 : 1; // 0x51(0x01)
	char bSupportsAgent12 : 1; // 0x51(0x01)
	char bSupportsAgent13 : 1; // 0x51(0x01)
	char bSupportsAgent14 : 1; // 0x51(0x01)
	char bSupportsAgent15 : 1; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.AbstractNavData
// Size: 0x430 (Inherited: 0x430)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x30 (Inherited: 0x30)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea_Default
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x58 (Inherited: 0x58)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x58 (Inherited: 0x58)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xd8 (Inherited: 0x58)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x58(0x08)
	struct UNavArea* Agent1Area; // 0x60(0x08)
	struct UNavArea* Agent2Area; // 0x68(0x08)
	struct UNavArea* Agent3Area; // 0x70(0x08)
	struct UNavArea* Agent4Area; // 0x78(0x08)
	struct UNavArea* Agent5Area; // 0x80(0x08)
	struct UNavArea* Agent6Area; // 0x88(0x08)
	struct UNavArea* Agent7Area; // 0x90(0x08)
	struct UNavArea* Agent8Area; // 0x98(0x08)
	struct UNavArea* Agent9Area; // 0xa0(0x08)
	struct UNavArea* Agent10Area; // 0xa8(0x08)
	struct UNavArea* Agent11Area; // 0xb0(0x08)
	struct UNavArea* Agent12Area; // 0xb8(0x08)
	struct UNavArea* Agent13Area; // 0xc0(0x08)
	struct UNavArea* Agent14Area; // 0xc8(0x08)
	struct UNavArea* Agent15Area; // 0xd0(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0xe0 (Inherited: 0x78)
struct UNavCollision : UNavCollisionBase {
	char pad_78[0x10]; // 0x78(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x88(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x98(0x10)
	struct UNavArea* AreaClass; // 0xa8(0x08)
	char bGatherConvexGeometry : 1; // 0xb0(0x01)
	char bCreateOnClient : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x2f]; // 0xb1(0x2f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x430 (Inherited: 0x430)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x250 (Inherited: 0x250)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x250 (Inherited: 0x220)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x220(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x238(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xd8(0x04)
	float TileRemovalRadius; // 0xdc(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x90 (Inherited: 0x30)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x3f]; // 0x51(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (None) // @ game+0xfffffffec0000000
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x30 (Inherited: 0x30)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x540 (Inherited: 0x30)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x30(0x08)
	struct ANavigationData* AbstractNavData; // 0x38(0x08)
	struct FName DefaultAgentName; // 0x40(0x08)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x48(0x28)
	char bAutoCreateNavigationData : 1; // 0x70(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x70(0x01)
	char bAllowClientSideNavigation : 1; // 0x70(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x70(0x01)
	char bTickWhilePaused : 1; // 0x70(0x01)
	char bSupportRebuilding : 1; // 0x70(0x01)
	char bInitialBuildingLocked : 1; // 0x70(0x01)
	char pad_70_7 : 1; // 0x70(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x71(0x01)
	char pad_71_1 : 7; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float ActiveTilesUpdateInterval; // 0x7c(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x80(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x98(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xa8(0x10)
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd8(0x10)
	char pad_E8[0xdc]; // 0xe8(0xdc)
	enum class FNavigationSystemRunMode OperationMode; // 0x1c4(0x01)
	char pad_1C5[0x357]; // 0x1c5(0x357)
	float DirtyAreasUpdateFreq; // 0x51c(0x04)
	char pad_520[0x20]; // 0x520(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (None) // @ game+0xfffffffec0000000
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x60 (Inherited: 0x58)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x58(0x01)
	char bCreateOnClient : 1; // 0x58(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x58(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x58(0x01)
	char pad_58_4 : 4; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x3a0 (Inherited: 0x250)
struct ANavigationTestingActor : AActor {
	char pad_250[0x10]; // 0x250(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x260(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x268(0x08)
	char bActAsNavigationInvoker : 1; // 0x270(0x01)
	char pad_270_1 : 7; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x278(0x30)
	struct FVector QueryingExtent; // 0x2a8(0x0c)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct ANavigationData* MyNavData; // 0x2b8(0x08)
	struct FVector ProjectedLocation; // 0x2c0(0x0c)
	char bProjectedLocationValid : 1; // 0x2cc(0x01)
	char bSearchStart : 1; // 0x2cc(0x01)
	char pad_2CC_2 : 6; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float CostLimitFactor; // 0x2d0(0x04)
	float MinimumCostLimit; // 0x2d4(0x04)
	char bBacktracking : 1; // 0x2d8(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x2d8(0x01)
	char bGatherDetailedInfo : 1; // 0x2d8(0x01)
	char bDrawDistanceToWall : 1; // 0x2d8(0x01)
	char bShowNodePool : 1; // 0x2d8(0x01)
	char bShowBestPath : 1; // 0x2d8(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x2d8(0x01)
	char bShouldBeVisibleInGame : 1; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct FVector2D TextCanvasOffset; // 0x2e0(0x08)
	char bPathExist : 1; // 0x2e8(0x01)
	char bPathIsPartial : 1; // 0x2e8(0x01)
	char bPathSearchOutOfNodes : 1; // 0x2e8(0x01)
	char pad_2E8_3 : 5; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float PathfindingTime; // 0x2ec(0x04)
	float PathCost; // 0x2f0(0x04)
	int32_t PathfindingSteps; // 0x2f4(0x04)
	bool bDoRaycast; // 0x2f8(0x01)
	bool bFindStartNode; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	struct FVector RaycastStart; // 0x2fc(0x0c)
	struct FVector AdjustedRaycastStart; // 0x308(0x0c)
	struct FVector RaycastEnd; // 0x314(0x0c)
	struct FString StartNavLabel; // 0x320(0x10)
	char bRaycastHit : 1; // 0x330(0x01)
	char pad_330_1 : 7; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float RaycastHitTime; // 0x334(0x04)
	struct FVector RaycastHitNormal; // 0x338(0x0c)
	struct FVector HitLocation; // 0x344(0x0c)
	char bIsRaycastEndInCorridor : 1; // 0x350(0x01)
	char pad_350_1 : 7; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t RaycastCorridorPolysCount; // 0x354(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x358(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x360(0x08)
	int32_t ShowStepIndex; // 0x368(0x04)
	float OffsetFromCornersDistance; // 0x36c(0x04)
	char pad_370[0x30]; // 0x370(0x30)
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1b8 (Inherited: 0x108)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_108[0x8]; // 0x108(0x08)
	uint32_t NavLinkUserId; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UNavArea* EnabledAreaClass; // 0x118(0x08)
	struct UNavArea* DisabledAreaClass; // 0x120(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x128(0x04)
	struct FVector LinkRelativeStart; // 0x12c(0x0c)
	struct FVector LinkRelativeEnd; // 0x138(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	char bLinkEnabled : 1; // 0x148(0x01)
	char bNotifyWhenEnabled : 1; // 0x148(0x01)
	char bNotifyWhenDisabled : 1; // 0x148(0x01)
	char bCreateBoxObstacle : 1; // 0x148(0x01)
	char pad_148_4 : 4; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FVector ObstacleOffset; // 0x14c(0x0c)
	struct FVector ObstacleExtent; // 0x158(0x0c)
	char pad_164[0x4]; // 0x164(0x04)
	struct UNavArea* ObstacleAreaClass; // 0x168(0x08)
	float BroadcastRadius; // 0x170(0x04)
	float BroadcastInterval; // 0x174(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x178(0x01)
	char pad_179[0x3f]; // 0x179(0x3f)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x4a0 (Inherited: 0x4a0)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x58 (Inherited: 0x58)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x290 (Inherited: 0x288)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x4b0 (Inherited: 0x4a0)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_4A0[0x10]; // 0x4a0(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x170 (Inherited: 0x108)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0x108(0x08)
	struct FVector FailsafeExtent; // 0x110(0x0c)
	char bIncludeAgentHeight : 1; // 0x11c(0x01)
	char pad_11C_1 : 7; // 0x11c(0x01)
	char pad_11D[0x53]; // 0x11d(0x53)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (None) // @ game+0xfffffffec0000000
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x298 (Inherited: 0x288)
struct ANavModifierVolume : AVolume {
	char pad_288[0x8]; // 0x288(0x08)
	struct UNavArea* AreaClass; // 0x290(0x08)
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x30 (Inherited: 0x30)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x260 (Inherited: 0x250)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x250(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x258(0x01)
	char bLoadOnClient : 1; // 0x259(0x01)
	char pad_259_1 : 7; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x4a0 (Inherited: 0x4a0)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x50 (Inherited: 0x50)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x48 (Inherited: 0x38)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_38[0x10]; // 0x38(0x10)
};

