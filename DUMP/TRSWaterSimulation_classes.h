// Class TRSWaterSimulation.WaterInteractableComponent
// Size: 0x510 (Inherited: 0x4d0)
struct UWaterInteractableComponent : UBoxComponent {
	enum class InjectionType Type; // 0x4c8(0x01)
	struct UTexture* Texture; // 0x4d0(0x08)
	struct FVector TextureRGBScale; // 0x4d8(0x0c)
	float TextureAlphaScale; // 0x4e4(0x04)
	enum class WaterForceChannelType Channel; // 0x4e8(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float IntensityCycleBaseline; // 0x4ec(0x04)
	float IntensityCycleDuration; // 0x4f0(0x04)
	float IntensityCycleAttack; // 0x4f4(0x04)
	float IntensityCycleDecay; // 0x4f8(0x04)
	float IntensityCycleSustain; // 0x4fc(0x04)
	float IntensityCycleSustainLevel; // 0x500(0x04)
	float IntensityCycleRelease; // 0x504(0x04)
	bool TileEverywhere; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
};

// Class TRSWaterSimulation.WaterSimulation
// Size: 0x158 (Inherited: 0x38)
struct UWaterSimulation : UDataAsset {
	struct FIntVector GridSize; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct UVolumeTexture* SimGrid; // 0x48(0x08)
	struct UVolumeTexture* SimGridT; // 0x50(0x08)
	struct UVolumeTexture* SimColorGrid; // 0x58(0x08)
	struct UVolumeTexture* SimColorGridT; // 0x60(0x08)
	struct FVector GridWorldSize; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
	struct UTexture2D* Ground; // 0x78(0x08)
	struct FVector GroundOrigin; // 0x80(0x0c)
	struct FVector2D GroundSize; // 0x8c(0x08)
	float GroundScale; // 0x94(0x04)
	struct UTexture2D* ForceTexture; // 0x98(0x08)
	float ForceTextureScale; // 0xa0(0x04)
	float Speed; // 0xa4(0x04)
	int32_t SimulationSteps; // 0xa8(0x04)
	float Viscosity; // 0xac(0x04)
	float WaterLineHeight; // 0xb0(0x04)
	float WaterLineAttenuation; // 0xb4(0x04)
	enum class WaterForceChannelType ForceResponseChannel; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FVector VolumeCenterLocation; // 0xbc(0x0c)
	struct FVector OldVolumeCenterLocation; // 0xc8(0x0c)
	struct FVector PlayerSurfaceLocation; // 0xd4(0x0c)
	struct FVector EffectiveGridWorldSize; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString LastName; // 0xf0(0x10)
	struct UTexture2D* CachedGround; // 0x100(0x08)
	float Time; // 0x108(0x04)
	char pad_10C[0x4c]; // 0x10c(0x4c)
};

// Class TRSWaterSimulation.WaterSimSubsys
// Size: 0x168 (Inherited: 0x38)
struct UWaterSimSubsys : UEngineSubsystem {
	char pad_38[0x130]; // 0x38(0x130)
};

// Class TRSWaterSimulation.WaterSurfaceComponent
// Size: 0x260 (Inherited: 0x220)
struct UWaterSurfaceComponent : USceneComponent {
	struct UTextureCube* CubemapOverride; // 0x220(0x08)
	struct UMaterialInstanceDynamic* WaterMID; // 0x228(0x08)
	bool SecondaryLayer; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UWaterSimulation* WaterSim; // 0x238(0x08)
	struct UMaterialInterface* Material; // 0x240(0x08)
	char pad_248[0x18]; // 0x248(0x18)

	void SetWaterSim(struct UWaterSimulation* Simulation); // Function TRSWaterSimulation.WaterSurfaceComponent.SetWaterSim // (None) // @ game+0xfffffffec0000000
};

