// Class VariantManagerContent.LevelVariantSets
// Size: 0x98 (Inherited: 0x30)
struct ULevelVariantSets : UObject {
	struct UObject* DirectorClass; // 0x30(0x08)
	struct TArray<struct UVariantSet*> VariantSets; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (None) // @ game+0xfffffffec0000000
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x268 (Inherited: 0x250)
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; // 0x250(0x18)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (None) // @ game+0xfffffffec0000000
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x48 (Inherited: 0x30)
struct ULevelVariantSetsFunctionDirector : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class VariantManagerContent.PropertyValue
// Size: 0x1c0 (Inherited: 0x30)
struct UPropertyValue : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x90(0x10)
	struct TArray<int32_t> PropertyIndices; // 0xa0(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xb0(0x10)
	struct FString FullDisplayString; // 0xc0(0x10)
	struct FName PropertySetterName; // 0xd0(0x08)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xd8(0x50)
	bool bHasRecordedData; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UObject* LeafPropertyClass; // 0x130(0x08)
	char pad_138[0x8]; // 0x138(0x08)
	struct TArray<char> ValueBytes; // 0x140(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x150(0x01)
	char pad_151[0x6f]; // 0x151(0x6f)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (None) // @ game+0xfffffffec0000000
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1c0 (Inherited: 0x1c0)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1c0 (Inherited: 0x1c0)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x1c0 (Inherited: 0x1c0)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1c0 (Inherited: 0x1c0)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x1c0 (Inherited: 0x1c0)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1c0 (Inherited: 0x1c0)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size: 0x278 (Inherited: 0x250)
struct ASwitchActor : AActor {
	char pad_250[0x18]; // 0x250(0x18)
	struct USceneComponent* SceneComponent; // 0x268(0x08)
	int32_t LastSelectedOption; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (None) // @ game+0xfffffffec0000000
};

// Class VariantManagerContent.Variant
// Size: 0x78 (Inherited: 0x30)
struct UVariant : UObject {
	struct FText DisplayText; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x60(0x10)
	struct UTexture2D* Thumbnail; // 0x70(0x08)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (None) // @ game+0xfffffffec0000000
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0x98 (Inherited: 0x30)
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; // 0x30(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x40(0x18)
	LazyObjectProperty LazyObjectPtr; // 0x58(0x1c)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x78(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x88(0x10)
};

// Class VariantManagerContent.VariantSet
// Size: 0x78 (Inherited: 0x30)
struct UVariantSet : UObject {
	struct FText DisplayText; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
	bool bExpanded; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UVariant*> Variants; // 0x68(0x10)

	void SetDisplayText(struct FText NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (None) // @ game+0xfffffffec0000000
};

