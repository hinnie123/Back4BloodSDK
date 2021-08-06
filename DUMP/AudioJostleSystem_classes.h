// Class AudioJostleSystem.AudioJostleBehaviors
// Size: 0x60 (Inherited: 0x30)
struct UAudioJostleBehaviors : UObject {
	struct TArray<struct FShrubBehaviorContainer> ShrubBehaviors; // 0x30(0x10)
	struct TArray<struct FBumpBehaviorContainer> BumpBehaviors; // 0x40(0x10)
	struct TArray<struct FRattleBehaviorContainer> RattleBehaviors; // 0x50(0x10)
};

// Class AudioJostleSystem.AudioJostleComponent
// Size: 0x188 (Inherited: 0xd8)
struct UAudioJostleComponent : UActorComponent {
	enum class EJostleMode JostleType; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FShrubEmitterInfo ShrubBehavior; // 0xe0(0x28)
	struct FBumpEmitterInfo BumpBehavior; // 0x108(0x30)
	struct FRattleEmitterInfo RattleBehavior; // 0x138(0x40)
	bool bAutoEnable; // 0x178(0x01)
	bool bIsEnabled; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct UEmitterNodeBase* Node; // 0x180(0x08)

	void SetJostleEnabled(bool ShouldEnable); // Function AudioJostleSystem.AudioJostleComponent.SetJostleEnabled // (None) // @ game+0xfffffffec0000000
};

// Class AudioJostleSystem.AudioJostleProceduralBuilder
// Size: 0x268 (Inherited: 0x250)
struct AAudioJostleProceduralBuilder : AActor {
	char pad_250[0x8]; // 0x250(0x08)
	struct TArray<struct UEmitterNodeBase*> UnmappedEmitterInfo; // 0x258(0x10)
};

// Class AudioJostleSystem.AudioJostleSubsystem
// Size: 0xf0 (Inherited: 0x38)
struct UAudioJostleSubsystem : UWorldSubsystem {
	char pad_38[0xb8]; // 0x38(0xb8)

	void ExciteGridExplosion(struct FVector ExcitationLocation, float ExcitationRadius, float SpeedOfPropagation); // Function AudioJostleSystem.AudioJostleSubsystem.ExciteGridExplosion // (None) // @ game+0xfffffffec0000000
};

// Class AudioJostleSystem.AudioJostleSystemPluginSettings
// Size: 0x58 (Inherited: 0x40)
struct UAudioJostleSystemPluginSettings : UDeveloperSettings {
	struct UAudioJostleBehaviors* AudioJostleBehaviorsClass; // 0x40(0x08)
	float GridSize; // 0x48(0x04)
	float MaxExplosionQueryRange; // 0x4c(0x04)
	uint16_t MaxCollisionRequestsPerFrame; // 0x50(0x02)
	uint16_t MaxExplosionRequestsPerFrame; // 0x52(0x02)
	uint16_t MaxNumJostlesPerExplosion; // 0x54(0x02)
	char pad_56[0x2]; // 0x56(0x02)
};

// Class AudioJostleSystem.EmitterNodeBase
// Size: 0x70 (Inherited: 0x30)
struct UEmitterNodeBase : UObject {
	struct FVector Position; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform ReferenceActorTransform; // 0x40(0x30)
};

// Class AudioJostleSystem.ShrubEmitterNode
// Size: 0xa0 (Inherited: 0x70)
struct UShrubEmitterNode : UEmitterNodeBase {
	struct FShrubEmitterInfo ShrubInfo; // 0x70(0x28)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class AudioJostleSystem.BumpEmitterNode
// Size: 0xa0 (Inherited: 0x70)
struct UBumpEmitterNode : UEmitterNodeBase {
	struct FBumpEmitterInfo BumpInfo; // 0x70(0x30)
};

// Class AudioJostleSystem.RattleEmitterNode
// Size: 0xf0 (Inherited: 0xa0)
struct URattleEmitterNode : UBumpEmitterNode {
	struct FRattleEmitterInfo RattleEmitterInfo; // 0xa0(0x40)
	char pad_E0[0x10]; // 0xe0(0x10)
};

// Class AudioJostleSystem.PlaceableAudioJostle
// Size: 0x300 (Inherited: 0x250)
struct APlaceableAudioJostle : AActor {
	enum class EJostleMode JostleType; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FShrubEmitterInfo ShrubBehavior; // 0x258(0x28)
	struct FBumpEmitterInfo BumpBehavior; // 0x280(0x30)
	struct FRattleEmitterInfo RattleBehavior; // 0x2b0(0x40)
	bool bAutoEnable; // 0x2f0(0x01)
	bool bIsEnabled; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct UEmitterNodeBase* Node; // 0x2f8(0x08)

	void SetJostleEnabled(bool ShouldEnable); // Function AudioJostleSystem.PlaceableAudioJostle.SetJostleEnabled // (None) // @ game+0xfffffffec0000000
};

