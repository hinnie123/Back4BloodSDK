// Enum TweenMaker.ETweenGenericType
enum class ETweenGenericType : uint8 {
	Any = 0,
	Move = 1,
	Scale = 2,
	Rotate = 3,
	RotateAroundPoint = 4,
	FollowSpline = 5,
	MaterialVector = 6,
	MaterialScalar = 7,
	WidgetAngle = 8,
	WidgetOpacity = 9,
	WidgetShear = 10,
	CustomVector = 11,
	CustomFloat = 12,
	CustomVector2D = 13,
	ETweenGenericType_MAX = 14
};

// Enum TweenMaker.ETweenReferenceAxis
enum class ETweenReferenceAxis : uint8 {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ETweenReferenceAxis_MAX = 3
};

// Enum TweenMaker.ETweenFloatType
enum class ETweenFloatType : uint8 {
	MaterialScalarFromTo = 0,
	MaterialScalarTo = 1,
	RotateAroundPoint = 2,
	FollowSpline = 3,
	WidgetAngleTo = 4,
	WidgetOpacityTo = 5,
	Custom = 6,
	ETweenFloatType_MAX = 7
};

// Enum TweenMaker.ETweenLinearColorType
enum class ETweenLinearColorType : uint8 {
	MaterialVectorFromTo = 0,
	MaterialVectorTo = 1,
	ETweenLinearColorType_MAX = 2
};

// Enum TweenMaker.ETweenRotatorType
enum class ETweenRotatorType : uint8 {
	RotateTo = 0,
	RotateBy = 1,
	ETweenRotatorType_MAX = 2
};

// Enum TweenMaker.ETweenVector2DType
enum class ETweenVector2DType : uint8 {
	MoveTo = 0,
	MoveBy = 1,
	ScaleTo = 2,
	ScaleBy = 3,
	ShearTo = 4,
	Custom = 5,
	ETweenVector2DType_MAX = 6
};

// Enum TweenMaker.ETweenVectorType
enum class ETweenVectorType : uint8 {
	MoveTo = 0,
	MoveBy = 1,
	ScaleTo = 2,
	ScaleBy = 3,
	Custom = 4,
	ETweenVectorType_MAX = 5
};

// Enum TweenMaker.ETweenTargetType
enum class ETweenTargetType : uint8 {
	Actor = 0,
	SceneComponent = 1,
	UMG = 2,
	Material = 3,
	Custom = 4,
	ETweenTargetType_MAX = 5
};

// Enum TweenMaker.ETweenLoopType
enum class ETweenLoopType : uint8 {
	Yoyo = 0,
	Restart = 1,
	ETweenLoopType_MAX = 2
};

// Enum TweenMaker.ETweenEaseType
enum class ETweenEaseType : uint8 {
	Linear = 0,
	EaseInQuad = 1,
	EaseOutQuad = 2,
	EaseInOutQuad = 3,
	EaseOutInQuad = 4,
	EaseInCubic = 5,
	EaseOutCubic = 6,
	EaseInOutCubic = 7,
	EaseOutInCubic = 8,
	EaseInQuart = 9,
	EaseOutQuart = 10,
	EaseInOutQuart = 11,
	EaseOutInQuart = 12,
	EaseInQuint = 13,
	EaseOutQuint = 14,
	EaseInOutQuint = 15,
	EaseOutInQuint = 16,
	EaseInSine = 17,
	EaseOutSine = 18,
	EaseInOutSine = 19,
	EaseOutInSine = 20,
	EaseInExpo = 21,
	EaseOutExpo = 22,
	EaseInOutExpo = 23,
	EaseOutInExpo = 24,
	EaseInCirc = 25,
	EaseOutCirc = 26,
	EaseInOutCirc = 27,
	EaseOutInCirc = 28,
	EaseInElastic = 29,
	EaseOutElastic = 30,
	EaseInOutElastic = 31,
	EaseOutInElastic = 32,
	EaseInBack = 33,
	EaseOutBack = 34,
	EaseInOutBack = 35,
	EaseOutInBack = 36,
	EaseInBounce = 37,
	EaseOutBounce = 38,
	EaseInOutBounce = 39,
	EaseOutInBounce = 40,
	ETweenEaseType_MAX = 41
};

// ScriptStruct TweenMaker.ParallelTween
// Size: 0x20 (Inherited: 0x00)
struct FParallelTween {
	struct TArray<struct UBaseTween*> ParallelTweens; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

