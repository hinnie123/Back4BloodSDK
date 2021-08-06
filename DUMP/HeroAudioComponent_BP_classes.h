// BlueprintGeneratedClass HeroAudioComponent_BP.HeroAudioComponent_BP_C
// Size: 0x72c (Inherited: 0x700)
struct UHeroAudioComponent_BP_C : UHeroAudioComponent {
	float MovementThreshold; // 0x700(0x04)
	bool TempFootstepsEnabled; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	struct UCharacterMovementComponent* OwnerMovementComponent; // 0x708(0x08)
	struct TArray<struct FAudioScreenEffect_Struct> AudioScreenEffects; // 0x710(0x10)
	float CumulativeDistance; // 0x720(0x04)
	float CrouchThresholdScalar; // 0x724(0x04)
	float SprintScalar; // 0x728(0x04)

	bool PlayScuff(); // Function HeroAudioComponent_BP.HeroAudioComponent_BP_C.PlayScuff // (None) // @ game+0xfffffffec0000000
};

