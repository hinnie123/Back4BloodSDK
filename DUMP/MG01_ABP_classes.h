// AnimBlueprintGeneratedClass MG01_ABP.MG01_ABP_C
// Size: 0xbf8 (Inherited: 0x2e0)
struct UMG01_ABP_C : UMountedGunAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2e8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x318(0x78)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x390(0x190)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x520(0x590)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xab0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xad0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xaf0(0x108)

	void AnimGraph(struct FPoseLink AnimGraph); // Function MG01_ABP.MG01_ABP_C.AnimGraph // (None) // @ game+0xfffffffec0000000
};

