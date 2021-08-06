// BlueprintGeneratedClass DoorAudioComponent_BP.DoorAudioComponent_BP_C
// Size: 0x110 (Inherited: 0xd8)
struct UDoorAudioComponent_BP_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct UAkAudioEvent* LockedResponse; // 0xe0(0x08)
	struct UAkComponent* AkComponent_Door_Ref; // 0xe8(0x08)
	struct UAkAudioEvent* Unlock_Start; // 0xf0(0x08)
	struct UAkAudioEvent* Unlock_Stop; // 0xf8(0x08)
	struct UAkAudioEvent* Unlock_Success; // 0x100(0x08)
	struct AAkAcousticPortal* AssociatedPortal; // 0x108(0x08)

	void ReceiveBeginPlay(); // Function DoorAudioComponent_BP.DoorAudioComponent_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

