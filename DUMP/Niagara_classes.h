// Class Niagara.NiagaraDataInterface
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Niagara.MovieSceneNiagaraTrack
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0x98 (Inherited: 0x70)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0x70(0x28)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0x98 (Inherited: 0x98)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xf8 (Inherited: 0xe8)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xa0 (Inherited: 0x98)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x260 (Inherited: 0x250)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x250(0x08)
	char bDestroyOnSystemFinish : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraComponent
// Size: 0x650 (Inherited: 0x4a0)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x4a0(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x4b0(0x108)
	char bForceSolo : 1; // 0x5b8(0x01)
	char pad_5B8_1 : 7; // 0x5b8(0x01)
	char pad_5B9[0x2b]; // 0x5b9(0x2b)
	char bAutoDestroy : 1; // 0x5e4(0x01)
	char bRenderingEnabled : 1; // 0x5e4(0x01)
	char bAutoManageAttachment : 1; // 0x5e4(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x5e4(0x01)
	char pad_5E4_4 : 4; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	float MaxTimeBeforeForceUpdateTransform; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x5f0(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x600(0x08)
	struct FName AutoAttachSocketName; // 0x608(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x610(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x611(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x612(0x01)
	char pad_613[0x3d]; // 0x613(0x3d)

	void SetVariableVec4(struct FName InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraComponentPool
// Size: 0x88 (Inherited: 0x30)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x30(0x50)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
	int32_t Resolution; // 0x40(0x04)
	float ScopeInMilliseconds; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40(0x04)
	float MinimumFrequency; // 0x44(0x04)
	float MaximumFrequency; // 0x48(0x04)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x38(0x10)
	float LUTMinTime; // 0x48(0x04)
	float LUTMaxTime; // 0x4c(0x04)
	float LUTInvTimeRange; // 0x50(0x04)
	float LUTNumSamplesMinusOne; // 0x54(0x04)
	char bUseLUT : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x260 (Inherited: 0x60)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x60(0x80)
	struct FRichCurve GreenCurve; // 0xe0(0x80)
	struct FRichCurve BlueCurve; // 0x160(0x80)
	struct FRichCurve AlphaCurve; // 0x1e0(0x80)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xe0 (Inherited: 0x60)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x60(0x80)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData> Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x28)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xd8 (Inherited: 0x38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; // 0x38(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x88(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0xf8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8(0x04)
	int32_t NumCellsY; // 0xdc(0x04)
	int32_t NumCellsMaxAxis; // 0xe0(0x04)
	int32_t NumAttributes; // 0xe4(0x04)
	bool SetGridFromMaxAxis; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector2D WorldBBoxSize; // 0xec(0x08)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x148 (Inherited: 0xf8)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	char pad_F8[0x50]; // 0xf8(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0xf8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumVoxels; // 0xd8(0x0c)
	float VoxelSize; // 0xe4(0x04)
	bool SetGridFromVoxelSize; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector WorldBBoxSize; // 0xec(0x0c)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x100 (Inherited: 0xf8)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerVoxel; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface {
	struct FString EmitterName; // 0x38(0x10)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xc0 (Inherited: 0x38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x40(0x28)
	struct USkeletalMeshComponent* SourceComponent; // 0x68(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FName> SamplingRegions; // 0x78(0x10)
	int32_t WholeMeshLOD; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FName> FilteredBones; // 0x90(0x10)
	struct TArray<struct FName> FilteredSockets; // 0xa0(0x10)
	struct FName ExcludeBoneName; // 0xb0(0x08)
	char bExcludeBone : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	struct UStaticMesh* DefaultMesh; // 0x38(0x08)
	struct AActor* Source; // 0x40(0x08)
	struct UStaticMeshComponent* SourceComponent; // 0x48(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x160 (Inherited: 0x60)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x60(0x80)
	struct FRichCurve YCurve; // 0xe0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x260 (Inherited: 0x60)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x60(0x80)
	struct FRichCurve YCurve; // 0xe0(0x80)
	struct FRichCurve ZCurve; // 0x160(0x80)
	struct FRichCurve WCurve; // 0x1e0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1e0 (Inherited: 0x60)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x60(0x80)
	struct FRichCurve YCurve; // 0xe0(0x80)
	struct FRichCurve ZCurve; // 0x160(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x38(0x08)
	bool bTileX; // 0x40(0x01)
	bool bTileY; // 0x41(0x01)
	bool bTileZ; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEffectType
// Size: 0x108 (Inherited: 0x30)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x30(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x34(0x04)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58(0x10)
	char pad_68[0xa0]; // 0x68(0xa0)
};

// Class Niagara.NiagaraEmitter
// Size: 0x2b8 (Inherited: 0x30)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x30(0x01)
	bool bDeterminism; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t RandomSeed; // 0x34(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t PreAllocationCount; // 0x3c(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x40(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x68(0x28)
	struct FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // 0x90(0x28)
	struct FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // 0xb8(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FBox FixedBounds; // 0xe4(0x1c)
	int32_t MinDetailLevel; // 0x100(0x04)
	int32_t MaxDetailLevel; // 0x104(0x04)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0x108(0x14)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FNiagaraPlatformSet Platforms; // 0x120(0x20)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x140(0x10)
	char bInterpolatedSpawning : 1; // 0x150(0x01)
	char bFixedBounds : 1; // 0x150(0x01)
	char bUseMinDetailLevel : 1; // 0x150(0x01)
	char bUseMaxDetailLevel : 1; // 0x150(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x150(0x01)
	char bRequiresPersistentIDs : 1; // 0x150(0x01)
	char pad_150_6 : 2; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float MaxDeltaTimePerTick; // 0x154(0x04)
	uint32_t DefaultShaderStageIndex; // 0x158(0x04)
	uint32_t MaxUpdateIterations; // 0x15c(0x04)
	struct TSet<uint32_t> SpawnStages; // 0x160(0x50)
	char bSimulationStagesEnabled : 1; // 0x1b0(0x01)
	char bDeprecatedShaderStagesEnabled : 1; // 0x1b0(0x01)
	char bLimitDeltaTime : 1; // 0x1b0(0x01)
	char pad_1B0_3 : 5; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct FString UniqueEmitterName; // 0x1b8(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x1c8(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1d8(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x1e8(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x1f8(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x200(0x10)
	char pad_210[0xa8]; // 0x210(0xa8)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraRendererProperties
// Size: 0x58 (Inherited: 0x30)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	int32_t SortOrderHint; // 0x30(0x04)
	bool bIsEnabled; // 0x34(0x01)
	bool bMotionBlurEnabled; // 0x35(0x01)
	char pad_36[0x22]; // 0x36(0x22)
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x340 (Inherited: 0x58)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x58(0x01)
	char bAffectsTranslucency : 1; // 0x58(0x01)
	char bOverrideRenderingEnabled : 1; // 0x58(0x01)
	char pad_58_3 : 5; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float RadiusScale; // 0x5c(0x04)
	struct FVector ColorAdd; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x70(0x78)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0xe8(0x78)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x160(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1d8(0x78)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x250(0x78)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x2c8(0x78)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x730 (Inherited: 0x58)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct UStaticMesh* ParticleMesh; // 0x58(0x08)
	enum class ENiagaraSortMode SortMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	char bOverrideMaterials : 1; // 0x64(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x64(0x01)
	char pad_64_2 : 6; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x68(0x10)
	struct FVector2D SubImageSize; // 0x78(0x08)
	char bSubImageBlend : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	char bLockedAxisEnable : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FVector LockedAxis; // 0x8c(0x0c)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xa0(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x118(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x190(0x78)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x208(0x78)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x280(0x78)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2f8(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x370(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3e8(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x460(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4d8(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x550(0x78)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x5c8(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x640(0x78)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x6b8(0x78)
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0x100 (Inherited: 0x30)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x30(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x38(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x48(0xb8)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x60 (Inherited: 0x30)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x30(0x08)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x38(0x10)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48(0x08)
	struct FGuid CompileId; // 0x50(0x10)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x48 (Inherited: 0x30)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x30(0x10)
	struct UNiagaraSystem* System; // 0x40(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x250 (Inherited: 0x250)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x30(0x08)
	int32_t Count; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x48 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x40(0x04)
	int32_t Max; // 0x44(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x48 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; // 0x40(0x08)
	struct FVector2D Max; // 0x48(0x08)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x58 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; // 0x40(0x0c)
	struct FVector Max; // 0x4c(0x0c)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector4 Min; // 0x40(0x10)
	struct FVector4 Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x60 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; // 0x40(0x10)
	struct FLinearColor Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x2a0 (Inherited: 0x250)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x250(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x260(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x268(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x270(0x08)
	float SpacingX; // 0x278(0x04)
	float SpacingY; // 0x27c(0x04)
	int32_t NumX; // 0x280(0x04)
	int32_t NumY; // 0x284(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x288(0x10)
	char pad_298[0x8]; // 0x298(0x08)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x768 (Inherited: 0x58)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x58(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60(0x28)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float UV0TilingDistance; // 0x8c(0x04)
	struct FVector2D UV0Scale; // 0x90(0x08)
	struct FVector2D UV0Offset; // 0x98(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float UV1TilingDistance; // 0xa4(0x04)
	struct FVector2D UV1Scale; // 0xa8(0x08)
	struct FVector2D UV1Offset; // 0xb0(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xb8(0x01)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	float CurveTension; // 0xbc(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t TessellationFactor; // 0xc4(0x04)
	bool bUseConstantFactor; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float TessellationAngle; // 0xcc(0x04)
	bool bScreenSpaceTessellation; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xd8(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x150(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c8(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x240(0x78)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x2b8(0x78)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x330(0x78)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x3a8(0x78)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x420(0x78)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x498(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x510(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x588(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x600(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x678(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6f0(0x78)
};

// Class Niagara.NiagaraScript
// Size: 0x528 (Inherited: 0x30)
struct UNiagaraScript : UObject {
	enum class ENiagaraScriptUsage Usage; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t UsageIndex; // 0x34(0x04)
	struct FGuid UsageId; // 0x38(0x10)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x48(0xb8)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0x100(0xd8)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x1d8(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x1e8(0x48)
	char pad_230[0x1b0]; // 0x230(0x1b0)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x3e0(0x128)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x508(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x518(0x10)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (None) // @ game+0xfffffffec0000000
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x50 (Inherited: 0x30)
struct UNiagaraScriptSourceBase : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0xa0 (Inherited: 0x40)
struct UNiagaraSettings : UDeveloperSettings {
	struct TArray<struct FSoftObjectPath> AdditionalParameterTypes; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalPayloadTypes; // 0x50(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalParameterEnums; // 0x60(0x10)
	struct FSoftObjectPath DefaultEffectType; // 0x70(0x18)
	struct TArray<struct FText> QualityLevels; // 0x88(0x10)
	struct UNiagaraEffectType* DefaultEffectTypePtr; // 0x98(0x08)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x30(0x08)
	struct FName SimulationStageName; // 0x38(0x08)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x78 (Inherited: 0x40)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t Iterations; // 0x44(0x04)
	char bSpawnOnly : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50(0x28)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x8b8 (Inherited: 0x58)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x58(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60(0x28)
	enum class ENiagaraSpriteAlignment Alignment; // 0x88(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	struct FVector2D PivotInUVSpace; // 0x8c(0x08)
	enum class ENiagaraSortMode SortMode; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FVector2D SubImageSize; // 0x98(0x08)
	char bSubImageBlend : 1; // 0xa0(0x01)
	char bRemoveHMDRollInVR : 1; // 0xa0(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0xa0(0x01)
	char pad_A0_3 : 5; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float MinFacingCameraBlendDistance; // 0xa4(0x04)
	float MaxFacingCameraBlendDistance; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xb0(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x128(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1a0(0x78)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x218(0x78)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x290(0x78)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x308(0x78)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x380(0x78)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x3f8(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x470(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4e8(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x560(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5d8(0x78)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x650(0x78)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x6c8(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x740(0x78)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x7b8(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x830(0x78)
	char pad_8A8[0x10]; // 0x8a8(0x10)
};

// Class Niagara.NiagaraSystem
// Size: 0x480 (Inherited: 0x38)
struct UNiagaraSystem : UFXSystemAsset {
	char pad_38[0x1]; // 0x38(0x01)
	bool bDumpDebugSystemInfo; // 0x39(0x01)
	bool bDumpDebugEmitterInfo; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	char bFixedBounds : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UNiagaraEffectType* EffectType; // 0x40(0x08)
	bool bOverrideScalabilitySettings; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x50(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x60(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x70(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x80(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x90(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xb0(0x258)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x308(0x108)
	struct FBox FixedBounds; // 0x410(0x1c)
	bool bAutoDeactivate; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	float WarmupTime; // 0x430(0x04)
	int32_t WarmupTickCount; // 0x434(0x04)
	float WarmupTickDelta; // 0x438(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x440(0x10)
	char pad_450[0x30]; // 0x450(0x30)
};

