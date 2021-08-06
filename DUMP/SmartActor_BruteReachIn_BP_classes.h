// BlueprintGeneratedClass SmartActor_BruteReachIn_BP.SmartActor_BruteReachIn_BP_C
// Size: 0x438 (Inherited: 0x3c8)
struct ASmartActor_BruteReachIn_BP_C : AAISmartActor_BP_C {
	struct UStaticMeshComponent* Cube; // 0x3c8(0x08)
	struct UStaticMeshComponent* VisualizationMesh; // 0x3d0(0x08)
	struct UAISmartActor_BruteReachIn* AISmartActor_BruteReachIn; // 0x3d8(0x08)
	struct UBoxComponent* EnabledBox; // 0x3e0(0x08)
	struct UAnimContextLocatorComponent* AnimContextLocator; // 0x3e8(0x08)
	struct UTextRenderComponent* TextRender; // 0x3f0(0x08)
	struct UStaticMeshComponent* Cube3; // 0x3f8(0x08)
	struct UStaticMeshComponent* Cube2; // 0x400(0x08)
	bool bShouldEnableOnOverlap; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FTimerHandle DisableTimerHandle; // 0x410(0x08)
	float DisableAfterTime; // 0x418(0x04)
	bool Show Brute Debug; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct UHealthComponent* Door Health Component; // 0x420(0x08)
	struct APassageSpawner* Passage Spawner; // 0x428(0x08)
	struct FTimerHandle SmartActorCheck_Timer; // 0x430(0x08)

	bool Check EnableBox Overlap(); // Function SmartActor_BruteReachIn_BP.SmartActor_BruteReachIn_BP_C.Check EnableBox Overlap // (None) // @ game+0xfffffffec0000000
};

