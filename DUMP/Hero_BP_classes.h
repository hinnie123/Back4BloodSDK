// BlueprintGeneratedClass Hero_BP.Hero_BP_C
// Size: 0x14ac (Inherited: 0x12f0)
struct AHero_BP_C : AHeroCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12f0(0x08)
	struct UDrench_Component_Hero_BP_C* Drench; // 0x12f8(0x08)
	struct USkeletalMeshComponent* ThirdPersonLegsMesh; // 0x1300(0x08)
	struct USkeletalMeshComponent* ThirdPersonHeadMesh; // 0x1308(0x08)
	struct UAttachableComponent* Attachable; // 0x1310(0x08)
	struct UTRSEventTrigger_BP_C* TRSEventTrigger_BP; // 0x1318(0x08)
	struct UFlashlightPoseComponent* FlashlightPose1; // 0x1320(0x08)
	struct UHeroDialogue_BP_C* HeroDialogue_BP; // 0x1328(0x08)
	struct UStumbleComponent* Stumble; // 0x1330(0x08)
	struct UGrappleComponent* Grapple; // 0x1338(0x08)
	struct UHeroFacialAnimationComponent* HeroFacialAnimation; // 0x1340(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x1348(0x08)
	struct UHeroGameCoachLessons_BP_C* HeroGameCoachLessons; // 0x1350(0x08)
	struct UHealthHitMarkerComponent* HealthHitMarker; // 0x1358(0x08)
	struct UDamageFilterComponent* DamageFilterComponent; // 0x1360(0x08)
	struct UKillHandlerComponent* KillHandler; // 0x1368(0x08)
	struct UFlashBangReceiver_BP_C* FlashBangReceiver_BP; // 0x1370(0x08)
	struct UMountedWeaponInteractComponent* MountedWeaponInteract; // 0x1378(0x08)
	struct UPingableComponent* Pingable; // 0x1380(0x08)
	struct UFlashlightPoseComponent* FlashlightPose; // 0x1388(0x08)
	struct UHeroHighlight_BP_C* HeroHighlight_BP; // 0x1390(0x08)
	struct UMantleComponent* Mantle; // 0x1398(0x08)
	struct UGameplayContextComponent* GameplayContext; // 0x13a0(0x08)
	struct USceneComponent* CameraRoot; // 0x13a8(0x08)
	struct UCameraComponent* ThirdPersonCamera; // 0x13b0(0x08)
	struct UCameraComponent* FirstPersonCamera; // 0x13b8(0x08)
	struct UFPRigSkeletalMeshComponent* FirstPersonArms; // 0x13c0(0x08)
	struct USpringArmComponent* FirstPersonSpringArm; // 0x13c8(0x08)
	struct USpringArmComponent* ThirdPersonSpringArm; // 0x13d0(0x08)
	struct UPlayerStaminaComponent* PlayerStamina; // 0x13d8(0x08)
	struct UPlayerSprintComponent* PlayerSprint; // 0x13e0(0x08)
	struct UPlayerAimAssistComponent* PlayerAimAssist; // 0x13e8(0x08)
	struct UMoveIgnoreActorsComponent* MoveIgnoreActors; // 0x13f0(0x08)
	struct UIncapUsable_BP_C* IncapUsable_BP; // 0x13f8(0x08)
	struct UPerkComponent* PerkComponent; // 0x1400(0x08)
	struct UPlayHitReactionComponent* PlayHitReaction; // 0x1408(0x08)
	struct UCapsuleComponent* Player_Damage_Capsule; // 0x1410(0x08)
	struct UHealthComponent* Health; // 0x1418(0x08)
	struct UHeroLightComponent* FlashlightManager; // 0x1420(0x08)
	struct ULedgeHangUsable_BP_C* LedgeHangUsable_BP; // 0x1428(0x08)
	struct UPlayerMovementDebugComponent* PlayerMovementDebug; // 0x1430(0x08)
	struct UHeroLifeStateComponent_BP_C* HeroLifeStateComponent_BP; // 0x1438(0x08)
	struct USpotLightComponent* GrappleSpotLight; // 0x1440(0x08)
	struct UDistanceMapSourceComponent* DistanceMapSource; // 0x1448(0x08)
	struct UCapsuleComponent* IncapUseVolume; // 0x1450(0x08)
	struct UHeroUseComponent* HeroUse; // 0x1458(0x08)
	struct UGameplayEffectsComponent* GameplayEffects; // 0x1460(0x08)
	struct UHitMarkerComponent* HitMarker; // 0x1468(0x08)
	struct UHeroAudioComponent_BP_C* HeroAudioComponent_BP; // 0x1470(0x08)
	struct UPlayerViewComponent* HeroView; // 0x1478(0x08)
	struct UInventoryComponent* Inventory; // 0x1480(0x08)
	struct FMulticastInlineDelegate Callback_OnJumped; // 0x1488(0x10)
	struct FMulticastInlineDelegate Callback_OnLanded; // 0x1498(0x10)
	float AlertCommons_Radius; // 0x14a8(0x04)

	void PlaySoundOnAkComponent_Interface(struct UAkAudioEvent* AkEvent, bool Successful); // Function Hero_BP.Hero_BP_C.PlaySoundOnAkComponent_Interface // (None) // @ game+0xfffffffec0000000
};
