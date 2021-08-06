// ScriptStruct ProceduralBuilderCommon.PasteProceduralActorsInput
// Size: 0x60 (Inherited: 0x00)
struct FPasteProceduralActorsInput {
	struct FString ActorPasteData; // 0x00(0x10)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct TArray<struct TSoftObjectPtr<UObject>> AssetReferences; // 0x40(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> ClassReferences; // 0x50(0x10)
};

