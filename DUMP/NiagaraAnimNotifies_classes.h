// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0xa0 (Inherited: 0x40)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct UNiagaraSystem* Template; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	struct FVector Scale; // 0x60(0x0c)
	char pad_6C[0x24]; // 0x6c(0x24)
	char Attached : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FName SocketName; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect // (None) // @ game+0xfffffffec0000000
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct UNiagaraSystem* Template; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	bool bDestroyAtEnd; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

