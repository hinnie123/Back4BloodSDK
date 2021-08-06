// BlueprintGeneratedClass GamesPlayedStatTracker_BP.GamesPlayedStatTracker_BP_C
// Size: 0x58 (Inherited: 0x40)
struct UGamesPlayedStatTracker_BP_C : UStatTrackerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x40(0x08)
	enum class EPlayerProfileStat Stat; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct AGobiCharacter* CurrentCharacter; // 0x50(0x08)

	void OnInit(); // Function GamesPlayedStatTracker_BP.GamesPlayedStatTracker_BP_C.OnInit // (None) // @ game+0xfffffffec0000000
};

