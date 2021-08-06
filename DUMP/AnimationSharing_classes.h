// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x2b8(0x08)
	float PermutationTimeOffset; // 0x2c0(0x04)
	float PlayRate; // 0x2c4(0x04)
	bool bStateBool; // 0x2c8(0x01)
	struct UAnimSharingInstance* Instance; // 0x2d0(0x08)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void GetInstancedActors(struct TArray<struct AActor*> Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (None) // @ game+0xfffffffec0000000
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x2b8(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x2c0(0x08)
	float BlendTime; // 0x2c8(0x04)
	bool bBlendBool; // 0x2cc(0x01)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x2b8(0x08)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x2c0(0x08)
	float Alpha; // 0x2c8(0x04)
	bool bStateBool; // 0x2cc(0x01)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x140 (Inherited: 0x30)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x30(0x10)
	char pad_40[0x70]; // 0x40(0x70)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0xb0(0x08)
	char pad_B8[0x38]; // 0xb8(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct UEnum* StateEnum; // 0x110(0x08)
	struct AActor* SharingActor; // 0x118(0x08)
	char pad_120[0x20]; // 0x120(0x20)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0x90 (Inherited: 0x30)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x30(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (None) // @ game+0xfffffffec0000000
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x50 (Inherited: 0x30)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x30(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x40(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x58 (Inherited: 0x30)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x30(0x28)

	void ProcessActorState(int32_t OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (None) // @ game+0xfffffffec0000000
};

