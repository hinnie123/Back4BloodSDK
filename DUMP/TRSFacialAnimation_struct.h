// Enum TRSFacialAnimation.ELipsyncViseme
enum class ELipsyncViseme : uint8 {
	None = 0,
	AA = 1,
	AH = 2,
	h = 3,
	AO = 4,
	AW = 5,
	OW = 6,
	OY = 7,
	UH = 8,
	UW = 9,
	EH = 10,
	AE = 11,
	IH = 12,
	AY = 13,
	y = 14,
	IY = 15,
	EY = 16,
	r = 17,
	ER = 18,
	l = 19,
	w = 20,
	CH = 21,
	j = 22,
	SH = 23,
	ZH = 24,
	n = 25,
	NG = 26,
	DH = 27,
	d = 28,
	g = 29,
	t = 30,
	z = 31,
	s = 32,
	k = 33,
	TH = 34,
	f = 35,
	v = 36,
	m = 37,
	b = 38,
	p = 39,
	Count = 40,
	ELipsyncViseme_MAX = 41
};

// ScriptStruct TRSFacialAnimation.CurveToExpressionMap
// Size: 0x18 (Inherited: 0x00)
struct FCurveToExpressionMap {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<enum class EFacialExpression> Expressions; // 0x08(0x10)
};

// ScriptStruct TRSFacialAnimation.LipsyncLineRow
// Size: 0x28 (Inherited: 0x08)
struct FLipsyncLineRow : FTableRowBase {
	struct TArray<struct FLipsyncTimingEntry> LipsyncTiming; // 0x08(0x10)
	struct TArray<uint16_t> Visemes; // 0x18(0x10)
};

// ScriptStruct TRSFacialAnimation.LipsyncTimingEntry
// Size: 0x08 (Inherited: 0x00)
struct FLipsyncTimingEntry {
	uint16_t StartTime; // 0x00(0x02)
	uint16_t EndTime; // 0x02(0x02)
	uint16_t FirstViseme; // 0x04(0x02)
	uint16_t LastViseme; // 0x06(0x02)
};

// ScriptStruct TRSFacialAnimation.LipsyncLocalizationRow
// Size: 0x58 (Inherited: 0x08)
struct FLipsyncLocalizationRow : FTableRowBase {
	struct FString UnrealLanguageCode; // 0x08(0x10)
	struct FString WwiseLanguageCode; // 0x18(0x10)
	bool bIsDefaultLanguage; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UDataTable> LineTable; // 0x30(0x28)
};

