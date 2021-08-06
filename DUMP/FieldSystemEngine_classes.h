// Class FieldSystemEngine.FieldSystemActor
// Size: 0x258 (Inherited: 0x250)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x250(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x40 (Inherited: 0x30)
struct UFieldSystem : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x4e0 (Inherited: 0x4a0)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x4a0(0x08)
	char pad_4A8[0x10]; // 0x4a8(0x10)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x4b8(0x10)
	char pad_4C8[0x18]; // 0x4c8(0x18)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xe0 (Inherited: 0xd8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xe0 (Inherited: 0xd8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xe0 (Inherited: 0xd8)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xf8 (Inherited: 0xd8)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xd8(0x04)
	struct FVector Position; // 0xdc(0x0c)
	int32_t InteriorValue; // 0xe8(0x04)
	int32_t ExteriorValue; // 0xec(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xe0 (Inherited: 0xd8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0x100 (Inherited: 0xd8)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	float MinRange; // 0xdc(0x04)
	float MaxRange; // 0xe0(0x04)
	float Default; // 0xe4(0x04)
	float Radius; // 0xe8(0x04)
	struct FVector Position; // 0xec(0x0c)
	enum class EFieldFalloffType Falloff; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x108 (Inherited: 0xd8)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	float MinRange; // 0xdc(0x04)
	float MaxRange; // 0xe0(0x04)
	float Default; // 0xe4(0x04)
	float Distance; // 0xe8(0x04)
	struct FVector Position; // 0xec(0x0c)
	struct FVector Normal; // 0xf8(0x0c)
	enum class EFieldFalloffType Falloff; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x130 (Inherited: 0xd8)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	float MinRange; // 0xdc(0x04)
	float MaxRange; // 0xe0(0x04)
	float Default; // 0xe4(0x04)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FTransform Transform; // 0xf0(0x30)
	enum class EFieldFalloffType Falloff; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.NoiseField
// Size: 0x110 (Inherited: 0xd8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xd8(0x04)
	float MaxRange; // 0xdc(0x04)
	struct FTransform Transform; // 0xe0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.UniformVector
// Size: 0xe8 (Inherited: 0xd8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xd8(0x04)
	struct FVector Direction; // 0xdc(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.RadialVector
// Size: 0xe8 (Inherited: 0xd8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xd8(0x04)
	struct FVector Position; // 0xdc(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.RandomVector
// Size: 0xe0 (Inherited: 0xd8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.OperatorField
// Size: 0xf8 (Inherited: 0xd8)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UFieldNodeBase* RightField; // 0xe0(0x08)
	struct UFieldNodeBase* LeftField; // 0xe8(0x08)
	enum class EFieldOperationType Operation; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xe0 (Inherited: 0xd8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xd8(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xe0 (Inherited: 0xd8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xd8(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.CullingField
// Size: 0xf0 (Inherited: 0xd8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xd8(0x08)
	struct UFieldNodeBase* Field; // 0xe0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (None) // @ game+0xfffffffec0000000
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xd8 (Inherited: 0xd8)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (None) // @ game+0xfffffffec0000000
};

