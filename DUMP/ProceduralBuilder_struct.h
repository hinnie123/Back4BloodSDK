// Enum ProceduralBuilder.EProceduralBuildPhase
enum class EProceduralBuildPhase : uint8 {
	EPBP_PreNavBuild = 0,
	EPBP_PostNavBuild = 1,
	EPBP_MAX = 2
};

// Enum ProceduralBuilder.ETRSSplineMeshActorMeshType
enum class ETRSSplineMeshActorMeshType : uint8 {
	StaticMesh = 0,
	InstancedStaticMesh = 1,
	SplineMeshes = 2,
	ETRSSplineMeshActorMeshType_MAX = 3
};

// Enum ProceduralBuilder.ETRSSplineMeshActorSplineMeshMode
enum class ETRSSplineMeshActorSplineMeshMode : uint8 {
	Tiling = 0,
	Repeating = 1,
	Stretching = 2,
	ETRSSplineMeshActorSplineMeshMode_MAX = 3
};

// ScriptStruct ProceduralBuilder.TRSSplineMeshActorCapData
// Size: 0x20 (Inherited: 0x00)
struct FTRSSplineMeshActorCapData {
	struct FTRSSplineMeshActorSplineMeshElement StartCap; // 0x00(0x10)
	struct FTRSSplineMeshActorSplineMeshElement EndCap; // 0x10(0x10)
};

// ScriptStruct ProceduralBuilder.TRSSplineMeshActorSplineMeshElement
// Size: 0x10 (Inherited: 0x00)
struct FTRSSplineMeshActorSplineMeshElement {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct ProceduralBuilder.TRSSplineMeshActorPerInstanceData
// Size: 0x10 (Inherited: 0x00)
struct FTRSSplineMeshActorPerInstanceData {
	float Bank; // 0x00(0x04)
	struct FVector Scale; // 0x04(0x0c)
};

// ScriptStruct ProceduralBuilder.TRSSplineMeshActorDebugNumbersPrefs
// Size: 0x0c (Inherited: 0x00)
struct FTRSSplineMeshActorDebugNumbersPrefs {
	float Offset; // 0x00(0x04)
	float Size; // 0x04(0x04)
	struct FColor Color; // 0x08(0x04)
};

