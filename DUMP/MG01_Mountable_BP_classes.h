// BlueprintGeneratedClass MG01_Mountable_BP.MG01_Mountable_BP_C
// Size: 0x2f8 (Inherited: 0x250)
struct AMG01_Mountable_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UPingableComponent* Pingable; // 0x258(0x08)
	struct UCapsuleComponent* MinigunColision; // 0x260(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x268(0x08)
	struct UReceiveCharacterEmitterEffects* ReceiveCharacterEmitterEffects; // 0x270(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x278(0x08)
	struct UDrench_Component_Hero_BP_C* Drench_Component_Hero_BP; // 0x280(0x08)
	struct USpreadComponent* Spread; // 0x288(0x08)
	struct UBoxComponent* PingableVolume; // 0x290(0x08)
	struct UItemAudioComponent* ItemAudio; // 0x298(0x08)
	struct UCapsuleComponent* PlayerOnMinigunCollision; // 0x2a0(0x08)
	struct UCameraComponent* FirstPersonCamera; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b0(0x08)
	struct UAkComponent* Ak_MiniGun; // 0x2b8(0x08)
	struct UCapsuleComponent* UsableTrigger; // 0x2c0(0x08)
	struct USceneComponent* Scene; // 0x2c8(0x08)
	struct UUsableComponent* Usable; // 0x2d0(0x08)
	struct UMountedWeaponComponent* MountedWeapon; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	float AudioVelocityMvmtThreshold; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct ACharacter* ControllingCharacter; // 0x2f0(0x08)

	void AudioTick(float DeltaSecs); // Function MG01_Mountable_BP.MG01_Mountable_BP_C.AudioTick // (None) // @ game+0xfffffffec0000000
};

