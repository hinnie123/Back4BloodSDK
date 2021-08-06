// Enum AudioJostleSystem.EJostleShape
enum class EJostleShape : uint8 {
	Sphere = 0,
	Box = 1,
	EJostleShape_MAX = 2
};

// Enum AudioJostleSystem.EEmitterNodeState
enum class EEmitterNodeState : uint8 {
	Listening = 0,
	AnticipatingExplosion = 1,
	OnCoolDown = 2,
	EEmitterNodeState_MAX = 3
};

// Enum AudioJostleSystem.EJostleMode
enum class EJostleMode : uint8 {
	Shrub = 0,
	Bump = 1,
	Rattle = 2,
	EJostleMode_MAX = 3
};

// ScriptStruct AudioJostleSystem.RattleBehaviorContainer
// Size: 0x90 (Inherited: 0x00)
struct FRattleBehaviorContainer {
	struct FRattleEmitterInfo Behavior; // 0x00(0x40)
	struct TSet<struct TSoftObjectPtr<UStaticMesh>> RattleMeshes; // 0x40(0x50)
};

// ScriptStruct AudioJostleSystem.EmitterInfoBase
// Size: 0x20 (Inherited: 0x00)
struct FEmitterInfoBase {
	enum class EJostleShape OverlapShape; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float JostleSphereRadius; // 0x04(0x04)
	struct FVector JostleBoxExtent; // 0x08(0x0c)
	struct FVector Offset; // 0x14(0x0c)
};

// ScriptStruct AudioJostleSystem.BumpEmitterInfo
// Size: 0x30 (Inherited: 0x20)
struct FBumpEmitterInfo : FEmitterInfoBase {
	struct UAkAudioEvent* BumpEvent; // 0x20(0x08)
	float Probability; // 0x28(0x04)
	float SpeedThreshold; // 0x2c(0x04)
};

// ScriptStruct AudioJostleSystem.RattleEmitterInfo
// Size: 0x40 (Inherited: 0x30)
struct FRattleEmitterInfo : FBumpEmitterInfo {
	struct UAkAudioEvent* RattleEvent; // 0x30(0x08)
	float CooldownDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AudioJostleSystem.BumpBehaviorContainer
// Size: 0x80 (Inherited: 0x00)
struct FBumpBehaviorContainer {
	struct FBumpEmitterInfo Behavior; // 0x00(0x30)
	struct TSet<struct TSoftObjectPtr<UStaticMesh>> BumpMeshes; // 0x30(0x50)
};

// ScriptStruct AudioJostleSystem.ShrubBehaviorContainer
// Size: 0x78 (Inherited: 0x00)
struct FShrubBehaviorContainer {
	struct FShrubEmitterInfo Behavior; // 0x00(0x28)
	struct TSet<struct TSoftObjectPtr<UStaticMesh>> ShrubMeshes; // 0x28(0x50)
};

// ScriptStruct AudioJostleSystem.ShrubEmitterInfo
// Size: 0x28 (Inherited: 0x20)
struct FShrubEmitterInfo : FEmitterInfoBase {
	struct UAkAudioEvent* ShrubEvent; // 0x20(0x08)
};

// ScriptStruct AudioJostleSystem.ExplosionJostler
// Size: 0x0c (Inherited: 0x00)
struct FExplosionJostler {
	bool bShouldExcitePlacedEmitters; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExcitationRadius; // 0x04(0x04)
	float SpeedOfPropagation; // 0x08(0x04)
};

