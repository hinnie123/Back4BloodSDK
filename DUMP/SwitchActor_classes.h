// BlueprintGeneratedClass SwitchActor.SwitchActor_C
// Size: 0x2b9 (Inherited: 0x250)
struct ASwitchActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UAudioSwitchActorComponent_BP_C* AudioSwitchActorComponent_BP; // 0x258(0x08)
	struct UWaypointSpawnerComponent* WaypointSpawner; // 0x260(0x08)
	struct UStaticMeshComponent* UsableMesh; // 0x268(0x08)
	struct UBoxComponent* UseableVolume; // 0x270(0x08)
	struct UUsableComponent* Usable; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct UMaterialInterface* UsableMeshMat; // 0x288(0x08)
	struct UMaterialInterface* HologramMeshMat; // 0x290(0x08)
	struct FMulticastInlineDelegate SwitchedOn; // 0x298(0x10)
	bool bActivated; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct AActor* UsingActor; // 0x2b0(0x08)
	bool bStartWithHolographicMesh; // 0x2b8(0x01)

	void SetEnabled(bool bShouldEnable); // Function SwitchActor.SwitchActor_C.SetEnabled // (None) // @ game+0xfffffffec0000000
};

