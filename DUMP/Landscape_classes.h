// Class Landscape.ControlPointMeshActor
// Size: 0x258 (Inherited: 0x250)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x250(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x5c0 (Inherited: 0x5b0)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x5b0(0x04)
	char pad_5B4[0xc]; // 0x5b4(0x0c)
};

// Class Landscape.LandscapeProxy
// Size: 0x570 (Inherited: 0x250)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x250(0x08)
	struct FGuid LandscapeGuid; // 0x258(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x268(0x08)
	int32_t MaxLODLevel; // 0x270(0x04)
	float LODDistanceFactor; // 0x274(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x27c(0x04)
	float LOD0ScreenSize; // 0x280(0x04)
	float LOD0DistributionSetting; // 0x284(0x04)
	float LODDistributionSetting; // 0x288(0x04)
	float TessellationComponentScreenSize; // 0x28c(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x294(0x04)
	int32_t OccluderGeometryLOD; // 0x298(0x04)
	int32_t StaticLightingLOD; // 0x29c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x2a0(0x08)
	float StreamingDistanceMultiplier; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x2b0(0x08)
	char pad_2B8[0x20]; // 0x2b8(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2d8(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2e0(0x10)
	bool bMeshHoles; // 0x2f0(0x01)
	char MeshHolesMaxLod; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2f8(0x10)
	int32_t VirtualTextureNumLods; // 0x308(0x04)
	int32_t VirtualTextureLodBias; // 0x30c(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float NegativeZBoundsExtension; // 0x314(0x04)
	float PositiveZBoundsExtension; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x320(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x330(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x340(0x10)
	char pad_350[0x64]; // 0x350(0x64)
	bool bHasLandscapeGrass; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	float StaticLightingResolution; // 0x3b8(0x04)
	char bCastStaticShadow : 1; // 0x3bc(0x01)
	char bCastShadowAsTwoSided : 1; // 0x3bc(0x01)
	char bCastFarShadow : 1; // 0x3bc(0x01)
	char pad_3BC_3 : 5; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x3c0(0x01)
	char pad_3C0_1 : 7; // 0x3c0(0x01)
	struct FLightingChannels LightingChannels; // 0x3c1(0x01)
	char pad_3C2[0x2]; // 0x3c2(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3c4(0x01)
	char bRenderCustomDepth : 1; // 0x3c4(0x01)
	char pad_3C4_2 : 6; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	int32_t CustomDepthStencilValue; // 0x3c8(0x04)
	float LDMaxDrawDistance; // 0x3cc(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3d0(0x18)
	int32_t CollisionMipLevel; // 0x3e8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3ec(0x04)
	float CollisionThickness; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FBodyInstance BodyInstance; // 0x3f8(0x110)
	char bGenerateOverlapEvents : 1; // 0x508(0x01)
	char bAffectsGroundFog : 1; // 0x508(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x508(0x01)
	char pad_508_3 : 5; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	int32_t ComponentSizeQuads; // 0x50c(0x04)
	int32_t SubsectionSizeQuads; // 0x510(0x04)
	int32_t NumSubsections; // 0x514(0x04)
	char bUsedForNavigation : 1; // 0x518(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x518(0x01)
	char pad_518_2 : 6; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	bool bUseDynamicMaterialInstance; // 0x51c(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x51d(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x51e(0x01)
	bool bHasLayersContent; // 0x51f(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x520(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (None) // @ game+0xfffffffec0000000
};

// Class Landscape.Landscape
// Size: 0x570 (Inherited: 0x570)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x250 (Inherited: 0x250)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (None) // @ game+0xfffffffec0000000
};

// Class Landscape.LandscapeComponent
// Size: 0x690 (Inherited: 0x4a0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x4a0(0x04)
	int32_t SectionBaseY; // 0x4a4(0x04)
	int32_t ComponentSizeQuads; // 0x4a8(0x04)
	int32_t SubsectionSizeQuads; // 0x4ac(0x04)
	int32_t NumSubsections; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x4b8(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x4c0(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x4c8(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x4d8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x4e8(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x4f8(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x508(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x518(0x08)
	struct FVector4 WeightmapScaleBias; // 0x520(0x10)
	float WeightmapSubsectionOffset; // 0x530(0x04)
	char pad_534[0xc]; // 0x534(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x540(0x10)
	struct FBox CachedLocalBox; // 0x550(0x1c)
	LazyObjectProperty CollisionComponent; // 0x56c(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x588(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x590(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x5a0(0x10)
	struct FGuid MapBuildDataId; // 0x5b0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x5c0(0x10)
	int32_t CollisionMipLevel; // 0x5d0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x5d4(0x04)
	float NegativeZBoundsExtension; // 0x5d8(0x04)
	float PositiveZBoundsExtension; // 0x5dc(0x04)
	float StaticLightingResolution; // 0x5e0(0x04)
	int32_t ForcedLOD; // 0x5e4(0x04)
	int32_t LODBias; // 0x5e8(0x04)
	struct FGuid StateId; // 0x5ec(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x5fc(0x10)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x610(0x08)
	char MobileBlendableLayerMask; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x620(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x628(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x638(0x10)
	char pad_648[0x48]; // 0x648(0x48)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (None) // @ game+0xfffffffec0000000
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x250 (Inherited: 0x250)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x2a0 (Inherited: 0x250)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_250[0x50]; // 0x250(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x4a0 (Inherited: 0x4a0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x68 (Inherited: 0x30)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x30(0x10)
	char bEnableDensityScaling : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UStaticMesh* GrassMesh; // 0x48(0x08)
	float GrassDensity; // 0x50(0x04)
	float PlacementJitter; // 0x54(0x04)
	int32_t StartCullDistance; // 0x58(0x04)
	int32_t EndCullDistance; // 0x5c(0x04)
	bool RandomRotation; // 0x60(0x01)
	bool AlignToSurface; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x580 (Inherited: 0x4a0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x4a0(0x10)
	int32_t SectionBaseX; // 0x4b0(0x04)
	int32_t SectionBaseY; // 0x4b4(0x04)
	int32_t CollisionSizeQuads; // 0x4b8(0x04)
	float CollisionScale; // 0x4bc(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x4c8(0x10)
	struct FGuid HeightfieldGuid; // 0x4d8(0x10)
	struct FBox CachedLocalBox; // 0x4e8(0x1c)
	LazyObjectProperty RenderComponent; // 0x504(0x1c)
	char pad_520[0x10]; // 0x520(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x530(0x10)
	char pad_540[0x40]; // 0x540(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (None) // @ game+0xfffffffec0000000
};

// Class Landscape.LandscapeInfo
// Size: 0x218 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x30(0x1c)
	struct FGuid LandscapeGuid; // 0x4c(0x10)
	int32_t ComponentSizeQuads; // 0x5c(0x04)
	int32_t SubsectionSizeQuads; // 0x60(0x04)
	int32_t ComponentNumSubsections; // 0x64(0x04)
	struct FVector DrawScale; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<struct FIntPoint, struct ULandscapeComponent*> XYtoComponentMap; // 0x78(0x50)
	char pad_C8[0x50]; // 0xc8(0x50)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x118(0x10)
	char pad_128[0xf0]; // 0x128(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x88 (Inherited: 0x30)
struct ULandscapeInfoMap : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x58 (Inherited: 0x30)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x38(0x08)
	float Hardness; // 0x40(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x430 (Inherited: 0x418)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x418(0x10)
	char bIsLayerThumbnail : 1; // 0x428(0x01)
	char bDisableTessellation : 1; // 0x428(0x01)
	char bMobile : 1; // 0x428(0x01)
	char bEditorToolUsage : 1; // 0x428(0x01)
	char pad_428_4 : 4; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x5a0 (Inherited: 0x580)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x580(0x10)
	char pad_590[0x10]; // 0x590(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x258 (Inherited: 0x250)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x250(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x5e0 (Inherited: 0x5b0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x5b0(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x5c0(0x10)
	int8_t ProxyLOD; // 0x5d0(0x01)
	char pad_5D1[0xf]; // 0x5d1(0x0f)
};

// Class Landscape.LandscapeSettings
// Size: 0x48 (Inherited: 0x40)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x4d0 (Inherited: 0x4a0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x4a0(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x4b0(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x4c0(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (None) // @ game+0xfffffffec0000000
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float LayerWidthRatio; // 0x4c(0x04)
	float SideFalloff; // 0x50(0x04)
	float LeftSideFalloffFactor; // 0x54(0x04)
	float RightSideFalloffFactor; // 0x58(0x04)
	float LeftSideLayerFalloffFactor; // 0x5c(0x04)
	float RightSideLayerFalloffFactor; // 0x60(0x04)
	float EndFalloff; // 0x64(0x04)
	char bAllowCullDistanceVolume : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x70(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x80(0x10)
	struct FBox Bounds; // 0x90(0x1c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xb0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xc0 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30(0x30)
	char bAllowCullDistanceVolume : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FInterpCurveVector SplineInfo; // 0x68(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x80(0x10)
	struct FBox Bounds; // 0x90(0x1c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xb0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x590 (Inherited: 0x570)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x570(0x1c)
	char pad_58C[0x4]; // 0x58c(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0xa0 (Inherited: 0x38)
struct ULandscapeSubsystem : UWorldSubsystem {
	char pad_38[0x68]; // 0x38(0x68)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x60 (Inherited: 0x30)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x30(0x20)
	struct FGuid LayerGuid; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x48(0x10)
	struct FGuid ExpressionGUID; // 0x58(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x60 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x48(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float MappingScale; // 0x4c(0x04)
	float MappingRotation; // 0x50(0x04)
	float MappingPanU; // 0x54(0x04)
	float MappingPanV; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x68 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x48(0x08)
	float PreviewWeight; // 0x50(0x04)
	struct FGuid ExpressionGUID; // 0x54(0x10)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x90 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput LayerNotUsed; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FName ParameterName; // 0x70(0x08)
	char PreviewUsed : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FGuid ExpressionGUID; // 0x7c(0x10)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x98 (Inherited: 0x48)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Layer; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FName ParameterName; // 0x70(0x08)
	float PreviewWeight; // 0x78(0x04)
	struct FVector ConstBase; // 0x7c(0x0c)
	struct FGuid ExpressionGUID; // 0x88(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x58 (Inherited: 0x48)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x48(0x10)
};

