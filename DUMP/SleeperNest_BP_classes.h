// BlueprintGeneratedClass SleeperNest_BP.SleeperNest_BP_C
// Size: 0x3e1 (Inherited: 0x3b0)
struct ASleeperNest_BP_C : ASleeper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UCapsuleComponent* PlayerBlockerCapsule; // 0x3b8(0x08)
	struct UInfectedHighlightComponent* InfectedHighlight; // 0x3c0(0x08)
	struct UAkComponent* AkComponent; // 0x3c8(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x3d0(0x08)
	struct UAimAssistTargetComponent* AimAssistTarget; // 0x3d8(0x08)
	bool HasChosenSpawnLocation; // 0x3e0(0x01)

	void ReceiveBeginPlay(); // Function SleeperNest_BP.SleeperNest_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

