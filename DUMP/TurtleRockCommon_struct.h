// Enum TurtleRockCommon.EEvaluationType
enum class EEvaluationType : uint8 {
	Disabled = 0,
	Score = 1,
	Filter = 2,
	Filter_And_Score = 3,
	EEvaluationType_MAX = 4
};

// Enum TurtleRockCommon.ECompareOp
enum class ECompareOp : uint8 {
	Equal_To = 0,
	Not_Equal_To = 1,
	Greater_Than_Or_Equal_To = 2,
	Less_Than_Or_Equal_To = 3,
	Greater_Than = 4,
	Less_Than = 5,
	Any = 6,
	All = 7,
	None = 8,
	ECompareOp_MAX = 9
};

// Enum TurtleRockCommon.EModifyOp
enum class EModifyOp : uint8 {
	Mod_Invalid = 0,
	Mod_Add = 1,
	Mod_Subtract = 2,
	Mod_Override = 3,
	Mod_MAX = 4
};

// Enum TurtleRockCommon.ETRSCubemapLayout
enum class ETRSCubemapLayout : uint8 {
	Standard = 0,
	StandardInverse = 1,
	Oculus = 2,
	OculusInverse = 3,
	ETRSCubemapLayout_MAX = 4
};

// ScriptStruct TurtleRockCommon.Evaluator
// Size: 0x40 (Inherited: 0x00)
struct FEvaluator {
	char pad_0[0x8]; // 0x00(0x08)
	bool bInvertTest; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Weight; // 0x0c(0x04)
	enum class EEvaluationType EvalType; // 0x10(0x01)
	char pad_11[0x2f]; // 0x11(0x2f)
};

// ScriptStruct TurtleRockCommon.EvaluatorItem
// Size: 0x08 (Inherited: 0x00)
struct FEvaluatorItem {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TurtleRockCommon.EvaluatorContext
// Size: 0x01 (Inherited: 0x00)
struct FEvaluatorContext {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TurtleRockCommon.EvaluatorConfig
// Size: 0x01 (Inherited: 0x00)
struct FEvaluatorConfig {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TurtleRockCommon.MessageResponse
// Size: 0x70 (Inherited: 0x00)
struct FMessageResponse {
	struct FString Version; // 0x00(0x10)
	struct FMessageSet motd; // 0x10(0x60)
};

// ScriptStruct TurtleRockCommon.MessageSet
// Size: 0x60 (Inherited: 0x00)
struct FMessageSet {
	struct FString english; // 0x00(0x10)
	struct FString french; // 0x10(0x10)
	struct FString german; // 0x20(0x10)
	struct FString spanish; // 0x30(0x10)
	struct FString korean; // 0x40(0x10)
	struct FString chinese; // 0x50(0x10)
};

// ScriptStruct TurtleRockCommon.PeriodicMovementParams
// Size: 0x10 (Inherited: 0x00)
struct FPeriodicMovementParams {
	float PrimaryAmplitude; // 0x00(0x04)
	float PrimaryFrequency; // 0x04(0x04)
	float SecondaryAmplitude; // 0x08(0x04)
	float SecondaryFrequency; // 0x0c(0x04)
};

// ScriptStruct TurtleRockCommon.TaskManRelayGuid
// Size: 0x10 (Inherited: 0x00)
struct FTaskManRelayGuid {
	struct FString Guid; // 0x00(0x10)
};

// ScriptStruct TurtleRockCommon.TaskManRelayDeviceCode
// Size: 0x10 (Inherited: 0x00)
struct FTaskManRelayDeviceCode {
	struct FString DeviceCode; // 0x00(0x10)
};

// ScriptStruct TurtleRockCommon.TaskManClientVersion
// Size: 0x04 (Inherited: 0x00)
struct FTaskManClientVersion {
	int32_t Changelist; // 0x00(0x04)
};

// ScriptStruct TurtleRockCommon.CrashContextOuter
// Size: 0xa0 (Inherited: 0x00)
struct FCrashContextOuter {
	struct FAppContext AppContext; // 0x00(0x60)
	struct FEnvironmentContext EnvironmentContext; // 0x60(0x20)
	struct FTRSCrashContext CrashContext; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
};

// ScriptStruct TurtleRockCommon.TRSCrashContext
// Size: 0x10 (Inherited: 0x00)
struct FTRSCrashContext {
	struct FString CrashType; // 0x00(0x10)
};

// ScriptStruct TurtleRockCommon.EnvironmentContext
// Size: 0x20 (Inherited: 0x00)
struct FEnvironmentContext {
	struct FString TaskManRelayIp; // 0x00(0x10)
	struct FString DeviceCode; // 0x10(0x10)
};

// ScriptStruct TurtleRockCommon.AppContext
// Size: 0x60 (Inherited: 0x00)
struct FAppContext {
	struct FString Project; // 0x00(0x10)
	struct FString ExecutableName; // 0x10(0x10)
	struct FString BuildConfiguration; // 0x20(0x10)
	struct FString BuildVersion; // 0x30(0x10)
	struct FString CommandLine; // 0x40(0x10)
	struct FString Platform; // 0x50(0x10)
};

// ScriptStruct TurtleRockCommon.AppContextOuter
// Size: 0x70 (Inherited: 0x00)
struct FAppContextOuter {
	struct FAppContext AppContext; // 0x00(0x60)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct TurtleRockCommon.RowHandleNameCache
// Size: 0x40 (Inherited: 0x00)
struct FRowHandleNameCache {
	struct TArray<struct FString> DataTableNames; // 0x00(0x10)
	struct TArray<struct FString> DataTablePaths; // 0x10(0x10)
	struct TArray<struct FString> RowNames; // 0x20(0x10)
	struct TArray<struct FString> RowDisplayNames; // 0x30(0x10)
};

