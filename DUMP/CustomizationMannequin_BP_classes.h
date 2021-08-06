// BlueprintGeneratedClass CustomizationMannequin_BP.CustomizationMannequin_BP_C
// Size: 0x39e (Inherited: 0x368)
struct ACustomizationMannequin_BP_C : ACustomizationMannequin {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct USkeletalMeshComponent* ThirdPersonLegsMesh; // 0x370(0x08)
	struct USkeletalMeshComponent* ThirdPersonHeadMesh; // 0x378(0x08)
	struct USkeletalMeshComponent* ThirdPersonMainMesh; // 0x380(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x388(0x08)
	struct FVector InitialMeshOffset; // 0x390(0x0c)
	bool DebugFreezePose; // 0x39c(0x01)
	bool DebugDisableOffset; // 0x39d(0x01)

	void ReceiveBeginPlay(); // Function CustomizationMannequin_BP.CustomizationMannequin_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

