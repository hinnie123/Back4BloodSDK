// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary {

	void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh // (None) // @ game+0xfffffffec0000000
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x580 (Inherited: 0x520)
struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x520(0x01)
	bool bUseAsyncCooking; // 0x521(0x01)
	char pad_522[0x6]; // 0x522(0x06)
	struct UBodySetup* ProcMeshBodySetup; // 0x528(0x08)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x530(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x540(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x550(0x1c)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x570(0x10)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FVector2D> UV1, struct TArray<struct FVector2D> UV2, struct TArray<struct FVector2D> UV3, struct TArray<struct FLinearColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor // (None) // @ game+0xfffffffec0000000
};

