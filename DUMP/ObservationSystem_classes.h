// Class ObservationSystem.ObservableComponent
// Size: 0x530 (Inherited: 0x4a0)
struct UObservableComponent : UPrimitiveComponent {
	struct FColor ShapeColor; // 0x4a0(0x04)
	bool bDrawOnlyIfSelected; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	int32_t DebugDrawFlags; // 0x4a8(0x04)
	bool bDrawContinueRules; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct FMulticastInlineDelegate OnObservationStart; // 0x4b0(0x10)
	struct FMulticastInlineDelegate OnObservationEnd; // 0x4c0(0x10)
	bool bEnabled; // 0x4d0(0x01)
	bool UsesDifferentContinueRules; // 0x4d1(0x01)
	char pad_4D2[0x2]; // 0x4d2(0x02)
	struct FObservationRule ObservationStartRules; // 0x4d4(0x28)
	struct FObservationRule ObservationContinueRules; // 0x4fc(0x28)
	char pad_524[0xc]; // 0x524(0x0c)

	void SetEnabled(bool Enabled); // Function ObservationSystem.ObservableComponent.SetEnabled // (None) // @ game+0xfffffffec0000000
};

// Class ObservationSystem.ObservationSystem
// Size: 0x140 (Inherited: 0x30)
struct UObservationSystem : UObject {
	char pad_30[0x110]; // 0x30(0x110)
};

// Class ObservationSystem.ObservationSystemSettings
// Size: 0x40 (Inherited: 0x30)
struct UObservationSystemSettings : UObject {
	float ObserverUpdateTime; // 0x30(0x04)
	float ObservationUpdateTime; // 0x34(0x04)
	enum class ECollisionChannel DefaultLOSCollisionChannel; // 0x38(0x01)
	bool bTraceComplex; // 0x39(0x01)
	enum class EObservationTick Tick; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class ObservationSystem.ObserverComponent
// Size: 0x128 (Inherited: 0xd8)
struct UObserverComponent : UActorComponent {
	struct FMulticastInlineDelegate OnObservationStart; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnObservationEnd; // 0xe8(0x10)
	bool bEnabled; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct USceneComponent* ViewComponent; // 0x100(0x08)
	struct TArray<struct AActor*> LOSIgnoredActors; // 0x108(0x10)
	char pad_118[0x10]; // 0x118(0x10)

	void SetViewComponent(struct USceneComponent* InViewComponent); // Function ObservationSystem.ObserverComponent.SetViewComponent // (None) // @ game+0xfffffffec0000000
};

