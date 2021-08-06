// Class TweenMaker.BaseTween
// Size: 0xb0 (Inherited: 0x30)
struct UBaseTween : UObject {
	char pad_30[0x40]; // 0x30(0x40)
	struct UTweenContainer* mOwningTweenContainer; // 0x70(0x08)
	char pad_78[0x38]; // 0x78(0x38)

	void TogglePauseTween(bool SkipTween); // Function TweenMaker.BaseTween.TogglePauseTween // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenContainer
// Size: 0x90 (Inherited: 0x30)
struct UTweenContainer : UObject {
	struct UTweenManagerComponent* OwningTweenManager; // 0x30(0x08)
	struct FMulticastInlineDelegate OnTweenContainerEnd; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	struct TArray<struct FParallelTween> mSequences; // 0x58(0x10)
	char pad_68[0x28]; // 0x68(0x28)

	void TogglePauseTweenContainer(); // Function TweenMaker.TweenContainer.TogglePauseTweenContainer // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenFloat
// Size: 0x220 (Inherited: 0xb0)
struct UTweenFloat : UBaseTween {
	struct FMulticastInlineDelegate OnTweenStart; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnTweenActorHit; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnTweenActorBeginOverlap; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnTweenPrimitiveComponentHit; // 0x100(0x10)
	struct FMulticastInlineDelegate OnTweenPrimitiveComponentBeginOverlap; // 0x110(0x10)
	struct FMulticastInlineDelegate OnTweenSplinePointReached; // 0x120(0x10)
	char pad_130[0xf0]; // 0x130(0xf0)

	void OnPrimitiveComponentHit(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, struct FVector pNormalImpulse, struct FHitResult pHitResult); // Function TweenMaker.TweenFloat.OnPrimitiveComponentHit // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenFloatLatentFactory
// Size: 0x68 (Inherited: 0x38)
struct UTweenFloatLatentFactory : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnTweenStart; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0x58(0x10)

	struct UTweenFloatLatentFactory* BP_JoinLatentTweenWidgetOpacityTo(struct UTweenContainer* TweenContainer, struct UTweenFloat* OutTween, struct UWidget* TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused); // Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetOpacityTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenFloatStandardFactory
// Size: 0x30 (Inherited: 0x30)
struct UTweenFloatStandardFactory : UObject {

	struct UTweenFloat* BP_JoinTweenWidgetOpacityTo(struct UTweenContainer* TweenContainer, struct UWidget* TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32_t SequenceIndex); // Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetOpacityTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenLinearColor
// Size: 0x180 (Inherited: 0xb0)
struct UTweenLinearColor : UBaseTween {
	struct FMulticastInlineDelegate OnTweenStart; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0xd0(0x10)
	char pad_E0[0xa0]; // 0xe0(0xa0)

	struct FLinearColor GetCurrentValue(); // Function TweenMaker.TweenLinearColor.GetCurrentValue // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenLinearColorLatentFactory
// Size: 0x68 (Inherited: 0x38)
struct UTweenLinearColorLatentFactory : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnTweenStart; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0x58(0x10)

	struct UTweenLinearColorLatentFactory* BP_JoinLatentTweenMaterialVectorTo(struct UTweenContainer* TweenContainer, struct UTweenLinearColor* OutTween, struct UMaterialInstanceDynamic* TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused); // Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenLinearColorStandardFactory
// Size: 0x30 (Inherited: 0x30)
struct UTweenLinearColorStandardFactory : UObject {

	struct UTweenLinearColor* BP_JoinTweenMaterialVectorTo(struct UTweenContainer* TweenContainer, struct UMaterialInstanceDynamic* TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32_t SequenceIndex); // Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenManagerActor
// Size: 0x250 (Inherited: 0x250)
struct ATweenManagerActor : AActor {

	bool IsObjectTweening(struct UObject* TweenTarget, enum class ETweenGenericType TweensType, struct UBaseTween* TweenFound); // Function TweenMaker.TweenManagerActor.IsObjectTweening // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenManagerComponent
// Size: 0x188 (Inherited: 0xd8)
struct UTweenManagerComponent : UActorComponent {
	struct TArray<struct UTweenContainer*> mTweenContainers; // 0xd8(0x10)
	char pad_E8[0xa0]; // 0xe8(0xa0)

	void UpdateNameMap(struct UBaseTween* pTween, struct FName pPreviousName, struct FName pNewName); // Function TweenMaker.TweenManagerComponent.UpdateNameMap // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenRotator
// Size: 0x210 (Inherited: 0xb0)
struct UTweenRotator : UBaseTween {
	struct FMulticastInlineDelegate OnTweenStart; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnTweenActorHit; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnTweenActorBeginOverlap; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnTweenPrimitiveComponentHit; // 0x100(0x10)
	struct FMulticastInlineDelegate OnTweenPrimitiveComponentBeginOverlap; // 0x110(0x10)
	char pad_120[0xf0]; // 0x120(0xf0)

	void OnPrimitiveComponentHit(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, struct FVector pNormalImpulse, struct FHitResult pHitResult); // Function TweenMaker.TweenRotator.OnPrimitiveComponentHit // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenRotatorLatentFactory
// Size: 0x68 (Inherited: 0x38)
struct UTweenRotatorLatentFactory : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnTweenStart; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0x58(0x10)

	struct UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateSceneComponentTo(struct UTweenContainer* TweenContainer, struct UTweenRotator* OutTween, struct USceneComponent* TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused); // Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenRotatorStandardFactory
// Size: 0x30 (Inherited: 0x30)
struct UTweenRotatorStandardFactory : UObject {

	struct UTweenRotator* BP_JoinTweenRotateSceneComponentTo(struct UTweenContainer* TweenContainer, struct USceneComponent* TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32_t SequenceIndex); // Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenVector
// Size: 0x1d8 (Inherited: 0xb0)
struct UTweenVector : UBaseTween {
	struct FMulticastInlineDelegate OnTweenStart; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnTweenActorHit; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnTweenActorBeginOverlap; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnTweenPrimitiveComponentHit; // 0x100(0x10)
	struct FMulticastInlineDelegate OnTweenPrimitiveComponentBeginOverlap; // 0x110(0x10)
	char pad_120[0xb8]; // 0x120(0xb8)

	void OnPrimitiveComponentHit(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, struct FVector pNormalImpulse, struct FHitResult pHitResult); // Function TweenMaker.TweenVector.OnPrimitiveComponentHit // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenVector2D
// Size: 0x140 (Inherited: 0xb0)
struct UTweenVector2D : UBaseTween {
	struct FMulticastInlineDelegate OnTweenStart; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0xd0(0x10)
	char pad_E0[0x60]; // 0xe0(0x60)

	struct FVector2D GetCurrentValue(); // Function TweenMaker.TweenVector2D.GetCurrentValue // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenVector2DLatentFactory
// Size: 0x68 (Inherited: 0x38)
struct UTweenVector2DLatentFactory : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnTweenStart; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0x58(0x10)

	struct UTweenVector2DLatentFactory* BP_JoinLatentTweenShearWidgetTo(struct UTweenContainer* TweenContainer, struct UTweenVector2D* OutTween, struct UWidget* TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused); // Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenShearWidgetTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenVector2DStandardFactory
// Size: 0x30 (Inherited: 0x30)
struct UTweenVector2DStandardFactory : UObject {

	struct UTweenVector2D* BP_JoinTweenShearWidgetTo(struct UTweenContainer* TweenContainer, struct UWidget* TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32_t SequenceIndex); // Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenShearWidgetTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenVectorLatentFactory
// Size: 0x68 (Inherited: 0x38)
struct UTweenVectorLatentFactory : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnTweenStart; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTweenUpdate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTweenEnd; // 0x58(0x10)

	struct UTweenVectorLatentFactory* BP_JoinLatentTweenScaleSceneComponentTo(struct UTweenContainer* TweenContainer, struct UTweenVector* OutTween, struct USceneComponent* TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused); // Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentTo // (None) // @ game+0xfffffffec0000000
};

// Class TweenMaker.TweenVectorStandardFactory
// Size: 0x30 (Inherited: 0x30)
struct UTweenVectorStandardFactory : UObject {

	struct UTweenVector* BP_JoinTweenScaleSceneComponentTo(struct UTweenContainer* TweenContainer, struct USceneComponent* TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, bool TweenWhileGameIsPaused, int32_t SequenceIndex); // Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentTo // (None) // @ game+0xfffffffec0000000
};

