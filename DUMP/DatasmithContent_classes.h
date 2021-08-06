// Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithObjectTemplate : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class DatasmithContent.DatasmithActorTemplate
// Size: 0xd8 (Inherited: 0x38)
struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	struct TSet<struct FName> Layers; // 0x38(0x50)
	struct TSet<struct FName> Tags; // 0x88(0x50)
};

// Class DatasmithContent.DatasmithAdditionalData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithAdditionalData : UObject {
};

// Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x2a8 (Inherited: 0x250)
struct ADatasmithAreaLightActor : AActor {
	enum class EDatasmithAreaLightActorType LightType; // 0x250(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	struct FVector2D Dimensions; // 0x254(0x08)
	float Intensity; // 0x25c(0x04)
	enum class ELightUnits IntensityUnits; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct FLinearColor Color; // 0x264(0x10)
	float Temperature; // 0x274(0x04)
	struct UTextureLightProfile* IESTexture; // 0x278(0x08)
	bool bUseIESBrightness; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float IESBrightnessScale; // 0x284(0x04)
	struct FRotator Rotation; // 0x288(0x0c)
	float SourceRadius; // 0x294(0x04)
	float SourceLength; // 0x298(0x04)
	float AttenuationRadius; // 0x29c(0x04)
	float SpotlightInnerAngle; // 0x2a0(0x04)
	float SpotlightOuterAngle; // 0x2a4(0x04)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0xa8 (Inherited: 0x38)
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	enum class EDatasmithAreaLightActorType LightType; // 0x38(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector2D Dimensions; // 0x3c(0x08)
	struct FLinearColor Color; // 0x44(0x10)
	float Intensity; // 0x54(0x04)
	enum class ELightUnits IntensityUnits; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Temperature; // 0x5c(0x04)
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x60(0x28)
	bool bUseIESBrightness; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float IESBrightnessScale; // 0x8c(0x04)
	struct FRotator Rotation; // 0x90(0x0c)
	float SourceRadius; // 0x9c(0x04)
	float SourceLength; // 0xa0(0x04)
	float AttenuationRadius; // 0xa4(0x04)
};

// Class DatasmithContent.DatasmithAssetImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithAssetImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData {
};

// Class DatasmithContent.DatasmithSceneImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithSceneImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithCADImportSceneData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithMDLSceneImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x78 (Inherited: 0x30)
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	struct FString Generator; // 0x30(0x10)
	float Version; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Author; // 0x48(0x10)
	struct FString License; // 0x58(0x10)
	struct FString Source; // 0x68(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	struct FString SourceMeshName; // 0x30(0x10)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x50 (Inherited: 0x30)
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString TexturesDir; // 0x38(0x10)
	char IntermediateSerialization; // 0x48(0x01)
	bool bColorizeMaterials; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x98 (Inherited: 0x50)
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x50(0x01)
	bool bOptimizeDuplicatedNodes; // 0x51(0x01)
	bool bRemoveInvisibleNodes; // 0x52(0x01)
	bool bSimplifyNodeHierarchy; // 0x53(0x01)
	bool bImportVar; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FString VarPath; // 0x58(0x10)
	bool bImportPos; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString PosPath; // 0x70(0x10)
	bool bImportTml; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString TmlPath; // 0x88(0x10)
};

// Class DatasmithContent.DatasmithVREDAssetImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0xb0 (Inherited: 0x50)
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x50(0x01)
	bool bOptimizeDuplicatedNodes; // 0x51(0x01)
	bool bImportMats; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FString MatsPath; // 0x58(0x10)
	bool bImportVar; // 0x68(0x01)
	bool bCleanVar; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FString VarPath; // 0x70(0x10)
	bool bImportLightInfo; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString LightInfoPath; // 0x88(0x10)
	bool bImportClipInfo; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString ClipInfoPath; // 0xa0(0x10)
};

// Class DatasmithContent.DatasmithIFCSceneImportData
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	struct FString SourceGlobalId; // 0x30(0x10)
};

// Class DatasmithContent.DatasmithAssetUserData
// Size: 0x80 (Inherited: 0x30)
struct UDatasmithAssetUserData : UAssetUserData {
	struct TMap<struct FName, struct FString> MetaData; // 0x30(0x50)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x68 (Inherited: 0x38)
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x38(0x30)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0xa0 (Inherited: 0x38)
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x38(0x08)
	struct FDatasmithCameraLensSettingsTemplate LensSettings; // 0x40(0x04)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x44(0x08)
	float CurrentFocalLength; // 0x4c(0x04)
	float CurrentAperture; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x60(0x40)
};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey // (None) // @ game+0xfffffffec0000000
};

// Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithCustomActionBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x260 (Inherited: 0x250)
struct ADatasmithImportedSequencesActor : AActor {
	struct TArray<struct ULevelSequence*> ImportedSequences; // 0x250(0x10)

	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence // (None) // @ game+0xfffffffec0000000
};

// Class DatasmithContent.DatasmithOptionsBase
// Size: 0x30 (Inherited: 0x30)
struct UDatasmithOptionsBase : UObject {
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	struct FDatasmithTessellationOptions Options; // 0x30(0x10)
};

// Class DatasmithContent.DatasmithImportOptions
// Size: 0x80 (Inherited: 0x30)
struct UDatasmithImportOptions : UDatasmithOptionsBase {
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x30(0x01)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x31(0x01)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x32(0x01)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x33(0x01)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x34(0x01)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x35(0x01)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x36(0x01)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x37(0x01)
	char pad_38[0x4]; // 0x38(0x04)
	struct FDatasmithImportBaseOptions BaseOptions; // 0x3c(0x14)
	struct FDatasmithReimportOptions ReimportOptions; // 0x50(0x02)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString Filename; // 0x58(0x10)
	struct FString FilePath; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x48 (Inherited: 0x38)
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	struct UMaterialInterface* LandscapeMaterial; // 0x38(0x08)
	int32_t StaticLightingLOD; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x70 (Inherited: 0x38)
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	char CastShadows : 1; // 0x3c(0x01)
	char bUseTemperature : 1; // 0x3c(0x01)
	char bUseIESBrightness : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float Intensity; // 0x40(0x04)
	float Temperature; // 0x44(0x04)
	float IESBrightnessScale; // 0x48(0x04)
	struct FLinearColor LightColor; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UMaterialInterface* LightFunctionMaterial; // 0x60(0x08)
	struct UTextureLightProfile* IESTexture; // 0x68(0x08)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x1a0 (Inherited: 0x38)
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x38(0x28)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x60(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0xb0(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues; // 0x100(0x50)
	struct FDatasmithStaticParameterSetTemplate StaticParameters; // 0x150(0x50)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x48 (Inherited: 0x38)
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ELightUnits IntensityUnits; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float SourceRadius; // 0x3c(0x04)
	float SourceLength; // 0x40(0x04)
	float AttenuationRadius; // 0x44(0x04)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x90 (Inherited: 0x38)
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	char pad_38[0x8]; // 0x38(0x08)
	struct FDatasmithPostProcessSettingsTemplate Settings; // 0x40(0x40)
	char bEnabled : 1; // 0x80(0x01)
	char bUnbound : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0xf]; // 0x81(0x0f)
};

// Class DatasmithContent.DatasmithScene
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithScene : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class DatasmithContent.DatasmithSceneActor
// Size: 0x2a8 (Inherited: 0x250)
struct ADatasmithSceneActor : AActor {
	struct UDatasmithScene* Scene; // 0x250(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors; // 0x258(0x50)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0xf0 (Inherited: 0x38)
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform RelativeTransform; // 0x40(0x30)
	enum class EComponentMobility Mobility; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TSoftObjectPtr<USceneComponent> AttachParent; // 0x78(0x28)
	struct TSet<struct FName> Tags; // 0xa0(0x50)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x48 (Inherited: 0x38)
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ESkyLightSourceType SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t CubemapResolution; // 0x3c(0x04)
	struct UTextureCube* Cubemap; // 0x40(0x08)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x40 (Inherited: 0x38)
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x38(0x04)
	float OuterConeAngle; // 0x3c(0x04)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x50 (Inherited: 0x38)
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	struct UStaticMesh* StaticMesh; // 0x38(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x40(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0xb0 (Inherited: 0x38)
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x38(0x50)
	int32_t LightMapCoordinateIndex; // 0x88(0x04)
	int32_t LightMapResolution; // 0x8c(0x04)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x90(0x10)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; // 0xa0(0x10)
};

