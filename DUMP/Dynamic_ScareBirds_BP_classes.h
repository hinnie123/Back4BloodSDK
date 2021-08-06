// BlueprintGeneratedClass Dynamic_ScareBirds_BP.Dynamic_ScareBirds_BP_C
// Size: 0x2dc (Inherited: 0x250)
struct ADynamic_ScareBirds_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UAkComponent* Ak; // 0x258(0x08)
	struct UCapsuleComponent* TriggerVolume; // 0x260(0x08)
	struct UInstancedStaticMeshComponent* BirdMesh; // 0x268(0x08)
	struct UAlertComponent* Alert; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float FlyYoufools_Alpha_B26100E9429A7A1FE55D33B113DD1466; // 0x280(0x04)
	enum class ETimelineDirection FlyYoufools__Direction_B26100E9429A7A1FE55D33B113DD1466; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* FlyYoufools; // 0x288(0x08)
	int32_t NumBirds; // 0x290(0x04)
	struct FVector DestinationLocation; // 0x294(0x0c)
	struct TArray<struct FVector> BirdStartLocations; // 0x2a0(0x10)
	int32_t NumRandomDestinations; // 0x2b0(0x04)
	float DestinationDistance; // 0x2b4(0x04)
	struct TArray<struct FVector> BirdDestinations; // 0x2b8(0x10)
	bool bTriggered; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct AActor* TriggeringActor; // 0x2d0(0x08)
	float ResetTime; // 0x2d8(0x04)

	void SetDetection(bool bEnable); // Function Dynamic_ScareBirds_BP.Dynamic_ScareBirds_BP_C.SetDetection // (None) // @ game+0xfffffffec0000000
};

