// BlueprintGeneratedClass GasGrenade_Item_BP.GasGrenade_Item_BP_C
// Size: 0x4a8 (Inherited: 0x470)
struct AGasGrenade_Item_BP_C : ABaseWeapon_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UFPRigSkeletalMeshComponent* BaseMesh_1P; // 0x478(0x08)
	struct UStaticMeshComponent* BaseStaticMesh_3P; // 0x480(0x08)
	struct UClipAmmoComponent* ClipAmmo; // 0x488(0x08)
	struct UThrowableComponent* Throwable; // 0x490(0x08)
	struct UItemAnimationDataComponent* ItemAnimationData; // 0x498(0x08)
	struct UGameplayEffect* GasGrenadeCooldown_GE; // 0x4a0(0x08)

	void BndEvt__Throwable_K2Node_ComponentBoundEvent_0_OnItemThrown__DelegateSignature(struct AItem* OwningItem); // Function GasGrenade_Item_BP.GasGrenade_Item_BP_C.BndEvt__Throwable_K2Node_ComponentBoundEvent_0_OnItemThrown__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

