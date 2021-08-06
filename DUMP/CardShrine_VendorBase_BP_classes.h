// BlueprintGeneratedClass CardShrine_VendorBase_BP.CardShrine_VendorBase_BP_C
// Size: 0x525 (Inherited: 0x478)
struct ACardShrine_VendorBase_BP_C : AItemPickupBase_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x480(0x08)
	struct UAkComponent* Ak; // 0x488(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x490(0x08)
	struct FDataTableRowHandle CardToGrant; // 0x498(0x20)
	struct UDataTable* CardsDataTable; // 0x4b8(0x08)
	struct FGameplayTagQuery TagFilterQuery; // 0x4c0(0x48)
	bool SingleUse; // 0x508(0x01)
	bool IsFree; // 0x509(0x01)
	bool ScaleCostWithStacks; // 0x50a(0x01)
	char pad_50B[0x5]; // 0x50b(0x05)
	struct TArray<float> CostScalePerStack; // 0x510(0x10)
	int32_t CardsTaken; // 0x520(0x04)
	bool LocallyUsed; // 0x524(0x01)

	void OnRep_CardsTaken(); // Function CardShrine_VendorBase_BP.CardShrine_VendorBase_BP_C.OnRep_CardsTaken // (None) // @ game+0xfffffffec0000000
};

