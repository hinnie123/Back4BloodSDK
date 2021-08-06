// Class TRSPerf.TRSPerfOverall
// Size: 0x90 (Inherited: 0x30)
struct UTRSPerfOverall : UObject {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class TRSPerf.TRSPerfSubsystem
// Size: 0x50 (Inherited: 0x38)
struct UTRSPerfSubsystem : UEngineSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct UTRSPerfOverall* PerfOverall; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

