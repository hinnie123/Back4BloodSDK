// BlueprintGeneratedClass ItemPickup_BP.ItemPickup_BP_C
// Size: 0x469 (Inherited: 0x428)
struct AItemPickup_BP_C : AItemPickup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UGameplayTagsComponent* GameplayTags; // 0x430(0x08)
	struct UBillboardComponent* GlintLocation; // 0x438(0x08)
	struct UItemAudioComponent* ItemAudio; // 0x440(0x08)
	struct UPingableComponent* Pingable; // 0x448(0x08)
	struct FMulticastInlineDelegate OnPickedUp; // 0x450(0x10)
	struct UParticleSystemComponent* ItemGlintParticle; // 0x460(0x08)
	bool bAutoPositionObservable; // 0x468(0x01)

	void UserConstructionScript(); // Function ItemPickup_BP.ItemPickup_BP_C.UserConstructionScript // (None) // @ game+0xfffffffec0000000
};

