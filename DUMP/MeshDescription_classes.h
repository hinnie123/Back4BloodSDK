// Class MeshDescription.MeshDescription
// Size: 0x30 (Inherited: 0x30)
struct UMeshDescription : UObject {
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x398 (Inherited: 0x30)
struct UMeshDescriptionBase : UObject {
	char pad_30[0x368]; // 0x30(0x368)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector Position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition // (None) // @ game+0xfffffffec0000000
};

