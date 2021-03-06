// BlueprintGeneratedClass LootSpawner_Sedan02_BP.LootSpawner_Sedan02_BP_C
// Size: 0x470 (Inherited: 0x250)
struct ALootSpawner_Sedan02_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UParticleSystemComponent* VFX_Impact_Glass_B; // 0x258(0x08)
	struct UParticleSystemComponent* VFX_Impact_Glass_F; // 0x260(0x08)
	struct UBoxComponent* PingableVolume; // 0x268(0x08)
	struct UPingableComponent* Pingable; // 0x270(0x08)
	struct UParticleSystemComponent* VFX_Impact_Glass_BR; // 0x278(0x08)
	struct UParticleSystemComponent* VFX_Impact_Glass_BL; // 0x280(0x08)
	struct UParticleSystemComponent* VFX_Impact_Glass_FR; // 0x288(0x08)
	struct UParticleSystemComponent* VFX_Impact_Glass_FL; // 0x290(0x08)
	struct UStaticMeshComponent* Window_Side_BR; // 0x298(0x08)
	struct UStaticMeshComponent* Window_Side_BL; // 0x2a0(0x08)
	struct UStaticMeshComponent* Window_Side_FR; // 0x2a8(0x08)
	struct UStaticMeshComponent* Window_Side_FL; // 0x2b0(0x08)
	struct UStaticMeshComponent* Window_Back; // 0x2b8(0x08)
	struct UStaticMeshComponent* Window_Front; // 0x2c0(0x08)
	struct UItemAkBankComponent* ItemAkBank; // 0x2c8(0x08)
	struct UStaticMeshComponent* Undercrriage; // 0x2d0(0x08)
	struct UStaticMeshComponent* Interior; // 0x2d8(0x08)
	struct USceneComponent* GameCoachWaypointPosition; // 0x2e0(0x08)
	struct UCarAlarmGameCoachLessonComponent* CarAlarmGameCoachLesson; // 0x2e8(0x08)
	struct UUsableHighlightComponent* UsableHighlight; // 0x2f0(0x08)
	struct USpotLightComponent* SpotLight2; // 0x2f8(0x08)
	struct USpotLightComponent* SpotLight1; // 0x300(0x08)
	struct UPointLightComponent* PointLight4; // 0x308(0x08)
	struct UPointLightComponent* PointLight3; // 0x310(0x08)
	struct UPointLightComponent* PointLight2; // 0x318(0x08)
	struct UPointLightComponent* PointLight1; // 0x320(0x08)
	struct UGobiNavLinkComponent* GobiNavLink8; // 0x328(0x08)
	struct UGobiNavLinkComponent* GobiNavLink7; // 0x330(0x08)
	struct UGobiNavLinkComponent* GobiNavLink6; // 0x338(0x08)
	struct UGobiNavLinkComponent* GobiNavLink5; // 0x340(0x08)
	struct UGobiNavLinkComponent* GobiNavLink4; // 0x348(0x08)
	struct UGobiNavLinkComponent* GobiNavLink3; // 0x350(0x08)
	struct UGobiNavLinkComponent* GobiNavLink2; // 0x358(0x08)
	struct UGobiNavLinkComponent* GobiNavLink1; // 0x360(0x08)
	struct USceneComponent* Scene; // 0x368(0x08)
	struct UStaticMeshComponent* Car; // 0x370(0x08)
	struct UAkComponent* Ak; // 0x378(0x08)
	struct UDamageFilterComponent* DamageFilter; // 0x380(0x08)
	struct UStaticMeshComponent* DestroyedCar; // 0x388(0x08)
	struct UAlertComponent* Alert; // 0x390(0x08)
	struct UExplosionComponent* explosion; // 0x398(0x08)
	struct ULifeStateComponent* LifeState; // 0x3a0(0x08)
	struct UInteractiveCar* InteractiveCar; // 0x3a8(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh4; // 0x3b0(0x08)
	struct ULootSpawnerComponent* LootSpawner_BackSeatR; // 0x3b8(0x08)
	struct ULootSpawnerComponent* LootSpawner_BackSeatL; // 0x3c0(0x08)
	struct ULootSpawnerComponent* LootSpawner_FrontSeatR; // 0x3c8(0x08)
	struct ULootSpawnerComponent* LootSpawner_FrontSeatL; // 0x3d0(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh3; // 0x3d8(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh2; // 0x3e0(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh1; // 0x3e8(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x3f0(0x08)
	struct UHealthComponent* Health; // 0x3f8(0x08)
	struct FRotator TrunkRotation; // 0x400(0x0c)
	struct FRotator DoorFrontLeftRotation; // 0x40c(0x0c)
	struct FRotator DoorFrontRightRotation; // 0x418(0x0c)
	struct FRotator DoorBackLeftRotation; // 0x424(0x0c)
	struct FRotator DoorBackRightRotation; // 0x430(0x0c)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UAkAudioEvent* TrunkOpen; // 0x440(0x08)
	struct UAkAudioEvent* DoorFrontLeftOpen; // 0x448(0x08)
	struct UAkAudioEvent* DoorFrontRightOpen; // 0x450(0x08)
	struct UAkAudioEvent* DoorBackRightOpen; // 0x458(0x08)
	struct UAkAudioEvent* DoorBackLeftOpen; // 0x460(0x08)
	struct UAkAudioEvent* WindowBreak; // 0x468(0x08)

	void ReceiveBeginPlay(); // Function LootSpawner_Sedan02_BP.LootSpawner_Sedan02_BP_C.ReceiveBeginPlay // (None) // @ game+0xfffffffec0000000
};

