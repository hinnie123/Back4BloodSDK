// BlueprintGeneratedClass Cable_Lighting_BP.Cable_Lighting_BP_C
// Size: 0x285 (Inherited: 0x250)
struct ACable_Lighting_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBillboardComponent* Billboard; // 0x258(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh; // 0x260(0x08)
	struct USplineComponent* Spline; // 0x268(0x08)
	int32_t # of objects; // 0x270(0x04)
	bool Enable Instance Rot; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UStaticMesh* Inst Mesh Light; // 0x278(0x08)
	float Position Offset; // 0x280(0x04)
	bool Enable Shadows; // 0x284(0x01)

	void UserConstructionScript(); // Function Cable_Lighting_BP.Cable_Lighting_BP_C.UserConstructionScript // (None) // @ game+0xfffffffec0000000
};

