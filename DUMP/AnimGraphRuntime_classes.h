// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; // 0x40(0x08)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UAnimSequencerInstance : UAnimInstance {
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(struct FVector RootPos, struct FVector JointPos, struct FVector EndPos, struct FVector JointTarget, struct FVector Effector, struct FVector OutJointPos, struct FVector OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK // (None) // @ game+0xfffffffec0000000
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived // (None) // @ game+0xfffffffec0000000
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x30 (Inherited: 0x30)
struct USequencerAnimationSupport : UInterface {
};

