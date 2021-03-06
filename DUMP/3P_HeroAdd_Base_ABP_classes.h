// AnimBlueprintGeneratedClass 3P_HeroAdd_Base_ABP.3P_HeroAdd_Base_ABP_C
// Size: 0x20af (Inherited: 0x2c0)
struct U3P_HeroAdd_Base_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8(0x78)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x370(0xb8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x428(0xb8)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8; // 0x4e0(0x190)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7; // 0x670(0x190)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x800(0x190)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x990(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x9b8(0x28)
	struct FAnimNode_BlendListByGameplayTag AnimGraphNode_BlendListByGameplayTag; // 0x9e0(0xc8)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0xaa8(0x190)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0xc38(0x28)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0xc60(0x190)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0xdf0(0x28)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0xe18(0x190)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0xfa8(0x28)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0xfd0(0x190)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1160(0x190)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x12f0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1390(0x78)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x1408(0xc8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x14d0(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x1570(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x1598(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x15c0(0xb8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1678(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x1738(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1760(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1800(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x18b8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x18e0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x1908(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x1930(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x1958(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x1980(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x19a8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1a48(0x78)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x1ac0(0xc8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1b88(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1c28(0x78)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1ca0(0xc8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1d68(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1d90(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1e48(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1e70(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1e98(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1f50(0x28)
	struct FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1f78(0xa0)
	struct FGameplayTag HeroStance; // 0x2018(0x08)
	struct FGobiAnimationState AnimationState; // 0x2020(0x58)
	struct FAnimState3P AnimState3P; // 0x2078(0x08)
	struct FHeroAnimState3P HeroAnimState; // 0x2080(0x28)
	float AimOffsetWeight; // 0x20a8(0x04)
	bool UpperBody; // 0x20ac(0x01)
	bool EnableLeftHandAdditive; // 0x20ad(0x01)
	bool EnableRightHandAdditive; // 0x20ae(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function 3P_HeroAdd_Base_ABP.3P_HeroAdd_Base_ABP_C.AnimGraph // (None) // @ game+0xfffffffec0000000
};

