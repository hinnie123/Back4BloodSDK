// BlueprintGeneratedClass HandScanner_SwitchActor_PoliceStation_Child.HandScanner_SwitchActor_PoliceStation_Child_C
// Size: 0x310 (Inherited: 0x2b9)
struct AHandScanner_SwitchActor_PoliceStation_Child_C : ASwitchActor_C {
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct USceneComponent* GameCoachWaypointPosition; // 0x2c8(0x08)
	struct UGameCoachLessonsComponent* GameCoachLessons; // 0x2d0(0x08)
	struct UAkComponent* Ak; // 0x2d8(0x08)
	bool bBobsTorsoIsNear; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct ADoor_Saferoom_Exit_BP_C* SaferoomDoor; // 0x2e8(0x08)
	struct FDataTableRowHandle BobsTorso; // 0x2f0(0x20)

	void BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableSuccessfulUseSignature__DelegateSignature(struct AActor* UsingActor); // Function HandScanner_SwitchActor_PoliceStation_Child.HandScanner_SwitchActor_PoliceStation_Child_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableSuccessfulUseSignature__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

