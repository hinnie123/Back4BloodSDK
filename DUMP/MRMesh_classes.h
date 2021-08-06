// Class MRMesh.MeshReconstructorBase
// Size: 0x30 (Inherited: 0x30)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (None) // @ game+0xfffffffec0000000
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x290 (Inherited: 0x220)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x220(0x10)
	bool ScanWorld; // 0x230(0x01)
	bool RequestNormals; // 0x231(0x01)
	bool RequestVertexConfidence; // 0x232(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x233(0x01)
	char pad_234[0x4]; // 0x234(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x238(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x248(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x258(0x10)
	float UpdateInterval; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UMRMeshComponent* MRMesh; // 0x270(0x08)
	char pad_278[0x18]; // 0x278(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (None) // @ game+0xfffffffec0000000
};

// Class MRMesh.MRMeshComponent
// Size: 0x520 (Inherited: 0x4a0)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct UMaterialInterface* Material; // 0x4a8(0x08)
	bool bCreateMeshProxySections; // 0x4b0(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x4b1(0x01)
	bool bNeverCreateCollisionMesh; // 0x4b2(0x01)
	char pad_4B3[0x5]; // 0x4b3(0x05)
	struct UBodySetup* CachedBodySetup; // 0x4b8(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x4c0(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x4d0(0x08)
	char pad_4D8[0x48]; // 0x4d8(0x48)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (None) // @ game+0xfffffffec0000000
};

