// Enum Gobi.EPlayerHordeTriggerTypes
enum class EPlayerHordeTriggerTypes : uint8 {
	BirdSite = 0,
	Snitched = 1,
	ReekerExplosion = 2,
	CarAlarm = 3,
	DoorAlarm = 4,
	SleeperGrapple = 5,
	Count = 6,
	EPlayerHordeTriggerTypes_MAX = 7
};

// Enum Gobi.EMissionEndReason
enum class EMissionEndReason : uint8 {
	Complete = 0,
	Fail = 1,
	Abort = 2,
	EMissionEndReason_MAX = 3
};

// Enum Gobi.EModPhase
enum class EModPhase : uint8 {
	FirstApplication = 0,
	PlayerSpawn = 1,
	ItemCreation = 2,
	AISpawn = 3,
	AISpawnDeckGen = 4,
	AISpawnDeckPreGen = 5,
	AIPossess = 6,
	ActiveAreaSetGen = 7,
	PostPlayerSpawn = 8,
	Invalid = 9,
	EModPhase_MAX = 10
};

// Enum Gobi.EGameplayCardDeckType
enum class EGameplayCardDeckType : uint8 {
	PvE = 0,
	PvP = 1,
	Count = 2,
	EGameplayCardDeckType_MAX = 3
};

// Enum Gobi.EGameplayCardAffinity
enum class EGameplayCardAffinity : uint8 {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	Wild = 3,
	None = 4,
	EGameplayCardAffinity_MAX = 5
};

// Enum Gobi.EGameplayCardCategory
enum class EGameplayCardCategory : uint8 {
	All = 0,
	Challenge = 1,
	Loadout = 2,
	Scavenger = 3,
	Backpack = 4,
	Saferoom = 5,
	Vendor = 6,
	Starter = 7,
	Hero = 8,
	Stat = 9,
	Talent = 10,
	Economy = 11,
	Loot = 12,
	Ability = 13,
	Zombie = 14,
	Event = 15,
	Scenario = 16,
	Objective = 17,
	Finale = 18,
	Offense = 19,
	Defense = 20,
	Utility = 21,
	Mobility = 22,
	EGameplayCardCategory_MAX = 23
};

// Enum Gobi.EMatchmakingTeam
enum class EMatchmakingTeam : uint8 {
	TeamA = 0,
	TeamB = 1,
	Unknown = 2,
	Count = 2,
	EMatchmakingTeam_MAX = 3
};

// Enum Gobi.EFTUETutorial
enum class EFTUETutorial : uint8 {
	PreRound_CharacterSelect = 0,
	PreRound_DeckSelect = 1,
	PreRound_CharacterLockIn = 2,
	PreRound_CorruptionCards = 3,
	PreRound_CardDraw = 4,
	PreRound_ActiveCards = 5,
	Matchmaking_NewRun = 6,
	Matchmaking_ChangeSettings = 7,
	Matchmaking_MapUnlocks = 8,
	Matchmaking_ContinueRun = 9,
	Caravans_UnlockAnything = 10,
	DeckManager_CreateDeck = 11,
	DeckManager_AddSomeCards = 12,
	DeckManager_AddEnoughCards = 13,
	ZMS_SelectFamily = 14,
	ZMS_SelectVariant = 15,
	ZMS_Upgrade = 16,
	FortHope_EnterPracticeRange = 17,
	FortHope_CustomizeWeapon = 18,
	FortHope_CustomizeCharacter = 19,
	TutorialVideo_Runs = 20,
	TutorialVideo_CardSystem = 21,
	TutorialVideo_SupplyLines = 22,
	Count = 23,
	EFTUETutorial_MAX = 24
};

// Enum Gobi.EStaminaState
enum class EStaminaState : uint8 {
	Exhausted = 0,
	Low = 1,
	High = 2,
	Full = 3,
	EStaminaState_MAX = 4
};

// Enum Gobi.EMatchmakingState
enum class EMatchmakingState : uint8 {
	NotMatchmaking = 0,
	JoiningParty = 1,
	JoiningPool = 2,
	InPool = 3,
	LeavingPool = 4,
	JoiningGameSession = 5,
	AllocatingDedi = 6,
	WaitingForDediStartup = 7,
	EMatchmakingState_MAX = 8
};

// Enum Gobi.EMissionDifficulty
enum class EMissionDifficulty : uint8 {
	Easy = 0,
	Normal = 1,
	Hard = 2,
	Legendary = 3,
	PvP = 4,
	Count = 5,
	EMissionDifficulty_MAX = 6
};

// Enum Gobi.EPartySafeRoomState
enum class EPartySafeRoomState : uint8 {
	NotInRoom = 0,
	InStartingRoom = 1,
	InCheckpointRoom = 2,
	InEndLevelRoom = 3,
	InRestArea = 4,
	EPartySafeRoomState_MAX = 5
};

// Enum Gobi.EGameModeClassification
enum class EGameModeClassification : uint8 {
	MainMenu = 0,
	SocialSpace = 1,
	PVPClassic = 2,
	PVPHoldout = 3,
	Coop = 4,
	Count = 5,
	EGameModeClassification_MAX = 6
};

// Enum Gobi.EGameModeType
enum class EGameModeType : uint8 {
	Unknown = 0,
	MainMenu = 1,
	Hub = 2,
	Mission = 3,
	Versus = 4,
	EGameModeType_MAX = 5
};

// Enum Gobi.EGobiTeam
enum class EGobiTeam : uint8 {
	Hero = 0,
	Zombie = 1,
	Unknown = 2,
	Count = 2,
	EGobiTeam_MAX = 3
};

// Enum Gobi.EItemCategory
enum class EItemCategory : uint8 {
	Unknown = 0,
	ConsumablesStart = 1,
	Ammo = 1,
	Perk = 2,
	Offensive = 3,
	Defensive = 4,
	Utility = 5,
	ConsumablesEnd = 6,
	WeaponsStart = 7,
	Sidearm = 7,
	Melee = 8,
	AssaultRifle = 9,
	LMG = 10,
	SMG = 11,
	Shotgun = 12,
	SniperRifle = 13,
	WeaponsEnd = 14,
	AttachmentsStart = 15,
	Optic = 15,
	Barrel = 16,
	Magazine = 17,
	Stock = 18,
	AttachmentsEnd = 19,
	Currency = 20,
	Count = 21,
	EItemCategory_MAX = 22
};

// Enum Gobi.EItemAttributeType
enum class EItemAttributeType : uint8 {
	Damage = 0,
	Range = 1,
	Accuracy = 2,
	Mobility = 3,
	Radius = 4,
	Heal = 5,
	Stun = 6,
	Burn = 7,
	UseTime = 8,
	Duration = 9,
	TempHealth = 10,
	Replenish = 11,
	SlowTarget = 12,
	Vulnerable = 13,
	Supply = 14,
	ReviveHealth = 15,
	Reload = 16,
	Handling = 17,
	ClipSize = 18,
	FireRate = 19,
	Count = 20,
	EItemAttributeType_MAX = 21
};

// Enum Gobi.EItemPickupDialogue
enum class EItemPickupDialogue : uint8 {
	None = 0,
	Regular = 1,
	Critical = 2,
	EItemPickupDialogue_MAX = 3
};

// Enum Gobi.EItemTargetAffectsRange
enum class EItemTargetAffectsRange : uint8 {
	Single = 0,
	AoE = 1,
	Count = 2,
	EItemTargetAffectsRange_MAX = 3
};

// Enum Gobi.EItemTargetRange
enum class EItemTargetRange : uint8 {
	Close = 0,
	Ranged = 1,
	Count = 2,
	EItemTargetRange_MAX = 3
};

// Enum Gobi.EItemQuality
enum class EItemQuality : uint8 {
	Broken = 0,
	Improvised = 1,
	Uncommon = 2,
	Standard = 3,
	Superior = 4,
	Perfect = 5,
	Quest = 6,
	EItemQuality_MAX = 7
};

// Enum Gobi.EEquipmentSlot
enum class EEquipmentSlot : uint8 {
	PrimaryWeapon = 0,
	SecondaryWeapon = 1,
	DefensiveAbility = 2,
	Consumable1 = 3,
	Consumable2 = 4,
	Consumable3 = 5,
	Carried = 6,
	MountedWeapon = 7,
	CharacterAbility = 8,
	Count = 9,
	EEquipmentSlot_MAX = 10
};

// Enum Gobi.EItemType
enum class EItemType : uint8 {
	Default = 0,
	Equipment = 1,
	Consumable = 2,
	WeaponAttachment = 3,
	Quest = 4,
	Ammo = 5,
	Perk = 6,
	Carried = 7,
	MountedWeapon = 8,
	Count = 9,
	EItemType_MAX = 10
};

// Enum Gobi.EFriendInviteStatus
enum class EFriendInviteStatus : uint8 {
	Unknown = 0,
	Accepted = 1,
	PendingInbound = 2,
	PendingOutbound = 3,
	Blocked = 4,
	EFriendInviteStatus_MAX = 5
};

// Enum Gobi.EHydraAuthType
enum class EHydraAuthType : uint8 {
	Unknown = 0,
	Null = 1,
	PSN = 2,
	GDK = 3,
	Steam = 4,
	EOS = 5,
	EHydraAuthType_MAX = 6
};

// Enum Gobi.ESessionPrivacy
enum class ESessionPrivacy : uint8 {
	Open = 0,
	Friends = 1,
	InviteOnly = 2,
	Closed = 3,
	ESessionPrivacy_MAX = 4
};

// Enum Gobi.EMantleState
enum class EMantleState : uint8 {
	Idle = 0,
	ProceduralClimbing = 1,
	AnimatedClimbing = 2,
	Count = 3,
	EMantleState_MAX = 4
};

// Enum Gobi.ELoadoutSource
enum class ELoadoutSource : uint8 {
	Character = 0,
	GameplayMod = 1,
	ELoadoutSource_MAX = 2
};

// Enum Gobi.EIntensityMode
enum class EIntensityMode : uint8 {
	IM_Always = 0,
	IM_Distance_To_Hero = 1,
	IM_Never = 2,
	IM_MAX = 3
};

// Enum Gobi.ELocoChooseMode
enum class ELocoChooseMode : uint8 {
	Random = 0,
	TagQuery = 1,
	Count = 2,
	ELocoChooseMode_MAX = 3
};

// Enum Gobi.EGrappleState
enum class EGrappleState : uint8 {
	Idle = 0,
	Grappled = 1,
	Breakout = 2,
	EGrappleState_MAX = 3
};

// Enum Gobi.EUIState
enum class EUIState : uint8 {
	None = 0,
	LegalScreen = 1,
	SignInScreen = 2,
	Movie = 3,
	PreRound = 4,
	PostRound = 5,
	InGameCinematic = 6,
	Credits = 7,
	EUIState_MAX = 8
};

// Enum Gobi.EIncapState
enum class EIncapState : uint8 {
	None = 0,
	Incap = 1,
	Reviving = 2,
	EIncapState_MAX = 3
};

// Enum Gobi.EClingState
enum class EClingState : uint8 {
	Idle = 0,
	LeapingToClingLocation = 1,
	Clinging = 2,
	LeapingToGround = 3,
	Count = 4,
	EClingState_MAX = 5
};

// Enum Gobi.EPreRoundStep
enum class EPreRoundStep : uint8 {
	None = 0,
	CharacterSelect = 1,
	DeckSelect = 2,
	Lineup = 3,
	CardDraw = 4,
	Finished = 5,
	EPreRoundStep_MAX = 6
};

// Enum Gobi.EGobiSessionType
enum class EGobiSessionType : uint8 {
	Invalid = 0,
	Splitscreen = 1,
	Group = 2,
	Game = 3,
	Count = 4,
	EGobiSessionType_MAX = 5
};

// Enum Gobi.ECharacterCustomizationSlot
enum class ECharacterCustomizationSlot : uint8 {
	Head = 0,
	Torso = 1,
	Legs = 2,
	Outfit = 3,
	Count = 4,
	IndividualSlotCount = 3,
	ECharacterCustomizationSlot_MAX = 5
};

// Enum Gobi.EPlayerProfileStat
enum class EPlayerProfileStat : uint8 {
	RiddenKilled = 0,
	RiddenMutationsKilled = 1,
	RiddenBossesKilled = 2,
	RiddenKilledByType = 3,
	RiddenKilledByWeapon = 4,
	RiddenKilledWhileIncapped = 5,
	CleanersRevived = 6,
	CleanersRescued = 7,
	FriendlyCleanersKilled = 8,
	HealingApplied = 9,
	TimesDiedAsCleaner = 10,
	TimesIncappedAsCleaner = 11,
	TreasureDoorsOpened = 12,
	HordesTriggered = 13,
	CardsPlayed = 14,
	BarSongsHeard = 15,
	AmmoDropped = 16,
	MissionsCompleted = 17,
	MissionsCompletedPerCleaner = 18,
	MissionsCompletedPerMap = 19,
	MissionsCompletedOnClassicPerMap = 20,
	MissionsCompletedOnSurvivorPerMap = 21,
	MissionsCompletedOnNightmarePerMap = 22,
	MissionsCompletedOnLegendaryPerMap = 23,
	CaravanItemsPurchased = 24,
	SnitchersSilenced = 25,
	PVPKillsAsCleaners = 26,
	PVPIncapsAsRidden = 27,
	PVPKillsAsRidden = 28,
	PVPGamesPlayed = 29,
	PVPGamesWon = 30,
	EnemyDamageInflicted = 31,
	FriendlyDamageInflicted = 32,
	CommonRiddenDamageInflicted = 33,
	SpecialRiddenDamageInflicted = 34,
	EnemyCleanerDamageInflicted = 35,
	OtherDamageInflicted = 36,
	WeakSpotDamageInflicted = 37,
	Count = 38,
	EPlayerProfileStat_MAX = 39
};

// Enum Gobi.EAbilityType
enum class EAbilityType : uint8 {
	Unknown = 0,
	ZombiePrimary = 1,
	ZombieSpecial1 = 2,
	ZombieSpecial2 = 3,
	ZombieBasicAttack = 4,
	EAbilityType_MAX = 5
};

// Enum Gobi.ETriggerEffectMode
enum class ETriggerEffectMode : uint8 {
	Off = 0,
	Weapon = 1,
	Vibration = 2,
	Feedback = 3,
	ETriggerEffectMode_MAX = 4
};

// Enum Gobi.EMeleeState
enum class EMeleeState : uint8 {
	Idle = 0,
	Cooking = 1,
	MeleeActive = 2,
	MeleeImpact = 3,
	PrepReattack = 4,
	Count = 5,
	EMeleeState_MAX = 6
};

// Enum Gobi.EMeleeCollisionMode
enum class EMeleeCollisionMode : uint8 {
	OverlapVolumes = 0,
	SweptVolume = 1,
	OverlapImpactVolumes = 2,
	EMeleeCollisionMode_MAX = 3
};

// Enum Gobi.EUsablePriority
enum class EUsablePriority : uint8 {
	VeryLow = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	VeryHigh = 4,
	EUsablePriority_MAX = 5
};

// Enum Gobi.EUsableTraceLocation
enum class EUsableTraceLocation : uint8 {
	CalculatedActorBoundsOrigin = 0,
	ActorOrigin = 1,
	UsableTriggerOrigin = 2,
	IntersectionPoint = 3,
	Custom = 4,
	EUsableTraceLocation_MAX = 5
};

// Enum Gobi.EInventoryConditionMode
enum class EInventoryConditionMode : uint8 {
	AnyTrue = 0,
	AllTrue = 1,
	AnyFalse = 2,
	AllFalse = 3,
	EInventoryConditionMode_MAX = 4
};

// Enum Gobi.EMissionObjectiveConditionType
enum class EMissionObjectiveConditionType : uint8 {
	ObjectiveComplete = 0,
	ObjectiveCountFinished = 1,
	EMissionObjectiveConditionType_MAX = 2
};

// Enum Gobi.ECutscenePhase
enum class ECutscenePhase : uint8 {
	None = 0,
	IntroFadeOut = 1,
	LevelStreaming = 2,
	Setup = 3,
	FadeIn = 4,
	PlaySequence = 5,
	OutroFadeOut = 6,
	Cleanup = 7,
	Done = 8,
	ECutscenePhase_MAX = 9
};

// Enum Gobi.EHeroUseState
enum class EHeroUseState : uint8 {
	Idle = 0,
	Using = 1,
	EHeroUseState_MAX = 2
};

// Enum Gobi.EAASVisibility
enum class EAASVisibility : uint8 {
	Unknown = 0,
	NotVisible = 1,
	Visible = 2,
	EAASVisibility_MAX = 3
};

// Enum Gobi.EDoorState
enum class EDoorState : uint8 {
	Door_Closed = 0,
	Door_Closing = 1,
	Door_Open = 2,
	Door_Opening = 3,
	Door_OpenReversed = 4,
	Door_OpeningReversed = 5,
	Door_Destroyed = 6,
	Door_MAX = 7
};

// Enum Gobi.EBurstAttackState
enum class EBurstAttackState : uint8 {
	Idle = 0,
	BurstLoop = 1,
	BurstEnd = 2,
	Melee = 3,
	Squeeze = 4,
	Count = 5,
	EBurstAttackState_MAX = 6
};

// Enum Gobi.EAOEAttackState
enum class EAOEAttackState : uint8 {
	Idle = 0,
	AttackLoop = 1,
	AttackEnd = 2,
	Count = 3,
	EAOEAttackState_MAX = 4
};

// Enum Gobi.EDeathGasSpawnState
enum class EDeathGasSpawnState : uint8 {
	Idle = 0,
	Spawning = 1,
	Count = 2,
	EDeathGasSpawnState_MAX = 3
};

// Enum Gobi.EPerkType
enum class EPerkType : uint8 {
	Permanent = 0,
	SelectedItem = 1,
	Temp = 2,
	Count = 3,
	EPerkType_MAX = 4
};

// Enum Gobi.EVendorCategory
enum class EVendorCategory : uint8 {
	Weapons = 0,
	Accessories = 1,
	Attachments = 2,
	Replenishments = 3,
	Cards = 4,
	Count = 5,
	EVendorCategory_MAX = 6
};

// Enum Gobi.EAmmoType
enum class EAmmoType : uint8 {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	Secondary = 3,
	Offensive = 4,
	Defensive = 5,
	Utility = 6,
	Count = 7,
	EAmmoType_MAX = 8
};

// Enum Gobi.EAlarmMode
enum class EAlarmMode : uint8 {
	Auto = 0,
	On = 1,
	Off = 2,
	EAlarmMode_MAX = 3
};

// Enum Gobi.ESqueezeState
enum class ESqueezeState : uint8 {
	Idle = 0,
	SqueezeActive = 1,
	SqueezeEnd = 2,
	Count = 3,
	ESqueezeState_MAX = 4
};

// Enum Gobi.ETitanState
enum class ETitanState : uint8 {
	Hidden = 0,
	Arrive = 1,
	Plan = 2,
	Idle = 3,
	Turn = 4,
	TailSwipe = 5,
	SweepForward = 6,
	TongueGrab = 7,
	TentacleAttack = 8,
	Retreat = 9,
	Dying = 10,
	Dead = 11,
	ETitanState_MAX = 12
};

// Enum Gobi.ETitanTentacleId
enum class ETitanTentacleId : uint8 {
	FrontLeft = 0,
	FrontRight = 1,
	BackLeft = 2,
	BackRight = 3,
	Count = 4,
	Invalid = 5,
	ETitanTentacleId_MAX = 6
};

// Enum Gobi.ETitanStage1State
enum class ETitanStage1State : uint8 {
	Dormant = 0,
	Attacking = 1,
	PainRoar = 2,
	Retreating = 3,
	ETitanStage1State_MAX = 4
};

// Enum Gobi.ETitanStage1TentacleFlinchState
enum class ETitanStage1TentacleFlinchState : uint8 {
	Idle = 0,
	Flinching1 = 1,
	Flinching2 = 2,
	ETitanStage1TentacleFlinchState_MAX = 3
};

// Enum Gobi.ETitanStage1TentacleState
enum class ETitanStage1TentacleState : uint8 {
	Dormant = 0,
	Emerge = 1,
	Idle = 2,
	SlapAttackWindUp = 3,
	SlapAttackWindUpStumble = 4,
	SlapAttack = 5,
	SlapAttackGroundLoop = 6,
	SlapAttackRecover = 7,
	WoundedIdle = 8,
	AcidSprayAttackWindUp = 9,
	AcidSprayAttackEnter = 10,
	AcidSprayAttackLoop = 11,
	AcidSprayAttackExit = 12,
	PainRoar = 13,
	AcidSpray = 14,
	Retract = 15,
	ETitanStage1TentacleState_MAX = 16
};

// Enum Gobi.ETitanStage2And3State
enum class ETitanStage2And3State : uint8 {
	Dormant = 0,
	Plan = 1,
	Idle = 2,
	Stage2TentacleAttack = 3,
	Stage2Horde = 4,
	Stage2Retract = 5,
	Stage2End = 6,
	Retreat = 7,
	Dig = 8,
	Dying = 9,
	Dead = 10,
	Escape = 11,
	ETitanStage2And3State_MAX = 12
};

// Enum Gobi.ETitanStage2MouthState
enum class ETitanStage2MouthState : uint8 {
	Idle = 0,
	BiteTell = 1,
	Bite = 2,
	Roar = 3,
	Flinch = 4,
	RoarExit = 5,
	ETitanStage2MouthState_MAX = 6
};

// Enum Gobi.EEffectApplicationItemState
enum class EEffectApplicationItemState : uint8 {
	Idle = 0,
	Using = 1,
	FinishUse = 2,
	Count = 3,
	EEffectApplicationItemState_MAX = 4
};

// Enum Gobi.EDefibrillatorItemState
enum class EDefibrillatorItemState : uint8 {
	Idle = 0,
	Using = 1,
	Count = 2,
	EDefibrillatorItemState_MAX = 3
};

// Enum Gobi.EInventoryContainer
enum class EInventoryContainer : uint8 {
	PrimaryWeapon = 0,
	SecondaryWeapon = 1,
	Backpack = 2,
	Stash = 3,
	Count = 4,
	EInventoryContainer_MAX = 5
};

// Enum Gobi.EPickupSlot
enum class EPickupSlot : uint8 {
	DetermineBehaviorFromItem = 0,
	Currency = 1,
	EPickupSlot_MAX = 2
};

// Enum Gobi.EPickupCountType
enum class EPickupCountType : uint8 {
	eLimited = 0,
	eUnlimited = 1,
	EPickupCountType_MAX = 2
};

// Enum Gobi.EItemPickupCreationContext
enum class EItemPickupCreationContext : uint8 {
	DroppedFromPlayer = 0,
	CreatedFromLoot = 1,
	DroppedFromKill = 2,
	EItemPickupCreationContext_MAX = 3
};

// Enum Gobi.EHoldoutState
enum class EHoldoutState : uint8 {
	Idle = 0,
	Prep = 1,
	Horde = 2,
	Collapse = 3,
	Survival = 4,
	Ended = 5,
	Count = 6,
	EHoldoutState_MAX = 7
};

// Enum Gobi.EVendorAnimBehaviorState
enum class EVendorAnimBehaviorState : uint8 {
	Lonely = 0,
	Nag = 1,
	Interact = 2,
	EVendorAnimBehaviorState_MAX = 3
};

// Enum Gobi.EMutilationType
enum class EMutilationType : uint8 {
	Rupture = 0,
	BreakOff = 1,
	Invalid = 2,
	EMutilationType_MAX = 3
};

// Enum Gobi.EMutilationRegion
enum class EMutilationRegion : uint8 {
	Head = 0,
	Torso = 1,
	Chest = 2,
	Stomach = 3,
	LeftUpperArm = 4,
	LeftLowerArm = 5,
	LeftHand = 6,
	RightUpperArm = 7,
	RightLowerArm = 8,
	RightHand = 9,
	LeftUpperLeg = 10,
	LeftLowerLeg = 11,
	RightUpperLeg = 12,
	RightLowerLeg = 13,
	Legs = 14,
	LeftFoot = 15,
	RightFoot = 16,
	Count = 17,
	EMutilationRegion_MAX = 18
};

// Enum Gobi.EUIPlayerCategory
enum class EUIPlayerCategory : uint8 {
	Group = 0,
	Game = 1,
	GroupOrGame = 2,
	Teammates = 3,
	Enemies = 4,
	NonGroupTeammates = 5,
	NonGroupEnemies = 6,
	Friends = 7,
	FriendsOrGroup = 8,
	Count = 9,
	EUIPlayerCategory_MAX = 10
};

// Enum Gobi.EMatchmakingVoicePreference
enum class EMatchmakingVoicePreference : uint8 {
	DontCare = 0,
	Voice = 1,
	NoVoice = 2,
	EMatchmakingVoicePreference_MAX = 3
};

// Enum Gobi.EMatchmakingPool
enum class EMatchmakingPool : uint8 {
	Coop = 0,
	Coop8P = 1,
	Challenge = 2,
	VersusNoSwap = 3,
	VersusTeamSwap = 4,
	Tutorial = 5,
	SinglePlayer = 6,
	EMatchmakingPool_MAX = 7
};

// Enum Gobi.EDemoCameraMode
enum class EDemoCameraMode : uint8 {
	FreeLook = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	Count = 3,
	EDemoCameraMode_MAX = 4
};

// Enum Gobi.EFramerateCapMode
enum class EFramerateCapMode : uint8 {
	Off = 0,
	Display = 1,
	Custom = 2,
	EFramerateCapMode_MAX = 3
};

// Enum Gobi.EDLSSMode
enum class EDLSSMode : uint8 {
	UltraPerformance = 0,
	Performance = 1,
	Balanced = 2,
	Quality = 3,
	EDLSSMode_MAX = 4
};

// Enum Gobi.EAAMode
enum class EAAMode : uint8 {
	Off = 0,
	FXAA = 1,
	TAA = 2,
	DLSS = 3,
	EAAMode_MAX = 4
};

// Enum Gobi.EMatchmakingScreenMode
enum class EMatchmakingScreenMode : uint8 {
	Campaign = 0,
	Quickplay = 1,
	PvP = 2,
	SinglePlayer = 3,
	Custom = 4,
	Challenge = 5,
	Count = 6,
	EMatchmakingScreenMode_MAX = 7
};

// Enum Gobi.EIconPlatform
enum class EIconPlatform : uint8 {
	None = 0,
	PC = 1,
	Steam = 2,
	Switch = 3,
	XboxOne = 4,
	Xbox360 = 5,
	XSX = 6,
	PS4 = 7,
	DPX = 8,
	EIconPlatform_MAX = 9
};

// Enum Gobi.EUIScreenPresence
enum class EUIScreenPresence : uint8 {
	None = 0,
	CharacterCustomization = 1,
	DeckCustomization = 2,
	WeaponCustomization = 3,
	EUIScreenPresence_MAX = 4
};

// Enum Gobi.EMatchmakingScreenStep
enum class EMatchmakingScreenStep : uint8 {
	None = 0,
	Start = 1,
	SaveSlot = 2,
	Settings = 3,
	Challenge = 4,
	EMatchmakingScreenStep_MAX = 5
};

// Enum Gobi.ECampaignRunState
enum class ECampaignRunState : uint8 {
	InProgress = 0,
	Completed = 1,
	Failed = 2,
	ECampaignRunState_MAX = 3
};

// Enum Gobi.ESignInScreenState
enum class ESignInScreenState : uint8 {
	NotSignedIn = 0,
	SigningIn = 1,
	MessagingOnlineConfiguration = 2,
	AcceptingInvite = 3,
	CreatingPartySession = 4,
	CreatingGroupSession = 5,
	FetchingProfile = 6,
	SignedIn = 7,
	ESignInScreenState_MAX = 8
};

// Enum Gobi.EPopupButton
enum class EPopupButton : uint8 {
	Yes = 0,
	No = 1,
	Ok = 2,
	Cancel = 3,
	Custom = 4,
	EPopupButton_MAX = 5
};

// Enum Gobi.ECardFilter
enum class ECardFilter : uint8 {
	All = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	Wild = 4,
	None = 5,
	ECardFilter_MAX = 6
};

// Enum Gobi.EGamepadImage
enum class EGamepadImage : uint8 {
	Xbox360 = 0,
	XboxOne = 1,
	XboxSeries = 2,
	PS4 = 3,
	PS5 = 4,
	Steam = 5,
	Switch = 6,
	Other = 7,
	EGamepadImage_MAX = 8
};

// Enum Gobi.EItemFilter
enum class EItemFilter : uint8 {
	All = 0,
	Equipped = 1,
	PrimaryWeapons = 2,
	SecondaryWeapons = 3,
	WeaponAttachments = 4,
	Consumables = 5,
	Perks = 6,
	EItemFilter_MAX = 7
};

// Enum Gobi.EAbilityTimeModType
enum class EAbilityTimeModType : uint8 {
	Cooldown = 0,
	Duration = 1,
	EAbilityTimeModType_MAX = 2
};

// Enum Gobi.EAchievementStatRequirementLifetime
enum class EAchievementStatRequirementLifetime : uint8 {
	Career = 0,
	Session = 1,
	Map = 2,
	EAchievementStatRequirementLifetime_MAX = 3
};

// Enum Gobi.EAchievementRequirementOperator
enum class EAchievementRequirementOperator : uint8 {
	GreaterThan = 0,
	LessThan = 1,
	EAchievementRequirementOperator_MAX = 2
};

// Enum Gobi.EAchievementCategory
enum class EAchievementCategory : uint8 {
	General = 0,
	Campaign = 1,
	Versus = 2,
	Cards = 3,
	Cleaners = 4,
	Ridden = 5,
	Secret = 6,
	NonPlatform = 7,
	Count = 8,
	EAchievementCategory_MAX = 9
};

// Enum Gobi.EAchievementTrackerState
enum class EAchievementTrackerState : uint8 {
	WaitingForGameState = 0,
	WaitingForLevelStart = 1,
	LevelRunning = 2,
	EndOfLevel = 3,
	EAchievementTrackerState_MAX = 4
};

// Enum Gobi.EInclusionMode
enum class EInclusionMode : uint8 {
	NeighborsOfVisibleCells = 0,
	SoonToBeVisibleCells = 1,
	AudibleCells = 2,
	SoonToBeAudibleCells = 3,
	EInclusionMode_MAX = 4
};

// Enum Gobi.EWanderBucketDensityLevel
enum class EWanderBucketDensityLevel : uint8 {
	Empty = 0,
	Light = 1,
	Moderate = 2,
	Heavy = 3,
	EWanderBucketDensityLevel_MAX = 4
};

// Enum Gobi.ESplineActorOffsetMode
enum class ESplineActorOffsetMode : uint8 {
	ESAOM_NoOffset = 0,
	ESAOM_SpecifiedOffset = 1,
	ESAOM_RandomOffset = 2,
	ESAOM_RandomTranslation = 3,
	ESAOM_RandomRotation = 4,
	ESAOM_MAX = 5
};

// Enum Gobi.EHasEnemy
enum class EHasEnemy : uint8 {
	HasEnemy = 0,
	NoEnemy = 1,
	EHasEnemy_MAX = 2
};

// Enum Gobi.ESenseHearingMode
enum class ESenseHearingMode : uint8 {
	MinimumRadiusCheck = 0,
	OverlappingRadiusCheck = 1,
	ESenseHearingMode_MAX = 2
};

// Enum Gobi.EAudibilityMode
enum class EAudibilityMode : uint8 {
	EAM_Uninitialized = 0,
	EAM_IsUnhearable = 1,
	EAM_UseDistance = 2,
	EAM_MAX = 3
};

// Enum Gobi.EVisibilityMode
enum class EVisibilityMode : uint8 {
	EVM_IsUnseeable = 0,
	EVM_UseHalfspaceAndLOS = 1,
	EVM_UseHalfspaceOnly = 2,
	EVM_MAX = 3
};

// Enum Gobi.ECooldownType
enum class ECooldownType : uint8 {
	OnEnterPlay = 0,
	OnExitsPlay = 1,
	ECooldownType_MAX = 2
};

// Enum Gobi.ESpawnDeckState
enum class ESpawnDeckState : uint8 {
	DeckStatus_Idling = 0,
	DeckStatus_WaitingForDrawDelay = 1,
	DeckStatus_DrawingCard = 2,
	DeckStatus_CheckingForSpawners = 3,
	DeckStatus_CheckingForSpawnersWithoutOverride = 4,
	DeckStatus_SpawningForCard = 5,
	DeckStatus_Completed = 6,
	DeckStatus_MAX = 7
};

// Enum Gobi.EChildDeckBehavior
enum class EChildDeckBehavior : uint8 {
	AddAllDecks = 0,
	AddFirstValidDeck = 1,
	AddRandomFirstValidDeck = 2,
	EChildDeckBehavior_MAX = 3
};

// Enum Gobi.ECooldownContext
enum class ECooldownContext : uint8 {
	OnEnterPlay = 0,
	OnExitsPlay = 1,
	ECooldownContext_MAX = 2
};

// Enum Gobi.ECardMatchRule
enum class ECardMatchRule : uint8 {
	Any_Cards_Match_Query = 0,
	All_Cards_Match_Query = 1,
	ECardMatchRule_MAX = 2
};

// Enum Gobi.EMLP_TestMode
enum class EMLP_TestMode : uint8 {
	eNormalizeToMaxTime = 0,
	eInvertedNormalizeToMaxTime = 1,
	eFailWithinMaxTime = 2,
	EMLP_MAX = 3
};

// Enum Gobi.EEvalScoringEquation
enum class EEvalScoringEquation : uint8 {
	Linear = 0,
	Constant = 1,
	EEvalScoringEquation_MAX = 2
};

// Enum Gobi.EEvalComparison
enum class EEvalComparison : uint8 {
	GreaterThan = 0,
	LessThan = 1,
	GreaterThanOrEqualTo = 2,
	LessThanOrEqualTo = 3,
	NotEqualTo = 4,
	ExactlyEqualTo = 5,
	NearlyEqualTo = 6,
	Max = 7
};

// Enum Gobi.EEvalAngleAxis
enum class EEvalAngleAxis : uint8 {
	Yaw = 0,
	Pitch = 1,
	Roll = 2,
	Angle = 3,
	EEvalAngleAxis_MAX = 4
};

// Enum Gobi.EEvalDimension
enum class EEvalDimension : uint8 {
	In_3D = 0,
	In_2D = 1,
	In_Z = 2,
	In_Z_Absolute = 3,
	In_Delta = 4,
	In_MAX = 5
};

// Enum Gobi.EEvalType
enum class EEvalType : uint8 {
	Score = 0,
	Filter = 1,
	FilterAndScore = 2,
	EEvalType_MAX = 3
};

// Enum Gobi.EAIPauseResume
enum class EAIPauseResume : uint8 {
	AI_Pause = 0,
	AI_Resume = 1,
	AI_MAX = 2
};

// Enum Gobi.EAnimNotifySpawnImpactDirectionOverride
enum class EAnimNotifySpawnImpactDirectionOverride : uint8 {
	None = 0,
	BoneForward = 1,
	ActorForward = 2,
	EAnimNotifySpawnImpactDirectionOverride_MAX = 3
};

// Enum Gobi.EAnimNotifySpawnImpactTraceDirection
enum class EAnimNotifySpawnImpactTraceDirection : uint8 {
	Down = 0,
	Forward = 1,
	Up = 2,
	EAnimNotifySpawnImpactTraceDirection_MAX = 3
};

// Enum Gobi.EClampInputRotationType
enum class EClampInputRotationType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	EClampInputRotationType_MAX = 2
};

// Enum Gobi.ECorrectionMode
enum class ECorrectionMode : uint8 {
	CM_NoLimit = 0,
	CM_LimitCorrection = 1,
	CM_LimitCorrectionWithRootMotion = 2,
	CM_MAX = 3
};

// Enum Gobi.ECorrectionAxis
enum class ECorrectionAxis : uint8 {
	CA_Yaw = 0,
	CA_Pitch = 1,
	CA_Roll = 2,
	CA_All = 3,
	CA_MAX = 4
};

// Enum Gobi.ECorrectionDimension
enum class ECorrectionDimension : uint8 {
	CD_3D = 0,
	CD_2D = 1,
	CD_Z = 2,
	CD_MAX = 3
};

// Enum Gobi.EApplyDamageEffectModType
enum class EApplyDamageEffectModType : uint8 {
	ApplyOnDealDamage = 0,
	ApplyOnTakeDamage = 1,
	EApplyDamageEffectModType_MAX = 2
};

// Enum Gobi.EApplyOnItemAppliedTargeting
enum class EApplyOnItemAppliedTargeting : uint8 {
	Self = 0,
	Other = 1,
	Both = 2,
	Target = 3,
	EApplyOnItemAppliedTargeting_MAX = 4
};

// Enum Gobi.EItemComparison
enum class EItemComparison : uint8 {
	None = 0,
	Gain = 1,
	Loss = 2,
	EItemComparison_MAX = 3
};

// Enum Gobi.EWwiseGameplayState
enum class EWwiseGameplayState : uint8 {
	None = 0,
	Saferoom = 1,
	Explore = 2,
	Horde = 3,
	EWwiseGameplayState_MAX = 4
};

// Enum Gobi.PreferenceQuadrant
enum class PreferenceQuadrant : uint8 {
	FrontRight = 0,
	FrontLeft = 1,
	BackLeft = 2,
	BackRight = 3,
	MaxQuadrants = 4,
	PreferenceQuadrant_MAX = 5
};

// Enum Gobi.PreferenceRadius
enum class PreferenceRadius : uint8 {
	Fray = 0,
	FrayCallout = 1,
	Close = 2,
	Far = 3,
	MaxRadii = 4,
	PreferenceRadius_MAX = 5
};

// Enum Gobi.EBadgeEditMode
enum class EBadgeEditMode : uint8 {
	Emblem = 0,
	Title = 1,
	Banner = 2,
	EBadgeEditMode_MAX = 3
};

// Enum Gobi.EBirdState
enum class EBirdState : uint8 {
	Uninitialized = 0,
	ReadyForTakeOff = 1,
	TakeOffPause = 2,
	Flying = 3,
	Landing = 4,
	LandedTurning = 5,
	LandedInert = 6,
	Dead = 7,
	EBirdState_MAX = 8
};

// Enum Gobi.EBirdFacing
enum class EBirdFacing : uint8 {
	Random = 0,
	PointNormal = 1,
	PointNormalTowardSystem = 2,
	PointNormalAwayFromSystem = 3,
	EBirdFacing_MAX = 4
};

// Enum Gobi.EBirdAfterInitialFlight
enum class EBirdAfterInitialFlight : uint8 {
	Normal = 0,
	Inert = 1,
	EBirdAfterInitialFlight_MAX = 2
};

// Enum Gobi.EExplodModType
enum class EExplodModType : uint8 {
	SuicideExplosion = 0,
	PopExplosion = 1,
	EExplodModType_MAX = 2
};

// Enum Gobi.EBoneVisibilityChange
enum class EBoneVisibilityChange : uint8 {
	eHide = 0,
	eUnhide = 1,
	EBoneVisibilityChange_MAX = 2
};

// Enum Gobi.ETetherPriority
enum class ETetherPriority : uint8 {
	Forced = 0,
	Team = 1,
	Scripted = 2,
	Count = 3,
	ETetherPriority_MAX = 4
};

// Enum Gobi.ETetherTarget
enum class ETetherTarget : uint8 {
	OnlyHeroBots = 0,
	SkipHeroBots = 1,
	All = 2,
	Count = 3,
	ETetherTarget_MAX = 4
};

// Enum Gobi.EBotFollowTarget
enum class EBotFollowTarget : uint8 {
	Nearest = 0,
	ClosestToObjective = 1,
	FurthestFromObjective = 2,
	Count = 3,
	EBotFollowTarget_MAX = 4
};

// Enum Gobi.EBotClassRole
enum class EBotClassRole : uint8 {
	Combatant = 0,
	NonCombatant = 1,
	Count = 2,
	EBotClassRole_MAX = 3
};

// Enum Gobi.EBotType
enum class EBotType : uint8 {
	PlayerBot = 0,
	AllBotTeam = 1,
	NPC = 2,
	Disabled = 3,
	Count = 4,
	EBotType_MAX = 5
};

// Enum Gobi.EBreakableState
enum class EBreakableState : uint8 {
	Pristine = 0,
	Deforming = 1,
	Breaking = 2,
	Destroyed = 3,
	EBreakableState_MAX = 4
};

// Enum Gobi.EBruteState
enum class EBruteState : uint8 {
	BS_Idle = 0,
	BS_Melee = 1,
	BS_TumorToss = 2,
	BS_ReachIn = 3,
	BS_Despawn = 4,
	BS_Count = 5,
	BS_MAX = 6
};

// Enum Gobi.EBTParallelExMode
enum class EBTParallelExMode : uint8 {
	ParallelPrimary = 0,
	ParallelSecondary = 1,
	EBTParallelExMode_MAX = 2
};

// Enum Gobi.EBTGameplayTagRestart
enum class EBTGameplayTagRestart : uint8 {
	ValueChange = 0,
	ResultChange = 1,
	EBTGameplayTagRestart_MAX = 2
};

// Enum Gobi.EBoolValue
enum class EBoolValue : uint8 {
	BV_True = 0,
	BV_False = 1,
	BV_MAX = 2
};

// Enum Gobi.EBlackboardValueContext
enum class EBlackboardValueContext : uint8 {
	None = 0,
	Activation = 1,
	Deactivation = 2,
	OnChange = 4,
	EBlackboardValueContext_MAX = 5
};

// Enum Gobi.EBlackboardValueOperation
enum class EBlackboardValueOperation : uint8 {
	Clear = 0,
	Copy = 1,
	Move = 2,
	EBlackboardValueOperation_MAX = 3
};

// Enum Gobi.ECanTriggerActionOptions
enum class ECanTriggerActionOptions : uint8 {
	None = 0,
	Set = 1,
	Clear = 2,
	OnChangeOnly = 4,
	ECanTriggerActionOptions_MAX = 5
};

// Enum Gobi.EGameplayTagContext
enum class EGameplayTagContext : uint8 {
	Activation = 0,
	Deactivation = 1,
	EGameplayTagContext_MAX = 2
};

// Enum Gobi.EGameplayTagOperation
enum class EGameplayTagOperation : uint8 {
	AddOnActivate = 0,
	AddOnDeactivate = 1,
	RemoveOnActivate = 2,
	RemoveOnDeactivate = 3,
	ClearOnActivate = 4,
	ClearOnDeactivate = 5,
	AddAndRestore = 6,
	ClearAndRestore = 7,
	EGameplayTagOperation_MAX = 8
};

// Enum Gobi.ELifeState
enum class ELifeState : uint8 {
	LS_Invalid = 0,
	LS_Alive = 1,
	LS_Incap = 2,
	LS_FakeDead = 3,
	LS_Dead = 4,
	LS_RescueFromRespawn = 5,
	LS_MAX = 6
};

// Enum Gobi.ETimeframe
enum class ETimeframe : uint8 {
	Activation = 0,
	Deactivation = 1,
	ETimeframe_MAX = 2
};

// Enum Gobi.EBuildEnvironmentConfigurationState
enum class EBuildEnvironmentConfigurationState : uint8 {
	Initial = 0,
	Fetching = 1,
	Skipped = 2,
	FetchFailed = 3,
	InvalidSignature = 4,
	JsonParseFailure = 5,
	FetchSucceeded = 6,
	EBuildEnvironmentConfigurationState_MAX = 7
};

// Enum Gobi.EFerryState
enum class EFerryState : uint8 {
	Idle = 0,
	Moving = 1,
	Finished = 2,
	Destroyed = 3,
	EFerryState_MAX = 4
};

// Enum Gobi.EActiveCampaignRunType
enum class EActiveCampaignRunType : uint8 {
	None = 0,
	NewRun = 1,
	ResumedRun = 2,
	EActiveCampaignRunType_MAX = 3
};

// Enum Gobi.ECampaignRoundResult
enum class ECampaignRoundResult : uint8 {
	None = 0,
	Succeeded = 1,
	Failed = 2,
	ECampaignRoundResult_MAX = 3
};

// Enum Gobi.ERewardPreviewMode
enum class ERewardPreviewMode : uint8 {
	None = 0,
	Weapon = 1,
	Character = 2,
	ERewardPreviewMode_MAX = 3
};

// Enum Gobi.EWaterHeightType
enum class EWaterHeightType : uint8 {
	None = 0,
	Shallow = 1,
	Deep = 2,
	EWaterHeightType_MAX = 3
};

// Enum Gobi.ECharacterBodySize
enum class ECharacterBodySize : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	ECharacterBodySize_MAX = 3
};

// Enum Gobi.ELayoutType
enum class ELayoutType : uint8 {
	Invalid = 0,
	CharacterSelect = 1,
	PreRoundLockIn = 2,
	PostRound = 3,
	ELayoutType_MAX = 4
};

// Enum Gobi.ECharacterMusicMode
enum class ECharacterMusicMode : uint8 {
	Engaged = 0,
	Passive = 1,
	Distant = 2,
	ECharacterMusicMode_MAX = 3
};

// Enum Gobi.EChargeState
enum class EChargeState : uint8 {
	Idle = 0,
	Charging = 1,
	Deccelerating = 2,
	Stumbling = 3,
	Count = 4,
	EChargeState_MAX = 5
};

// Enum Gobi.EChatMode
enum class EChatMode : uint8 {
	All = 0,
	Team = 1,
	Private = 2,
	EChatMode_MAX = 3
};

// Enum Gobi.EClingPropertyModType
enum class EClingPropertyModType : uint8 {
	Property = 0,
	CanAttach = 1,
	EClingPropertyModType_MAX = 2
};

// Enum Gobi.EColorBlindEntryType
enum class EColorBlindEntryType : uint8 {
	UIGlobalStyle = 0,
	MaterialColor = 1,
	OutlineColor = 2,
	Count = 3,
	EColorBlindEntryType_MAX = 4
};

// Enum Gobi.ECommWheelAction
enum class ECommWheelAction : uint8 {
	None = 0,
	Page = 1,
	Approve = 2,
	Deny = 3,
	GoHere = 4,
	GroupUp = 5,
	Spray = 6,
	Warning = 7,
	Ready = 8,
	Wait = 9,
	Thank = 10,
	ECommWheelAction_MAX = 11
};

// Enum Gobi.EComponentLookupMode
enum class EComponentLookupMode : uint8 {
	GameplayTag = 0,
	ComponentTag = 1,
	ComponentReference = 2,
	FirstFoundSkeletalMesh = 3,
	FirstFoundStaticMesh = 4,
	FirstFoundSceneComponent = 5,
	FirstFoundActorComponent = 6,
	EComponentLookupMode_MAX = 7
};

// Enum Gobi.EInstigatorRule
enum class EInstigatorRule : uint8 {
	FirstHeroInTrigger = 0,
	LastHeroInTrigger = 1,
	RandomHeroInTrigger = 2,
	NoInstigator = 3,
	EInstigatorRule_MAX = 4
};

// Enum Gobi.ECustomCollisionChannel
enum class ECustomCollisionChannel : uint8 {
	InvisibleWorldStatic = 0,
	Mantle = 1,
	Bullet = 2,
	Melee = 3,
	Count = 4,
	ECustomCollisionChannel_MAX = 5
};

// Enum Gobi.ECustomDataApplicationType
enum class ECustomDataApplicationType : uint8 {
	eOverride = 0,
	eScale = 1,
	Append = 2,
	eIgnore = 3,
	ECustomDataApplicationType_MAX = 4
};

// Enum Gobi.EHeroMannequinType
enum class EHeroMannequinType : uint8 {
	CharacterCustomization = 0,
	CharacterSelect = 1,
	PostRoundLineup = 2,
	EHeroMannequinType_MAX = 3
};

// Enum Gobi.AudioSinkChannelConfigurations
enum class AudioSinkChannelConfigurations : uint8 {
	Mono = 0,
	Stereo = 1,
	FivePointOneSMPTEOrder = 2,
	FivePointOneFilmOrder = 3,
	SevenPointOneSMPTEOrder = 4,
	SevenPointOneFilmOrder = 5,
	AudioSinkChannelConfigurations_MAX = 6
};

// Enum Gobi.ECutsceneControl
enum class ECutsceneControl : uint8 {
	None = 0,
	Play = 1,
	Stop = 2,
	ECutsceneControl_MAX = 3
};

// Enum Gobi.EDeathGasState
enum class EDeathGasState : uint8 {
	WarmUp = 0,
	Shrinking = 1,
	Stable = 2,
	EDeathGasState_MAX = 3
};

// Enum Gobi.EDecalPriority
enum class EDecalPriority : uint8 {
	Lowest = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Top = 4,
	EDecalPriority_MAX = 5
};

// Enum Gobi.EDedicatedServerTask
enum class EDedicatedServerTask : uint8 {
	None = 0,
	DSxConfirmStatus = 1,
	DSxUpdateStatus = 2,
	SessionJoin = 3,
	SessionLeave = 4,
	SessionGet = 5,
	SessionSetUserData = 6,
	PoolJoin = 7,
	PoolLeave = 8,
	PoolModifyPrivacy = 9,
	LevelLoad = 10,
	LevelUnload = 11,
	AuthTokenRefresh = 12,
	OvercastHeartbeat = 13,
	Count = 14,
	EDedicatedServerTask_MAX = 15
};

// Enum Gobi.EAlarmState
enum class EAlarmState : uint8 {
	None = 0,
	Armed = 1,
	Active = 2,
	Done = 3,
	EAlarmState_MAX = 4
};

// Enum Gobi.EDrenchType
enum class EDrenchType : uint8 {
	Blood = 0,
	Mud = 1,
	Vomit = 2,
	Count = 3,
	EDrenchType_MAX = 4
};

// Enum Gobi.EDrenchState
enum class EDrenchState : uint8 {
	None = 0,
	Increasing = 1,
	Decaying = 2,
	Stable = 3,
	Replacing = 4,
	EDrenchState_MAX = 5
};

// Enum Gobi.ECharacterEmitterCharacterTypeFlags
enum class ECharacterEmitterCharacterTypeFlags : uint8 {
	AllHeroes = 0,
	AllAIZombies = 1,
	AllPlayerControlledZombies = 2,
	Count = 3,
	ECharacterEmitterCharacterTypeFlags_MAX = 4
};

// Enum Gobi.EDMapDirectionMode
enum class EDMapDirectionMode : uint8 {
	DirectionMode_InFront = 0,
	DirectionMode_Behind = 1,
	DirectionMode_BothDirections = 2,
	DirectionMode_NoDirection = 3,
	DirectionMode_MAX = 4
};

// Enum Gobi.ERelativeDistanceMode
enum class ERelativeDistanceMode : uint8 {
	DistanceMode_Min = 0,
	DistanceMode_Max = 1
};

// Enum Gobi.EEnemyDaamgeTimeSpan
enum class EEnemyDaamgeTimeSpan : uint8 {
	TimeSinceLastDamage = 0,
	TimeSinceLastAttack = 1,
	TimeFromLastAttackToLastDamage = 2,
	TimeFromLastDamageToLastAttack = 3,
	Num = 4,
	EEnemyDaamgeTimeSpan_MAX = 5
};

// Enum Gobi.EGoldenPathDistanceMode
enum class EGoldenPathDistanceMode : uint8 {
	DistanceFromGoldenPath = 0,
	DistanceAlongGoldenPath = 1,
	EGoldenPathDistanceMode_MAX = 2
};

// Enum Gobi.ERadiusOperation
enum class ERadiusOperation : uint8 {
	eMultiply = 0,
	eOverride = 1,
	ERadiusOperation_MAX = 2
};

// Enum Gobi.ERescueOccupiedMatchType
enum class ERescueOccupiedMatchType : uint8 {
	CurrentlyOccupied = 0,
	HasEverBeenOccupied = 1,
	HasBeenRescuedFrom = 2,
	ERescueOccupiedMatchType_MAX = 3
};

// Enum Gobi.ETRSTraceType
enum class ETRSTraceType : uint8 {
	Line = 0,
	Arc = 1,
	LineThenArc = 2,
	ETRSTraceType_MAX = 3
};

// Enum Gobi.ECapablePlayerDistanceMode
enum class ECapablePlayerDistanceMode : uint8 {
	FromDistanceMapSource = 0,
	AlongGoldenPath = 1,
	ECapablePlayerDistanceMode_MAX = 2
};

// Enum Gobi.EExplosionEffectSource
enum class EExplosionEffectSource : uint8 {
	InitAsActor = 0,
	InitAsProjectile = 1,
	InitFromRecentDamage = 2,
	EExplosionEffectSource_MAX = 3
};

// Enum Gobi.EFallingRockState
enum class EFallingRockState : uint8 {
	Dormant = 0,
	Triggered = 1,
	FallTell = 2,
	Falling = 3,
	Exploding = 4,
	EFallingRockState_MAX = 5
};

// Enum Gobi.EFireModeBaseState
enum class EFireModeBaseState : uint8 {
	Idle = 0,
	DelayBeforeFirstShot = 1,
	Firing = 2,
	Rechambering = 3,
	Count = 4,
	EFireModeBaseState_MAX = 5
};

// Enum Gobi.EWeaponFireBehavior
enum class EWeaponFireBehavior : uint8 {
	SingleShot = 0,
	Automatic = 1,
	SingleShotBurst = 2,
	AutomaticBurst = 3,
	EWeaponFireBehavior_MAX = 4
};

// Enum Gobi.EFireModeMachineGunState
enum class EFireModeMachineGunState : uint8 {
	Idle = 0,
	WindingUp = 1,
	Active = 2,
	WindingDown = 3,
	Count = 4,
	EFireModeMachineGunState_MAX = 5
};

// Enum Gobi.EQualitySettings
enum class EQualitySettings : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Count = 4,
	EQualitySettings_MAX = 5
};

// Enum Gobi.EFriendRequestPanelMode
enum class EFriendRequestPanelMode : uint8 {
	ViewRequestsSent = 0,
	ViewRequestReceived = 1,
	ViewSearchResults = 2,
	EFriendRequestPanelMode_MAX = 3
};

// Enum Gobi.ELessonEndingState
enum class ELessonEndingState : uint8 {
	Success = 0,
	Interrupted = 1,
	Failed = 2,
	ELessonEndingState_MAX = 3
};

// Enum Gobi.EGameDirectorState
enum class EGameDirectorState : uint8 {
	GDS_WaitingForGameState = 0,
	GDS_WaitingForMatchStart = 1,
	GDS_InMatch = 2,
	GDS_MatchEnded = 3,
	GDS_MAX = 4
};

// Enum Gobi.ECardActionType
enum class ECardActionType : uint8 {
	Discarded = 0,
	Played = 1,
	Exhausted = 2,
	Completed = 3,
	Drawn = 4,
	SpawnedAI = 5,
	ECardActionType_MAX = 6
};

// Enum Gobi.EPacingPhase
enum class EPacingPhase : uint8 {
	Invalid = 0,
	Calm = 1,
	Violent = 2,
	PeakSustain = 4,
	PeakFade = 8,
	Recover = 16,
	HordeCleanup = 32,
	EPacingPhase_MAX = 33
};

// Enum Gobi.EMissionEndedBehavior
enum class EMissionEndedBehavior : uint8 {
	RestartMission = 0,
	PreviousCheckpoint = 1,
	GameOver = 2,
	EMissionEndedBehavior_MAX = 3
};

// Enum Gobi.EActionState
enum class EActionState : uint8 {
	Invalid = 0,
	InProgress = 1,
	Deactivating = 2,
	Activating = 3,
	EActionState_MAX = 4
};

// Enum Gobi.EFocusWatchType
enum class EFocusWatchType : uint8 {
	Random = 0,
	Axis_Yaw = 1,
	Axis_Pitch = 2,
	Count = 3,
	EFocusWatchType_MAX = 4
};

// Enum Gobi.EBotInteractType
enum class EBotInteractType : uint8 {
	Usable = 0,
	ItemUseOn = 1,
	ItemUseOnDefib = 2,
	Count = 3,
	EBotInteractType_MAX = 4
};

// Enum Gobi.EBotTraversalType
enum class EBotTraversalType : uint8 {
	Teleport = 0,
	Mantle = 1,
	JumpAcross = 2,
	JumpDown = 3,
	CrouchWalk = 4,
	Count = 5,
	EBotTraversalType_MAX = 6
};

// Enum Gobi.EStumbleDirection
enum class EStumbleDirection : uint8 {
	Forward = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	None = 4,
	EStumbleDirection_MAX = 5
};

// Enum Gobi.EGameplayActionMatchingTagType
enum class EGameplayActionMatchingTagType : uint8 {
	All = 0,
	Any = 1,
	AllExact = 2,
	AnyExact = 3,
	EGameplayActionMatchingTagType_MAX = 4
};

// Enum Gobi.EPostRoundFeedbackResult
enum class EPostRoundFeedbackResult : uint8 {
	Positive = 0,
	Neutral = 1,
	Negative = 2,
	NoAnswer = 3,
	Count = 4,
	EPostRoundFeedbackResult_MAX = 5
};

// Enum Gobi.EPlayerAttributeType
enum class EPlayerAttributeType : uint8 {
	Offense = 0,
	Defense = 1,
	Utility = 2,
	Mobility = 3,
	Economy = 4,
	Count = 5,
	EPlayerAttributeType_MAX = 6
};

// Enum Gobi.EItemAttributeDisplayType
enum class EItemAttributeDisplayType : uint8 {
	Flat = 0,
	Percentage = 1,
	TimeDuration = 2,
	TimeRate = 3,
	Distance = 4,
	Count = 5,
	EItemAttributeDisplayType_MAX = 6
};

// Enum Gobi.ECaptionTeamRestriction
enum class ECaptionTeamRestriction : uint8 {
	NoRestriction = 0,
	HumanOnly = 1,
	ZombieOnly = 2,
	ECaptionTeamRestriction_MAX = 3
};

// Enum Gobi.EParticleSpawnCullingBounds
enum class EParticleSpawnCullingBounds : uint8 {
	None = 0,
	Radius = 1,
	FixedBounds = 2,
	EParticleSpawnCullingBounds_MAX = 3
};

// Enum Gobi.EBehindCamera
enum class EBehindCamera : uint8 {
	Default = 0,
	Never = 1,
	Behind = 2,
	FOV = 3,
	EBehindCamera_MAX = 4
};

// Enum Gobi.EImpactNewQuality
enum class EImpactNewQuality : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	Cull = 5,
	EImpactNewQuality_MAX = 6
};

// Enum Gobi.EGameplayEffectResetLifetimeScheme
enum class EGameplayEffectResetLifetimeScheme : uint8 {
	UponReapplication = 0,
	UponReapplicationUnlessAtMaxStackCount = 1,
	Never = 2,
	EGameplayEffectResetLifetimeScheme_MAX = 3
};

// Enum Gobi.EGameplayEffectStackRemovalRules
enum class EGameplayEffectStackRemovalRules : uint8 {
	RemoveIndividualStack = 0,
	RemoveAllStacks = 1,
	EGameplayEffectStackRemovalRules_MAX = 2
};

// Enum Gobi.EGameplayEffectApplicationScheme
enum class EGameplayEffectApplicationScheme : uint8 {
	Instant = 0,
	Duration = 1,
	RandomDuration = 2,
	Custom = 3,
	EGameplayEffectApplicationScheme_MAX = 4
};

// Enum Gobi.EGameplayEffectState
enum class EGameplayEffectState : uint8 {
	Initializing = 0,
	Active = 1,
	Finished = 2,
	EGameplayEffectState_MAX = 3
};

// Enum Gobi.EDrenchDistanceMode
enum class EDrenchDistanceMode : uint8 {
	EmitFromTarget = 0,
	EmitFromSource = 1,
	EDrenchDistanceMode_MAX = 2
};

// Enum Gobi.EGameplayEffectKnockbackDirection
enum class EGameplayEffectKnockbackDirection : uint8 {
	ImpactDirection = 0,
	SourceActorFacing = 1,
	SourceComponentToTargetActor = 2,
	EGameplayEffectKnockbackDirection_MAX = 3
};

// Enum Gobi.EMantleHeightMode
enum class EMantleHeightMode : uint8 {
	WallLocation = 0,
	GroundLocation = 1,
	ActorLocation = 2,
	EMantleHeightMode_MAX = 3
};

// Enum Gobi.EAmmoInReserveCheck
enum class EAmmoInReserveCheck : uint8 {
	NoAmmoInReserve = 0,
	OneClipOrLessInReserve = 1,
	MoreThanOneClipInReserve = 2,
	EAmmoInReserveCheck_MAX = 3
};

// Enum Gobi.EGameplayTagEventType
enum class EGameplayTagEventType : uint8 {
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2
};

// Enum Gobi.EGameplayTagContainerMatchType
enum class EGameplayTagContainerMatchType : uint8 {
	All = 0,
	Any = 1,
	AllExact = 2,
	AnyExact = 3,
	EGameplayTagContainerMatchType_MAX = 4
};

// Enum Gobi.EGamePropertyIntModType
enum class EGamePropertyIntModType : uint8 {
	None = 0,
	ReplaceBase = 1,
	PrescaleBase = 2,
	AddToBase = 3,
	AddToBaseScale = 4,
	FinalScale = 5,
	ClampBaseMin = 6,
	ClampBaseMax = 7,
	EGamePropertyIntModType_MAX = 8
};

// Enum Gobi.EGamePropertyFloatModType
enum class EGamePropertyFloatModType : uint8 {
	None = 0,
	ReplaceBase = 1,
	PrescaleBase = 2,
	AddToBase = 3,
	AddToBaseScale = 4,
	FinalScale = 5,
	ClampBaseMin = 6,
	ClampBaseMax = 7,
	EGamePropertyFloatModType_MAX = 8
};

// Enum Gobi.EFootSyncDetectionMode
enum class EFootSyncDetectionMode : uint8 {
	Midstance = 0,
	Midswing = 1,
	Both = 2,
	EFootSyncDetectionMode_MAX = 3
};

// Enum Gobi.ESignedAxis
enum class ESignedAxis : uint8 {
	PosX = 0,
	PosY = 1,
	PosZ = 2,
	NegX = 3,
	NegY = 4,
	NegZ = 5,
	Num = 6,
	ESignedAxis_MAX = 7
};

// Enum Gobi.EAutoCrouch
enum class EAutoCrouch : uint8 {
	Never = 0,
	InVolumes = 1,
	Always = 2,
	EAutoCrouch_MAX = 3
};

// Enum Gobi.EGobiCharacterCustomMove
enum class EGobiCharacterCustomMove : uint8 {
	None = 0,
	Leap = 1,
	AttachedToActor = 2,
	Ladder = 3,
	PostGobiCharacterCustomMove = 4,
	EGobiCharacterCustomMove_MAX = 5
};

// Enum Gobi.ESafeRoomEvalType
enum class ESafeRoomEvalType : uint8 {
	Any = 0,
	Start = 1,
	End = 2,
	ESafeRoomEvalType_MAX = 3
};

// Enum Gobi.ELanguageAudioTrack
enum class ELanguageAudioTrack : uint8 {
	English = 0,
	SpanishLatin = 1,
	PortugueseBrazilian = 2,
	French = 3,
	SpanishCastillian = 4,
	Italian = 5,
	German = 6,
	Default = 0,
	ELanguageAudioTrack_MAX = 7
};

// Enum Gobi.ESafeRoomMusicState
enum class ESafeRoomMusicState : uint8 {
	Negative = 0,
	Neutral = 1,
	Positive = 2,
	ESafeRoomMusicState_MAX = 3
};

// Enum Gobi.EMusicHordeState
enum class EMusicHordeState : uint8 {
	Inactive = 0,
	Active = 1,
	DyingDown = 2,
	Endless = 3,
	EMusicHordeState_MAX = 4
};

// Enum Gobi.EKeyLayout
enum class EKeyLayout : uint8 {
	QWERTY = 0,
	QWERTZ = 1,
	AZERTY = 2,
	EKeyLayout_MAX = 3
};

// Enum Gobi.EGobiPlayerCustomMove
enum class EGobiPlayerCustomMove : uint8 {
	Invalid = 0,
	None = 4,
	Mantle = 5,
	PostGobiPlayerCustomMove = 6,
	EGobiPlayerCustomMove_MAX = 7
};

// Enum Gobi.EMoveAdjustmentType
enum class EMoveAdjustmentType : uint8 {
	Stationary = 0,
	Moving = 1,
	MovementTickableOnly = 2,
	Count = 3,
	EMoveAdjustmentType_MAX = 4
};

// Enum Gobi.EPlayerProfileCommandType
enum class EPlayerProfileCommandType : uint8 {
	Unknown = 0,
	CreateDeck = 1,
	UpdateDeck = 2,
	RemoveDeck = 3,
	TrackRecentCharacter = 4,
	AdjustSupplyPoints = 5,
	AdjustOwnableQuantity = 6,
	AdjustStatValue = 7,
	UnlockStartingLocation = 8,
	AddCaravan = 9,
	PurchaseOwnable = 10,
	UpdateBadge = 11,
	UpdateSpray = 12,
	DeleteCampaignRun = 13,
	GrantAchievementRewards = 14,
	ApplyWeaponSkin = 15,
	EquipCharacterCustomizationSet = 16,
	EPlayerProfileCommandType_MAX = 17
};

// Enum Gobi.EStorageOperation
enum class EStorageOperation : uint8 {
	Update = 0,
	Fetch = 1,
	Count = 2,
	EStorageOperation_MAX = 3
};

// Enum Gobi.EOnlinePlayerProfileDataSubset
enum class EOnlinePlayerProfileDataSubset : uint8 {
	None = 0,
	ResetNotify = 1,
	Caravans = 2,
	EquippedCharacterCustomizationSets = 4,
	AppliedWeaponSkins = 8,
	BadgeData = 16,
	Stats = 32,
	CampaignRunMetadata = 64,
	EOnlinePlayerProfileDataSubset_MAX = 65
};

// Enum Gobi.EPlayerProfileStorageStrategy
enum class EPlayerProfileStorageStrategy : uint8 {
	HydraProfile = 0,
	HydraInventory = 1,
	Count = 2,
	EPlayerProfileStorageStrategy_MAX = 3
};

// Enum Gobi.EDamageTargetTracking
enum class EDamageTargetTracking : uint8 {
	FriendlyHuman = 0,
	EnemyHuman = 1,
	CommonZombie = 2,
	SpecialZombie = 3,
	Other = 4,
	EDamageTargetTracking_MAX = 5
};

// Enum Gobi.EWeaponDecayEnum
enum class EWeaponDecayEnum : uint8 {
	Exterior = 0,
	Interior = 1,
	InteriorSmall = 2,
	EWeaponDecayEnum_MAX = 3
};

// Enum Gobi.ESpectatorCameraMode
enum class ESpectatorCameraMode : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	First = 0,
	Last = 1,
	ESpectatorCameraMode_MAX = 2
};

// Enum Gobi.ESplineMeshMode
enum class ESplineMeshMode : uint8 {
	Tiling = 0,
	Repeating = 1,
	Stretching = 2,
	ESplineMeshMode_MAX = 3
};

// Enum Gobi.EPawnControllerType
enum class EPawnControllerType : uint8 {
	AI = 0,
	Player = 1,
	Both = 2,
	EPawnControllerType_MAX = 3
};

// Enum Gobi.EScoringEquation
enum class EScoringEquation : uint8 {
	Linear = 0,
	Constant = 1,
	EScoringEquation_MAX = 2
};

// Enum Gobi.EIdealDistanceDirection
enum class EIdealDistanceDirection : uint8 {
	Both = 0,
	LessThan = 1,
	GreaterThan = 2,
	EIdealDistanceDirection_MAX = 3
};

// Enum Gobi.EDimension
enum class EDimension : uint8 {
	In_3D = 0,
	In_2D = 1,
	In_Z = 2,
	In_Z_Absolute = 3,
	In_Delta = 4,
	In_MAX = 5
};

// Enum Gobi.EAngleAxis
enum class EAngleAxis : uint8 {
	Yaw = 0,
	Pitch = 1,
	Roll = 2,
	Angle = 3,
	EAngleAxis_MAX = 4
};

// Enum Gobi.EDeactivationReason
enum class EDeactivationReason : uint8 {
	Complete = 0,
	Failed = 1,
	Canceled = 2,
	EDeactivationReason_MAX = 3
};

// Enum Gobi.EHagLocomotionState
enum class EHagLocomotionState : uint8 {
	HS_Default = 0,
	HS_Alert = 1,
	HS_Aggro = 2,
	HS_Count = 3,
	HS_MAX = 4
};

// Enum Gobi.EHagState
enum class EHagState : uint8 {
	HS_Hunt = 0,
	HS_Alert = 1,
	HS_PreBerserk = 2,
	HS_Berserk = 3,
	HS_Flee = 4,
	HS_Count = 5,
	HS_MAX = 6
};

// Enum Gobi.EDamageContext
enum class EDamageContext : uint8 {
	FriendlyFire = 0,
	Armor = 1,
	DestroyedArmor = 2,
	CritSpot = 3,
	WeakSpot = 4,
	DestroyedWeakSpot = 5,
	KillingBlow = 6,
	Count = 7,
	EDamageContext_MAX = 8
};

// Enum Gobi.EHealthState
enum class EHealthState : uint8 {
	Healthy = 0,
	Injured = 1,
	Critical = 2,
	NotAlive = 3,
	Num = 4,
	EHealthState_MAX = 5
};

// Enum Gobi.EHeroLedgeHangState
enum class EHeroLedgeHangState : uint8 {
	Idle = 0,
	MovingToLedge = 1,
	HangingFromLedge = 2,
	Recovering = 3,
	Count = 4,
	EHeroLedgeHangState_MAX = 5
};

// Enum Gobi.EHeroLedgeHangPose
enum class EHeroLedgeHangPose : uint8 {
	Elbow = 0,
	TwoArm = 1,
	OneArm = 2,
	EHeroLedgeHangPose_MAX = 3
};

// Enum Gobi.EFlashlightMode
enum class EFlashlightMode : uint8 {
	FirstPersonEpic = 0,
	FirstPersonLow = 1,
	FirstPersonSplitScreen = 2,
	ThirdPersonEpic = 3,
	ThirdPersonLow = 4,
	ThirdPersonSplitScreen = 5,
	Count = 6,
	EFlashlightMode_MAX = 7
};

// Enum Gobi.EHeroMovementForceInput
enum class EHeroMovementForceInput : uint8 {
	None = 0,
	Harpoon = 1,
	Knockback = 2,
	Melee = 3,
	Cancel = 4,
	Count = 5,
	EHeroMovementForceInput_MAX = 6
};

// Enum Gobi.EHeroCustomMove
enum class EHeroCustomMove : uint8 {
	Invalid = 0,
	Harpoon = 6,
	Knockback = 7,
	MeleeForce = 8,
	LedgeHang = 9,
	EHeroCustomMove_MAX = 10
};

// Enum Gobi.EHighlightReceivers
enum class EHighlightReceivers : uint8 {
	All = 0,
	SurvivorsOnly = 1,
	InfectedOnly = 2,
	Custom = 3,
	EHighlightReceivers_MAX = 4
};

// Enum Gobi.EHighlightSwatch
enum class EHighlightSwatch : uint8 {
	Friendly = 0,
	Hostile = 1,
	HostileHealthy = 2,
	HostileInjured = 3,
	Alert = 4,
	Interaction = 5,
	Num_Colors = 6,
	EHighlightSwatch_MAX = 7
};

// Enum Gobi.EStencilChannel
enum class EStencilChannel : uint8 {
	None = 0,
	FirstPerson = 1,
	HealthySurvivor = 2,
	InjuredSurvivor = 3,
	CriticalSurvivor = 4,
	ImpairedSurvivor = 5,
	Infected = 6,
	Objective = 7,
	Interaction = 8,
	Spotting = 9,
	Num_Channels = 10,
	EStencilChannel_MAX = 11
};

// Enum Gobi.ENotificationShelfPriority
enum class ENotificationShelfPriority : uint8 {
	BurnCardsAvailable = 0,
	NewActiveCards = 1,
	NewCaravans = 2,
	RunAbandoned = 3,
	Achievement = 4,
	FriendRequest = 5,
	PartyInvite = 6,
	ENotificationShelfPriority_MAX = 7
};

// Enum Gobi.EHydraAccountChatMessage
enum class EHydraAccountChatMessage : uint8 {
	Invite = 0,
	Count = 1,
	EHydraAccountChatMessage_MAX = 2
};

// Enum Gobi.EHydraRelationshipLevel
enum class EHydraRelationshipLevel : uint8 {
	Default = 0,
	Blocked = 1,
	Follower = 2,
	Mutual = 3,
	EHydraRelationshipLevel_MAX = 4
};

// Enum Gobi.EImpactFlags
enum class EImpactFlags : uint8 {
	Default = 0,
	Audio = 1,
	Decals = 2,
	Particles = 4,
	GameplayEffects = 8,
	Actors = 16,
	Water = 32,
	AllTypes = 63,
	EImpactFlags_MAX = 64
};

// Enum Gobi.EImpactAlignment
enum class EImpactAlignment : uint8 {
	Normal = 0,
	Reflection = 1,
	Direction = 2,
	InvertedDirection = 3,
	DirectionNormal = 4,
	EImpactAlignment_MAX = 5
};

// Enum Gobi.EInteractiveCarWindowState
enum class EInteractiveCarWindowState : uint8 {
	Intact = 0,
	Broken = 1,
	EInteractiveCarWindowState_MAX = 2
};

// Enum Gobi.EInteractiveCarDoorState
enum class EInteractiveCarDoorState : uint8 {
	Closing = 0,
	Closed = 1,
	PartiallyOpening = 2,
	PartiallyOpen = 3,
	Opening = 4,
	Open = 5,
	EInteractiveCarDoorState_MAX = 6
};

// Enum Gobi.EInteractiveCarType
enum class EInteractiveCarType : uint8 {
	Generic = 0,
	Taxi = 1,
	Police = 2,
	Count = 3,
	EInteractiveCarType_MAX = 4
};

// Enum Gobi.EItemCycleState
enum class EItemCycleState : uint8 {
	RaisedIdle = 0,
	Lowering = 1,
	LoweredIdle = 2,
	Raising = 3,
	QuickRaise = 4,
	Count = 5,
	EItemCycleState_MAX = 6
};

// Enum Gobi.EItemTargetType
enum class EItemTargetType : uint8 {
	Actor_Self = 1,
	Actor_Teammate = 2,
	Actor_Any = 4,
	Actor_Enemy = 8,
	Environment = 16,
	Count = 17,
	EItemTargetType_MAX = 18
};

// Enum Gobi.EItemUseType
enum class EItemUseType : int32 {
	Aid = 1,
	Aid_Heal = 2,
	Buff = 4,
	CC = 8,
	Defensive = 16,
	Offensive = 32,
	Quest = 64,
	Resource = 128,
	Utility = 256,
	Count = 257,
	EItemUseType_MAX = 258
};

// Enum Gobi.EWeaponView
enum class EWeaponView : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	EWeaponView_MAX = 2
};

// Enum Gobi.EBuffType
enum class EBuffType : uint8 {
	None = 0,
	Buff = 1,
	Debuff = 2,
	EBuffType_MAX = 3
};

// Enum Gobi.EPerkCategory
enum class EPerkCategory : uint8 {
	Offensive = 0,
	Defensive = 1,
	Utility = 2,
	Count = 3,
	EPerkCategory_MAX = 4
};

// Enum Gobi.EItemPickupTooltipState
enum class EItemPickupTooltipState : uint8 {
	Invalid = 0,
	Minimized = 1,
	Details = 2,
	EItemPickupTooltipState_MAX = 3
};

// Enum Gobi.EItemTransferState
enum class EItemTransferState : uint8 {
	None = 0,
	Up = 1,
	Down = 2,
	Invalid = 3,
	EItemTransferState_MAX = 4
};

// Enum Gobi.EJukeboxMusicState
enum class EJukeboxMusicState : uint8 {
	Off = 0,
	Playing = 1,
	Broken = 2,
	EJukeboxMusicState_MAX = 3
};

// Enum Gobi.EKeybindListInputType
enum class EKeybindListInputType : uint8 {
	KeybindListInputType_KeyboardMouse = 0,
	KeybindListInputType_Gamepad = 1,
	KeybindListInputType_MAX = 2
};

// Enum Gobi.EKillFeedState
enum class EKillFeedState : uint8 {
	Alive = 0,
	Incapped = 1,
	LedgeHang = 2,
	Dead = 3,
	NeedsRescue = 4,
	EKillFeedState_MAX = 5
};

// Enum Gobi.ELadderMovementModeState
enum class ELadderMovementModeState : uint8 {
	Idle = 0,
	Approaching = 1,
	Climbing = 2,
	FastDescending = 3,
	Dismounting = 4,
	Cooldown = 5,
	Count = 6,
	ELadderMovementModeState_MAX = 7
};

// Enum Gobi.ELeaderboardRegion
enum class ELeaderboardRegion : uint8 {
	Global = 0,
	Local = 1,
	Friends = 2,
	Count = 3,
	ELeaderboardRegion_MAX = 4
};

// Enum Gobi.ELeapState
enum class ELeapState : uint8 {
	Idle = 0,
	Cooking = 1,
	Leaping = 2,
	Landing = 3,
	Count = 4,
	ELeapState_MAX = 5
};

// Enum Gobi.ELeapModeState
enum class ELeapModeState : uint8 {
	Idle = 0,
	Leaping = 1,
	Count = 2,
	ELeapModeState_MAX = 3
};

// Enum Gobi.ELevelStreamingCoordinatorState
enum class ELevelStreamingCoordinatorState : uint8 {
	PRESTART = 0,
	DETERMINEDLEVELS = 1,
	SF_VISIBLE_LEVEL_LOADING = 2,
	SF_VISIBLE_LEVEL_VISIBLE = 3,
	SF_BLOCKING_LEVEL_BLOCKING = 4,
	ELevelStreamingCoordinatorState_MAX = 5
};

// Enum Gobi.ELifeStateTransitionCompare
enum class ELifeStateTransitionCompare : uint8 {
	Less = 0,
	LessEqual = 1,
	Greater = 2,
	GreaterEqual = 3,
	ELifeStateTransitionCompare_MAX = 4
};

// Enum Gobi.EGlobalAssetPhase
enum class EGlobalAssetPhase : uint8 {
	None = 0,
	Early = 1,
	General = 2,
	Count = 3,
	EGlobalAssetPhase_MAX = 4
};

// Enum Gobi.ELoadoutModAdjustmentType
enum class ELoadoutModAdjustmentType : uint8 {
	AdjustDefaultLoadout = 0,
	GrantLoadoutImmediate = 1,
	AdjustLoadoutAndGrantImmediate = 2,
	ELoadoutModAdjustmentType_MAX = 3
};

// Enum Gobi.EAnimPredictType
enum class EAnimPredictType : uint8 {
	None = 0,
	Moving = 1,
	Stop = 2,
	PrePivot = 3,
	PostPivot = 4,
	NumPredictTypes = 5,
	EAnimPredictType_MAX = 6
};

// Enum Gobi.ELootSpawnMode
enum class ELootSpawnMode : uint8 {
	SpawnOnBeginPlay = 0,
	SpawnOnSaferoomOpened = 1,
	SpawnManually = 2,
	Num = 3,
	ELootSpawnMode_MAX = 4
};

// Enum Gobi.EMapSpatialInfoDrawType
enum class EMapSpatialInfoDrawType : uint8 {
	NearCamera = 0,
	VisibileFromNearestArea = 1,
	TestActiveAreaSet = 2,
	DistanceAlongGoldenPath = 3,
	DistanceFromGoldenPath = 4,
	AvgSpawner = 5,
	BigSpawner = 6,
	HugeSpawner = 7,
	EMapSpatialInfoDrawType_MAX = 8
};

// Enum Gobi.EMapSpatialInfoAudibility
enum class EMapSpatialInfoAudibility : uint8 {
	NotAudible = 0,
	SoonToBeAudible = 1,
	CompletelyAudible = 2,
	Occupied = 3,
	EMapSpatialInfoAudibility_MAX = 4
};

// Enum Gobi.EMapSpatialInfoVisibility
enum class EMapSpatialInfoVisibility : uint8 {
	NotVisible = 0,
	PartiallyVisible = 1,
	CompletelyVisible = 2,
	Occupied = 3,
	EMapSpatialInfoVisibility_MAX = 4
};

// Enum Gobi.EMapSpatialInfoCardinalDirection
enum class EMapSpatialInfoCardinalDirection : uint8 {
	North = 0,
	East = 1,
	South = 2,
	West = 3,
	Count = 4,
	EMapSpatialInfoCardinalDirection_MAX = 5
};

// Enum Gobi.EGobiMapGameModesType
enum class EGobiMapGameModesType : uint8 {
	Coop = 1,
	Versus = 2,
	Hub = 4,
	Tutorial = 8,
	Coop8P = 16,
	SinglePlayer = 32,
	EGobiMapGameModesType_MAX = 33
};

// Enum Gobi.EGobiMapDevEnvType
enum class EGobiMapDevEnvType : uint8 {
	Shipping = 0,
	CommonDev = 1,
	Dev = 2,
	User = 3,
	EGobiMapDevEnvType_MAX = 4
};

// Enum Gobi.EMatchmakingTask
enum class EMatchmakingTask : uint8 {
	None = 0,
	SessionCreateSplitscreen = 1,
	SessionCreateGroup = 2,
	SessionJoinExistingGroup = 3,
	SessionRejoinExistingGame = 4,
	SessionRemoveParticipants = 5,
	SessionLeaveSplitscreen = 6,
	SessionLeaveGroup = 7,
	SessionLeaveGame = 8,
	SessionGet = 9,
	SessionSetUserData = 10,
	SessionSetSessionData = 11,
	SessionSetBeaconData = 12,
	SessionSetCrossPlayEnabled = 13,
	AuthTokenRefresh = 14,
	BeaconRefresh = 15,
	SignOut = 16,
	Count = 17,
	EMatchmakingTask_MAX = 18
};

// Enum Gobi.EDisconnectError
enum class EDisconnectError : uint8 {
	None = 0,
	NetDriverAlreadyExists = 1,
	NetDriverCreateFailure = 2,
	NetDriverListenFailure = 3,
	ConnectionLost = 4,
	ConnectionTimeout = 5,
	FailureReceived = 6,
	OutdatedClient = 7,
	OutdatedServer = 8,
	PendingConnectionFailure = 9,
	NetGuidMismatch = 10,
	NetChecksumMismatch = 11,
	IdleTimeout = 12,
	KickedFromGroup = 13,
	SessionCrossPlayRestricted = 14,
	EDisconnectError_MAX = 15
};

// Enum Gobi.ESignOutError
enum class ESignOutError : uint8 {
	None = 0,
	LostGroupSession = 1,
	AtuinEnvironmentChanged = 2,
	SignedOut = 3,
	SignedOutOnline = 4,
	HydraUnauthorized = 5,
	HydraBanned = 6,
	HydraKicked = 7,
	HydraMaintenanceMode = 8,
	HydraLostConnection = 9,
	ESignOutError_MAX = 10
};

// Enum Gobi.ESignInSubStep
enum class ESignInSubStep : uint8 {
	None = 0,
	SignInActive = 1,
	SponsorPresence = 2,
	InPool = 3,
	OnlineOfflinePopup = 4,
	EOSLogin = 5,
	UserLogin = 6,
	CanPlay = 7,
	OnlinePrivileges = 8,
	AllowListVerification = 9,
	AllowListPasswordPrompt = 10,
	AgoraToken = 11,
	WaitForProfileSettings = 12,
	AgoraMaintenanceMode = 13,
	AtuinToken = 14,
	WaitForFTUESettings = 15,
	License = 16,
	StartupOptions = 17,
	HydraName = 18,
	WaitForBeaconRefresh = 19,
	WaitForGroupSession = 20,
	WaitForProfile = 21,
	Count = 22,
	ESignInSubStep_MAX = 23
};

// Enum Gobi.EGroupInvitePrivacy
enum class EGroupInvitePrivacy : uint8 {
	FromAnyone = 0,
	OnlyFromFriends = 1,
	None = 2,
	EGroupInvitePrivacy_MAX = 3
};

// Enum Gobi.ECrossplaySubsystem
enum class ECrossplaySubsystem : uint8 {
	Null = 1,
	Steam = 2,
	EOS = 4,
	PSN = 8,
	GDK = 16,
	SteamAndEOS = 32,
	ECrossplaySubsystem_MAX = 33
};

// Enum Gobi.EMeleeCollisionState
enum class EMeleeCollisionState : uint8 {
	Disabled = 0,
	Overlap = 1,
	Sweep = 2,
	EMeleeCollisionState_MAX = 3
};

// Enum Gobi.EMeshBoolApplicationType
enum class EMeshBoolApplicationType : uint8 {
	On = 0,
	Off = 1,
	InheritParent = 2,
	NoAdjustment = 3,
	EMeshBoolApplicationType_MAX = 4
};

// Enum Gobi.EActorRole
enum class EActorRole : uint8 {
	eSelf = 0,
	eOwner = 1,
	EActorRole_MAX = 2
};

// Enum Gobi.EMaterialParamType
enum class EMaterialParamType : uint8 {
	LinearColor = 0,
	Color = 1,
	Scalar = 2,
	Texture = 3,
	LinearColorArray = 4,
	ColorArray = 5,
	ScalarArray = 6,
	TextureArray = 7,
	EMaterialParamType_MAX = 8
};

// Enum Gobi.EPopupButtonCombo
enum class EPopupButtonCombo : uint8 {
	YesNo = 0,
	YesNoCancel = 1,
	Ok = 2,
	OkCancel = 3,
	EPopupButtonCombo_MAX = 4
};

// Enum Gobi.EObjectiveState
enum class EObjectiveState : uint8 {
	Active = 0,
	Completed = 1,
	Failed = 2,
	Count = 3,
	EObjectiveState_MAX = 4
};

// Enum Gobi.EMissionType
enum class EMissionType : uint8 {
	StoryMission = 0,
	SideMission = 1,
	Bounty = 2,
	Patrol = 3,
	Tutorial = 4,
	EMissionType_MAX = 5
};

// Enum Gobi.EMapPipState
enum class EMapPipState : uint8 {
	Past = 0,
	Present = 1,
	Future = 2,
	EMapPipState_MAX = 3
};

// Enum Gobi.EMotionCorrectionContextUpdateMode
enum class EMotionCorrectionContextUpdateMode : uint8 {
	MCCM_Continuous = 0,
	MCCM_AtPlay = 1,
	MCCM_AtWindowBegin = 2,
	MCCM_ContinuousOrNoCorrection = 3,
	MCCM_AtWindowBeginOrNoCorrection = 4,
	MCCM_MAX = 5
};

// Enum Gobi.EMotionCorrectionMode
enum class EMotionCorrectionMode : uint8 {
	MCM_NoLimit = 0,
	MCM_LimitCorrection = 1,
	MCM_LimitCorrectionWithRootMotion = 2,
	MCM_InstantCorrection = 3,
	MCM_MAX = 4
};

// Enum Gobi.EMotionCorrectionAxis
enum class EMotionCorrectionAxis : uint8 {
	CA_Yaw = 0,
	CA_Pitch = 1,
	CA_Roll = 2,
	CA_All = 3,
	CA_MAX = 4
};

// Enum Gobi.EMotionCorrectionDimension
enum class EMotionCorrectionDimension : uint8 {
	CD_3D = 0,
	CD_2D = 1,
	CD_Z = 2,
	CD_MAX = 3
};

// Enum Gobi.EMusicEventBranchingMode
enum class EMusicEventBranchingMode : uint8 {
	Instigator = 0,
	Target = 1,
	EMusicEventBranchingMode_MAX = 2
};

// Enum Gobi.EMusicEventValidity
enum class EMusicEventValidity : uint8 {
	Invalid = 0,
	Valid = 1,
	ValidFirstPerson = 2,
	EMusicEventValidity_MAX = 3
};

// Enum Gobi.EMusicEventIntensity
enum class EMusicEventIntensity : uint8 {
	Major = 0,
	Minor = 1,
	EMusicEventIntensity_MAX = 2
};

// Enum Gobi.EMusicEventMood
enum class EMusicEventMood : uint8 {
	Positive = 0,
	Negative = 1,
	EMusicEventMood_MAX = 2
};

// Enum Gobi.ECharacterFilter
enum class ECharacterFilter : uint8 {
	Any = 0,
	LocalPlayer = 1,
	ECharacterFilter_MAX = 2
};

// Enum Gobi.EMusicEventType
enum class EMusicEventType : uint8 {
	Generic = 0,
	Horde = 1,
	Scenario = 2,
	Brute = 3,
	Hag = 4,
	Breaker = 5,
	EMusicEventType_MAX = 6
};

// Enum Gobi.EMusicStateType
enum class EMusicStateType : uint8 {
	UI = 0,
	Progression = 1,
	Map = 2,
	Scenario = 3,
	Horde = 4,
	ExploreOverride = 5,
	EMusicStateType_MAX = 6
};

// Enum Gobi.EDismembermentTestMode
enum class EDismembermentTestMode : uint8 {
	None = 0,
	All = 1,
	Any = 2,
	EDismembermentTestMode_MAX = 3
};

// Enum Gobi.ENavAreaFlag
enum class ENavAreaFlag : uint8 {
	Default = 0,
	Jump = 1,
	Door = 2,
	Ladder = 3,
	Ground = 4,
	Fire = 5,
	Climb = 6,
	ClimbUpAndOver = 7,
	Choke = 8,
	Crawl = 9,
	Destructible = 10,
	Crouch = 11,
	GobiDefault = 12,
	Objective = 13,
	Fall = 14,
	ENavAreaFlag_MAX = 15
};

// Enum Gobi.ENavLinkContextDistances
enum class ENavLinkContextDistances : uint8 {
	NLCD_ClimbUp = 0,
	NLCD_Top = 1,
	NLCD_ClimbDown = 2,
	NLCD_MAX = 3
};

// Enum Gobi.ENavLinkContextLocations
enum class ENavLinkContextLocations : uint8 {
	NLCL_ClimbStart = 0,
	NLCL_TopStart = 1,
	NLCL_TopEnd = 2,
	NLCL_ClimbEnd = 3,
	NLCL_MAX = 4
};

// Enum Gobi.ENotificationType
enum class ENotificationType : uint8 {
	Fortification = 0,
	ZombieDestroy = 1,
	ENotificationType_MAX = 2
};

// Enum Gobi.EObjectPropertyModType
enum class EObjectPropertyModType : uint8 {
	Float = 0,
	Int = 1,
	EObjectPropertyModType_MAX = 2
};

// Enum Gobi.EOnlineConfigurationState
enum class EOnlineConfigurationState : uint8 {
	Initial = 0,
	Fetching = 1,
	FetchSucceeded = 2,
	FetchFailed = 3,
	EOnlineConfigurationState_MAX = 4
};

// Enum Gobi.EInvitation
enum class EInvitation : uint8 {
	None = 0,
	Start = 1,
	StoppingMatchmaking = 2,
	WaitingForStopMatchmaking = 3,
	JoiningGroupSession = 4,
	JoiningGameSession = 5,
	RejoiningGameSession = 6,
	WaitingForRelayData = 7,
	FailureCleanup = 8,
	Count = 9,
	EInvitation_MAX = 10
};

// Enum Gobi.EOnlineFlowSignInState
enum class EOnlineFlowSignInState : uint8 {
	NotSignedIn = 0,
	SigningIn = 1,
	SignedIn = 2,
	SigningOut = 3,
	EOnlineFlowSignInState_MAX = 4
};

// Enum Gobi.EOnlineMode
enum class EOnlineMode : uint8 {
	Offline = 0,
	Online = 1,
	EOnlineMode_MAX = 2
};

// Enum Gobi.EOnlineSessionStatus
enum class EOnlineSessionStatus : uint8 {
	None = 0,
	Host = 1,
	Joiner = 2,
	EOnlineSessionStatus_MAX = 3
};

// Enum Gobi.EOnlineSessionAction
enum class EOnlineSessionAction : uint8 {
	None = 0,
	CreateSession = 1,
	JoinSession = 2,
	LeaveSession = 3,
	EOnlineSessionAction_MAX = 4
};

// Enum Gobi.EGamepadLayoutDisplayMode
enum class EGamepadLayoutDisplayMode : uint8 {
	Sticks = 0,
	Buttons = 1,
	EGamepadLayoutDisplayMode_MAX = 2
};

// Enum Gobi.EPaperDollItemDragDropState
enum class EPaperDollItemDragDropState : uint8 {
	None = 0,
	DropItem = 1,
	SwapAttachment = 2,
	EPaperDollItemDragDropState_MAX = 3
};

// Enum Gobi.EPartyMenuCommand
enum class EPartyMenuCommand : uint8 {
	Invite = 0,
	ShowInviteDialog = 1,
	Join = 2,
	Leave = 3,
	ViewProfile = 4,
	Mute = 5,
	Kick = 6,
	Report = 7,
	SendHydraFriendInvite = 8,
	CancelHydraFriendInvite = 9,
	ResendHydraFriendInvite = 10,
	AcceptHydraFriendInvite = 11,
	IgnoreHydraFriendInvite = 12,
	BlockHydraUser = 13,
	UnblockHydraUser = 14,
	UnfollowHydraUser = 15,
	SendFirstPartyFriendInvite = 16,
	EPartyMenuCommand_MAX = 17
};

// Enum Gobi.EPassageDebugDraw
enum class EPassageDebugDraw : uint8 {
	Normal = 0,
	Treasure = 1,
	EPassageDebugDraw_MAX = 2
};

// Enum Gobi.EPassageMode
enum class EPassageMode : uint8 {
	TreasureActive = 0,
	TreasureInactive = 1,
	Normal = 2,
	EPassageMode_MAX = 3
};

// Enum Gobi.EPassageType
enum class EPassageType : uint8 {
	Empty = 0,
	Unlocked = 1,
	Locked = 2,
	Barred = 3,
	Count = 4,
	EPassageType_MAX = 5
};

// Enum Gobi.EPingType
enum class EPingType : uint8 {
	Default = 0,
	Door = 1,
	Enemy = 2,
	SpecialEnemy = 3,
	Item = 4,
	Interactable = 5,
	TraumaKit = 6,
	Pinned = 7,
	Birds = 8,
	Count = 9,
	EPingType_MAX = 10
};

// Enum Gobi.EPlacementOffsetMode
enum class EPlacementOffsetMode : uint8 {
	EPOM_NoOffset = 0,
	EPOM_SpecifiedOffset = 1,
	EPOM_RandomOffset = 2,
	EPOM_RandomTranslation = 3,
	EPOM_RandomRotation = 4,
	EPOM_MAX = 5
};

// Enum Gobi.EPlantableSurfaceType
enum class EPlantableSurfaceType : uint8 {
	Floor = 0,
	Count = 1,
	EPlantableSurfaceType_MAX = 2
};

// Enum Gobi.EPlatform
enum class EPlatform : uint8 {
	Unknown = 0,
	Steam = 1,
	EOS = 2,
	Null = 3,
	XB1 = 4,
	XSX = 5,
	PS4 = 6,
	PS5 = 7,
	EPlatform_MAX = 8
};

// Enum Gobi.EForcedPredictionError
enum class EForcedPredictionError : uint8 {
	MovementMode = 0,
	Montage = 1,
	Hitch = 2,
	EForcedPredictionError_MAX = 3
};

// Enum Gobi.EMovementDirection
enum class EMovementDirection : uint8 {
	eForward = 0,
	eBackward = 1,
	eSideways = 2,
	EMovementDirection_MAX = 3
};

// Enum Gobi.ETextToSpeechVoice
enum class ETextToSpeechVoice : uint8 {
	Off = 0,
	Male = 1,
	Female = 2,
	Count = 3,
	ETextToSpeechVoice_MAX = 4
};

// Enum Gobi.EReticleOptionType
enum class EReticleOptionType : uint8 {
	Crosshair = 0,
	Dot = 1,
	EReticleOptionType_MAX = 2
};

// Enum Gobi.ECaptioning
enum class ECaptioning : uint8 {
	None = 0,
	Conversations = 1,
	Ambient = 2,
	FullCaptions = 3,
	ECaptioning_MAX = 4
};

// Enum Gobi.EAimSensitivitySpace
enum class EAimSensitivitySpace : uint8 {
	Standard = 0,
	ADSZoomLevelOne = 1,
	ADSZoomLevelTwo = 2,
	ADSZoomLevelThree = 3,
	AimSensitivitySpaceCount = 4,
	None = 5,
	EAimSensitivitySpace_MAX = 6
};

// Enum Gobi.EPlayerSettingsType
enum class EPlayerSettingsType : uint8 {
	FTUESettings = 0,
	PlayerSettings = 1,
	ProfileSettings = 2,
	GameCoachSettings = 3,
	OnlineSettings = 4,
	RelationshipSettings = 5,
	PlayerAnalyticsSettings = 6,
	Count = 7,
	EPlayerSettingsType_MAX = 8
};

// Enum Gobi.ETeamCounts
enum class ETeamCounts : uint8 {
	OneTeam = 0,
	TwoTeams = 1,
	Count = 2,
	ETeamCounts_MAX = 3
};

// Enum Gobi.EPlayerSprintState
enum class EPlayerSprintState : uint8 {
	Idle = 0,
	SprintIn = 1,
	Sprinting = 2,
	SprintOut = 3,
	SprintStateCount = 4,
	EPlayerSprintState_MAX = 5
};

// Enum Gobi.EDrenchSettings
enum class EDrenchSettings : uint8 {
	None = 0,
	Incap = 1,
	Dead = 2,
	EDrenchSettings_MAX = 3
};

// Enum Gobi.EPlayerStandInGender
enum class EPlayerStandInGender : uint8 {
	Any = 0,
	Female = 1,
	Male = 2,
	EPlayerStandInGender_MAX = 3
};

// Enum Gobi.EPlayerStatSource
enum class EPlayerStatSource : uint8 {
	ClientAuthoritativeData = 0,
	ServerAuthoritativeData = 1,
	EPlayerStatSource_MAX = 2
};

// Enum Gobi.EPlayerViewMode
enum class EPlayerViewMode : uint8 {
	Invalid = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	ThirdPersonOrbit = 3,
	EPlayerViewMode_MAX = 4
};

// Enum Gobi.EPostRoundPanel
enum class EPostRoundPanel : uint8 {
	Splash = 0,
	Holdout = 1,
	Lineup = 2,
	Stats = 3,
	PvPStats = 4,
	Challenge = 5,
	FinalScores = 6,
	Summary = 7,
	SwitchingSides = 8,
	EPostRoundPanel_MAX = 9
};

// Enum Gobi.EPounceState
enum class EPounceState : uint8 {
	Idle = 0,
	Cooking = 1,
	Leaping = 2,
	Landing = 3,
	Attacking = 4,
	KickingOff = 5,
	ReleasingDeadCharacter = 6,
	Count = 7,
	EPounceState_MAX = 8
};

// Enum Gobi.EProductType
enum class EProductType : uint8 {
	Unlockable = 0,
	Consumable = 1,
	EProductType_MAX = 2
};

// Enum Gobi.EPhysicsCasterPosition
enum class EPhysicsCasterPosition : uint8 {
	Actor = 0,
	Random = 1,
	EPhysicsCasterPosition_MAX = 2
};

// Enum Gobi.EPhysicsCasterTraceType
enum class EPhysicsCasterTraceType : uint8 {
	Channel = 0,
	Object = 1,
	Profile = 2,
	EPhysicsCasterTraceType_MAX = 3
};

// Enum Gobi.EPhysicsCasterType
enum class EPhysicsCasterType : uint8 {
	Ray = 0,
	RayMulti = 1,
	Sweep = 2,
	EPhysicsCasterType_MAX = 3
};

// Enum Gobi.EProjectileImpactBehavior
enum class EProjectileImpactBehavior : uint8 {
	Destroy = 1,
	DisableProjectileMovement = 2,
	HideMesh = 4,
	EProjectileImpactBehavior_MAX = 5
};

// Enum Gobi.EProjectilePinState
enum class EProjectilePinState : uint8 {
	Pinned = 0,
	Destroy = 1,
	EProjectilePinState_MAX = 2
};

// Enum Gobi.ESprayState
enum class ESprayState : uint8 {
	Idle = 0,
	SprayActive = 1,
	SprayEnding = 2,
	Count = 3,
	ESprayState_MAX = 4
};

// Enum Gobi.EProjectileThrowReticleType
enum class EProjectileThrowReticleType : uint8 {
	NoTarget = 0,
	NonCharacter = 1,
	Character = 2,
	Invalid = 3,
	EProjectileThrowReticleType_MAX = 4
};

// Enum Gobi.EProjectileThrowState
enum class EProjectileThrowState : uint8 {
	Idle = 0,
	Cooking = 1,
	Throwing = 2,
	Count = 3,
	EProjectileThrowState_MAX = 4
};

// Enum Gobi.ERootMotionMontageEvent
enum class ERootMotionMontageEvent : uint8 {
	Invalid = 0,
	MotionCorrection = 1,
	PlayMontageNotifyWindow = 2,
	PlayMontageNotify = 3,
	EvalChainMontage = 4,
	ERootMotionMontageEvent_MAX = 5
};

// Enum Gobi.ERescueSpawnPointType
enum class ERescueSpawnPointType : uint8 {
	Invalid = 0,
	SpawnCloset = 1,
	SleeperVictim = 2,
	NPCVictim = 3,
	ERescueSpawnPointType_MAX = 4
};

// Enum Gobi.ERespawnStatBehavior
enum class ERespawnStatBehavior : uint8 {
	UseDefaults = 0,
	UsePlayerSnapshot = 1,
	UseSaferoomSnapshot = 2,
	ERespawnStatBehavior_MAX = 3
};

// Enum Gobi.ERespawnReason
enum class ERespawnReason : uint8 {
	StandardDeath = 0,
	MissionReset = 1,
	SeamlessTravel = 2,
	DifficultyExposedCount = 3,
	RelocateZombie = 4,
	StartingSaferoom = 5,
	Unknown = 6,
	BotSwapToBot = 7,
	BotSwapToPlayer = 8,
	ERespawnReason_MAX = 9
};

// Enum Gobi.ERoomVolumeStatus
enum class ERoomVolumeStatus : uint8 {
	Treasure = 0,
	Blocked = 1,
	Count = 2,
	ERoomVolumeStatus_MAX = 3
};

// Enum Gobi.ERoomVolumeType
enum class ERoomVolumeType : uint8 {
	Treasurable = 0,
	Blockable = 1,
	Count = 2,
	ERoomVolumeType_MAX = 3
};

// Enum Gobi.ERoundEndCondition
enum class ERoundEndCondition : uint8 {
	SuccessRoundEnd = 0,
	PVPRoundEnd = 1,
	RoundFailureReset = 2,
	RoundFailureAbandoned = 3,
	EarlyLeaver = 4,
	RoundFailureOutOfContinues = 5,
	ERoundEndCondition_MAX = 6
};

// Enum Gobi.ESaveLoadResult
enum class ESaveLoadResult : uint8 {
	Success = 0,
	Missing = 1,
	Failure = 2,
	ESaveLoadResult_MAX = 3
};

// Enum Gobi.EScenarioSpawningStatus
enum class EScenarioSpawningStatus : uint8 {
	Spawning = 0,
	SpawningCompleted = 1,
	SpawningFailed = 2,
	EScenarioSpawningStatus_MAX = 3
};

// Enum Gobi.EScenarioState
enum class EScenarioState : uint8 {
	Activating = 0,
	Activated = 1,
	Deactivating = 2,
	Deactivated = 3,
	Disabled = 4,
	EScenarioState_MAX = 5
};

// Enum Gobi.EScenarioManagerPhase
enum class EScenarioManagerPhase : uint8 {
	BeginPlay = 0,
	MatchStart = 1,
	EScenarioManagerPhase_MAX = 2
};

// Enum Gobi.ESegmentedReloadState
enum class ESegmentedReloadState : uint8 {
	Idle = 0,
	Enter = 1,
	Loop = 2,
	Exit = 3,
	Count = 4,
	ESegmentedReloadState_MAX = 5
};

// Enum Gobi.EGobiShadowChannel
enum class EGobiShadowChannel : uint8 {
	CatchAll = 0,
	LightOccluders = 1,
	Characters = 2,
	HeroCharacters = 3,
	PhysProps = 4,
	HighQualityShadowCasters = 5,
	Num_Channels = 6,
	EGobiShadowChannel_MAX = 7
};

// Enum Gobi.ESignInTaskState
enum class ESignInTaskState : uint8 {
	Pending = 0,
	Running = 1,
	Skipped = 2,
	Completed = 3,
	Failed = 4,
	Canceled = 5,
	ESignInTaskState_MAX = 6
};

// Enum Gobi.ESkeletalMeshConfigModType
enum class ESkeletalMeshConfigModType : uint8 {
	Addition = 0,
	Replacement = 1,
	ESkeletalMeshConfigModType_MAX = 2
};

// Enum Gobi.ESleeperAnimBehaviorState
enum class ESleeperAnimBehaviorState : uint8 {
	Idle = 0,
	Alert = 1,
	Launch = 2,
	Attack = 3,
	Death = 4,
	ESleeperAnimBehaviorState_MAX = 5
};

// Enum Gobi.ESharedWeaponAnimSound
enum class ESharedWeaponAnimSound : uint8 {
	BoltBack = 0,
	BoltForward = 1,
	BoltRelease = 2,
	MagIn = 3,
	MagOut = 4,
	Movement = 5,
	ESharedWeaponAnimSound_MAX = 6
};

// Enum Gobi.ESharedEnemyAnimSound
enum class ESharedEnemyAnimSound : uint8 {
	Idle = 0,
	Alerting = 1,
	Aggro = 2,
	Threaten = 3,
	Attack = 4,
	Hurt = 5,
	Hurt_Critical = 6,
	Death = 7,
	Breath_In = 8,
	Breath_Out = 9,
	FS_Walk = 10,
	FS_Run = 11,
	FS_Scuff = 12,
	FS_Jumpland = 13,
	Foley_Movement = 14,
	Idle_Sick = 15,
	Idle_Eat = 16,
	FS_Fight = 17,
	Detonate_Big = 18,
	Detonate_Small = 19,
	Alerted = 20,
	Taunt = 21,
	Expression = 22,
	Behind_Tell = 23,
	DEP_Gather_Mid = 24,
	DEP_Gather_Far = 25,
	Foley_Pop = 26,
	Bodyfall = 27,
	Charge_Tell = 28,
	Bump = 29,
	Flee = 30,
	Idle_Yell = 31,
	Melee_Whoosh = 32,
	FS_Crouch = 33,
	FS_Climb = 34,
	Push = 35,
	Grab_Enter = 36,
	Grab_Idle = 37,
	Grab_Exit = 38,
	Idle_Walk = 39,
	Climb_Enter = 40,
	Climb = 41,
	Climb_End = 42,
	Attack_Recovery = 43,
	Crouch = 44,
	Approach = 45,
	FS_Charge = 46,
	Hurt_Fire = 47,
	Frenzy_Run = 48,
	Angry = 49,
	Harpoon = 50,
	Attack_NonCombat = 51,
	Charge_Start = 52,
	Charge_Stop = 53,
	Charge_Loop = 54,
	Charge_Interrupt = 55,
	Leap_Land = 56,
	Leap_Charge_Interrupt = 57,
	Leap_Charge_Start = 58,
	Leap_Launch = 59,
	Pounce_Land = 60,
	Pounce_Charge_Interrupt = 61,
	Pounce_Charge_Start = 62,
	Pounce_Launch = 63,
	Leap_Start_Vox = 64,
	Leap_Launch_Vox = 65,
	Leap_Land_Vox = 66,
	Leap_Interrupt_Vox = 67,
	Hurt_Flashed = 68,
	Hurt_Dazed = 69,
	Hurt_Electrocuted = 70,
	Charge_Vox_Start = 71,
	Charge_Vox_Stop = 72,
	Wall_Cling_Tell = 73,
	ESharedEnemyAnimSound_MAX = 74
};

// Enum Gobi.ESharedSurvivorAnimSound
enum class ESharedSurvivorAnimSound : uint8 {
	Foley_Mvmt_Short = 0,
	Foley_Mvmt_Long = 1,
	Foley_Mvmt_Walk = 2,
	DEP_Foley_Mvmt_Loop = 3,
	Grab = 4,
	Mantle = 5,
	Jump = 6,
	JumpLand = 7,
	Swipe = 8,
	LedgeGrab = 9,
	LedgeClimb = 10,
	Bodyfall = 11,
	FS_Walk = 12,
	FS_Run = 13,
	FS_Scuff = 14,
	FS_Crouch = 15,
	FS_Ladder = 16,
	FS_Crawl = 17,
	Throw = 18,
	FS_Crouch_In = 19,
	FS_Crouch_Out = 20,
	ESharedSurvivorAnimSound_MAX = 21
};

// Enum Gobi.ESharedSoundCollectionMode
enum class ESharedSoundCollectionMode : uint8 {
	Invalid = 0,
	Human = 1,
	Enemy = 2,
	ESharedSoundCollectionMode_MAX = 3
};

// Enum Gobi.ESprayElement
enum class ESprayElement : uint8 {
	Foreground = 0,
	Background = 1,
	ESprayElement_MAX = 2
};

// Enum Gobi.EChildBehaviorMode
enum class EChildBehaviorMode : uint8 {
	CBM_Blend = 0,
	CBM_PrioritySelect = 1,
	CBM_MAX = 2
};

// Enum Gobi.EArrivalMode
enum class EArrivalMode : uint8 {
	AM_Distance = 0,
	AM_Distance2D = 1,
	AM_Planar = 2,
	AM_MAX = 3
};

// Enum Gobi.ESuicideState
enum class ESuicideState : uint8 {
	Idle = 0,
	Cooking = 1,
	Count = 2,
	ESuicideState_MAX = 3
};

// Enum Gobi.EThreatLevel
enum class EThreatLevel : uint8 {
	Minimum = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Count = 4,
	EThreatLevel_MAX = 5
};

// Enum Gobi.EThreatChange_Mode
enum class EThreatChange_Mode : uint8 {
	Mode_Always = 0,
	Mode_OnlyDuringHorde = 1,
	Mode_OnlyDuringWander = 2,
	Mode_MAX = 3
};

// Enum Gobi.EThrowableState
enum class EThrowableState : uint8 {
	Idle = 0,
	PullBack = 1,
	PullBackLoop = 2,
	Throwing = 3,
	Count = 4,
	EThrowableState_MAX = 5
};

// Enum Gobi.ETitanPhase2TentacleState
enum class ETitanPhase2TentacleState : uint8 {
	Dormant = 0,
	SmashTell = 1,
	SmashAttackBegin = 2,
	SmashAttackLoop = 3,
	SmashRetract = 4,
	ETitanPhase2TentacleState_MAX = 5
};

// Enum Gobi.ETitanStage3TailState
enum class ETitanStage3TailState : uint8 {
	Idle = 0,
	Thrash = 1,
	ETitanStage3TailState_MAX = 2
};

// Enum Gobi.ETitanStage3TentacleState
enum class ETitanStage3TentacleState : uint8 {
	Idle = 0,
	AcidSprayAttackEnter = 1,
	AcidSprayAttackLoop = 2,
	AcidSprayAttackExit = 3,
	ETitanStage3TentacleState_MAX = 4
};

// Enum Gobi.ETitanTentacleState
enum class ETitanTentacleState : uint8 {
	Idle = 0,
	SmashTell = 1,
	SmashAttack = 2,
	SwipeTell = 3,
	SwipeAttack = 4,
	ETitanTentacleState_MAX = 5
};

// Enum Gobi.ETitanTongueState
enum class ETitanTongueState : uint8 {
	Idle = 0,
	Grab = 1,
	Miss = 2,
	Pull = 3,
	Hold = 4,
	Bite = 5,
	Release = 6,
	Eat = 7,
	ETitanTongueState_MAX = 8
};

// Enum Gobi.ETitanStage3TailThrashMode
enum class ETitanStage3TailThrashMode : uint8 {
	Left = 0,
	Right = 1,
	Count = 2,
	ETitanStage3TailThrashMode_MAX = 3
};

// Enum Gobi.EHeroMeleeState
enum class EHeroMeleeState : uint8 {
	Idle = 0,
	AttackBuildUp = 1,
	Attacking = 2,
	Impact = 3,
	Blocking = 4,
	Count = 5,
	EHeroMeleeState_MAX = 6
};

// Enum Gobi.ETriggerEffectTriggerFlag
enum class ETriggerEffectTriggerFlag : uint8 {
	LeftTrigger = 0,
	RightTrigger = 1,
	ETriggerEffectTriggerFlag_MAX = 2
};

// Enum Gobi.ETriggerHordeState
enum class ETriggerHordeState : uint8 {
	Idle = 0,
	Triggering = 1,
	Count = 2,
	ETriggerHordeState_MAX = 3
};

// Enum Gobi.ETumorAltAimModes
enum class ETumorAltAimModes : int32 {
	NoAimMode = 0,
	EnemyOnly = 1,
	AltNearestEnemy = 2,
	AltNearestBrute = 4,
	AltNearestDirect = 8,
	AverageAlts = 16,
	AverageAltsAndEnemy = 32,
	WeightedAverageEnemy = 64,
	WeightedAverageBrute = 128,
	WeightedAverageDirect = 256,
	MaxFlag = 512,
	ETumorAltAimModes_MAX = 513
};

// Enum Gobi.EPartyScreenTab
enum class EPartyScreenTab : uint8 {
	OnlinePlayer = 0,
	GroupPlayer = 1,
	RecentPlayer = 2,
	BlockedPlayer = 3,
	WBP1Player = 4,
	Count = 5,
	EPartyScreenTab_MAX = 6
};

// Enum Gobi.EVendorSaleBehavior
enum class EVendorSaleBehavior : uint8 {
	MatchOne = 0,
	MatchAll = 1,
	MatchAllAndReroll = 2,
	EVendorSaleBehavior_MAX = 3
};

// Enum Gobi.EVivoxChannelConnectionType
enum class EVivoxChannelConnectionType : uint8 {
	Channel = 0,
	Audio = 1,
	Text = 2,
	SpeechToText = 3,
	Count = 4,
	EVivoxChannelConnectionType_MAX = 5
};

// Enum Gobi.EVivoxChannelType
enum class EVivoxChannelType : uint8 {
	EchoAudio = 0,
	GlobalAudio = 1,
	TeamAudio = 2,
	GlobalText = 3,
	Count = 4,
	EVivoxChannelType_MAX = 5
};

// Enum Gobi.EVivoxEnvironment
enum class EVivoxEnvironment : uint8 {
	Back4BloodBetaProduction = 0,
	Count = 1,
	EVivoxEnvironment_MAX = 2
};

// Enum Gobi.EWallGrabState
enum class EWallGrabState : uint8 {
	Idle = 0,
	Grabbing = 1,
	Count = 2,
	EWallGrabState_MAX = 3
};

// Enum Gobi.EWaterRippleStartType
enum class EWaterRippleStartType : uint8 {
	Wave = 0,
	Trough = 1,
	EWaterRippleStartType_MAX = 2
};

// Enum Gobi.EWaypointVisibility
enum class EWaypointVisibility : uint8 {
	All = 0,
	Hero = 1,
	Zombie = 2,
	OwnerTeam = 3,
	OwnerOnly = 4,
	EWaypointVisibility_MAX = 5
};

// Enum Gobi.EWaypointType
enum class EWaypointType : uint8 {
	Waypoint = 0,
	PingActor = 1,
	PingLocation = 2,
	PingCommWheel = 3,
	EWaypointType_MAX = 4
};

// Enum Gobi.EWeaponCustomizationType
enum class EWeaponCustomizationType : uint8 {
	Camouflage = 0,
	Count = 1,
	EWeaponCustomizationType_MAX = 2
};

// Enum Gobi.EWeaponTraitType
enum class EWeaponTraitType : uint8 {
	BaseConfig = 0,
	AttachmentConfig = 1,
	EWeaponTraitType_MAX = 2
};

// Enum Gobi.EAttachmentTransactionType
enum class EAttachmentTransactionType : uint8 {
	Added = 0,
	Removed = 1,
	EAttachmentTransactionType_MAX = 2
};

// Enum Gobi.EAnimMoveSet
enum class EAnimMoveSet : uint8 {
	MoveSet1 = 0,
	MoveSet2 = 1,
	MoveSet3 = 2,
	EAnimMoveSet_MAX = 3
};

// Enum Gobi.EZombieFacialExpression
enum class EZombieFacialExpression : uint8 {
	NeutralFirst = 0,
	NeutralA = 1,
	NeutralLast = 2,
	AlertedFirst = 3,
	AlertedA = 4,
	AlertedLast = 5,
	ActiveFirst = 6,
	ActiveA = 7,
	ActiveLast = 8,
	PainFirst = 9,
	PainA = 10,
	PainLast = 11,
	DyingFirst = 12,
	DyingA = 13,
	DyingLast = 14,
	Count = 15,
	EZombieFacialExpression_MAX = 16
};

// Enum Gobi.ECanSpawnResult
enum class ECanSpawnResult : uint8 {
	Success = 0,
	LineOfSight = 1,
	Distance = 2,
	SafeRoom = 3,
	PreMatchStart = 4,
	PreparationArea = 5,
	LockedInSafeRoom = 6,
	Climbing = 7,
	Damaged = 8,
	Unknown = 9,
	InSafeRoom = 10,
	Falling = 11,
	OnCooldown = 12,
	ECanSpawnResult_MAX = 13
};

// Enum Gobi.EZombieCustomMove
enum class EZombieCustomMove : uint8 {
	Invalid = 0,
	Charge = 6,
	EZombieCustomMove_MAX = 7
};

// Enum Gobi.EZombieMovementForce
enum class EZombieMovementForce : uint8 {
	Charge = 0,
	Count = 1,
	EZombieMovementForce_MAX = 2
};

// Enum Gobi.EZombieMutationTree
enum class EZombieMutationTree : uint8 {
	Common = 0,
	Bloater = 1,
	Spiker = 2,
	Tallboy = 3,
	Chaser = 4,
	EZombieMutationTree_MAX = 5
};

// Enum Gobi.EZombieAttachLocationType
enum class EZombieAttachLocationType : uint8 {
	Wall = 0,
	Ceiling = 1,
	Pole = 2,
	Perchable = 3,
	Count = 4,
	Invalid = 5,
	EZombieAttachLocationType_MAX = 6
};

// ScriptStruct Gobi.DamageInfo
// Size: 0xb8 (Inherited: 0x00)
struct FDamageInfo {
	float Damage; // 0x00(0x04)
	float PermanentDamage; // 0x04(0x04)
	float DamagePct; // 0x08(0x04)
	float PermanentDamagePct; // 0x0c(0x04)
	float PreviousTotalHealth; // 0x10(0x04)
	float WeakSpotDamageMultiplier; // 0x14(0x04)
	struct UGobiDamageType* DamageType; // 0x18(0x08)
	struct UHealthComponent* HealthComponent; // 0x20(0x08)
	struct UWeakSpotsComponent* WeakSpotsComponent; // 0x28(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x30(0x08)
	struct FVector ImpactPoint; // 0x38(0x0c)
	struct FVector ImpactDirection; // 0x44(0x0c)
	struct FName BoneName; // 0x50(0x08)
	struct FGameplayEffectSource EffectSource; // 0x58(0x38)
	struct FVector HitResultLocation; // 0x90(0x0c)
	struct FVector TraceDirection; // 0x9c(0x0c)
	enum class EPhysicalSurface PhysicsSurface; // 0xa8(0x01)
	bool bWeakSpot; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32_t Item; // 0xac(0x04)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct Gobi.GameplayEffectSource
// Size: 0x38 (Inherited: 0x00)
struct FGameplayEffectSource {
	struct UActorComponent* InstigatingComponent; // 0x00(0x08)
	struct AActor* InstigatingActor; // 0x08(0x08)
	struct AActor* InstigatingItem; // 0x10(0x08)
	struct APawn* InstigatingPawn; // 0x18(0x08)
	struct AController* InstigatingController; // 0x20(0x08)
	struct FVector SourceLocationOverride; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Gobi.FilteredCards
// Size: 0x20 (Inherited: 0x00)
struct FFilteredCards {
	struct TArray<struct FDataTableRowHandle> OwnerCards; // 0x00(0x10)
	struct TArray<struct FDataTableRowHandle> PartyCards; // 0x10(0x10)
};

// ScriptStruct Gobi.GameplayCardPreset
// Size: 0x48 (Inherited: 0x00)
struct FGameplayCardPreset {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct FText LocalizedText; // 0x18(0x18)
	bool AllUnlockedCards; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FDataTableRowHandle> Cards; // 0x38(0x10)
};

// ScriptStruct Gobi.PackedPlayerDeckData
// Size: 0x18 (Inherited: 0x00)
struct FPackedPlayerDeckData {
	char DeckIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<char> AffinityCounts; // 0x08(0x10)
};

// ScriptStruct Gobi.BurnCardInfo
// Size: 0x48 (Inherited: 0x00)
struct FBurnCardInfo {
	struct FDataTableRowHandle ProductHandle; // 0x00(0x20)
	struct FDataTableRowHandle CardRowHandle; // 0x20(0x20)
	int32_t Quantity; // 0x40(0x04)
	int32_t MaxQuantity; // 0x44(0x04)
};

// ScriptStruct Gobi.GameplayModTag
// Size: 0x28 (Inherited: 0x00)
struct FGameplayModTag {
	struct FDataTableRowHandle TagRowHandle; // 0x00(0x20)
	int32_t StackCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.ActiveGameplayCard
// Size: 0x28 (Inherited: 0x00)
struct FActiveGameplayCard {
	struct FDataTableRowHandle CardRowHandle; // 0x00(0x20)
	int32_t RandomSeed; // 0x20(0x04)
	bool bSuppressNotification; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Gobi.ModInstance
// Size: 0x20 (Inherited: 0x00)
struct FModInstance {
	struct UGameplayMod* Mod; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Gobi.ZombieMutationTeamData
// Size: 0x18 (Inherited: 0x00)
struct FZombieMutationTeamData {
	enum class EMatchmakingTeam MatchmakingTeam; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CommunalPoints; // 0x04(0x04)
	struct TArray<struct FZombieMutationPurchase> MutationPurchases; // 0x08(0x10)
};

// ScriptStruct Gobi.ZombieMutationPurchase
// Size: 0x30 (Inherited: 0x00)
struct FZombieMutationPurchase {
	int32_t PointsApplied; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FActiveGameplayCard ActiveGameplayCard; // 0x08(0x28)
};

// ScriptStruct Gobi.PlayerActiveGameplayCardData
// Size: 0xa0 (Inherited: 0x00)
struct FPlayerActiveGameplayCardData {
	struct FSlotIndex SlotIndex; // 0x00(0x08)
	int32_t PlayerId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FActiveGameplayCard> ActiveHeroCards; // 0x10(0x10)
	int32_t EquippedPresetIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FDataTableRowHandle> EquippedPresetCards; // 0x28(0x10)
	bool EquippedPresetIsBuiltIn; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FPackedPlayerDeckData PackedDeckData; // 0x40(0x18)
	bool HasReceivedLoadoutCardsThisMap; // 0x58(0x01)
	bool HasReceivedLoadoutCards; // 0x59(0x01)
	bool HasReceivedPerThreatBonuses; // 0x5a(0x01)
	bool HasReceivedCatchUpBonusDraws; // 0x5b(0x01)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FDataTableRowHandle> BurnCardsPlayedThisMap; // 0x60(0x10)
	struct FName AppliedCharacterRowName; // 0x70(0x08)
	int32_t BonusDraws; // 0x78(0x04)
	int32_t MutationPoints; // 0x7c(0x04)
	struct TArray<struct FDataTableRowHandle> CardsDrawnThisRound; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
};

// ScriptStruct Gobi.SlotIndex
// Size: 0x08 (Inherited: 0x00)
struct FSlotIndex {
	int32_t SlotId; // 0x00(0x04)
	enum class EMatchmakingTeam Team; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Gobi.GameplayEffectsEmitterTestConfig
// Size: 0x50 (Inherited: 0x00)
struct FGameplayEffectsEmitterTestConfig {
	float Distance; // 0x00(0x04)
	bool bApplyToCharactersOnly; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t ApplyToCharacterTeams; // 0x08(0x04)
	struct FCollisionProfileName OverlapCollisionProfile; // 0x0c(0x08)
	bool bRequiresLineOfSight; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName LineOfSightTargetComponentTag; // 0x18(0x08)
	bool bUseTargetEyePosForLoS; // 0x20(0x01)
	bool bSkipLOSForHostileTargets; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct UGameplayEffect*> GameplayEffects; // 0x28(0x10)
	struct FName BoneName; // 0x38(0x08)
	bool bExcludeInstigatingActor; // 0x40(0x01)
	bool bExcludeGodPlayers; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct USkeletalMeshComponent* AssociatedSkeletalMeshComponent; // 0x48(0x08)
};

// ScriptStruct Gobi.CharacterDefinitionRow
// Size: 0x188 (Inherited: 0x08)
struct FCharacterDefinitionRow : FTableRowBase {
	struct FName Slug; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	struct UTexture2D* Portrait; // 0x28(0x08)
	struct UTexture2D* PartyStatusPortrait; // 0x30(0x08)
	struct TSoftObjectPtr<UTexture2D> CustomizationPortrait; // 0x38(0x28)
	struct FDataTableRowHandle SpeakerRowHandle; // 0x60(0x20)
	struct UDataTable* CharacterCustomizationTable; // 0x80(0x08)
	struct FDataTableRowHandle DefaultSkinSet; // 0x88(0x20)
	struct USoundCollectionAsset* SoundCollectionAsset; // 0xa8(0x08)
	struct TArray<struct FDataTableRowHandle> GameplayCards; // 0xb0(0x10)
	struct UFacialAnimationData* FacialAnimationData; // 0xc0(0x08)
	bool bEnabled; // 0xc8(0x01)
	bool bEnabledForTradeShow; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FGameplayTagContainer DefaultTags; // 0xd0(0x20)
	struct FInventoryLoadout DefaultCharacterLoadout; // 0xf0(0x38)
	struct TArray<struct UAkAudioEvent*> CharacterSelectVOLines; // 0x128(0x10)
	struct TSoftObjectPtr<UAnimMontage> PreRoundAnimation; // 0x138(0x28)
	struct TSoftObjectPtr<UAnimMontage> PostRoundAnimation; // 0x160(0x28)
};

// ScriptStruct Gobi.InventoryLoadout
// Size: 0x38 (Inherited: 0x00)
struct FInventoryLoadout {
	struct TArray<struct FItemRowAndQuantity> Items; // 0x00(0x10)
	int32_t Currency; // 0x10(0x04)
	int32_t AmmoReserves[0x7]; // 0x14(0x1c)
	bool bClearExistingLoadout; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Gobi.ItemRowAndQuantity
// Size: 0x40 (Inherited: 0x00)
struct FItemRowAndQuantity {
	struct FDataTableRowHandle RowHandle; // 0x00(0x20)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FDataTableRowHandle> Attachments; // 0x28(0x10)
	int32_t ClipAmmo; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Gobi.OnlineMapChain
// Size: 0x60 (Inherited: 0x08)
struct FOnlineMapChain : FTableRowBase {
	struct FText MapChainName; // 0x08(0x18)
	enum class EGameModeType GameMode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MapChainOrder; // 0x24(0x04)
	struct FDataTableRowHandle LootSystemMapChain; // 0x28(0x20)
	struct TArray<struct FDataTableRowHandle> Maps; // 0x48(0x10)
	bool bIsForShowDemo; // 0x58(0x01)
	bool bIsOnlineOnly; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct Gobi.GameplayEffectsTarget
// Size: 0x18 (Inherited: 0x00)
struct FGameplayEffectsTarget {
	struct AActor* Actor; // 0x00(0x08)
	struct UPrimitiveComponent* PrimitiveComponent; // 0x08(0x08)
	struct UGameplayEffectsComponent* GameplayEffectsComponent; // 0x10(0x08)
};

// ScriptStruct Gobi.ItemRow
// Size: 0x2c8 (Inherited: 0x08)
struct FItemRow : FTableRowBase {
	struct FName Slug; // 0x08(0x08)
	bool bIsEnabled; // 0x10(0x01)
	bool bDisabledForTradeShow; // 0x11(0x01)
	bool bGameplayCritical; // 0x12(0x01)
	bool bIsGloballyLoaded; // 0x13(0x01)
	enum class EItemType Type; // 0x14(0x01)
	enum class EEquipmentSlot EquipSlot; // 0x15(0x01)
	enum class EItemQuality Quality; // 0x16(0x01)
	enum class EGameplayCardAffinity Affinity; // 0x17(0x01)
	struct TSoftClassPtr<UObject> ItemClass; // 0x18(0x28)
	struct TSoftClassPtr<UObject> DroppedLootClass; // 0x40(0x28)
	struct UDataTable* WeaponCustomizationTable; // 0x68(0x08)
	struct FRotator CustomizationViewRotationOffset; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FDataTableRowHandle TuningData; // 0x80(0x20)
	struct FGameplayTag ItemTag; // 0xa0(0x08)
	struct FGameplayTagContainer AssociatedTags; // 0xa8(0x20)
	int32_t Cost; // 0xc8(0x04)
	float LootWeight; // 0xcc(0x04)
	int32_t MaxStack; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FItemUseRulesConfig ItemUseConfig; // 0xd8(0x80)
	struct TArray<struct UGameplayEffect*> SelectedGameplayEffects; // 0x158(0x10)
	struct TArray<struct FDataTableRowHandle> GameplayCardsToApply; // 0x168(0x10)
	bool bRetainOnDeath; // 0x178(0x01)
	bool bRetainBetweenLevels; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct FText DisplayName; // 0x180(0x18)
	struct FText Description; // 0x198(0x18)
	enum class EItemCategory DisplayCategory; // 0x1b0(0x01)
	bool bIgnoreArmoryEntry; // 0x1b1(0x01)
	char pad_1B2[0x6]; // 0x1b2(0x06)
	struct FGameplayTagContainer RelatedArmoryWeaponTag; // 0x1b8(0x20)
	struct UTexture2D* SmallIconImage; // 0x1d8(0x08)
	struct UTexture2D* LargeIconImage; // 0x1e0(0x08)
	struct UTexture2D* ThumbnailImage; // 0x1e8(0x08)
	struct FLinearColor TextColor; // 0x1f0(0x10)
	int32_t PartyStatusPriority; // 0x200(0x04)
	enum class EItemPickupDialogue PickupDialogue; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct UAkAudioEvent* AKEDrop; // 0x208(0x08)
	struct UAkAudioEvent* AKEPickup; // 0x210(0x08)
	struct UAkAudioEvent* AKEPickupFromWall; // 0x218(0x08)
	struct UAkAudioEvent* AKEPickupGenericTap; // 0x220(0x08)
	struct UAkAudioEvent* AKEPickupLocalPlayer; // 0x228(0x08)
	struct UAkAudioEvent* AKEBounce; // 0x230(0x08)
	struct UAkAudioEvent* AKERoll; // 0x238(0x08)
	struct UAkAudioEvent* AKEPurchase; // 0x240(0x08)
	struct UAkAudioEvent* AKECustomization; // 0x248(0x08)
	struct FSoftObjectPath FirstPersonBaseMesh; // 0x250(0x18)
	struct TSoftObjectPtr<UStaticMesh> CharacterLineupMesh; // 0x268(0x28)
	struct TArray<struct FItemAttribute> Attributes; // 0x290(0x10)
	struct TArray<struct FItemAttributeModifier> AttributeModifiers; // 0x2a0(0x10)
	struct TArray<struct FDataTableRowHandle> AttachmentTooltipPerks; // 0x2b0(0x10)
	int32_t StarValue; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
};

// ScriptStruct Gobi.ItemAttributeModifier
// Size: 0x0c (Inherited: 0x00)
struct FItemAttributeModifier {
	enum class EItemAttributeType AttributeType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ModifierValue; // 0x04(0x04)
	bool bRequireItemCategory; // 0x08(0x01)
	bool bRequireItemAffintity; // 0x09(0x01)
	enum class EItemCategory RequiredItemCategory; // 0x0a(0x01)
	enum class EGameplayCardAffinity RequiredItemAffinity; // 0x0b(0x01)
};

// ScriptStruct Gobi.ItemAttribute
// Size: 0x08 (Inherited: 0x00)
struct FItemAttribute {
	enum class EItemAttributeType AttributeType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AttributeValue; // 0x04(0x04)
};

// ScriptStruct Gobi.ItemUseRulesConfig
// Size: 0x80 (Inherited: 0x00)
struct FItemUseRulesConfig {
	uint16_t UseType; // 0x00(0x02)
	uint16_t TargetType; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayTagQuery TargetTagQuery; // 0x08(0x48)
	struct TSoftClassPtr<UObject> TargetFilterSet; // 0x50(0x28)
	enum class EItemTargetRange TargetRange; // 0x78(0x01)
	enum class EItemTargetAffectsRange TargetAffectsRange; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct Gobi.GobiOnlineUser
// Size: 0xe8 (Inherited: 0x00)
struct FGobiOnlineUser {
	char pad_0[0x10]; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	char pad_20[0x28]; // 0x20(0x28)
	enum class EFriendInviteStatus FriendInviteStatus; // 0x48(0x01)
	bool bIsOnline; // 0x49(0x01)
	bool bIsPlayingAnyApp; // 0x4a(0x01)
	bool bIsPlayingThisApp; // 0x4b(0x01)
	bool bHasVoiceSupport; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FGobiOnlineUserSession Group; // 0x50(0x38)
	enum class EGameModeClassification GameModeClassification; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FText StatusText; // 0x90(0x18)
	struct FString PlatformName; // 0xa8(0x10)
	enum class EHydraAuthType HydraAuthType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString HydraId; // 0xc0(0x10)
	struct FString HydraPublicId; // 0xd0(0x10)
	enum class EFriendInviteStatus HydraInviteStatus; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct Gobi.GobiOnlineUserSession
// Size: 0x38 (Inherited: 0x00)
struct FGobiOnlineUserSession {
	struct FString SessionId; // 0x00(0x10)
	struct FString SessionCluster; // 0x10(0x10)
	enum class EMatchmakingTeam Team; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t NumHeros; // 0x24(0x04)
	int32_t NumZombies; // 0x28(0x04)
	int32_t NumUsers; // 0x2c(0x04)
	enum class ESessionPrivacy Privacy; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Gobi.RandomItemTableRoll
// Size: 0x10 (Inherited: 0x00)
struct FRandomItemTableRoll {
	int32_t MinRollsFromTable; // 0x00(0x04)
	int32_t MaxRollsFromTable; // 0x04(0x04)
	struct UDataTable* DataTable; // 0x08(0x08)
};

// ScriptStruct Gobi.GobiParticleParam
// Size: 0x90 (Inherited: 0x80)
struct FGobiParticleParam : FParticleSysParam {
	bool bImpactValue; // 0x80(0x01)
	char pad_81[0xf]; // 0x81(0x0f)
};

// ScriptStruct Gobi.WalkOffLedgeData
// Size: 0x28 (Inherited: 0x00)
struct FWalkOffLedgeData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Gobi.GobiCharacterLoadout
// Size: 0x48 (Inherited: 0x00)
struct FGobiCharacterLoadout {
	bool bApplyLoadout; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FInventoryLoadout Loadout; // 0x08(0x38)
	enum class ELoadoutSource LoadoutSource; // 0x40(0x01)
	bool bHasInfiniteAmmo; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Gobi.CharacterRandomizationData
// Size: 0x08 (Inherited: 0x00)
struct FCharacterRandomizationData {
	int32_t RandomSeed; // 0x00(0x04)
	int32_t MeshIndex; // 0x04(0x04)
};

// ScriptStruct Gobi.FallDamageData
// Size: 0x30 (Inherited: 0x00)
struct FFallDamageData {
	struct UGobiDamageType* DamageType; // 0x00(0x08)
	struct TArray<struct FFallDamageTypeMap> DamageTypes; // 0x08(0x10)
	struct UCurveFloat* DamageCurve; // 0x18(0x08)
	float MinDistanceToTakeDamage; // 0x20(0x04)
	float FatalDistance; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Gobi.FallDamageTypeMap
// Size: 0x10 (Inherited: 0x00)
struct FFallDamageTypeMap {
	float DamageAmountMin; // 0x00(0x04)
	float DamageAmountMax; // 0x04(0x04)
	struct UGobiDamageType* DamageType; // 0x08(0x08)
};

// ScriptStruct Gobi.WasRenderedClientInfo
// Size: 0x20 (Inherited: 0x00)
struct FWasRenderedClientInfo {
	float ThresholdTime; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	float DistLimit; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Gobi.MaterialParamOverride
// Size: 0x30 (Inherited: 0x00)
struct FMaterialParamOverride {
	float ValueOverride; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> MaterialSlotNames; // 0x08(0x10)
	struct FName MaterialParamName; // 0x18(0x08)
	struct FGameplayTag TagToSetOverrideOn; // 0x20(0x08)
	struct FGameplayTag SkelMeshTag; // 0x28(0x08)
};

// ScriptStruct Gobi.SelectedLocoInfo
// Size: 0x10 (Inherited: 0x00)
struct FSelectedLocoInfo {
	struct FGameplayTag AnimGraphTag; // 0x00(0x08)
	int32_t AnimGraphSetIndex; // 0x08(0x04)
	int32_t LocoVariationIndex; // 0x0c(0x04)
};

// ScriptStruct Gobi.LocoVariationConfig
// Size: 0x18 (Inherited: 0x00)
struct FLocoVariationConfig {
	enum class ELocoChooseMode ChooseMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FLocoAnimGraphSet> AnimGraphSets; // 0x08(0x10)
};

// ScriptStruct Gobi.LocoAnimGraphSet
// Size: 0x18 (Inherited: 0x00)
struct FLocoAnimGraphSet {
	struct FGameplayTag AnimGraphTag; // 0x00(0x08)
	struct TArray<struct FLocoVariation> LocoVariations; // 0x08(0x10)
};

// ScriptStruct Gobi.LocoVariation
// Size: 0x60 (Inherited: 0x00)
struct FLocoVariation {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGameplayTag VariationTag; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimInstance* VariationAnimInstance; // 0x10(0x08)
	struct FGameplayTagQuery RequiredTagQuery; // 0x18(0x48)
};

// ScriptStruct Gobi.GobiCharacterMoveEffects
// Size: 0x78 (Inherited: 0x00)
struct FGobiCharacterMoveEffects {
	float SpeedToApplyEffects; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayTagQuery TagRequirements; // 0x08(0x48)
	struct TArray<struct UGameplayEffect*> Effects; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
};

// ScriptStruct Gobi.CharacterImpactTableConfig
// Size: 0x08 (Inherited: 0x00)
struct FCharacterImpactTableConfig {
	struct UImpactEffectConfig* ImpactTable; // 0x00(0x08)
};

// ScriptStruct Gobi.CharacterAvoidanceTuning
// Size: 0x30 (Inherited: 0x00)
struct FCharacterAvoidanceTuning {
	float MaxCharacterAvoidanceAngleThreshold; // 0x00(0x04)
	bool bCharacterAvoidanceStopsMovement; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float CharacterAvoidanceAngle; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTagContainer AvoidanceIgnoreTags; // 0x10(0x20)
};

// ScriptStruct Gobi.GobiCharacterConfig
// Size: 0x28 (Inherited: 0x00)
struct FGobiCharacterConfig {
	struct USkeletalMeshRegionConfig* MeshConfig; // 0x00(0x08)
	struct FGameplayTagContainer Tags; // 0x08(0x20)
};

// ScriptStruct Gobi.CameraViewModifier
// Size: 0x38 (Inherited: 0x00)
struct FCameraViewModifier {
	float ActiveFOV; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* BlendCurve; // 0x08(0x08)
	float AlphaInTimeOverride; // 0x10(0x04)
	float AlphaOutTimeOverride; // 0x14(0x04)
	float RotationLagSpeed; // 0x18(0x04)
	bool bApplySocketOffset; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FVector SocketOffset; // 0x20(0x0c)
	bool bApplyTargetArmLength; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float TargetArmLength; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Gobi.HeroFirstPersonMeshConfig
// Size: 0x58 (Inherited: 0x00)
struct FHeroFirstPersonMeshConfig {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> MaterialOverrides; // 0x08(0x50)
};

// ScriptStruct Gobi.ItemAttachmentSlotInfo
// Size: 0x38 (Inherited: 0x00)
struct FItemAttachmentSlotInfo {
	struct FText NameOfSlotType; // 0x00(0x18)
	struct FGameplayTagContainer SupportedTags; // 0x18(0x20)
};

// ScriptStruct Gobi.FirstPersonFoVAttachmentConfiguration
// Size: 0x2c (Inherited: 0x00)
struct FFirstPersonFoVAttachmentConfiguration {
	struct FGameplayTag CorrespondingAttachment; // 0x00(0x08)
	struct FFPFOVConfiguration FOV; // 0x08(0x24)
};

// ScriptStruct Gobi.FPFOVConfiguration
// Size: 0x24 (Inherited: 0x00)
struct FFPFOVConfiguration {
	struct FScreenModeFPConfiguration FullFrameConfiguration; // 0x00(0x0c)
	struct FScreenModeFPConfiguration VerticalSplitConfiguration; // 0x0c(0x0c)
	struct FScreenModeFPConfiguration HorizontalSplitConfiguration; // 0x18(0x0c)
};

// ScriptStruct Gobi.ScreenModeFPConfiguration
// Size: 0x0c (Inherited: 0x00)
struct FScreenModeFPConfiguration {
	float BaseFOV; // 0x00(0x04)
	bool bUseCustomADSFOV; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float CustomADSFOV; // 0x08(0x04)
};

// ScriptStruct Gobi.HealInfo
// Size: 0x48 (Inherited: 0x00)
struct FHealInfo {
	float Health; // 0x00(0x04)
	float PermanentHealth; // 0x04(0x04)
	struct UHealthComponent* HealthComponent; // 0x08(0x08)
	struct FGameplayEffectSource EffectSource; // 0x10(0x38)
};

// ScriptStruct Gobi.HitMarkerInfo
// Size: 0xd0 (Inherited: 0x00)
struct FHitMarkerInfo {
	struct AActor* Attacker; // 0x00(0x08)
	struct AActor* Victim; // 0x08(0x08)
	int32_t ArmorIdx; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDamageInfo DamageResult; // 0x18(0xb8)
};

// ScriptStruct Gobi.BadgeData
// Size: 0x0c (Inherited: 0x00)
struct FBadgeData {
	int32_t Emblem; // 0x00(0x04)
	int32_t Title; // 0x04(0x04)
	int32_t Banner; // 0x08(0x04)
};

// ScriptStruct Gobi.GobiSession
// Size: 0xe0 (Inherited: 0x00)
struct FGobiSession {
	struct TArray<struct FGobiSessionUser> Users; // 0x00(0x10)
	struct TArray<struct FGobiSessionPendingParticipant> PendingParticipants; // 0x10(0x10)
	struct FGobiSessionSessionData SessionData; // 0x20(0x30)
	struct FGobiSessionServerData ServerData; // 0x50(0x50)
	struct FString SessionId; // 0xa0(0x10)
	struct FString SessionCluster; // 0xb0(0x10)
	struct FString SessionHostId; // 0xc0(0x10)
	struct FString Region; // 0xd0(0x10)
};

// ScriptStruct Gobi.GobiSessionServerData
// Size: 0x50 (Inherited: 0x00)
struct FGobiSessionServerData {
	struct FString Ip; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ServerUserId; // 0x18(0x10)
	bool bReady; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString CurrentState; // 0x30(0x10)
	struct TArray<struct FGobiSessionServerParticipantData> Users; // 0x40(0x10)
};

// ScriptStruct Gobi.GobiSessionServerParticipantData
// Size: 0x18 (Inherited: 0x00)
struct FGobiSessionServerParticipantData {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.GobiSessionSessionData
// Size: 0x30 (Inherited: 0x00)
struct FGobiSessionSessionData {
	enum class EGobiSessionType SessionType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameSessionId; // 0x08(0x10)
	struct FString ListenAddr; // 0x18(0x10)
	int32_t ListenPort; // 0x28(0x04)
	enum class EMatchmakingTeam GameTeam; // 0x2c(0x01)
	enum class ESessionPrivacy Privacy; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct Gobi.GobiSessionPendingParticipant
// Size: 0x18 (Inherited: 0x00)
struct FGobiSessionPendingParticipant {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.GobiSessionUser
// Size: 0xc0 (Inherited: 0x00)
struct FGobiSessionUser {
	struct FString UserId; // 0x00(0x10)
	int32_t UserNonce; // 0x10(0x04)
	char pad_14[0x14]; // 0x14(0x14)
	struct FGobiSessionUserData UserData; // 0x28(0x68)
	char pad_90[0x10]; // 0x90(0x10)
	enum class EMatchmakingTeam Team; // 0xa0(0x01)
	char pad_A1[0x1f]; // 0xa1(0x1f)
};

// ScriptStruct Gobi.GobiSessionUserData
// Size: 0x68 (Inherited: 0x00)
struct FGobiSessionUserData {
	struct FString Relay; // 0x00(0x10)
	struct FString FPIDGroup; // 0x10(0x10)
	struct FString GroupSessionId; // 0x20(0x10)
	struct FString GroupSessionCluster; // 0x30(0x10)
	struct FString SplitscreenHost; // 0x40(0x10)
	struct FString SplitscreenJoiner; // 0x50(0x10)
	enum class EMatchmakingTeam DesiredTeam; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Gobi.CharacterCustomizationSet
// Size: 0x88 (Inherited: 0x00)
struct FCharacterCustomizationSet {
	struct FDataTableRowHandle CustomizationSlots[0x4]; // 0x00(0x80)
	enum class ECharacterCustomizationSlot LastEquipSlot; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Gobi.PostRoundSummaryStatValue
// Size: 0x28 (Inherited: 0x00)
struct FPostRoundSummaryStatValue {
	struct FText Name; // 0x00(0x18)
	int32_t OldValue; // 0x18(0x04)
	int32_t NewValue; // 0x1c(0x04)
	bool bIsTimer; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Gobi.PostRoundStatConfig
// Size: 0x40 (Inherited: 0x00)
struct FPostRoundStatConfig {
	struct FString Name; // 0x00(0x10)
	struct FText Display; // 0x10(0x18)
	enum class EPlayerProfileStat Stat; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString StatSuffix; // 0x30(0x10)
};

// ScriptStruct Gobi.PlayerStateUserIds
// Size: 0x38 (Inherited: 0x00)
struct FPlayerStateUserIds {
	struct FString UserId; // 0x00(0x10)
	int32_t Nonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString HydraPublicId; // 0x18(0x10)
	struct FString VivoxTalker; // 0x28(0x10)
};

// ScriptStruct Gobi.RespawnSnapshot_Zombie
// Size: 0x08 (Inherited: 0x00)
struct FRespawnSnapshot_Zombie {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Gobi.ZombieRespawnTime
// Size: 0x10 (Inherited: 0x00)
struct FZombieRespawnTime {
	struct APawn* PawnClass; // 0x00(0x08)
	float RespawnTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.TriggerEffectsDefinition
// Size: 0x0c (Inherited: 0x00)
struct FTriggerEffectsDefinition {
	int32_t TriggerEffectTriggerFlags; // 0x00(0x04)
	enum class ETriggerEffectMode EffectMode; // 0x04(0x01)
	char Value1; // 0x05(0x01)
	char Value2; // 0x06(0x01)
	char Value3; // 0x07(0x01)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Gobi.TuningDataBase
// Size: 0x08 (Inherited: 0x00)
struct FTuningDataBase {
	struct FName TuningDataIdentifier; // 0x00(0x08)
};

// ScriptStruct Gobi.MeleeTuning
// Size: 0x44 (Inherited: 0x08)
struct FMeleeTuning : FTuningDataBase {
	float MeleeCooldown; // 0x08(0x04)
	float MeleeActivationCooldown; // 0x0c(0x04)
	float IgnoreImpactsAboveHeight; // 0x10(0x04)
	struct FMeleeImpactVolumeTuning ImpactLocationVolume; // 0x14(0x0c)
	struct FMeleeImpactVolumeTuning ImpactForwardVolume; // 0x20(0x0c)
	float MaxReticleLockOnDistance; // 0x2c(0x04)
	float DesiredImpactAnimSec; // 0x30(0x04)
	float MoveToTargetSpeed; // 0x34(0x04)
	float TargetDirectionOffset; // 0x38(0x04)
	float MinDistFromTargetToMove; // 0x3c(0x04)
	uint32_t MaxReattackCount; // 0x40(0x04)
};

// ScriptStruct Gobi.MeleeImpactVolumeTuning
// Size: 0x0c (Inherited: 0x00)
struct FMeleeImpactVolumeTuning {
	float Radius; // 0x00(0x04)
	float HalfHeight; // 0x04(0x04)
	float CapsuleOffset; // 0x08(0x04)
};

// ScriptStruct Gobi.MeleeAttack
// Size: 0x20 (Inherited: 0x00)
struct FMeleeAttack {
	struct TArray<struct UAnimMontage*> AttackMontages; // 0x00(0x10)
	struct TArray<struct UAnimMontage*> ImpactMontages; // 0x10(0x10)
};

// ScriptStruct Gobi.GameplayCueHandle
// Size: 0x18 (Inherited: 0x00)
struct FGameplayCueHandle {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Gobi.UsableSuccessfulUsePayload
// Size: 0x20 (Inherited: 0x00)
struct FUsableSuccessfulUsePayload {
	struct AActor* UsingActor; // 0x00(0x08)
	struct UHeroUseComponent* UsingComponent; // 0x08(0x08)
	struct UUsableComponent* UsedComponent; // 0x10(0x08)
	bool bQuickUse; // 0x18(0x01)
	bool bExecuteHeldBehavior; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Gobi.UsableCondition
// Size: 0x28 (Inherited: 0x00)
struct FUsableCondition {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText FailText; // 0x08(0x18)
	bool bNegateCheck; // 0x20(0x01)
	bool bContinuousCondition; // 0x21(0x01)
	bool bIgnoreConditionAfterSuccessfulUse; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct Gobi.GameplayTagCondition
// Size: 0xe0 (Inherited: 0x28)
struct FGameplayTagCondition : FUsableCondition {
	bool bBothQueriesMustSucceed; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FGameplayTagQuery UserTagQuery; // 0x30(0x48)
	struct FGameplayTagQuery UsableTagQuery; // 0x78(0x48)
	struct FGameplayTagContainer UsableInitialTags; // 0xc0(0x20)
};

// ScriptStruct Gobi.UsableInventoryCondition
// Size: 0x58 (Inherited: 0x28)
struct FUsableInventoryCondition : FUsableCondition {
	struct FDataTableRowHandle RequiredInventoryItem; // 0x28(0x20)
	int32_t RequiredItemCount; // 0x48(0x04)
	bool bConsumeRequiredItemsOnSuccess; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t NumItemsToConsumeOnSuccess; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Gobi.MissionObjectiveCondition
// Size: 0x50 (Inherited: 0x28)
struct FMissionObjectiveCondition : FUsableCondition {
	struct FDataTableRowHandle MissionObjective; // 0x28(0x20)
	enum class EMissionObjectiveConditionType ConditionType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.HealthPercentCondition
// Size: 0x38 (Inherited: 0x28)
struct FHealthPercentCondition : FUsableCondition {
	bool bRequired; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MinHealthPercent; // 0x2c(0x04)
	float MaxHealthPercent; // 0x30(0x04)
	bool bAllowUseWithIncapStrikes; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Gobi.CurrencyCondition
// Size: 0x30 (Inherited: 0x28)
struct FCurrencyCondition : FUsableCondition {
	int32_t RequiredCurrency; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Gobi.UsableProgressBarDefinition
// Size: 0x28 (Inherited: 0x00)
struct FUsableProgressBarDefinition {
	bool bWantsProgressBar; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ProgressBarText; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Gobi.BurstMoveTickData
// Size: 0x14 (Inherited: 0x00)
struct FBurstMoveTickData {
	enum class EBurstAttackState State; // 0x00(0x01)
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct Gobi.BurstAttackTuning
// Size: 0x3c (Inherited: 0x08)
struct FBurstAttackTuning : FTuningDataBase {
	float MaxBurstSecs; // 0x08(0x04)
	float MinStartBurstSecs; // 0x0c(0x04)
	float BurstRecoverSecs; // 0x10(0x04)
	float BurstRecoverDelay; // 0x14(0x04)
	float TraceAheadDistance; // 0x18(0x04)
	float TurnSpeed; // 0x1c(0x04)
	float BurstStartPlayRate; // 0x20(0x04)
	float BurstLoopPlayRate; // 0x24(0x04)
	float MinSpeedThreshold; // 0x28(0x04)
	float MaxNoBurstSpeedTime; // 0x2c(0x04)
	float MinTimeBeforeBackButtonCancels; // 0x30(0x04)
	float MinTimeBeforeSprintButtonCancels; // 0x34(0x04)
	float MinTimeBeforeCanReburst; // 0x38(0x04)
};

// ScriptStruct Gobi.AOEAttackTuning
// Size: 0x18 (Inherited: 0x08)
struct FAOEAttackTuning : FTuningDataBase {
	float Cooldown; // 0x08(0x04)
	float AOERadius; // 0x0c(0x04)
	float AOEHalfHeight; // 0x10(0x04)
	float AOEZOffset; // 0x14(0x04)
};

// ScriptStruct Gobi.Cornstalk
// Size: 0x18 (Inherited: 0x00)
struct FCornstalk {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Gobi.DifficultyValue
// Size: 0x01 (Inherited: 0x00)
struct FDifficultyValue {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Gobi.DifficultyInt
// Size: 0x14 (Inherited: 0x01)
struct FDifficultyInt : FDifficultyValue {
	int32_t Easy; // 0x00(0x04)
	int32_t Normal; // 0x04(0x04)
	int32_t Hard; // 0x08(0x04)
	int32_t Legendary; // 0x0c(0x04)
	int32_t PVP; // 0x10(0x04)
};

// ScriptStruct Gobi.NestChallengeCards
// Size: 0x10 (Inherited: 0x00)
struct FNestChallengeCards {
	struct TArray<struct FDataTableRowHandle> ChallengeCards; // 0x00(0x10)
};

// ScriptStruct Gobi.ClusterBoils
// Size: 0x20 (Inherited: 0x00)
struct FClusterBoils {
	struct AActor* WaypointLessonActor; // 0x00(0x08)
	struct UStaticMeshComponent* Cluster; // 0x08(0x08)
	struct TArray<struct AActor*> Boils; // 0x10(0x10)
};

// ScriptStruct Gobi.DeathGasSpawnMoveTickData
// Size: 0x08 (Inherited: 0x00)
struct FDeathGasSpawnMoveTickData {
	enum class EDeathGasSpawnState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct Gobi.DeathGasSpawnTuning
// Size: 0x20 (Inherited: 0x08)
struct FDeathGasSpawnTuning : FTuningDataBase {
	float Cooldown; // 0x08(0x04)
	float StartingRadius; // 0x0c(0x04)
	float EndingRadius; // 0x10(0x04)
	float TransitionTime; // 0x14(0x04)
	float WarmupTime; // 0x18(0x04)
	float Duration; // 0x1c(0x04)
};

// ScriptStruct Gobi.ActivePerk
// Size: 0x80 (Inherited: 0x00)
struct FActivePerk {
	struct FDataTableRowHandle PerkRow; // 0x00(0x20)
	char PermanentCount; // 0x20(0x01)
	char SelectedItemCount; // 0x21(0x01)
	char TempCount; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	float ExpirationTime; // 0x24(0x04)
	char pad_28[0x58]; // 0x28(0x58)
};

// ScriptStruct Gobi.VendorStockItem
// Size: 0xb0 (Inherited: 0x00)
struct FVendorStockItem {
	struct FDataTableRowHandle ItemHandle; // 0x00(0x20)
	struct TArray<struct FDataTableRowHandle> Attachments; // 0x20(0x10)
	struct FDataTableRowHandle CardHandle; // 0x30(0x20)
	struct FVendorPsuedoItem PsuedoItem; // 0x50(0x58)
	float Discount; // 0xa8(0x04)
	int32_t RemainingStock; // 0xac(0x04)
};

// ScriptStruct Gobi.VendorPsuedoItem
// Size: 0x58 (Inherited: 0x00)
struct FVendorPsuedoItem {
	struct FText Name; // 0x00(0x18)
	int32_t Cost; // 0x18(0x04)
	float HealthGrantedPct; // 0x1c(0x04)
	float AmmoGrantedPct; // 0x20(0x04)
	enum class EAmmoType AmmoGrantedType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x28(0x28)
	struct UAkAudioEvent* PurchaseSound; // 0x50(0x08)
};

// ScriptStruct Gobi.RolledVendorStockCardParams
// Size: 0x28 (Inherited: 0x00)
struct FRolledVendorStockCardParams {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	bool bOneTimePurchase; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Gobi.RolledVendorStockItemParams
// Size: 0x28 (Inherited: 0x00)
struct FRolledVendorStockItemParams {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	bool bOneTimePurchase; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Gobi.DoorAlarmAudio
// Size: 0x20 (Inherited: 0x00)
struct FDoorAlarmAudio {
	struct UAkAudioEvent* AlarmLoop; // 0x00(0x08)
	struct UAkAudioEvent* AlarmLoopStop; // 0x08(0x08)
	struct UAkAudioEvent* AlarmBeepSound; // 0x10(0x08)
	float AlarmBeepRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Gobi.SqueezeTuning
// Size: 0x6c (Inherited: 0x08)
struct FSqueezeTuning : FTuningDataBase {
	float Cooldown; // 0x08(0x04)
	float MissCooldown; // 0x0c(0x04)
	float MaxDistanceToAttachPoint; // 0x10(0x04)
	float MaxDistanceToServerValidateGrab; // 0x14(0x04)
	float MaxAngleToSqueeze; // 0x18(0x04)
	float MaxDistanceToContinueSqueeze; // 0x1c(0x04)
	float MaxDistanceToContinuePin; // 0x20(0x04)
	float TestAroundDistance; // 0x24(0x04)
	float TestUpDistance; // 0x28(0x04)
	float BestCandidateForwardOffset; // 0x2c(0x04)
	struct FVector2D TargetViewPitch; // 0x30(0x08)
	struct FVector2D TargetPinnedViewPitch; // 0x38(0x08)
	struct FVector2D TargetViewYaw; // 0x40(0x08)
	float SqueezeTargetMoveSpeedOverride; // 0x48(0x04)
	struct FSqueezeMoveToReticleData MoveToReticleData; // 0x4c(0x10)
	struct FSqueezeMoveToReticleData PinMoveToReticleData; // 0x5c(0x10)
};

// ScriptStruct Gobi.SqueezeMoveToReticleData
// Size: 0x10 (Inherited: 0x00)
struct FSqueezeMoveToReticleData {
	float ReticleForwardOffset; // 0x00(0x04)
	float ReticleRightOffset; // 0x04(0x04)
	float MinForwardDistFromReticleToMove; // 0x08(0x04)
	float MinRightDistFromReticleToMove; // 0x0c(0x04)
};

// ScriptStruct Gobi.SqueezeMoveTickData
// Size: 0x1c (Inherited: 0x00)
struct FSqueezeMoveTickData {
	enum class ESqueezeState State; // 0x00(0x04)
	char pad_4[0x18]; // 0x04(0x18)
};

// ScriptStruct Gobi.TitanPhase
// Size: 0xb0 (Inherited: 0x00)
struct FTitanPhase {
	float NewBaseHealth; // 0x00(0x04)
	float TriggerNextPhaseHealthPct; // 0x04(0x04)
	float IdleSecsMin; // 0x08(0x04)
	float IdleSecsMax; // 0x0c(0x04)
	bool bCanTurn; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FTitanTurn Turn; // 0x14(0x0c)
	int32_t TailSwipeCount; // 0x20(0x04)
	struct FTitanTailSwipeAttack TailSwipeAttack; // 0x24(0x08)
	int32_t SweepForwardCount; // 0x2c(0x04)
	struct FTitanSweepForwardAttack SweepForwardAttack; // 0x30(0x08)
	int32_t TongueGrabCount; // 0x38(0x04)
	struct FTitanTongueGrabAttack TongueGrabAttack; // 0x3c(0x18)
	int32_t TentacleAttackCount; // 0x54(0x04)
	struct FTitanTentacleAttackShared TentacleAttackShared; // 0x58(0x24)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FTitanTentacleAttackIndividual> TentacleAttackIndividuals; // 0x80(0x10)
	struct UAnimMontage* ArriveMontage; // 0x90(0x08)
	struct UAnimSequence* IdleTailOnLeftAnimSequence; // 0x98(0x08)
	struct UAnimSequence* IdleTailOnRightAnimSequence; // 0xa0(0x08)
	struct UAnimMontage* RetreatMontage; // 0xa8(0x08)
};

// ScriptStruct Gobi.TitanTentacleAttackIndividual
// Size: 0x38 (Inherited: 0x00)
struct FTitanTentacleAttackIndividual {
	enum class ETitanTentacleId TentacleId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AttackAngleMin; // 0x04(0x04)
	float AttackAngleMax; // 0x08(0x04)
	struct FName BaseBone; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct UBlendSpace1D* SmashTellBlendSpace; // 0x18(0x08)
	struct UBlendSpace1D* SmashAttackBlendSpace; // 0x20(0x08)
	struct UAnimSequence* SwipeTellAnimSequence; // 0x28(0x08)
	struct UAnimSequence* SwipeAttackAnimSequence; // 0x30(0x08)
};

// ScriptStruct Gobi.TitanTentacleAttackShared
// Size: 0x24 (Inherited: 0x00)
struct FTitanTentacleAttackShared {
	float DelayBetweenAttacksMin; // 0x00(0x04)
	float DelayBetweenAttacksMax; // 0x04(0x04)
	int32_t SmashCount; // 0x08(0x04)
	float SmashTellSecs; // 0x0c(0x04)
	float SmashAttackSecs; // 0x10(0x04)
	float SmashAlignToTargetSecs; // 0x14(0x04)
	int32_t SwipeCount; // 0x18(0x04)
	float SwipeTellSecs; // 0x1c(0x04)
	float SwipeAttackSecs; // 0x20(0x04)
};

// ScriptStruct Gobi.TitanTongueGrabAttack
// Size: 0x18 (Inherited: 0x00)
struct FTitanTongueGrabAttack {
	int32_t TongueCount; // 0x00(0x04)
	float GrabAngle; // 0x04(0x04)
	float GrabTellSecs; // 0x08(0x04)
	struct FTitanTongueSettings TitanTongueSettings; // 0x0c(0x0c)
};

// ScriptStruct Gobi.TitanTongueSettings
// Size: 0x0c (Inherited: 0x00)
struct FTitanTongueSettings {
	float AlignToTargetSecs; // 0x00(0x04)
	float PullNearSecs; // 0x04(0x04)
	float PullFarSecs; // 0x08(0x04)
};

// ScriptStruct Gobi.TitanSweepForwardAttack
// Size: 0x08 (Inherited: 0x00)
struct FTitanSweepForwardAttack {
	float TellSecs; // 0x00(0x04)
	float AttackSecs; // 0x04(0x04)
};

// ScriptStruct Gobi.TitanTailSwipeAttack
// Size: 0x08 (Inherited: 0x00)
struct FTitanTailSwipeAttack {
	float TellSecs; // 0x00(0x04)
	float AttackSecs; // 0x04(0x04)
};

// ScriptStruct Gobi.TitanTurn
// Size: 0x0c (Inherited: 0x00)
struct FTitanTurn {
	float DelayBetweenTurnsSecsMin; // 0x00(0x04)
	float Turn90Secs; // 0x04(0x04)
	float Turn180Secs; // 0x08(0x04)
};

// ScriptStruct Gobi.TitanStage1Tuning
// Size: 0x40 (Inherited: 0x08)
struct FTitanStage1Tuning : FTuningDataBase {
	struct TArray<struct FDifficultyFloat> TentacleEmergeDelay; // 0x08(0x10)
	struct FDifficultyFloat MinTimeBetweenAttacks; // 0x18(0x14)
	struct FDifficultyFloat MaxTimeBetweenAttacks; // 0x2c(0x14)
};

// ScriptStruct Gobi.DifficultyFloat
// Size: 0x14 (Inherited: 0x01)
struct FDifficultyFloat : FDifficultyValue {
	float Easy; // 0x00(0x04)
	float Normal; // 0x04(0x04)
	float Hard; // 0x08(0x04)
	float Legendary; // 0x0c(0x04)
	float PVP; // 0x10(0x04)
};

// ScriptStruct Gobi.TitanStage3Tuning
// Size: 0x30 (Inherited: 0x08)
struct FTitanStage3Tuning : FTuningDataBase {
	struct TArray<struct FTitanStage3Phase> Phases; // 0x08(0x10)
	struct TArray<struct FTitanStage3Segment> Segments; // 0x18(0x10)
	float FallBehindRockFallTriggerVariance; // 0x28(0x04)
	float FallBehindRockFallTriggerFollowDistance; // 0x2c(0x04)
};

// ScriptStruct Gobi.TitanStage3Segment
// Size: 0x48 (Inherited: 0x00)
struct FTitanStage3Segment {
	struct UAnimMontage* RetreatAnimMontage; // 0x00(0x08)
	float TitanRetreatMovementSpeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* TitanRetreatSpeedCurve; // 0x10(0x08)
	struct UAnimMontage* DigAnimMontage; // 0x18(0x08)
	float TitanDigMovementSpeed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* TitanDigSpeedCurve; // 0x28(0x08)
	float TitanDigDuration; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FTitanStage3RockFallWave> TitanDigRockFallWaves; // 0x38(0x10)
};

// ScriptStruct Gobi.TitanStage3RockFallWave
// Size: 0x14 (Inherited: 0x00)
struct FTitanStage3RockFallWave {
	float MinStartTime; // 0x00(0x04)
	float MaxStartTime; // 0x04(0x04)
	float RockFallRange; // 0x08(0x04)
	float RockFallPercentage; // 0x0c(0x04)
	float RockFallVariance; // 0x10(0x04)
};

// ScriptStruct Gobi.TitanStage3Phase
// Size: 0x40 (Inherited: 0x00)
struct FTitanStage3Phase {
	float TriggerNextPhaseHealthPct; // 0x00(0x04)
	struct FTitanStage3TentacleShared TentacleShared; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FTitanStage3TentacleIndividual> TentacleIndividuals; // 0x18(0x10)
	float MinTimeBetweenAttacks; // 0x28(0x04)
	float MaxTimeBetweenAttacks; // 0x2c(0x04)
	float TailThrashRockFallRange; // 0x30(0x04)
	float TailThrashRockFallPercentage; // 0x34(0x04)
	float TailThrashRockFallVariance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Gobi.TitanStage3TentacleIndividual
// Size: 0x01 (Inherited: 0x00)
struct FTitanStage3TentacleIndividual {
	enum class ETitanTentacleId TentacleId; // 0x00(0x01)
};

// ScriptStruct Gobi.TitanStage3TentacleShared
// Size: 0x10 (Inherited: 0x00)
struct FTitanStage3TentacleShared {
	float DelayBetweenAttacksMin; // 0x00(0x04)
	float DelayBetweenAttacksMax; // 0x04(0x04)
	float AcidSprayEnterSeconds; // 0x08(0x04)
	float AcidSprayExitSeconds; // 0x0c(0x04)
};

// ScriptStruct Gobi.TitanStage2Tuning
// Size: 0x18 (Inherited: 0x08)
struct FTitanStage2Tuning : FTuningDataBase {
	struct TArray<struct FTitanStage2Phase> Phases; // 0x08(0x10)
};

// ScriptStruct Gobi.TitanStage2Phase
// Size: 0x28 (Inherited: 0x00)
struct FTitanStage2Phase {
	float TriggerNextPhaseHealthPct; // 0x00(0x04)
	float DelayBetweenAttacksMin; // 0x04(0x04)
	float DelayBetweenAttacksMax; // 0x08(0x04)
	float WaitForHordeDoneSecsMax; // 0x0c(0x04)
	int32_t TentacleAttackCount; // 0x10(0x04)
	struct FTitanStage2TentacleShared TentacleShared; // 0x14(0x04)
	struct FTitanStage2Mouth Mouth; // 0x18(0x10)
};

// ScriptStruct Gobi.TitanStage2Mouth
// Size: 0x10 (Inherited: 0x00)
struct FTitanStage2Mouth {
	float BiteTellSecs; // 0x00(0x04)
	float BiteCooldownSecs; // 0x04(0x04)
	float RoarInterruptHealthPct; // 0x08(0x04)
	float RoarSecsMax; // 0x0c(0x04)
};

// ScriptStruct Gobi.TitanStage2TentacleShared
// Size: 0x04 (Inherited: 0x00)
struct FTitanStage2TentacleShared {
	float SmashTellSecs; // 0x00(0x04)
};

// ScriptStruct Gobi.ReplicatedTitanStateInfo
// Size: 0x08 (Inherited: 0x00)
struct FReplicatedTitanStateInfo {
	enum class ETitanStage2And3State State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Stage3ProgressAlongSpline; // 0x04(0x04)
};

// ScriptStruct Gobi.TriggerHordeTuning
// Size: 0x20 (Inherited: 0x08)
struct FTriggerHordeTuning : FTuningDataBase {
	float Cooldown; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UAnimMontage*> Montages; // 0x10(0x10)
};

// ScriptStruct Gobi.LaunchConfig
// Size: 0x14 (Inherited: 0x00)
struct FLaunchConfig {
	char DesiredChildLaunches; // 0x00(0x01)
	char MaxLaunchDepth; // 0x01(0x01)
	char MaxLaunchVerticalSteps; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float InitialMaxAngleForChildLaunches; // 0x04(0x04)
	float ChildSpacing; // 0x08(0x04)
	float InitialDelayBeforeLaunching; // 0x0c(0x04)
	float AdditionalAngleForChildSteps; // 0x10(0x04)
};

// ScriptStruct Gobi.ThrowableStateConfig
// Size: 0x28 (Inherited: 0x00)
struct FThrowableStateConfig {
	struct UAnimMontage* MontageFP; // 0x00(0x08)
	struct UAnimMontage* Montage3P; // 0x08(0x08)
	struct UAkAudioEvent* StateSound; // 0x10(0x08)
	struct UAkAudioEvent* StateSoundStop; // 0x18(0x08)
	float StateLength; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.DefibillatorMoveTickData
// Size: 0x10 (Inherited: 0x00)
struct FDefibillatorMoveTickData {
	struct AGobiCharacter* CurrentTarget; // 0x00(0x08)
	bool bSuccessfullyUsed; // 0x08(0x01)
	enum class EDefibrillatorItemState CurrentState; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Gobi.PlantableRangeDefinition
// Size: 0x0c (Inherited: 0x00)
struct FPlantableRangeDefinition {
	bool bIsSupported; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AcceptableAngleDegrees; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Gobi.AdditionalPlantData
// Size: 0xd0 (Inherited: 0x00)
struct FAdditionalPlantData {
	struct FRotator DesiredPlantRotation; // 0x00(0x0c)
	float MaxAbovePrevious; // 0x0c(0x04)
	float MaxBelowPrevious; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* PlantableGhostActor; // 0x18(0x08)
	struct AActor* PlantedActor; // 0x20(0x08)
	char pad_28[0xa8]; // 0x28(0xa8)
};

// ScriptStruct Gobi.AmmoReserve
// Size: 0xd8 (Inherited: 0x00)
struct FAmmoReserve {
	float StartingPct; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGamePropertyFloat RefillPct; // 0x08(0x38)
	struct FDataTableRowHandle RowHandle; // 0x40(0x20)
	int32_t StartingMax; // 0x60(0x04)
	char pad_64[0x34]; // 0x64(0x34)
	int32_t Current; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FGamePropertyInt Max; // 0xa0(0x38)
};

// ScriptStruct Gobi.MovementTickableStruct
// Size: 0x08 (Inherited: 0x00)
struct FMovementTickableStruct {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Gobi.GamePropertyInt
// Size: 0x38 (Inherited: 0x08)
struct FGamePropertyInt : FMovementTickableStruct {
	char pad_8[0x18]; // 0x08(0x18)
	int32_t Value; // 0x20(0x04)
	int32_t BaseValue; // 0x24(0x04)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Gobi.GamePropertyFloat
// Size: 0x38 (Inherited: 0x08)
struct FGamePropertyFloat : FMovementTickableStruct {
	char pad_8[0x18]; // 0x08(0x18)
	float Value; // 0x20(0x04)
	float BaseValue; // 0x24(0x04)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Gobi.GameplayCardCondition
// Size: 0x48 (Inherited: 0x28)
struct FGameplayCardCondition : FUsableCondition {
	struct FDataTableRowHandle CardToCheck; // 0x28(0x20)
};

// ScriptStruct Gobi.WeaponAttachmentMeshConfig
// Size: 0x48 (Inherited: 0x00)
struct FWeaponAttachmentMeshConfig {
	struct FGameplayTag CorrespondingAttachment; // 0x00(0x08)
	struct TArray<struct FName> FirstPersonBonesToHide; // 0x08(0x10)
	struct TArray<struct FName> FirstPersonBonesToUnhide; // 0x18(0x10)
	struct TArray<struct FAttachmentMeshSpecifier> FirstPersonMeshSpecifiers; // 0x28(0x10)
	struct TArray<struct FAttachmentMeshSpecifier> ThirdPersonMeshSpecifiers; // 0x38(0x10)
};

// ScriptStruct Gobi.AttachmentMeshSpecifier
// Size: 0x20 (Inherited: 0x00)
struct FAttachmentMeshSpecifier {
	struct FGameplayTag ComponentGameplayTag; // 0x00(0x08)
	struct FName AttachSocketName; // 0x08(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x10(0x08)
	struct UStaticMesh* StaticMesh; // 0x18(0x08)
};

// ScriptStruct Gobi.MatchmakingPool
// Size: 0x60 (Inherited: 0x00)
struct FMatchmakingPool {
	struct FString SessionId; // 0x00(0x10)
	struct FString GameSessionId; // 0x10(0x10)
	char pad_20[0x40]; // 0x20(0x40)
};

// ScriptStruct Gobi.PartyPlayer
// Size: 0x110 (Inherited: 0x00)
struct FPartyPlayer {
	struct TWeakObjectPtr<struct AGobiPlayerState> PlayerState; // 0x00(0x08)
	struct TWeakObjectPtr<struct APlayerSlot> PlayerSlot; // 0x08(0x08)
	struct FGobiOnlineUser OnlineUser; // 0x10(0xe8)
	bool bUseNameFromOwningPlayerState; // 0xf8(0x01)
	char pad_F9[0x17]; // 0xf9(0x17)
};

// ScriptStruct Gobi.MatchmakingUIAtuinEnvironment
// Size: 0x20 (Inherited: 0x00)
struct FMatchmakingUIAtuinEnvironment {
	struct FString Name; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
};

// ScriptStruct Gobi.MatchmakingUIBucket
// Size: 0x20 (Inherited: 0x00)
struct FMatchmakingUIBucket {
	struct FString Name; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
};

// ScriptStruct Gobi.SyncedClientPlayerControllerCVars
// Size: 0x10 (Inherited: 0x00)
struct FSyncedClientPlayerControllerCVars {
	bool bGodMode; // 0x00(0x01)
	bool bDemigodMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t OneShotKillMode; // 0x04(0x04)
	bool bInstantUse; // 0x08(0x01)
	bool bLanNetSpeed; // 0x09(0x01)
	bool bInfiniteAmmoClip; // 0x0a(0x01)
	bool bInfiniteAmmoReserve; // 0x0b(0x01)
	bool bInfiniteStamina; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Gobi.ZombieAbilityData
// Size: 0x38 (Inherited: 0x00)
struct FZombieAbilityData {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Gobi.ZombieUIData
// Size: 0x120 (Inherited: 0x00)
struct FZombieUIData {
	struct FText ZombieDisplayName; // 0x00(0x18)
	struct FText ZombieDescription; // 0x18(0x18)
	struct UTexture2D* HUDPortrait; // 0x30(0x08)
	struct FZombieAbilityData PrimaryAttackData; // 0x38(0x38)
	struct FZombieAbilityData BasicAttackData; // 0x70(0x38)
	struct FZombieAbilityData SpecialAttack1Data; // 0xa8(0x38)
	struct FZombieAbilityData SpecialAttack2Data; // 0xe0(0x38)
	struct UTexture2D* Thumbnail; // 0x118(0x08)
};

// ScriptStruct Gobi.SingularTraitMapping
// Size: 0x10 (Inherited: 0x00)
struct FSingularTraitMapping {
	struct UTrait* TraitSubclass; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.TraitMapping
// Size: 0x08 (Inherited: 0x00)
struct FTraitMapping {
	struct UTraitCollection* TraitCollection; // 0x00(0x08)
};

// ScriptStruct Gobi.HubScreenInfo
// Size: 0x58 (Inherited: 0x00)
struct FHubScreenInfo {
	struct TSoftClassPtr<UObject> ScreenClass; // 0x00(0x28)
	struct FText DisplayName; // 0x28(0x18)
	bool bCanSurvivorsUse; // 0x40(0x01)
	bool bCanZombiesUse; // 0x41(0x01)
	bool bRemoveForShowDemo; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct TArray<struct FDataTableRowHandle> TrackedObjectives; // 0x48(0x10)
};

// ScriptStruct Gobi.ScreenStateWrapper
// Size: 0x10 (Inherited: 0x00)
struct FScreenStateWrapper {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.CardNotification
// Size: 0x28 (Inherited: 0x00)
struct FCardNotification {
	struct FDataTableRowHandle CardRowHandle; // 0x00(0x20)
	bool bWasApplied; // 0x20(0x01)
	bool bDirectorCard; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32_t Count; // 0x24(0x04)
};

// ScriptStruct Gobi.DamageNumberInfo
// Size: 0x30 (Inherited: 0x00)
struct FDamageNumberInfo {
	struct FString Damage; // 0x00(0x10)
	struct FVector Position; // 0x10(0x0c)
	char pad_1C[0x14]; // 0x1c(0x14)
};

// ScriptStruct Gobi.CenterBannerMessage
// Size: 0x40 (Inherited: 0x00)
struct FCenterBannerMessage {
	float Duration; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TopMessage; // 0x08(0x10)
	struct FString MiddleMessage; // 0x18(0x10)
	struct FString BottomMessage; // 0x28(0x10)
	bool MissionUpdate; // 0x38(0x01)
	bool MissionStart; // 0x39(0x01)
	enum class EMissionDifficulty MissionDifficulty; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct Gobi.UIRunData
// Size: 0x50 (Inherited: 0x00)
struct FUIRunData {
	int32_t RunID; // 0x00(0x04)
	enum class EMissionDifficulty Difficulty; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName MapName; // 0x08(0x08)
	int32_t Retries; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText SaveDate; // 0x18(0x18)
	struct FText SaveTime; // 0x30(0x18)
	enum class ECampaignRunState State; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t Version; // 0x4c(0x04)
};

// ScriptStruct Gobi.SignInFailedPopupData
// Size: 0x78 (Inherited: 0x00)
struct FSignInFailedPopupData {
	struct TSoftClassPtr<UObject> PopupClass; // 0x00(0x28)
	struct FText Title; // 0x28(0x18)
	struct FText Message; // 0x40(0x18)
	struct TArray<struct FPopupButton> ButtonsPC; // 0x58(0x10)
	struct TArray<struct FPopupButton> ButtonsConsole; // 0x68(0x10)
};

// ScriptStruct Gobi.PopupButton
// Size: 0x28 (Inherited: 0x00)
struct FPopupButton {
	enum class EPopupButton Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Text; // 0x08(0x18)
	struct FName Command; // 0x20(0x08)
};

// ScriptStruct Gobi.GamepadConfigButtonData
// Size: 0x18 (Inherited: 0x00)
struct FGamepadConfigButtonData {
	struct FName ButtonWidgetName; // 0x00(0x08)
	struct UDataTable* CorrespondingConfig; // 0x08(0x08)
	bool bIsCustomButton; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.IndexedVendorStockItem
// Size: 0xb8 (Inherited: 0x00)
struct FIndexedVendorStockItem {
	struct FVendorStockItem VendorStockItem; // 0x00(0xb0)
	int32_t ItemIndex; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Gobi.AbilityConfig
// Size: 0x01 (Inherited: 0x00)
struct FAbilityConfig {
	enum class EAbilityType Type; // 0x00(0x01)
};

// ScriptStruct Gobi.AchievementConfig
// Size: 0x28 (Inherited: 0x00)
struct FAchievementConfig {
	struct FName AchievementName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	bool bManuallyAwarded; // 0x10(0x01)
	bool bTeamBasedScore; // 0x11(0x01)
	bool bEndOfLevelOnly; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct FAchievementRequirement> AchievementRequirements; // 0x18(0x10)
};

// ScriptStruct Gobi.AchievementRequirement
// Size: 0x18 (Inherited: 0x00)
struct FAchievementRequirement {
	struct TArray<struct FAchievementRequirementStat> StatsToAggregate; // 0x00(0x10)
	enum class EAchievementRequirementOperator CompareOperator; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t AggregatedStatValueThreshold; // 0x14(0x04)
};

// ScriptStruct Gobi.AchievementRequirementStat
// Size: 0x20 (Inherited: 0x00)
struct FAchievementRequirementStat {
	enum class EPlayerProfileStat Stat; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString StatSuffix; // 0x08(0x10)
	enum class EAchievementStatRequirementLifetime StatLifetime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Gobi.AchievementCategoryUIData
// Size: 0x28 (Inherited: 0x00)
struct FAchievementCategoryUIData {
	enum class EAchievementCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText CategoryName; // 0x08(0x18)
	int32_t CompletedCount; // 0x20(0x04)
	int32_t TotalCount; // 0x24(0x04)
};

// ScriptStruct Gobi.AchievementUIData
// Size: 0x78 (Inherited: 0x00)
struct FAchievementUIData {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* Icon; // 0x30(0x08)
	enum class EAchievementCategory Category; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ProgressNormal; // 0x3c(0x04)
	int32_t CurrentProgress; // 0x40(0x04)
	int32_t FinalProgress; // 0x44(0x04)
	struct FString CompletionDate; // 0x48(0x10)
	struct FDataTableRowHandle RewardRowHandle; // 0x58(0x20)
};

// ScriptStruct Gobi.WanderBucketDensityLevelsByDifficultyEntry
// Size: 0x18 (Inherited: 0x00)
struct FWanderBucketDensityLevelsByDifficultyEntry {
	enum class EMissionDifficulty Difficulty; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EWanderBucketDensityLevel> DensityLevels; // 0x08(0x10)
};

// ScriptStruct Gobi.WanderBucketInitialDensityLevelByDifficultyEntry
// Size: 0x02 (Inherited: 0x00)
struct FWanderBucketInitialDensityLevelByDifficultyEntry {
	enum class EMissionDifficulty Difficulty; // 0x00(0x01)
	enum class EWanderBucketDensityLevel DensityLevel; // 0x01(0x01)
};

// ScriptStruct Gobi.ActiveAreaSetDebugData
// Size: 0x10 (Inherited: 0x00)
struct FActiveAreaSetDebugData {
	int32_t NumAreas; // 0x00(0x04)
	int32_t NumSpawnedSpawners; // 0x04(0x04)
	int32_t NumActiveSpawners; // 0x08(0x04)
	int32_t NumSeenSpawners; // 0x0c(0x04)
};

// ScriptStruct Gobi.ActiveAreaSetHuddleDefinition
// Size: 0x0c (Inherited: 0x00)
struct FActiveAreaSetHuddleDefinition {
	float Radius; // 0x00(0x04)
	int32_t NumSpawners; // 0x04(0x04)
	float HuddlesPerSqrKM; // 0x08(0x04)
};

// ScriptStruct Gobi.ADSTuning
// Size: 0x08 (Inherited: 0x00)
struct FADSTuning {
	float ADSEnterLength; // 0x00(0x04)
	float ADSExitLength; // 0x04(0x04)
};

// ScriptStruct Gobi.DistanceRange
// Size: 0x18 (Inherited: 0x00)
struct FDistanceRange {
	struct FString DistanceLabel; // 0x00(0x10)
	float DistanceMin; // 0x10(0x04)
	float DistanceMax; // 0x14(0x04)
};

// ScriptStruct Gobi.AITRSNoiseEvent
// Size: 0x40 (Inherited: 0x00)
struct FAITRSNoiseEvent {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	struct FVector NoiseLocationEnd; // 0x10(0x0c)
	float Loudness; // 0x1c(0x04)
	float MaxRange; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct AActor* Instigator; // 0x28(0x08)
	struct FName Tag; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Gobi.AISeparationGroup
// Size: 0x90 (Inherited: 0x00)
struct FAISeparationGroup {
	struct FGameplayTagQuery IgnorerQuery; // 0x00(0x48)
	struct FGameplayTagQuery IgnoredQuery; // 0x48(0x48)
};

// ScriptStruct Gobi.AISpawnActorVariantDefinition
// Size: 0x38 (Inherited: 0x00)
struct FAISpawnActorVariantDefinition {
	struct AAISpawnActor* Class; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	bool bNeedsWall; // 0x0c(0x01)
	bool bRequiresPreplacedSpawnActor; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float WallStartMax; // 0x10(0x04)
	float WallEndMin; // 0x14(0x04)
	struct FGameplayTagContainer CardTags; // 0x18(0x20)
};

// ScriptStruct Gobi.AIPopulation
// Size: 0x50 (Inherited: 0x00)
struct FAIPopulation {
	struct AGobiCharacter* AIClass; // 0x00(0x08)
	int32_t NumToSpawn; // 0x08(0x04)
	bool bShouldSpawnHording; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGameplayTagContainer TagsToApply; // 0x10(0x20)
	struct FGameplayTagContainer TagsToRemove; // 0x30(0x20)
};

// ScriptStruct Gobi.AISpawnEval
// Size: 0x40 (Inherited: 0x40)
struct FAISpawnEval : FEvaluator {
};

// ScriptStruct Gobi.AISpawnEval_InViewOfSafeRoom
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_InViewOfSafeRoom : FAISpawnEval {
	bool bInViewOfSafeRoom; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Gobi.AISpawnEval_ScenarioCausedInterruption
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_ScenarioCausedInterruption : FAISpawnEval {
	bool bCausedInterruption; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Gobi.AISpawnEval_Difficulty
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_Difficulty : FAISpawnEval {
	enum class EMissionDifficulty Difficulty; // 0x40(0x01)
	enum class ECompareOp Op; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Gobi.AISpawnEval_TeamInPreparationArea
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_TeamInPreparationArea : FAISpawnEval {
	bool bInPreparationArea; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Gobi.AISpawnEval_TeamInSafeRoom
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_TeamInSafeRoom : FAISpawnEval {
	bool bInSafeRoom; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Gobi.AISpawnEval_TeamIntensity
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_TeamIntensity : FAISpawnEval {
	float IntensityThreshold; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct Gobi.AISpawnEval_PlayerIntensity
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_PlayerIntensity : FAISpawnEval {
	float IntensityThreshold; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct Gobi.AISpawnEval_CheckGameModeTags
// Size: 0x88 (Inherited: 0x40)
struct FAISpawnEval_CheckGameModeTags : FAISpawnEval {
	struct FGameplayTagQuery QueryAgainstGameMode; // 0x40(0x48)
};

// ScriptStruct Gobi.AISpawnEval_CheckGeneratingDeckTags
// Size: 0x90 (Inherited: 0x40)
struct FAISpawnEval_CheckGeneratingDeckTags : FAISpawnEval {
	int32_t TestValue; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FGameplayTagQuery QueryAgainstGeneratingDeckTags; // 0x48(0x48)
};

// ScriptStruct Gobi.AISpawnEval_CheckCharacterTagsByDifficulty
// Size: 0xa0 (Inherited: 0x40)
struct FAISpawnEval_CheckCharacterTagsByDifficulty : FAISpawnEval {
	struct FDifficultyInt TestValue; // 0x40(0x14)
	enum class ECompareOp Op; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FGameplayTagQuery QueryAgainstAliveCharacters; // 0x58(0x48)
};

// ScriptStruct Gobi.AISpawnEval_CheckCharacterTags
// Size: 0x90 (Inherited: 0x40)
struct FAISpawnEval_CheckCharacterTags : FAISpawnEval {
	int32_t TestValue; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FGameplayTagQuery QueryAgainstAliveCharacters; // 0x48(0x48)
};

// ScriptStruct Gobi.AISpawnEval_CheckCardTags
// Size: 0x90 (Inherited: 0x40)
struct FAISpawnEval_CheckCardTags : FAISpawnEval {
	int32_t TestValue; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FGameplayTagQuery QueryAgainstCardsInPlay; // 0x48(0x48)
};

// ScriptStruct Gobi.AISpawnEval_RotatingCooldown
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_RotatingCooldown : FAISpawnEval {
	float MinRotatingCooldownTime; // 0x40(0x04)
	float MaxRotatingCooldownTime; // 0x44(0x04)
};

// ScriptStruct Gobi.AISpawnEval_TimeSinceLastHorde
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_TimeSinceLastHorde : FAISpawnEval {
	float ThresholdTime; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct Gobi.AISpawnEval_PacingPhaseTime
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_PacingPhaseTime : FAISpawnEval {
	float RemainingTimePct; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct Gobi.AISpawnEval_PacingPhase
// Size: 0x48 (Inherited: 0x40)
struct FAISpawnEval_PacingPhase : FAISpawnEval {
	char RequiredPacing; // 0x40(0x01)
	enum class ECompareOp Op; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Gobi.AISpawnEval_Cooldown
// Size: 0x58 (Inherited: 0x40)
struct FAISpawnEval_Cooldown : FAISpawnEval {
	float CooldownTime; // 0x40(0x04)
	enum class ECooldownContext CooldownContext; // 0x44(0x01)
	char pad_45[0x13]; // 0x45(0x13)
};

// ScriptStruct Gobi.AISpawnEval_GrowingChanceByDifficulty
// Size: 0x58 (Inherited: 0x40)
struct FAISpawnEval_GrowingChanceByDifficulty : FAISpawnEval {
	struct TArray<struct FGrowingChanceByDifficulty> ChancePerThreatLevel; // 0x40(0x10)
	bool bReroll; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Gobi.GrowingChanceByDifficulty
// Size: 0x3c (Inherited: 0x00)
struct FGrowingChanceByDifficulty {
	struct FDifficultyVector2D Range; // 0x00(0x28)
	struct FDifficultyFloat Increment; // 0x28(0x14)
};

// ScriptStruct Gobi.DifficultyVector2D
// Size: 0x28 (Inherited: 0x01)
struct FDifficultyVector2D : FDifficultyValue {
	struct FVector2D Easy; // 0x00(0x08)
	struct FVector2D Normal; // 0x08(0x08)
	struct FVector2D Hard; // 0x10(0x08)
	struct FVector2D Legendary; // 0x18(0x08)
	struct FVector2D PVP; // 0x20(0x08)
};

// ScriptStruct Gobi.AISpawnEval_GrowingChance
// Size: 0x58 (Inherited: 0x40)
struct FAISpawnEval_GrowingChance : FAISpawnEval {
	struct TArray<struct FGrowingChance> ChancePerThreatLevel; // 0x40(0x10)
	bool bReroll; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Gobi.GrowingChance
// Size: 0x0c (Inherited: 0x00)
struct FGrowingChance {
	struct FVector2D Range; // 0x00(0x08)
	float Increment; // 0x08(0x04)
};

// ScriptStruct Gobi.AISpawnEval_ChanceByDifficulty
// Size: 0x58 (Inherited: 0x40)
struct FAISpawnEval_ChanceByDifficulty : FAISpawnEval {
	struct TArray<struct FDifficultyFloat> ChancePerThreatLevel; // 0x40(0x10)
	bool bReroll; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Gobi.AISpawnEval_Chance
// Size: 0x58 (Inherited: 0x40)
struct FAISpawnEval_Chance : FAISpawnEval {
	struct TArray<float> ChancePerThreatLevel; // 0x40(0x10)
	bool bReroll; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Gobi.AISpawnEvalContext
// Size: 0xa0 (Inherited: 0x01)
struct FAISpawnEvalContext : FEvaluatorContext {
	char pad_1[0x9f]; // 0x01(0x9f)
};

// ScriptStruct Gobi.AISpawnEvalItem
// Size: 0x10 (Inherited: 0x08)
struct FAISpawnEvalItem : FEvaluatorItem {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.AISpawnEvalConfig
// Size: 0x01 (Inherited: 0x01)
struct FAISpawnEvalConfig : FEvaluatorConfig {
};

// ScriptStruct Gobi.DiscardedCard
// Size: 0x10 (Inherited: 0x00)
struct FDiscardedCard {
	struct TWeakObjectPtr<struct UAISpawnCard> SpawnCard; // 0x00(0x08)
	struct FName Reason; // 0x08(0x08)
};

// ScriptStruct Gobi.ManuallySpawnedCardInPlay
// Size: 0x20 (Inherited: 0x00)
struct FManuallySpawnedCardInPlay {
	struct TWeakObjectPtr<struct UAISpawnCard> SpawnCard; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Gobi.CardInPlay
// Size: 0x20 (Inherited: 0x00)
struct FCardInPlay {
	struct TWeakObjectPtr<struct UAISpawnCard> SpawnCard; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct AGobiCharacter>> AiCharacters; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Gobi.SpawnPointBudget
// Size: 0x0c (Inherited: 0x00)
struct FSpawnPointBudget {
	uint32_t NumPlayers; // 0x00(0x04)
	int32_t WanderBudget; // 0x04(0x04)
	int32_t HordeBudget; // 0x08(0x04)
};

// ScriptStruct Gobi.TopLevelSpawnDeckOverrides
// Size: 0x48 (Inherited: 0x00)
struct FTopLevelSpawnDeckOverrides {
	int32_t MaxCardsInPlay; // 0x00(0x04)
	float DelayBetweenCardDraws; // 0x04(0x04)
	float DelayAfterDiscard; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FPerThreatLevelSpawnDelay> DelayBeforeInitialSpawn; // 0x10(0x10)
	struct TArray<struct FPerThreatLevelSpawnDelay> DelayBeforeWaveSpawn; // 0x20(0x10)
	float DelayBetweenCueAndSpawn; // 0x30(0x04)
	struct FIntPoint NumHordeWaves; // 0x34(0x08)
	float CompleteAfterSpawningStoppedTime; // 0x3c(0x04)
	int8_t CompleteWhenAllCardsAreInPlayOrExhausted; // 0x40(0x01)
	int8_t CompleteWhenAllCardsAreExhausted; // 0x41(0x01)
	int8_t ApplyModCards; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t RetryEQSWithoutOverrideIfNoSpawnersFound; // 0x44(0x04)
};

// ScriptStruct Gobi.PerThreatLevelSpawnDelay
// Size: 0x08 (Inherited: 0x00)
struct FPerThreatLevelSpawnDelay {
	int32_t MinThreatLevel; // 0x00(0x04)
	float DelayBeforeInitialSpawn; // 0x04(0x04)
};

// ScriptStruct Gobi.AITypeCost
// Size: 0x10 (Inherited: 0x00)
struct FAITypeCost {
	struct AGobiCharacter* AIClass; // 0x00(0x08)
	int32_t Cost; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.GameplayEval
// Size: 0x48 (Inherited: 0x40)
struct FGameplayEval : FEvaluator {
	bool bDrawDebug; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Gobi.AnimEval
// Size: 0x48 (Inherited: 0x48)
struct FAnimEval : FGameplayEval {
};

// ScriptStruct Gobi.AnimEval_EnterLadder
// Size: 0x50 (Inherited: 0x48)
struct FAnimEval_EnterLadder : FAnimEval {
	bool bEnterFromTop; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.AnimEval_MontageCurrentlyPlaying
// Size: 0x48 (Inherited: 0x48)
struct FAnimEval_MontageCurrentlyPlaying : FAnimEval {
};

// ScriptStruct Gobi.AnimEval_MontageLength
// Size: 0x50 (Inherited: 0x48)
struct FAnimEval_MontageLength : FAnimEval {
	float NormalizeTo; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Gobi.AnimEval_MontageLastPlayed
// Size: 0x50 (Inherited: 0x48)
struct FAnimEval_MontageLastPlayed : FAnimEval {
	float MaxTime; // 0x48(0x04)
	enum class EMLP_TestMode TestMode; // 0x4c(0x01)
	bool bUseGlobalCooldown; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct Gobi.GameplayEvalContext
// Size: 0x28 (Inherited: 0x01)
struct FGameplayEvalContext : FEvaluatorContext {
	char pad_1[0x27]; // 0x01(0x27)
};

// ScriptStruct Gobi.AnimEvalContext
// Size: 0x28 (Inherited: 0x28)
struct FAnimEvalContext : FGameplayEvalContext {
};

// ScriptStruct Gobi.GameplayEvalItem
// Size: 0x08 (Inherited: 0x08)
struct FGameplayEvalItem : FEvaluatorItem {
};

// ScriptStruct Gobi.AnimEvalItem
// Size: 0x10 (Inherited: 0x08)
struct FAnimEvalItem : FGameplayEvalItem {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.GameplayEvalConfig
// Size: 0x01 (Inherited: 0x01)
struct FGameplayEvalConfig : FEvaluatorConfig {
};

// ScriptStruct Gobi.AnimEvalConfig
// Size: 0x01 (Inherited: 0x01)
struct FAnimEvalConfig : FGameplayEvalConfig {
};

// ScriptStruct Gobi.TagLocator
// Size: 0x40 (Inherited: 0x00)
struct FTagLocator {
	struct FGameplayTag LocatorTag; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform LocatorTransform; // 0x10(0x30)
};

// ScriptStruct Gobi.AnimEval_Climb
// Size: 0x68 (Inherited: 0x48)
struct FAnimEval_Climb : FAnimEval {
	float MaxStartingDistance; // 0x48(0x04)
	float ClimbUp; // 0x4c(0x04)
	float TopDistance; // 0x50(0x04)
	float ClimbDown; // 0x54(0x04)
	struct TArray<struct UNavArea*> ClimbNavAreas; // 0x58(0x10)
};

// ScriptStruct Gobi.AnimEval_ClimbLink
// Size: 0x78 (Inherited: 0x48)
struct FAnimEval_ClimbLink : FAnimEval {
	float MaxStartingDistance; // 0x48(0x04)
	float MinClimbUp; // 0x4c(0x04)
	float MaxClimbUp; // 0x50(0x04)
	float MinTopDistance; // 0x54(0x04)
	float MaxTopDistance; // 0x58(0x04)
	float MinClimbDown; // 0x5c(0x04)
	float MaxClimbDown; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct UNavArea*> ClimbNavAreas; // 0x68(0x10)
};

// ScriptStruct Gobi.AnimState3P
// Size: 0x08 (Inherited: 0x00)
struct FAnimState3P {
	bool bStartTransition; // 0x00(0x01)
	bool bStopTransition; // 0x01(0x01)
	bool bBypassStopTransition; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float YawCounterRotation; // 0x04(0x04)
};

// ScriptStruct Gobi.LadderAnimState
// Size: 0x08 (Inherited: 0x00)
struct FLadderAnimState {
	float MeshRotation; // 0x00(0x04)
	bool bIsSliding; // 0x04(0x01)
	bool bIsMovingUp; // 0x05(0x01)
	bool bIsMovingDown; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct Gobi.AnimNode_BlendListByGameplayTag
// Size: 0xc8 (Inherited: 0x98)
struct FAnimNode_BlendListByGameplayTag : FAnimNode_BlendListBase {
	struct TArray<struct FGameplayTag> SupportedGameplayTags; // 0x98(0x10)
	struct FGameplayTag ActiveGameplayTag; // 0xa8(0x08)
	char pad_B0[0x18]; // 0xb0(0x18)
};

// ScriptStruct Gobi.AnimNode_BlendListByGameplayTagQuery
// Size: 0xc8 (Inherited: 0x98)
struct FAnimNode_BlendListByGameplayTagQuery : FAnimNode_BlendListBase {
	char pad_98[0x20]; // 0x98(0x20)
	struct TArray<struct FCachedGameplayTagQuery> TagQueries; // 0xb8(0x10)
};

// ScriptStruct Gobi.CachedGameplayTagQuery
// Size: 0xb0 (Inherited: 0x48)
struct FCachedGameplayTagQuery : FGameplayTagQuery {
	char pad_48[0x68]; // 0x48(0x68)
};

// ScriptStruct Gobi.AnimNode_DistanceMatching
// Size: 0x88 (Inherited: 0x78)
struct FAnimNode_DistanceMatching : FAnimNode_SequencePlayer {
	float Distance; // 0x78(0x04)
	bool ContinuePlaybackAfterZeroDistance; // 0x7c(0x01)
	char pad_7D[0xb]; // 0x7d(0x0b)
};

// ScriptStruct Gobi.AnimNode_FocusTracking
// Size: 0x88 (Inherited: 0x10)
struct FAnimNode_FocusTracking : FAnimNode_Base {
	bool bMeshSpaceAdditive; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector WorldLookAt; // 0x14(0x0c)
	float Alpha; // 0x20(0x04)
	float RootYawRotation; // 0x24(0x04)
	struct FRotator MeshToComponent; // 0x28(0x0c)
	char pad_34[0x54]; // 0x34(0x54)
};

// ScriptStruct Gobi.AnimNode_FocusTrackingSequencePlayer
// Size: 0x128 (Inherited: 0x78)
struct FAnimNode_FocusTrackingSequencePlayer : FAnimNode_SequencePlayer {
	struct FVector WorldLookAt; // 0x78(0x0c)
	bool bAlignToTarget; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float BlendInSpeed; // 0x88(0x04)
	float BlendOutSpeed; // 0x8c(0x04)
	float Alpha; // 0x90(0x04)
	bool bMeshSpaceAdditive; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float ActualAlpha; // 0x98(0x04)
	char pad_9C[0x8c]; // 0x9c(0x8c)
};

// ScriptStruct Gobi.AnimNode_FocusTrackingSlot
// Size: 0x108 (Inherited: 0x48)
struct FAnimNode_FocusTrackingSlot : FAnimNode_Slot {
	struct FVector WorldLookAt; // 0x48(0x0c)
	float Alpha; // 0x54(0x04)
	bool bAlignToTarget; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float BlendInSpeed; // 0x5c(0x04)
	float BlendOutSpeed; // 0x60(0x04)
	float RootYawRotation; // 0x64(0x04)
	bool bMeshSpaceAdditive; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FRotator MeshToComponent; // 0x6c(0x0c)
	float ActualAlpha; // 0x78(0x04)
	char pad_7C[0x8c]; // 0x7c(0x8c)
};

// ScriptStruct Gobi.AnimNode_GobiRandomSequencePlayer
// Size: 0x88 (Inherited: 0x30)
struct FAnimNode_GobiRandomSequencePlayer : FAnimNode_AssetPlayerBase {
	struct TArray<struct FGobiRandomSequenceEntry> Sequences; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
	float PlayRateBasis; // 0x48(0x04)
	float PlayRate; // 0x4c(0x04)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x50(0x30)
	float StartPosition; // 0x80(0x04)
	bool bLoopAnimation; // 0x84(0x01)
	bool bRandomStartPosition; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// ScriptStruct Gobi.GobiRandomSequenceEntry
// Size: 0x08 (Inherited: 0x00)
struct FGobiRandomSequenceEntry {
	struct UAnimSequence* Sequence; // 0x00(0x08)
};

// ScriptStruct Gobi.AnimNode_OrientationWarping
// Size: 0x70 (Inherited: 0x10)
struct FAnimNode_OrientationWarping : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	float RelativeMovementAngle; // 0x20(0x04)
	bool bNegateRelativeMovementAngle; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float AdditionalRootRotation; // 0x28(0x04)
	float BodyOrientationAlpha; // 0x2c(0x04)
	struct TArray<struct FBoneReference> SpineBones; // 0x30(0x10)
	struct FBoneReference IKFootRootBone; // 0x40(0x10)
	struct TArray<struct FBoneReference> IKFootBones; // 0x50(0x10)
	struct FRotator MeshToComponent; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Gobi.AnimNode_SlopeWarping
// Size: 0x1a0 (Inherited: 0xc8)
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKFootRootBone; // 0xc8(0x10)
	enum class EAxisOption IKFootRootForwardAxis; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FBoneReference PelvisBone; // 0xdc(0x10)
	float PelvisOffsetScale; // 0xec(0x04)
	struct TArray<struct FFootDefinition> FeetDefinitions; // 0xf0(0x10)
	struct FVector2D SlopeWarpingLimits; // 0x100(0x08)
	char pad_108[0x98]; // 0x108(0x98)
};

// ScriptStruct Gobi.FootDefinition
// Size: 0x20 (Inherited: 0x00)
struct FFootDefinition {
	struct FBoneReference FKFootBone; // 0x00(0x10)
	struct FBoneReference IKFootBone; // 0x10(0x10)
};

// ScriptStruct Gobi.AnimNode_SpeedWarping
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKFootRootBone; // 0xc8(0x10)
	struct TArray<struct FFootDefinition> FeetDefinitions; // 0xd8(0x10)
	enum class EAxis WarpAxis; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float SpeedScaling; // 0xec(0x04)
};

// ScriptStruct Gobi.EvalBranchData
// Size: 0x18 (Inherited: 0x00)
struct FEvalBranchData {
	struct FName JumpToSection; // 0x00(0x08)
	bool BranchImmediately; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAnimationEvalSet* AnimEvaluatorSet; // 0x10(0x08)
};

// ScriptStruct Gobi.EvalChain
// Size: 0x18 (Inherited: 0x00)
struct FEvalChain {
	struct UAnimMontage* MontageToPlay; // 0x00(0x08)
	bool bUseMontagesEvalSet; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAnimationEvalSet* AnimEvaluatorSet; // 0x10(0x08)
};

// ScriptStruct Gobi.AnimNotify_BoneVisDef
// Size: 0x0c (Inherited: 0x00)
struct FAnimNotify_BoneVisDef {
	struct FName BoneName; // 0x00(0x08)
	bool bHide; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Gobi.SphereAlignContext
// Size: 0xc0 (Inherited: 0x00)
struct FSphereAlignContext {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct Gobi.AnimEvalChainsEvaluator
// Size: 0x10 (Inherited: 0x00)
struct FAnimEvalChainsEvaluator {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.DamageDealtTriggeredEffectConfig
// Size: 0x108 (Inherited: 0x00)
struct FDamageDealtTriggeredEffectConfig {
	struct FGameplayTagQuery DamageSourceTagQuery; // 0x00(0x48)
	struct FGameplayTagQuery DamageTargetTagQuery; // 0x48(0x48)
	struct FGameplayTagQuery DamageTypeTagQuery; // 0x90(0x48)
	int32_t RequiredDamageFlags; // 0xd8(0x04)
	bool bMinDamageRequiredIsPercentOfMaxHealth; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float MinDamageRequired; // 0xe0(0x04)
	float MinDistanceFromTarget; // 0xe4(0x04)
	float MaxDistanceFromTarget; // 0xe8(0x04)
	enum class ECompareOp SourceHealthPercentCompareOp; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float SourceHealthPercent; // 0xf0(0x04)
	enum class ECompareOp TargetHealthPercentCompareOp; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float TargetHealthPercent; // 0xf8(0x04)
	bool bReuseDamageInfoForEmitter; // 0xfc(0x01)
	bool bReuseDamageInstigatorActorAndPawnForEmitter; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	float ChanceToApply; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct Gobi.ContextToEffectsMap
// Size: 0x68 (Inherited: 0x00)
struct FContextToEffectsMap {
	struct FGameplayModContext Context; // 0x00(0x18)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct Gobi.GameplayModContext
// Size: 0x18 (Inherited: 0x00)
struct FGameplayModContext {
	struct UObject* ContextObject; // 0x00(0x08)
	struct APlayerSlot* CardOwner; // 0x08(0x08)
	enum class EGobiTeam TeamToApplyTo; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t RandomSeed; // 0x14(0x04)
};

// ScriptStruct Gobi.ArmorDestroyed
// Size: 0x20 (Inherited: 0x00)
struct FArmorDestroyed {
	struct AActor* SourceActor; // 0x00(0x08)
	int32_t ArmorIdx; // 0x08(0x04)
	struct FVector ImpactDirection; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Gobi.ArmorHealth
// Size: 0x0c (Inherited: 0x00)
struct FArmorHealth {
	int32_t ArmorIdx; // 0x00(0x04)
	float Health; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Gobi.Armor
// Size: 0xf0 (Inherited: 0x00)
struct FArmor {
	float InitialHealth; // 0x00(0x04)
	bool bStaticMesh; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	bool bMeshIsVisible; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct USkeletalMesh* SkeletalMesh; // 0x18(0x08)
	struct UStaticMesh* CollisionMesh; // 0x20(0x08)
	struct FName SocketName; // 0x28(0x08)
	struct TArray<struct FName> AdditionalSocketNames; // 0x30(0x10)
	struct FGameplayTag ParentComponentGameplayTag; // 0x40(0x08)
	struct FName CollisionProfile; // 0x48(0x08)
	enum class EAttachmentRule AttachmentRule; // 0x50(0x01)
	bool bRelativeTransform; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
	struct FTransform RelativeTransform; // 0x60(0x30)
	bool bInWeldSimulatedBodies; // 0x90(0x01)
	bool bDestroyWhenRegionMutilated; // 0x91(0x01)
	enum class EMutilationRegion MutilatedRegion; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
	struct TArray<struct UGameplayEffect*> ArmorEffects; // 0x98(0x10)
	struct TArray<struct UGameplayEffect*> DestroyedEffects; // 0xa8(0x10)
	struct TArray<struct FArmorHitGameplayTag> HitImpactGameplayTags; // 0xb8(0x10)
	struct UMeshComponent* MeshComponent; // 0xc8(0x08)
	struct UMeshComponent* CollisionMeshComponent; // 0xd0(0x08)
	struct UAkAudioEvent* AKEDestroyed; // 0xd8(0x08)
	char pad_E0[0x10]; // 0xe0(0x10)
};

// ScriptStruct Gobi.ArmorHitGameplayTag
// Size: 0x0c (Inherited: 0x00)
struct FArmorHitGameplayTag {
	float HealthPctThreshold; // 0x00(0x04)
	struct FGameplayTag Tag; // 0x04(0x08)
};

// ScriptStruct Gobi.AssetLookupWeaponTracerContainer
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupWeaponTracerContainer {
	struct UWeaponTracer* Default; // 0x00(0x08)
	struct TArray<struct FAssetLookupWeaponTracerEntry> Lookups; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupWeaponTracerEntry
// Size: 0x10 (Inherited: 0x00)
struct FAssetLookupWeaponTracerEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UWeaponTracer* WeaponTracer; // 0x08(0x08)
};

// ScriptStruct Gobi.AssetLookupGameplayTagContainer
// Size: 0x30 (Inherited: 0x00)
struct FAssetLookupGameplayTagContainer {
	struct FGameplayTagContainer Default; // 0x00(0x20)
	struct TArray<struct FAssetLookupGameplayTagContainerEntry> Lookups; // 0x20(0x10)
};

// ScriptStruct Gobi.AssetLookupGameplayTagContainerEntry
// Size: 0x28 (Inherited: 0x00)
struct FAssetLookupGameplayTagContainerEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct FGameplayTagContainer GameplayTagContainer; // 0x08(0x20)
};

// ScriptStruct Gobi.AssetLookupCurveFloat
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupCurveFloat {
	struct UCurveFloat* Default; // 0x00(0x08)
	struct TArray<struct FAssetLookupCurveFloatEntry> Lookups; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupCurveFloatEntry
// Size: 0x10 (Inherited: 0x00)
struct FAssetLookupCurveFloatEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UCurveFloat* CurveFloat; // 0x08(0x08)
};

// ScriptStruct Gobi.AssetLookupNameArray
// Size: 0x20 (Inherited: 0x00)
struct FAssetLookupNameArray {
	struct TArray<struct FName> Default; // 0x00(0x10)
	struct TArray<struct FAssetLookupNameArrayEntry> Lookups; // 0x10(0x10)
};

// ScriptStruct Gobi.AssetLookupNameArrayEntry
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupNameArrayEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct TArray<struct FName> Names; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupName
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupName {
	struct FName Default; // 0x00(0x08)
	struct TArray<struct FAssetLookupNameEntry> Lookups; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupNameEntry
// Size: 0x10 (Inherited: 0x00)
struct FAssetLookupNameEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Gobi.AssetLookupAkAudioEventArray
// Size: 0x20 (Inherited: 0x00)
struct FAssetLookupAkAudioEventArray {
	struct TArray<struct UAkAudioEvent*> Default; // 0x00(0x10)
	struct TArray<struct FAssetLookupAkAudioEventArrayEntry> Lookups; // 0x10(0x10)
};

// ScriptStruct Gobi.AssetLookupAkAudioEventArrayEntry
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupAkAudioEventArrayEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct TArray<struct UAkAudioEvent*> AkAudioEvents; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupAkAudioEvent
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupAkAudioEvent {
	struct UAkAudioEvent* Default; // 0x00(0x08)
	struct TArray<struct FAssetLookupAkAudioEventEntry> Lookups; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupAkAudioEventEntry
// Size: 0x10 (Inherited: 0x00)
struct FAssetLookupAkAudioEventEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
};

// ScriptStruct Gobi.AssetLookupMontageArray
// Size: 0x20 (Inherited: 0x00)
struct FAssetLookupMontageArray {
	struct TArray<struct UAnimMontage*> Default; // 0x00(0x10)
	struct TArray<struct FAssetLookupMontageArrayEntry> Lookups; // 0x10(0x10)
};

// ScriptStruct Gobi.AssetLookupMontageArrayEntry
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupMontageArrayEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct TArray<struct UAnimMontage*> AnimMontages; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupAnimSequence
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupAnimSequence {
	struct UAnimSequence* Default; // 0x00(0x08)
	struct TArray<struct FAssetLookupAnimSequenceEntry> Lookups; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupAnimSequenceEntry
// Size: 0x10 (Inherited: 0x00)
struct FAssetLookupAnimSequenceEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UAnimSequence* AnimSequence; // 0x08(0x08)
};

// ScriptStruct Gobi.AssetLookupFloat
// Size: 0x18 (Inherited: 0x00)
struct FAssetLookupFloat {
	float Default; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAssetLookupFloatEntry> Lookups; // 0x08(0x10)
};

// ScriptStruct Gobi.AssetLookupFloatEntry
// Size: 0x0c (Inherited: 0x00)
struct FAssetLookupFloatEntry {
	struct FGameplayTag Tag; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct Gobi.AttachToActorInfo
// Size: 0x68 (Inherited: 0x00)
struct FAttachToActorInfo {
	struct AActor* AttachToActor; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FGameplayTag PrimitiveComponentTag; // 0x10(0x08)
	struct FVector RelativeLocation; // 0x18(0x0c)
	struct FRotator RelativeRotation; // 0x24(0x0c)
	bool bTeleportToPreAttachedLocation; // 0x30(0x01)
	bool bMoveToAttachLocation; // 0x31(0x01)
	bool bRotationRelativeToBone; // 0x32(0x01)
	bool bContinuousRotationUpdate; // 0x33(0x01)
	bool bHiddenOnAttach; // 0x34(0x01)
	bool bDisableDamageOnAttach; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct AActor* OwnerContextSource; // 0x38(0x08)
	struct TArray<struct UGameplayEffect*> OwnerEffects; // 0x40(0x10)
	struct AActor* AttachToActorContextSource; // 0x50(0x08)
	struct TArray<struct UGameplayEffect*> AttachToActorEffects; // 0x58(0x10)
};

// ScriptStruct Gobi.AttachmentDefinition
// Size: 0x10 (Inherited: 0x00)
struct FAttachmentDefinition {
	struct FGameplayTag AttachmentType; // 0x00(0x08)
	struct UTraitCollection* DefaultTraitCollection; // 0x08(0x08)
};

// ScriptStruct Gobi.ActorInAreaTriggerInfo
// Size: 0x18 (Inherited: 0x00)
struct FActorInAreaTriggerInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Gobi.MultiAudioEventInfo
// Size: 0x38 (Inherited: 0x00)
struct FMultiAudioEventInfo {
	struct AActor* TargetPoint; // 0x00(0x08)
	struct TArray<struct UAkAudioEvent*> AkEventsOnEnter; // 0x08(0x10)
	struct TArray<struct UAkAudioEvent*> AkEventsOnExit; // 0x18(0x10)
	bool bTriggerOnce; // 0x28(0x01)
	char pad_29[0xf]; // 0x29(0x0f)
};

// ScriptStruct Gobi.MultiPositioningInfo
// Size: 0x30 (Inherited: 0x00)
struct FMultiPositioningInfo {
	struct UAkAudioEvent* AkEventOnEnter; // 0x00(0x08)
	struct UAkAudioEvent* AkEventOnExit; // 0x08(0x08)
	struct TArray<struct AActor*> TargetPoints; // 0x10(0x10)
	bool bTriggerOnce; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
};

// ScriptStruct Gobi.AudioGameplayTagSet
// Size: 0x3e8 (Inherited: 0x08)
struct FAudioGameplayTagSet : FTableRowBase {
	struct FGameplayTagContainer GameplayTagContainer; // 0x08(0x20)
	struct TArray<struct UAkAudioEvent*> TagAddedWorldAudioEvents; // 0x28(0x10)
	struct TMap<struct FString, float> TagAddedWorldRTPCChanges; // 0x38(0x50)
	struct TMap<struct FName, struct FName> TagAddedWorldSharedSound; // 0x88(0x50)
	struct FDataTableRowHandle TagAddedWorldMusicEvent; // 0xd8(0x20)
	struct TArray<struct UAkAudioEvent*> TagRemovedWorldAudioEvents; // 0xf8(0x10)
	struct TMap<struct FString, float> TagRemovedWorldRTPCChanges; // 0x108(0x50)
	struct TMap<struct FName, struct FName> TagRemovedWorldSharedSound; // 0x158(0x50)
	struct FDataTableRowHandle TagRemovedWorldMusicEvent; // 0x1a8(0x20)
	struct TArray<struct UAkAudioEvent*> TagAddedLocalAudioEvents; // 0x1c8(0x10)
	struct TMap<struct FName, struct FName> TagAddedLocalStateChanges; // 0x1d8(0x50)
	struct TMap<struct FString, float> TagAddedLocalRTPCChanges; // 0x228(0x50)
	struct TArray<struct UAkAudioEvent*> TagRemovedLocalAudioEvents; // 0x278(0x10)
	struct TMap<struct FName, struct FName> TagRemovedLocalStateChange; // 0x288(0x50)
	struct TMap<struct FString, float> TagRemovedLocalRTPCChanges; // 0x2d8(0x50)
	struct TArray<struct UAkAudioEvent*> TagAddedRemoteAudioEvents; // 0x328(0x10)
	struct TMap<struct FString, float> TagAddedRemoteRTPCChanges; // 0x338(0x50)
	struct TArray<struct UAkAudioEvent*> TagRemovedRemoteAudioEvents; // 0x388(0x10)
	struct TMap<struct FString, float> TagRemovedRemoteRTPCChanges; // 0x398(0x50)
};

// ScriptStruct Gobi.PreferenceInfo
// Size: 0x10 (Inherited: 0x00)
struct FPreferenceInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.BadgeBannerRow
// Size: 0x28 (Inherited: 0x08)
struct FBadgeBannerRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct UTexture2D* Banner; // 0x20(0x08)
};

// ScriptStruct Gobi.BadgeEmblemRow
// Size: 0x28 (Inherited: 0x08)
struct FBadgeEmblemRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct UTexture2D* Emblem; // 0x20(0x08)
};

// ScriptStruct Gobi.BadgeTitleRow
// Size: 0x20 (Inherited: 0x08)
struct FBadgeTitleRow : FTableRowBase {
	struct FText Title; // 0x08(0x18)
};

// ScriptStruct Gobi.BirdInfo
// Size: 0x18 (Inherited: 0x00)
struct FBirdInfo {
	int8_t Site; // 0x00(0x01)
	int8_t Perch; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	uint64_t FlightSeed; // 0x08(0x08)
	bool bAlive; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.BoneCollection
// Size: 0x18 (Inherited: 0x00)
struct FBoneCollection {
	struct TArray<struct FName> Bones; // 0x00(0x10)
	bool bIncludeBonesBelow; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.BoneVisibilityMeshConfig
// Size: 0x18 (Inherited: 0x00)
struct FBoneVisibilityMeshConfig {
	struct FName SkeletalMeshComponentTag; // 0x00(0x08)
	struct TArray<struct FBoneVisibilityBoneConfig> BoneVisibilityConfigs; // 0x08(0x10)
};

// ScriptStruct Gobi.BoneVisibilityBoneConfig
// Size: 0x0c (Inherited: 0x00)
struct FBoneVisibilityBoneConfig {
	struct FName BoneName; // 0x00(0x08)
	enum class EBoneVisibilityChange BoneVisibilityChange; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Gobi.BotInven
// Size: 0x01 (Inherited: 0x00)
struct FBotInven {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Gobi.BotPingSystem
// Size: 0x50 (Inherited: 0x00)
struct FBotPingSystem {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Gobi.TetherSystem
// Size: 0x118 (Inherited: 0x00)
struct FTetherSystem {
	char pad_0[0x10]; // 0x00(0x10)
	struct ABotController* OwnerBotCtrl; // 0x10(0x08)
	char pad_18[0x100]; // 0x18(0x100)
};

// ScriptStruct Gobi.BotThreatList
// Size: 0x50 (Inherited: 0x00)
struct FBotThreatList {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Gobi.BotTeammateInfo
// Size: 0x01 (Inherited: 0x00)
struct FBotTeammateInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Gobi.BotPlaystyleModeConfig
// Size: 0x640 (Inherited: 0x00)
struct FBotPlaystyleModeConfig {
	enum class EBotType BotType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FBotBehaviorConfig BehaviorConfig; // 0x08(0x28)
	struct FBotAwarenessConfig AwarenessConfig; // 0x30(0x1e0)
	struct FBotInventoryConfig InventoryConfig; // 0x210(0x130)
	struct FBotInventoryConfig PlayerInventoryConfig; // 0x340(0x130)
	struct FBotTetherConfig TetherConfig; // 0x470(0x4c)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct FBotCombatConfig CombatConfig; // 0x4c0(0x168)
	struct TArray<struct UGameplayEffect*> InitAppliedEffects; // 0x628(0x10)
	struct UGameplayEvaluatorSet* FilterSet; // 0x638(0x08)
};

// ScriptStruct Gobi.BotCombatConfig
// Size: 0x168 (Inherited: 0x00)
struct FBotCombatConfig {
	struct FGameplayTagContainer AttackTags; // 0x00(0x20)
	struct UEnvQuery* NonCombatThreatEQS; // 0x20(0x08)
	struct UEnvQuery* MeleeThreatEQS; // 0x28(0x08)
	struct UEnvQuery* MeleeAttackLocEQS; // 0x30(0x08)
	struct UAIDistanceRanges* MeleeAttackDistanceRanges; // 0x38(0x08)
	struct UEnvQuery* RangedThreatEQS; // 0x40(0x08)
	struct UEnvQuery* RangedAttackLocEQS; // 0x48(0x08)
	struct UAIDistanceRanges* RangedAttackDistanceRanges; // 0x50(0x08)
	struct FVector2D ShootDurationSingleShot; // 0x58(0x08)
	struct FVector2D ShootDurationMultiShot; // 0x60(0x08)
	float ShootAimConeAngleDegrees; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FBotCombatTacticalInfo Tactical; // 0x70(0x18)
	struct FBotCombatSwarmInfo Swarm; // 0x88(0x18)
	struct FBotCombatFriendlyFireInfo FriendlyFire; // 0xa0(0x14)
	struct FBotCombatTeammateAwarenessInfo TeammateAwareness; // 0xb4(0x08)
	struct FBotCombatHealthInfo HealthInfo; // 0xbc(0x10)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FGameplayTagQuery ThreatDangerTagQuery; // 0xd0(0x48)
	struct FGameplayTagQuery ThreatDontAtkFirstTagQuery; // 0x118(0x48)
	struct UGameplayEffect* HideWeaponsEffect; // 0x160(0x08)
};

// ScriptStruct Gobi.BotCombatHealthInfo
// Size: 0x10 (Inherited: 0x00)
struct FBotCombatHealthInfo {
	float HealthAlertPctSelfOOC; // 0x00(0x04)
	float HealthAlertPctTeamOOC; // 0x04(0x04)
	float HealthAlertPctSelfInCombat; // 0x08(0x04)
	float HealthAlertPctTeamInCombat; // 0x0c(0x04)
};

// ScriptStruct Gobi.BotCombatTeammateAwarenessInfo
// Size: 0x08 (Inherited: 0x00)
struct FBotCombatTeammateAwarenessInfo {
	bool bTeammateTargetAwareness; // 0x00(0x01)
	bool bTeammateSpecialTargetAwareness; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float TeammateIncappedReactTime; // 0x04(0x04)
};

// ScriptStruct Gobi.BotCombatFriendlyFireInfo
// Size: 0x14 (Inherited: 0x00)
struct FBotCombatFriendlyFireInfo {
	bool bFriendlyFireShootThruTeammates; // 0x00(0x01)
	bool bFriendlyFireAware; // 0x01(0x01)
	bool bFriendlyFireCrouches; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float FriendlyFireChkDist; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
	float FriendlyFireCrouchCooldown; // 0x0c(0x04)
	float FriendlyFireOutScale; // 0x10(0x04)
};

// ScriptStruct Gobi.BotCombatSwarmInfo
// Size: 0x18 (Inherited: 0x00)
struct FBotCombatSwarmInfo {
	float SwarmChkDist; // 0x00(0x04)
	int32_t NumEnemiesToBeSwarm; // 0x04(0x04)
	int32_t NumEnemiesToTriggerSecondaryAtk; // 0x08(0x04)
	float EnemyGroupChkDist; // 0x0c(0x04)
	int32_t NumEnemiesToBeEnemyGroup; // 0x10(0x04)
	bool bChkTeammatesForSwarm; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Gobi.BotCombatTacticalInfo
// Size: 0x18 (Inherited: 0x00)
struct FBotCombatTacticalInfo {
	bool bAllowADS; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ADSChkDist; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
	bool bAllowTargetingWeakSpots; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float TacticalChkFrequency; // 0x10(0x04)
	bool bAllowSecondaryMeleeTargets; // 0x14(0x01)
	bool bAllowSecondaryRangedTargets; // 0x15(0x01)
	bool bAllowSecondaryTargetsOnlyWhenSwarmed; // 0x16(0x01)
	bool bAllowSecondaryMeleeTargetsOnlyWhenSwarmed; // 0x17(0x01)
};

// ScriptStruct Gobi.BotTetherConfig
// Size: 0x4c (Inherited: 0x00)
struct FBotTetherConfig {
	float TgtTetherDistNormal; // 0x00(0x04)
	float TgtTetherDistTight; // 0x04(0x04)
	float TeamCentroidTetherDist; // 0x08(0x04)
	float TeammateFollowDist; // 0x0c(0x04)
	float TeammateFollowTightDist; // 0x10(0x04)
	float TeamCentroidDistLimit; // 0x14(0x04)
	float TgtLocationDistLimit; // 0x18(0x04)
	float TgtActorDistLimit; // 0x1c(0x04)
	float TeamTeleportNormalDist; // 0x20(0x04)
	float TeamTeleportTightDist; // 0x24(0x04)
	float TeamTeleportCatchupDist; // 0x28(0x04)
	float TeamTeleportCountdownTimer; // 0x2c(0x04)
	float GroupUpTime; // 0x30(0x04)
	enum class EBotFollowTarget FollowTarget; // 0x34(0x01)
	bool bTetherChecksAllTeammates; // 0x35(0x01)
	bool bTetherTracksSaferooms; // 0x36(0x01)
	bool bWanderFollowsTeammate; // 0x37(0x01)
	float GoToTetherRadius; // 0x38(0x04)
	float GoToInsideChainDelay; // 0x3c(0x04)
	float GoToInsideFinalDelay; // 0x40(0x04)
	float InteractDist; // 0x44(0x04)
	float InteractPaddingDist; // 0x48(0x04)
};

// ScriptStruct Gobi.BotInventoryConfig
// Size: 0x130 (Inherited: 0x00)
struct FBotInventoryConfig {
	float ItemPickupTypePriority[0x9]; // 0x00(0x24)
	float ItemTypePriority[0x9]; // 0x24(0x24)
	float ItemTypePriorityModInCombat[0x9]; // 0x48(0x24)
	float ItemCategoryPriority[0x15]; // 0x6c(0x54)
	float EquipmentSlotPriority[0x9]; // 0xc0(0x24)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FBotItemPref> ItemPrefs; // 0xe8(0x10)
	float DroppedItemCooldownTime; // 0xf8(0x04)
	bool bShouldCompareVsCurItem; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float AmmoThresholdLimitAny; // 0x100(0x04)
	float AmmoThresholdLimitPrimary; // 0x104(0x04)
	float AmmoThresholdDangerLimitPrimary; // 0x108(0x04)
	float AmmoThresholdLimitSecondary; // 0x10c(0x04)
	float AmmoThresholdDangerLimitSecondary; // 0x110(0x04)
	float AmmoThresholdLimitUnused; // 0x114(0x04)
	float AmmoThresholdScaleUnused; // 0x118(0x04)
	float ItemPickupUsableScoreMult; // 0x11c(0x04)
	uint16_t ItemUseUseTypesAllowed; // 0x120(0x02)
	uint16_t ItemUseTypesSaferoomNotAllowed; // 0x122(0x02)
	uint16_t ItemUseTypesHordeOnlyAllowed; // 0x124(0x02)
	uint16_t ItemUseTargetTypesAllowed; // 0x126(0x02)
	char pad_128[0x8]; // 0x128(0x08)
};

// ScriptStruct Gobi.BotItemPref
// Size: 0x10 (Inherited: 0x00)
struct FBotItemPref {
	struct AItem* ItemRef; // 0x00(0x08)
	float ScoreMult; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.BotAwarenessConfig
// Size: 0x1e0 (Inherited: 0x00)
struct FBotAwarenessConfig {
	float PerceptionModSight; // 0x00(0x04)
	float ItemPickupSearchDist; // 0x04(0x04)
	struct FBotPingConfig PingConfig; // 0x08(0xc0)
	float UsableSearchDist; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FGameplayTagContainer UsableActorTags; // 0xd0(0x20)
	struct FGameplayTagContainer UsableActorInCombatTags; // 0xf0(0x20)
	float UsableActorInCombatTimeLimit; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FGameplayTagContainer UsableActorIgnoresLoSTags; // 0x118(0x20)
	struct FGameplayTagQuery AssistRescueTagQuery; // 0x138(0x48)
	struct FGameplayTagQuery AssistGrappledTagQuery; // 0x180(0x48)
	float AssistBaseTeammateScore; // 0x1c8(0x04)
	float AssistLedgeHangScore; // 0x1cc(0x04)
	float AssistIncappedScore; // 0x1d0(0x04)
	float AssistDeadScore; // 0x1d4(0x04)
	float AssistRescueScore; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// ScriptStruct Gobi.BotPingConfig
// Size: 0xc0 (Inherited: 0x00)
struct FBotPingConfig {
	bool bListenToBots; // 0x00(0x01)
	bool bListenToBotsIfNoPlayers; // 0x01(0x01)
	bool bListenToPlayers; // 0x02(0x01)
	bool bListenOnlyToPrimaryTeammate; // 0x03(0x01)
	bool bPingAllowsMoves; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FBotPingTypeInfo PingTypeInfo[0x9]; // 0x08(0x6c)
	float PingOutCooldown; // 0x74(0x04)
	struct FGameplayTagQuery ThreatPingTagQuery; // 0x78(0x48)
};

// ScriptStruct Gobi.BotPingTypeInfo
// Size: 0x0c (Inherited: 0x00)
struct FBotPingTypeInfo {
	bool bListenToBots; // 0x00(0x01)
	bool bListenToBotsIfNoPlayers; // 0x01(0x01)
	bool bListenToPlayers; // 0x02(0x01)
	bool bListenOnlyToPrimaryTeammate; // 0x03(0x01)
	bool bPingsOut; // 0x04(0x01)
	bool bPingOutSaferoomNotAllowed; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t PingOutCntLimit; // 0x08(0x04)
};

// ScriptStruct Gobi.BotBehaviorConfig
// Size: 0x28 (Inherited: 0x00)
struct FBotBehaviorConfig {
	enum class EBotClassRole ClassRole; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CommDenyAimConeAngleDegrees; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct UEnvQuery* WanderDefaultEQS; // 0x10(0x08)
	struct UEnvQuery* WanderLockpickEQS; // 0x18(0x08)
	struct UEnvQuery* WanderNoneEQS; // 0x20(0x08)
};

// ScriptStruct Gobi.BotPlaystyleConfig
// Size: 0x6b0 (Inherited: 0x00)
struct FBotPlaystyleConfig {
	enum class EBotType BotType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FBotBehaviorConfig BehaviorConfig; // 0x08(0x28)
	struct FBotAwarenessConfig AwarenessConfig; // 0x30(0x1e0)
	struct FBotInventoryConfig InventoryConfig; // 0x210(0x130)
	struct FBotInventoryConfig PlayerInventoryConfig; // 0x340(0x130)
	struct FInventoryLoadout Loadout; // 0x470(0x38)
	struct FBotTetherConfig TetherConfig; // 0x4a8(0x4c)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct FBotCombatConfig CombatConfig; // 0x4f8(0x168)
	struct FBotGameplayCardsConfig GameplayCardsConfig; // 0x660(0x18)
	struct TArray<struct UGameplayEffect*> InitAppliedEffects; // 0x678(0x10)
	struct FDataTableRowHandle SpeakerMatch; // 0x688(0x20)
	struct UGameplayEvaluatorSet* FilterSet; // 0x6a8(0x08)
};

// ScriptStruct Gobi.BotGameplayCardsConfig
// Size: 0x18 (Inherited: 0x00)
struct FBotGameplayCardsConfig {
	struct TArray<struct FBotGameplayCardsLoadout> Loadouts; // 0x00(0x10)
	bool bUseFixedLoadouts; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.BotGameplayCardsLoadout
// Size: 0x10 (Inherited: 0x00)
struct FBotGameplayCardsLoadout {
	struct TArray<struct FDataTableRowHandle> FixedLoadout; // 0x00(0x10)
};

// ScriptStruct Gobi.HitInfo
// Size: 0x50 (Inherited: 0x00)
struct FHitInfo {
	struct FVector HitLoc; // 0x00(0x0c)
	struct FVector HitDir; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform MeshTrans; // 0x20(0x30)
};

// ScriptStruct Gobi.DetachableInfo
// Size: 0x10 (Inherited: 0x00)
struct FDetachableInfo {
	struct UStaticMeshComponent* Detachable; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.BonePair
// Size: 0x10 (Inherited: 0x00)
struct FBonePair {
	struct FName Bone1; // 0x00(0x08)
	struct FName Bone2; // 0x08(0x08)
};

// ScriptStruct Gobi.BoneInfo
// Size: 0xa0 (Inherited: 0x00)
struct FBoneInfo {
	struct FName Name; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVector> Vertices; // 0x10(0x10)
	struct TArray<int32_t> Neighbors; // 0x20(0x10)
	char pad_30[0x70]; // 0x30(0x70)
};

// ScriptStruct Gobi.BroadcastMessage
// Size: 0x20 (Inherited: 0x00)
struct FBroadcastMessage {
	struct FName Slug; // 0x00(0x08)
	struct FText Contents; // 0x08(0x18)
};

// ScriptStruct Gobi.BruteAnimState
// Size: 0x10 (Inherited: 0x00)
struct FBruteAnimState {
	bool bBreakableCollision; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector BreakableCollisionDirection; // 0x04(0x0c)
};

// ScriptStruct Gobi.BlackboardKeySet
// Size: 0x80 (Inherited: 0x00)
struct FBlackboardKeySet {
	struct FBlackboardKeySelector BlackboardKey; // 0x00(0x28)
	float FloatValue; // 0x28(0x04)
	int32_t IntValue; // 0x2c(0x04)
	enum class EBoolValue BoolValue; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector VectorValue; // 0x34(0x0c)
	struct FRotator RotatorValue; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString StringValue; // 0x50(0x10)
	struct UObject* ClassValue; // 0x60(0x08)
	struct UObject* ObjectValue; // 0x68(0x08)
	char EnumValue; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FName NameValue; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Gobi.AngleRange
// Size: 0x20 (Inherited: 0x00)
struct FAngleRange {
	struct FString AngleLabel; // 0x00(0x10)
	float AngleMin; // 0x10(0x04)
	float AngleMax; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Gobi.BlackBoardValue
// Size: 0x60 (Inherited: 0x00)
struct FBlackBoardValue {
	struct FBlackboardKeySelector SourceKey; // 0x00(0x28)
	enum class EBlackboardValueOperation Operation; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FBlackboardKeySelector TargetKey; // 0x30(0x28)
	int32_t Context; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Gobi.ActionToCheck
// Size: 0x80 (Inherited: 0x00)
struct FActionToCheck {
	struct FAIDataProviderGameplayTagContainerValue ActionTags; // 0x00(0x50)
	struct FBlackboardKeySelector BlackboardKey; // 0x50(0x28)
	int32_t Options; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Gobi.GameplayTagChange
// Size: 0x58 (Inherited: 0x00)
struct FGameplayTagChange {
	struct FAIDataProviderGameplayTagContainerValue GameplayTags; // 0x00(0x50)
	enum class EGameplayTagOperation Operation; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Gobi.HealthRange
// Size: 0x20 (Inherited: 0x00)
struct FHealthRange {
	struct FString HealthLabel; // 0x00(0x10)
	float HealthMin; // 0x10(0x04)
	float HealthMax; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Gobi.BuildEnvironmentConfigurationFile
// Size: 0x40 (Inherited: 0x00)
struct FBuildEnvironmentConfigurationFile {
	uint32_t Ver; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FBuildEnvironmentConfigurationData Data; // 0x08(0x38)
};

// ScriptStruct Gobi.BuildEnvironmentConfigurationData
// Size: 0x38 (Inherited: 0x00)
struct FBuildEnvironmentConfigurationData {
	uint32_t Changelist; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString DefaultEnvironment; // 0x08(0x10)
	struct FString HighestAvailableEnvironment; // 0x18(0x10)
	struct TArray<struct FNanopatchConfiguration> Nanopatches; // 0x28(0x10)
};

// ScriptStruct Gobi.NanopatchConfiguration
// Size: 0x20 (Inherited: 0x00)
struct FNanopatchConfiguration {
	struct FString Environment; // 0x00(0x10)
	struct TArray<struct FNanopatchBucketConfiguration> Buckets; // 0x10(0x10)
};

// ScriptStruct Gobi.NanopatchBucketConfiguration
// Size: 0x20 (Inherited: 0x00)
struct FNanopatchBucketConfiguration {
	struct FString Bucket; // 0x00(0x10)
	struct TArray<struct FNanopatchCVar> CVars; // 0x10(0x10)
};

// ScriptStruct Gobi.NanopatchCVar
// Size: 0x20 (Inherited: 0x00)
struct FNanopatchCVar {
	struct FString Name; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Gobi.BulletPenetrationTuning
// Size: 0x04 (Inherited: 0x00)
struct FBulletPenetrationTuning {
	float PenetrationPower; // 0x00(0x04)
};

// ScriptStruct Gobi.BulletPenetrationDefenseDefinition
// Size: 0x04 (Inherited: 0x00)
struct FBulletPenetrationDefenseDefinition {
	float PenetrationDefense; // 0x00(0x04)
};

// ScriptStruct Gobi.UnlimitedBulletPenetration
// Size: 0x58 (Inherited: 0x00)
struct FUnlimitedBulletPenetration {
	float DistanceRange; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSet<enum class EPhysicalSurface> Surfaces; // 0x08(0x50)
};

// ScriptStruct Gobi.DamageThreshold
// Size: 0x08 (Inherited: 0x00)
struct FDamageThreshold {
	float DamageAmount; // 0x00(0x04)
	float Duration; // 0x04(0x04)
};

// ScriptStruct Gobi.VectorMaterialParameter
// Size: 0x48 (Inherited: 0x00)
struct FVectorMaterialParameter {
	struct FName ParameterName; // 0x00(0x08)
	struct FVectorParameterBehavior ActivationBehavior; // 0x08(0x20)
	struct FVectorParameterBehavior DeactivationBehavior; // 0x28(0x20)
};

// ScriptStruct Gobi.VectorParameterBehavior
// Size: 0x20 (Inherited: 0x00)
struct FVectorParameterBehavior {
	struct FLinearColor Value; // 0x00(0x10)
	struct UCurveLinearColor* VectorCurve; // 0x10(0x08)
	bool bPlayCurveReversed; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Gobi.FloatMaterialParameter
// Size: 0x28 (Inherited: 0x00)
struct FFloatMaterialParameter {
	struct FName ParameterName; // 0x00(0x08)
	struct FFloatParameterBehavior ActivationBehavior; // 0x08(0x10)
	struct FFloatParameterBehavior DeactivationBehavior; // 0x18(0x10)
};

// ScriptStruct Gobi.FloatParameterBehavior
// Size: 0x10 (Inherited: 0x00)
struct FFloatParameterBehavior {
	struct UCurveFloat* FloatCurve; // 0x00(0x08)
	float Value; // 0x08(0x04)
	bool bPlayCurveReversed; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Gobi.CameraViewModifierEntry
// Size: 0x48 (Inherited: 0x00)
struct FCameraViewModifierEntry {
	struct FCameraViewModifier Modifier; // 0x00(0x38)
	struct UObject* Source; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Gobi.CampaignRunDataV3
// Size: 0x68 (Inherited: 0x00)
struct FCampaignRunDataV3 {
	enum class ECampaignRoundResult LastRoundResult; // 0x00(0x04)
	bool bNeedsCardDraw; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FCampaignRunPlayerSlotData> CampaignPlayerSlotData; // 0x08(0x10)
	struct FGameplayCardTravelData GameplayCardTravelData; // 0x18(0x48)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct Gobi.GameplayCardTravelData
// Size: 0x48 (Inherited: 0x00)
struct FGameplayCardTravelData {
	uint64_t RandomStreamSeed; // 0x00(0x08)
	struct TArray<struct FPlayerActiveGameplayCardData> PlayerActiveGameplayCardDataArray; // 0x08(0x10)
	struct TArray<struct FActiveGameplayCard> StaticCardsFromDifficulty; // 0x18(0x10)
	struct TArray<struct FActiveGameplayCard> DynamicCardsFromDifficulty; // 0x28(0x10)
	struct TArray<struct FZombieMutationTeamData> ZombieMutationTeamDataArray; // 0x38(0x10)
};

// ScriptStruct Gobi.CampaignRunPlayerSlotData
// Size: 0x298 (Inherited: 0x00)
struct FCampaignRunPlayerSlotData {
	struct FSlotIndex SlotIndex; // 0x00(0x08)
	struct FDataTableRowHandle HeroRowHandle; // 0x08(0x20)
	struct FCharacterCustomizationSet CustomizationSet; // 0x28(0x88)
	struct FString OwnerId; // 0xb0(0x10)
	int32_t Copper; // 0xc0(0x04)
	bool bHasChosenLoadout; // 0xc4(0x01)
	bool bNeedsQuickPlayCharacterTransfer; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
	int32_t CharacterTransferOwedDraws; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FRespawnSnapshot_Hero HeroRespawnSnapshot; // 0xd0(0x1c8)
};

// ScriptStruct Gobi.RespawnSnapshot_Hero
// Size: 0x1c8 (Inherited: 0x00)
struct FRespawnSnapshot_Hero {
	float MaxHealth; // 0x00(0x04)
	float CurrentHealth; // 0x04(0x04)
	int32_t CurrentIncapCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FInventoryLoadout Loadout; // 0x10(0x38)
	struct FInventoryLoadout BotLoadout; // 0x48(0x38)
	struct FPlayerActiveGameplayCardData ActiveGameplayCardData; // 0x80(0xa0)
	struct FPlayerActiveGameplayCardData BotActiveGameplayCardData; // 0x120(0xa0)
	char pad_1C0[0x8]; // 0x1c0(0x08)
};

// ScriptStruct Gobi.CampaignPlayerSlotData
// Size: 0x2c8 (Inherited: 0x00)
struct FCampaignPlayerSlotData {
	struct FSlotIndex SlotIndex; // 0x00(0x08)
	struct FDataTableRowHandle HeroRowHandle; // 0x08(0x20)
	struct FCharacterCustomizationSet CustomizationSet; // 0x28(0x88)
	struct FString OwnerId; // 0xb0(0x10)
	int32_t Copper; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FActiveGameplayCard> ActiveGameplayCards; // 0xc8(0x10)
	int32_t EquippedPresetIndex; // 0xd8(0x04)
	bool EquippedPresetIsBuiltIn; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct TArray<struct FDataTableRowHandle> EquippedPresetCards; // 0xe0(0x10)
	int32_t BonusDraws; // 0xf0(0x04)
	bool bHasChosenLoadout; // 0xf4(0x01)
	bool bNeedsQuickPlayCharacterTransfer; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	int32_t CharacterTransferOwedDraws; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FRespawnSnapshot_Hero HeroRespawnSnapshot; // 0x100(0x1c8)
};

// ScriptStruct Gobi.ProfileCaravanData
// Size: 0x10 (Inherited: 0x00)
struct FProfileCaravanData {
	struct TArray<struct FCaravanInstance> Caravans; // 0x00(0x10)
};

// ScriptStruct Gobi.CaravanInstance
// Size: 0x60 (Inherited: 0x00)
struct FCaravanInstance {
	struct FDataTableRowHandle Schema; // 0x00(0x20)
	struct FDataTableRowHandle Merchant; // 0x20(0x20)
	struct TArray<struct FDataTableRowHandle> Items; // 0x40(0x10)
	int64_t Expiry; // 0x50(0x08)
	int32_t Changelist; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Gobi.CaravanMerchantRow
// Size: 0xa8 (Inherited: 0x08)
struct FCaravanMerchantRow : FTableRowBase {
	struct TSoftObjectPtr<UTexture2D> MerchantEntryBG; // 0x08(0x28)
	struct TSoftObjectPtr<UTexture2D> MerchantHeaderBG; // 0x30(0x28)
	struct FText MerchantName; // 0x58(0x18)
	struct FText MerchantDesc; // 0x70(0x18)
	struct FGameplayTagContainer CaravanTags; // 0x88(0x20)
};

// ScriptStruct Gobi.StaticCaravanChain
// Size: 0x10 (Inherited: 0x00)
struct FStaticCaravanChain {
	struct TArray<struct FStaticCaravan> StaticCaravans; // 0x00(0x10)
};

// ScriptStruct Gobi.StaticCaravan
// Size: 0x30 (Inherited: 0x00)
struct FStaticCaravan {
	struct FDataTableRowHandle Merchant; // 0x00(0x20)
	struct TArray<struct FDataTableRowHandle> Items; // 0x20(0x10)
};

// ScriptStruct Gobi.CaravanSchemaRow
// Size: 0x20 (Inherited: 0x08)
struct FCaravanSchemaRow : FTableRowBase {
	struct TArray<struct FDataTableRowHandle> ProductRarities; // 0x08(0x10)
	int32_t DurationHours; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Gobi.GobiEasingAnim
// Size: 0x20 (Inherited: 0x00)
struct FGobiEasingAnim {
	char pad_0[0x8]; // 0x00(0x08)
	float Duration; // 0x08(0x04)
	enum class EEasingFunc EasingFunc; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float EasingExponent; // 0x10(0x04)
	int32_t Steps; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Gobi.CardAnim
// Size: 0x20 (Inherited: 0x20)
struct FCardAnim : FGobiEasingAnim {
};

// ScriptStruct Gobi.CardRequestToCueData
// Size: 0x18 (Inherited: 0x00)
struct FCardRequestToCueData {
	struct FName CardRequestName; // 0x00(0x08)
	struct FGameplayTag GameplayCueTag; // 0x08(0x08)
	struct UAkAudioEvent* UIEvent; // 0x10(0x08)
};

// ScriptStruct Gobi.ChallengeSetRow
// Size: 0x38 (Inherited: 0x08)
struct FChallengeSetRow : FTableRowBase {
	struct TArray<struct UChallengeData*> Challenges; // 0x08(0x10)
	struct TArray<struct FChallengeRankReward> RankRewards; // 0x18(0x10)
	struct FTimespan Duration; // 0x28(0x08)
	struct FDateTime StartDate; // 0x30(0x08)
};

// ScriptStruct Gobi.ChallengeRankReward
// Size: 0x18 (Inherited: 0x00)
struct FChallengeRankReward {
	int32_t SupplyPoints; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FDataTableRowHandle> Products; // 0x08(0x10)
};

// ScriptStruct Gobi.ChallengeRankRow
// Size: 0x30 (Inherited: 0x08)
struct FChallengeRankRow : FTableRowBase {
	struct UTexture2D* Icon; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	int32_t PointCost; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Gobi.ChallengeIndexPair
// Size: 0x08 (Inherited: 0x00)
struct FChallengeIndexPair {
	int32_t SetIndex; // 0x00(0x04)
	int32_t Index; // 0x04(0x04)
};

// ScriptStruct Gobi.GobiChallengeObjectiveProgress
// Size: 0x08 (Inherited: 0x00)
struct FGobiChallengeObjectiveProgress {
	int32_t Points; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct Gobi.StartingStateAndParams
// Size: 0xb0 (Inherited: 0x00)
struct FStartingStateAndParams {
	struct TMap<struct FName, struct FName> StartingStates; // 0x00(0x50)
	struct TMap<struct FString, float> StartingRTPCs; // 0x50(0x50)
	struct TArray<struct UAkAudioEvent*> StartingAudioEvents; // 0xa0(0x10)
};

// ScriptStruct Gobi.AudioDamageTypeEvent
// Size: 0xd8 (Inherited: 0x00)
struct FAudioDamageTypeEvent {
	struct FGameplayTagContainer TagContainer; // 0x00(0x20)
	struct TMap<struct UAkAudioEvent*, int8_t> WeightedAudioEvents; // 0x20(0x50)
	int8_t TotalWeightAudioEvents; // 0x70(0x01)
	bool bTryAllAudioEvents; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float Cooldown; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
	struct TMap<struct UAkAudioEvent*, int8_t> WeightedAudioEventsIfOnCooldown; // 0x80(0x50)
	int8_t TotalWeightAudioEventsIfOnCooldown; // 0xd0(0x01)
	bool bTryAllAudioEventsIfOnCooldown; // 0xd1(0x01)
	bool bPlayOnAttacker; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)
};

// ScriptStruct Gobi.MusicDamageTypeEvent
// Size: 0x28 (Inherited: 0x00)
struct FMusicDamageTypeEvent {
	struct UGobiDamageType* DamageTypeClass; // 0x00(0x08)
	struct FDataTableRowHandle MusicEvent; // 0x08(0x20)
};

// ScriptStruct Gobi.EnemyAudioEvent
// Size: 0x20 (Inherited: 0x00)
struct FEnemyAudioEvent {
	bool bSharedEvent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAkAudioEvent* AudioEvent; // 0x08(0x08)
	enum class ESharedEnemyAnimSound SharedSound; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName BoneName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Gobi.CharacterRelatedActors
// Size: 0x30 (Inherited: 0x00)
struct FCharacterRelatedActors {
	struct FDataTableRowHandle HeroRowHandle; // 0x00(0x20)
	struct TArray<struct AActor*> AssociatedActors; // 0x20(0x10)
};

// ScriptStruct Gobi.UICustomizationData
// Size: 0x1f0 (Inherited: 0x00)
struct FUICustomizationData {
	struct FName RowName; // 0x00(0x08)
	struct FCharacterCustomizationRow Row; // 0x08(0x1e0)
	bool bIsLocked; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// ScriptStruct Gobi.CharacterCustomizationRow
// Size: 0x1e0 (Inherited: 0x08)
struct FCharacterCustomizationRow : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	enum class EItemQuality Quality; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAkAudioEvent* EquipSound; // 0x40(0x08)
	enum class ECharacterCustomizationSlot Slot; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FHeroMeshDefinition FirstPersonMeshDefinition; // 0x50(0xc8)
	struct FHeroMeshDefinition ThirdPersonMeshDefinition; // 0x118(0xc8)
};

// ScriptStruct Gobi.HeroMeshDefinition
// Size: 0xc8 (Inherited: 0x00)
struct FHeroMeshDefinition {
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>> MaterialSlotOverrides; // 0x00(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>> InGameMaterialOverrides; // 0x50(0x50)
	struct TSoftObjectPtr<USkeletalMesh> Mesh; // 0xa0(0x28)
};

// ScriptStruct Gobi.CharacterMusicStateConfig
// Size: 0x28 (Inherited: 0x00)
struct FCharacterMusicStateConfig {
	struct FName MusicSystemDisplayName; // 0x00(0x08)
	struct FDataTableRowHandle MusicEventRowHandle; // 0x08(0x20)
};

// ScriptStruct Gobi.CharacterSelectMapping
// Size: 0x1c (Inherited: 0x00)
struct FCharacterSelectMapping {
	struct FName RowName; // 0x00(0x08)
	struct FName CharacterName; // 0x08(0x08)
	struct TWeakObjectPtr<struct APlayerSlot> Slot; // 0x10(0x08)
	char pad_18[0x4]; // 0x18(0x04)
};

// ScriptStruct Gobi.ChargeMoveTickData
// Size: 0x20 (Inherited: 0x00)
struct FChargeMoveTickData {
	enum class EChargeState CurrentState; // 0x00(0x04)
	char pad_4[0x1c]; // 0x04(0x1c)
};

// ScriptStruct Gobi.ChargeTuning
// Size: 0x88 (Inherited: 0x08)
struct FChargeTuning : FTuningDataBase {
	float MaxSpeed; // 0x08(0x04)
	float RampUpTime; // 0x0c(0x04)
	float ChargeRecoverSecs; // 0x10(0x04)
	float MinStartChargeSecs; // 0x14(0x04)
	float ChargeRecoverDelay; // 0x18(0x04)
	float MaxChargeSecs; // 0x1c(0x04)
	float MinChargeHitTime; // 0x20(0x04)
	float MinChargeVelocityToHit; // 0x24(0x04)
	float DecelerateMontagePlayRate; // 0x28(0x04)
	float AIMinChargeDistance; // 0x2c(0x04)
	struct FVector2D AIMaxTurnAngleRange; // 0x30(0x08)
	bool bAIStopAtCliffs; // 0x38(0x01)
	bool bCancelChargeWhenFalling; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float MinTimeBeforeChargeButtonCancels; // 0x3c(0x04)
	bool bUsesBreakButton; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MinTimeBeforeBackButtonCancels; // 0x44(0x04)
	float BreakDeceleration; // 0x48(0x04)
	float DecelerationStopSpeed; // 0x4c(0x04)
	float TraceAheadDistance; // 0x50(0x04)
	float TraceAheadNavMeshDistance; // 0x54(0x04)
	float ChargePushMinTime; // 0x58(0x04)
	float MinVelocityThreshold; // 0x5c(0x04)
	float MaxNoChargeVelocityTime; // 0x60(0x04)
	float ChargeFrontImpactAngle; // 0x64(0x04)
	float ImpactDeflectAngleThreshold; // 0x68(0x04)
	float MaxImpactDeflectAmount; // 0x6c(0x04)
	struct FVector2D ImpactExplosionAngles; // 0x70(0x08)
	float CameraLerpSpeed; // 0x78(0x04)
	float MinSpeedToPlayDeccelerateMontage; // 0x7c(0x04)
	float MinTimeBetweenImpactExplosions; // 0x80(0x04)
	float ClampLookHorzRotationRate; // 0x84(0x04)
};

// ScriptStruct Gobi.ChaserAnimState
// Size: 0x1c (Inherited: 0x00)
struct FChaserAnimState {
	char bWallAttached : 1; // 0x00(0x01)
	char bDismounting : 1; // 0x00(0x01)
	char bSwiveling : 1; // 0x00(0x01)
	char bClingMoving : 1; // 0x00(0x01)
	char bIsLeaping : 1; // 0x00(0x01)
	char bIsLeapInterrupted : 1; // 0x00(0x01)
	char bIsPouncing : 1; // 0x00(0x01)
	char bIsPounceAttacking : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VelocityPitch; // 0x04(0x04)
	enum class EZombieAttachLocationType AttachLocationType; // 0x08(0x01)
	bool bClingFacingRight; // 0x09(0x01)
	bool bShouldTurn; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float LookYaw; // 0x0c(0x04)
	float TurnAngleRemaining; // 0x10(0x04)
	float TurnThreshold; // 0x14(0x04)
	float DraggingMinThreshold; // 0x18(0x04)
};

// ScriptStruct Gobi.ChaserTuning
// Size: 0x5f8 (Inherited: 0x08)
struct FChaserTuning : FTableRowBase {
	struct FLeapTuning PlayerControlledLeap; // 0x08(0x198)
	struct FProjectileThrowTuning BasicThrow; // 0x1a0(0xf8)
	struct FProjectileThrowTuning Pin; // 0x298(0xf8)
	struct FPounceTuning Pounce; // 0x390(0xe0)
	struct FHealthTuning Health; // 0x470(0x148)
	struct FWeakSpotsTuning WeakSpots; // 0x5b8(0x28)
	float Melee_MaxDistOffset; // 0x5e0(0x04)
	float MeleeRadiusCheck; // 0x5e4(0x04)
	float MeleeRadiusCheck_Ground; // 0x5e8(0x04)
	float MeleeRadiusCheck_High; // 0x5ec(0x04)
	bool bHasPlayerLeap; // 0x5f0(0x01)
	bool bHasBasicThrow; // 0x5f1(0x01)
	bool bHasPin; // 0x5f2(0x01)
	bool bHasPounce; // 0x5f3(0x01)
	bool bHasMelee; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
};

// ScriptStruct Gobi.WeakSpotsTuning
// Size: 0x28 (Inherited: 0x08)
struct FWeakSpotsTuning : FTuningDataBase {
	struct TArray<struct FWeakSpotAttachmentTuning> WeakSpotAttachmentTuningArray; // 0x08(0x10)
	struct TArray<struct FWeakSpotSurfaceTuning> WeakSpotSurfaceTuningArray; // 0x18(0x10)
};

// ScriptStruct Gobi.WeakSpotBaseTuning
// Size: 0x58 (Inherited: 0x00)
struct FWeakSpotBaseTuning {
	struct FName TuningName; // 0x00(0x08)
	struct FGamePropertyFloat MaxHealth; // 0x08(0x38)
	float StumbleAccumMultiplier; // 0x40(0x04)
	bool bForwardDamageToHealthComponent; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float ForwardDamageToHealthComponentMutliplier; // 0x48(0x04)
	bool bForwardedDamageAppliesInflictDamageType; // 0x4c(0x01)
	bool bClampForwardedDamageToWeakSpotHealth; // 0x4d(0x01)
	bool bAbsorbsHealthComponentDamage; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	float InflictDamage; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Gobi.WeakSpotSurfaceTuning
// Size: 0x58 (Inherited: 0x58)
struct FWeakSpotSurfaceTuning : FWeakSpotBaseTuning {
};

// ScriptStruct Gobi.WeakSpotAttachmentTuning
// Size: 0x70 (Inherited: 0x58)
struct FWeakSpotAttachmentTuning : FWeakSpotBaseTuning {
	bool bOffsetWhenDamaged; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FVector MaxOffsetWhenDamaged; // 0x5c(0x0c)
	float WeakSpotDuration; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Gobi.HealthTuning
// Size: 0x148 (Inherited: 0x08)
struct FHealthTuning : FTuningDataBase {
	struct FGamePropertyFloat CriticalHealMultiplier; // 0x08(0x38)
	struct FGamePropertyFloat PermanentDamageScale; // 0x40(0x38)
	struct FGamePropertyFloat HealthRegenPerSecond; // 0x78(0x38)
	struct FGamePropertyFloat HealthDepletedMaxHealthPenalty; // 0xb0(0x38)
	float InitialHealthPercent; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FGamePropertyFloat InitialMaxHealth; // 0xf0(0x38)
	float MaxHealthLowerLimit; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FTemporaryHealthParams DefaultTempHealthParams; // 0x130(0x18)
};

// ScriptStruct Gobi.TemporaryHealthParams
// Size: 0x18 (Inherited: 0x00)
struct FTemporaryHealthParams {
	bool bClampTempHealthToMaxHealth; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TempHealthDecay; // 0x04(0x04)
	float TempHealthDecayFrequency; // 0x08(0x04)
	float MaxTempHealth; // 0x0c(0x04)
	struct UGobiDamageType* DamageType; // 0x10(0x08)
};

// ScriptStruct Gobi.PounceTuning
// Size: 0xe0 (Inherited: 0x08)
struct FPounceTuning : FTuningDataBase {
	struct FVector2D GrabDuration; // 0x08(0x08)
	float DamageRequiredToRelease; // 0x10(0x04)
	float GravityScalar; // 0x14(0x04)
	struct FPounceInitialAttackDamage InitialAttackDamage; // 0x18(0x18)
	struct FPounceAOE AOE; // 0x30(0x28)
	float Cooldown; // 0x58(0x04)
	float MissCooldown; // 0x5c(0x04)
	float MinCookTime; // 0x60(0x04)
	float LaunchSpeed; // 0x64(0x04)
	struct FLeapSteerData SteerData; // 0x68(0x44)
	float TargetOffset; // 0xac(0x04)
	float ReleaseOnWhizByDistance; // 0xb0(0x04)
	struct FPounceAITuning AI; // 0xb4(0x04)
	struct FPouncePlayerTuning Player; // 0xb8(0x28)
};

// ScriptStruct Gobi.PouncePlayerTuning
// Size: 0x28 (Inherited: 0x00)
struct FPouncePlayerTuning {
	float ArcParam; // 0x00(0x04)
	float ArcDegrees; // 0x04(0x04)
	float MaxAimUpAngle; // 0x08(0x04)
	float AimAssistRadius; // 0x0c(0x04)
	float PlayerMaxPounceDistance; // 0x10(0x04)
	float MaxBunnyKickOffDistance; // 0x14(0x04)
	float BunnyKickOffCooldown; // 0x18(0x04)
	float BunnyKickOffHoldTime; // 0x1c(0x04)
	float ClampLookHorzRotationRate; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.PounceAITuning
// Size: 0x04 (Inherited: 0x00)
struct FPounceAITuning {
	float PredictiveAimingScalar; // 0x00(0x04)
};

// ScriptStruct Gobi.LeapSteerData
// Size: 0x44 (Inherited: 0x00)
struct FLeapSteerData {
	float ForwardAccelRate; // 0x00(0x04)
	float BackwardAccelRate; // 0x04(0x04)
	float RightAccelRate; // 0x08(0x04)
	float MaxForwardSpeed; // 0x0c(0x04)
	float MaxBackwardSpeed; // 0x10(0x04)
	float MaxRightSpeed; // 0x14(0x04)
	char pad_18[0x2c]; // 0x18(0x2c)
};

// ScriptStruct Gobi.PounceAOE
// Size: 0x28 (Inherited: 0x00)
struct FPounceAOE {
	struct UGobiDamageType* DamageType; // 0x00(0x08)
	struct TArray<struct UGameplayEffect*> Effects; // 0x08(0x10)
	struct FVector2D Radius; // 0x18(0x08)
	float MaxLeapDistance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.PounceInitialAttackDamage
// Size: 0x18 (Inherited: 0x00)
struct FPounceInitialAttackDamage {
	struct UGobiDamageType* DamageType; // 0x00(0x08)
	struct FVector2D DamageAmount; // 0x08(0x08)
	float MaxLeapDistance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.ProjectileThrowTuning
// Size: 0xf8 (Inherited: 0x08)
struct FProjectileThrowTuning : FTuningDataBase {
	float MinCookTime; // 0x08(0x04)
	float GravityScale; // 0x0c(0x04)
	float DefaultProjectileSpeed; // 0x10(0x04)
	float Cooldown; // 0x14(0x04)
	float MissCooldown; // 0x18(0x04)
	float InterruptCooldown; // 0x1c(0x04)
	struct FProjectileThrowChargeData ChargeData; // 0x20(0x50)
	struct FAIProjectileThrowConfig AI; // 0x70(0x1c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FPlayerProjectileThrowConfig Player; // 0x90(0x60)
	struct FPinProjectileConfig Pin; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct Gobi.PinProjectileConfig
// Size: 0x04 (Inherited: 0x00)
struct FPinProjectileConfig {
	float MinTimeBeforePinCancel; // 0x00(0x04)
};

// ScriptStruct Gobi.PlayerProjectileThrowConfig
// Size: 0x60 (Inherited: 0x00)
struct FPlayerProjectileThrowConfig {
	bool bThrowWithSecondaryButton; // 0x00(0x01)
	bool bThrowTowardsCrosshair; // 0x01(0x01)
	bool bThrowButtonRequiresRelease; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MaxCrossHairDistance; // 0x04(0x04)
	struct FVector2D CrossHairLerpDistanceThreshold; // 0x08(0x08)
	float ArcParam; // 0x10(0x04)
	float ThrowYaw; // 0x14(0x04)
	float MinCookingTimeToShowReticle; // 0x18(0x04)
	float MinCookingTimeToShowTrajectory; // 0x1c(0x04)
	int32_t ShowReticleStates; // 0x20(0x04)
	int32_t ShowReticleTrajectoryStates; // 0x24(0x04)
	int32_t ShowFloatingCrossHairStates; // 0x28(0x04)
	struct FVector SpreadZone; // 0x2c(0x0c)
	float AimAssistRadius; // 0x38(0x04)
	struct FName ReticleTrajectoryUseStartBone; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FProjectileThrowReticleTypeEntry> Reticles; // 0x48(0x10)
	bool bClientPredictedImpacts; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Gobi.ProjectileThrowReticleTypeEntry
// Size: 0x10 (Inherited: 0x00)
struct FProjectileThrowReticleTypeEntry {
	enum class EProjectileThrowReticleType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AGobiReticle* Reticle; // 0x08(0x08)
};

// ScriptStruct Gobi.AIProjectileThrowConfig
// Size: 0x1c (Inherited: 0x00)
struct FAIProjectileThrowConfig {
	bool bPredictiveAimingEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float bPredictiveAimingRadiusPadding; // 0x04(0x04)
	float MinTargetLocationChangeForPredicitveAiming; // 0x08(0x04)
	float MaxAngleFromForward; // 0x0c(0x04)
	struct FVector SpreadZone; // 0x10(0x0c)
};

// ScriptStruct Gobi.ProjectileThrowChargeData
// Size: 0x50 (Inherited: 0x00)
struct FProjectileThrowChargeData {
	float MaxChargeTime; // 0x00(0x04)
	struct FVector2D ProjectileSpeed; // 0x04(0x08)
	struct FVector2D ProjectileGravityScale; // 0x0c(0x08)
	struct FVector2D ProjectileSize; // 0x14(0x08)
	struct FVector2D PlayerArcParam; // 0x1c(0x08)
	struct FVector2D UserData; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ChargePctRTPC; // 0x30(0x10)
	struct UAkAudioEvent* FullyChargedAudioEvent; // 0x40(0x08)
	struct UAkAudioEvent* ChargedStopAudioEvent; // 0x48(0x08)
};

// ScriptStruct Gobi.LeapTuning
// Size: 0x198 (Inherited: 0x08)
struct FLeapTuning : FTuningDataBase {
	float GravityScalar; // 0x08(0x04)
	float TargetOffset; // 0x0c(0x04)
	float LeapSpeed; // 0x10(0x04)
	struct FLeapSteerData SteerData; // 0x14(0x44)
	struct TArray<struct UAnimMontage*> LeapMontages; // 0x58(0x10)
	struct TArray<struct UAnimMontage*> LeapLandMontages; // 0x68(0x10)
	struct FGameplayTagContainer AppliedTags; // 0x78(0x20)
	struct FGameplayTagContainer AppliedCookingTags; // 0x98(0x20)
	struct FGameplayTagContainer AppliedLeapingTags; // 0xb8(0x20)
	struct FGameplayTagContainer BlockingTags; // 0xd8(0x20)
	struct FGameplayTagQuery CancelTags; // 0xf8(0x48)
	struct FGameplayTagContainer CooldownTags; // 0x140(0x20)
	float Cooldown; // 0x160(0x04)
	float MinCookTime; // 0x164(0x04)
	struct UCurveFloat* SpeedMultiplierCurve; // 0x168(0x08)
	struct TArray<struct UGameplayEffectEmitterComponent*> OnLandEmitters; // 0x170(0x10)
	struct FPlayerLeapTuning Player; // 0x180(0x18)
};

// ScriptStruct Gobi.PlayerLeapTuning
// Size: 0x18 (Inherited: 0x00)
struct FPlayerLeapTuning {
	float ArcParam; // 0x00(0x04)
	float ArcDegrees; // 0x04(0x04)
	float MaxAimUpAngle; // 0x08(0x04)
	float MaxLeapDistance; // 0x0c(0x04)
	float ClampLookHorzRotationRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.ClingMoveTickData
// Size: 0x24 (Inherited: 0x00)
struct FClingMoveTickData {
	char pad_0[0xc]; // 0x00(0x0c)
	struct FRotator ClingRotation; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	enum class EClingState CurrentState; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Gobi.ClingConfig
// Size: 0x168 (Inherited: 0x00)
struct FClingConfig {
	struct TArray<struct UAnimMontage*> LeapToClingLocationMontages; // 0x00(0x10)
	struct TArray<struct UAnimMontage*> LeapLandClingLocationMontages; // 0x10(0x10)
	struct TArray<struct UAnimMontage*> LeapOffClingLocationMontages; // 0x20(0x10)
	struct TArray<struct UAnimMontage*> PerchTurnInPlaceMontages; // 0x30(0x10)
	float DistanceToAttachToClingLocation; // 0x40(0x04)
	int32_t CanAttach; // 0x44(0x04)
	int32_t CanAttachWhileIdle; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct UGameplayEffect*> ApplyClingingEffects; // 0x50(0x10)
	struct TArray<struct UGameplayEffect*> ApplyMovingEffects; // 0x60(0x10)
	struct FGameplayTagContainer AppliedTags; // 0x70(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x90(0x20)
	struct FGameplayTagContainer BlockingMovingTags; // 0xb0(0x20)
	struct FGameplayTagQuery CancelTags; // 0xd0(0x48)
	struct FGameplayTagContainer JumpOffTags; // 0x118(0x20)
	float CrawlVolumeDistanceThreshold; // 0x138(0x04)
	float PoleTurnSpeed; // 0x13c(0x04)
	float ClingCrawlSpeed; // 0x140(0x04)
	float PerchMoveSpeed; // 0x144(0x04)
	struct FVector2D PerchMoveDelay; // 0x148(0x08)
	float PerchTurnAngleThreshold; // 0x150(0x04)
	bool bCanMoveOnWalls; // 0x154(0x01)
	bool bCanMoveWhilePerched; // 0x155(0x01)
	bool bCanMoveOnPoles; // 0x156(0x01)
	char pad_157[0x1]; // 0x157(0x01)
	float LeapSpeed; // 0x158(0x04)
	float GravityScalar; // 0x15c(0x04)
	float TargetOffset; // 0x160(0x04)
	bool bLeapToClingUsesMotionCorrection; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
};

// ScriptStruct Gobi.ClipAmmoTuning
// Size: 0x04 (Inherited: 0x00)
struct FClipAmmoTuning {
	int32_t MaxClipAmount; // 0x00(0x04)
};

// ScriptStruct Gobi.ReplicatedReloadData
// Size: 0x08 (Inherited: 0x00)
struct FReplicatedReloadData {
	int32_t MontageSectionIndex; // 0x00(0x04)
	char ForceReplicationBit : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Gobi.ClipReloadTuning
// Size: 0x0c (Inherited: 0x00)
struct FClipReloadTuning {
	float ReloadAddTime; // 0x00(0x04)
	float ReloadLength; // 0x04(0x04)
	float ReloadAnimationLength; // 0x08(0x04)
};

// ScriptStruct Gobi.ColorBlindGroup
// Size: 0x10 (Inherited: 0x00)
struct FColorBlindGroup {
	struct TArray<struct FColorBlindEntry> Entries; // 0x00(0x10)
};

// ScriptStruct Gobi.ColorBlindEntry
// Size: 0x10 (Inherited: 0x00)
struct FColorBlindEntry {
	enum class EColorBlindEntryType EntryType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	enum class EHighlightSwatch OutlineSwatchType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Gobi.MeshMergeConfiguration
// Size: 0xa8 (Inherited: 0x00)
struct FMeshMergeConfiguration {
	struct USkeletalMesh* MergedMesh; // 0x00(0x08)
	struct TArray<struct FSkeletalMeshSetMaterialOverride> MaterialOverrides; // 0x08(0x10)
	struct TArray<struct UMeshMaterialParamSet*> MaterialParamSets; // 0x18(0x10)
	struct TArray<struct FSkeletalMeshPiece> DismembermentPieces; // 0x28(0x10)
	struct UMaterialInterface* InnerMeshMaterial; // 0x38(0x08)
	char pad_40[0x68]; // 0x40(0x68)
};

// ScriptStruct Gobi.SkeletalMeshPiece
// Size: 0x60 (Inherited: 0x00)
struct FSkeletalMeshPiece {
	struct FGameplayTag SkelMeshCompGameplayTag; // 0x00(0x08)
	bool bOptimization_UseAttachParentBounds; // 0x08(0x01)
	bool bStartHidden; // 0x09(0x01)
	bool bIsDismembermentPiece; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct UStaticMesh* StaticMeshDismembermentPiece; // 0x10(0x08)
	struct FName StaticMeshDismembermentAttachName; // 0x18(0x08)
	enum class EMutilationRegion MutilationRegion; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UParticleSystem* ParticleSystem; // 0x28(0x08)
	struct FName ParticleAttachSocketName; // 0x30(0x08)
	struct TSoftObjectPtr<USkeletalMesh> Mesh; // 0x38(0x28)
};

// ScriptStruct Gobi.SkeletalMeshSetMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMeshSetMaterialOverride {
	struct UMeshMaterialSet* MaterialSet; // 0x00(0x08)
	bool bDisabledMaterialParamSets; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Gobi.CommWheelActionPage
// Size: 0x10 (Inherited: 0x00)
struct FCommWheelActionPage {
	struct TArray<struct FCommWheelAction> Actions; // 0x00(0x10)
};

// ScriptStruct Gobi.CommWheelAction
// Size: 0x60 (Inherited: 0x00)
struct FCommWheelAction {
	enum class ECommWheelAction Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTexture2D* PageIcon; // 0x08(0x08)
	struct FSlateColor PageIconTint; // 0x10(0x30)
	struct FText PageName; // 0x40(0x18)
	int32_t PageIndex; // 0x58(0x04)
	bool bHiddenForDemo; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct Gobi.CommWheelActionDefinition
// Size: 0x58 (Inherited: 0x00)
struct FCommWheelActionDefinition {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FSlateColor IconTint; // 0x08(0x30)
	struct FText DisplayName; // 0x38(0x18)
	bool bSpawnPing; // 0x50(0x01)
	bool bSpawnSpray; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Gobi.ComponentLookup
// Size: 0x40 (Inherited: 0x00)
struct FComponentLookup {
	enum class EComponentLookupMode LookupMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGameplayTag LookupGameplayTag; // 0x04(0x08)
	struct FName LookupComponentTag; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FComponentReference LookupComponentReference; // 0x18(0x28)
};

// ScriptStruct Gobi.CustomDataProvider
// Size: 0x01 (Inherited: 0x00)
struct FCustomDataProvider {
	enum class ECustomDataApplicationType ApplicationType; // 0x00(0x01)
};

// ScriptStruct Gobi.CustomDataProviderGameplayTagContainer
// Size: 0x28 (Inherited: 0x01)
struct FCustomDataProviderGameplayTagContainer : FCustomDataProvider {
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagContainer Value; // 0x08(0x20)
};

// ScriptStruct Gobi.CustomDataProviderFloatCurve
// Size: 0x10 (Inherited: 0x01)
struct FCustomDataProviderFloatCurve : FCustomDataProvider {
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* Value; // 0x08(0x08)
};

// ScriptStruct Gobi.CustomDataProviderVector
// Size: 0x10 (Inherited: 0x01)
struct FCustomDataProviderVector : FCustomDataProvider {
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Value; // 0x04(0x0c)
};

// ScriptStruct Gobi.CustomDataProviderVector2D
// Size: 0x0c (Inherited: 0x01)
struct FCustomDataProviderVector2D : FCustomDataProvider {
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Value; // 0x04(0x08)
};

// ScriptStruct Gobi.CustomDataProviderAkAudioEventArray
// Size: 0x18 (Inherited: 0x01)
struct FCustomDataProviderAkAudioEventArray : FCustomDataProvider {
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UAkAudioEvent*> Value; // 0x08(0x10)
};

// ScriptStruct Gobi.CustomDataProviderAkAudioEvent
// Size: 0x10 (Inherited: 0x01)
struct FCustomDataProviderAkAudioEvent : FCustomDataProvider {
	char pad_1[0x7]; // 0x01(0x07)
	struct UAkAudioEvent* Value; // 0x08(0x08)
};

// ScriptStruct Gobi.CustomDataProviderFNameArray
// Size: 0x18 (Inherited: 0x01)
struct FCustomDataProviderFNameArray : FCustomDataProvider {
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> Value; // 0x08(0x10)
};

// ScriptStruct Gobi.CustomDataProviderFName
// Size: 0x0c (Inherited: 0x01)
struct FCustomDataProviderFName : FCustomDataProvider {
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Value; // 0x04(0x08)
};

// ScriptStruct Gobi.CustomDataProviderMontageArray
// Size: 0x18 (Inherited: 0x01)
struct FCustomDataProviderMontageArray : FCustomDataProvider {
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UAnimMontage*> Value; // 0x08(0x10)
};

// ScriptStruct Gobi.CustomDataProviderAnimSequence
// Size: 0x10 (Inherited: 0x01)
struct FCustomDataProviderAnimSequence : FCustomDataProvider {
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimSequence* Value; // 0x08(0x08)
};

// ScriptStruct Gobi.CustomDataProviderInt32
// Size: 0x08 (Inherited: 0x01)
struct FCustomDataProviderInt32 : FCustomDataProvider {
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Gobi.CustomDataProviderFloat
// Size: 0x08 (Inherited: 0x01)
struct FCustomDataProviderFloat : FCustomDataProvider {
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct Gobi.CutsceneDefinitionRow
// Size: 0xb0 (Inherited: 0x08)
struct FCutsceneDefinitionRow : FTableRowBase {
	struct FCutsceneDefinition CutsceneDefinition; // 0x08(0xa8)
};

// ScriptStruct Gobi.CutsceneDefinition
// Size: 0xa8 (Inherited: 0x00)
struct FCutsceneDefinition {
	struct FString DeveloperComments; // 0x00(0x10)
	struct TArray<struct FSoftObjectPath> LevelsToLoad; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> LevelsToUnload; // 0x20(0x10)
	struct FSoftObjectPath MasterLevelSequence; // 0x30(0x18)
	struct FMovieSceneSequencePlaybackSettings Settings; // 0x48(0x14)
	bool bEndLevel; // 0x5c(0x01)
	bool bDisableDialogueSystem; // 0x5d(0x01)
	bool bDisableDirectorAISpawning; // 0x5e(0x01)
	bool bDeleteDirectorSpawnedAIs; // 0x5f(0x01)
	bool bDeleteAllTeamZombie; // 0x60(0x01)
	bool bMakeHeroesInvulnerableToDamageAndDeath; // 0x61(0x01)
	bool bLeaveHeroesHidden; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	float IntroFadeTime; // 0x64(0x04)
	bool bHoldOutroFadeUntilPostRoundScreen; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FSoftObjectPath> AssetsToPreload; // 0x70(0x10)
	struct TArray<struct UAkAudioBank*> SoundbanksToLoad; // 0x80(0x10)
	struct UAkAudioEvent* FadeInEvent; // 0x90(0x08)
	struct UAkAudioEvent* FadeOutEvent; // 0x98(0x08)
	bool bRequiresCapablePlayers; // 0xa0(0x01)
	bool bRequiresMissionNotFailed; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// ScriptStruct Gobi.DamageAccumulationConfig
// Size: 0x58 (Inherited: 0x00)
struct FDamageAccumulationConfig {
	struct FVector2D DamageFullAmount; // 0x00(0x08)
	bool bDecayOverTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DecaySpeed; // 0x0c(0x04)
	float DamageResetTime; // 0x10(0x04)
	float ImmunityTime; // 0x14(0x04)
	bool bUseStumbleRanges; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FStumbleInflictTypeRange> InflictDamageTypes; // 0x20(0x10)
	float MaxStumbleAccumAge; // 0x30(0x04)
	bool bCalculateStumbleAverage; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UGobiDamageType* InflictDamageType; // 0x38(0x08)
	struct TArray<struct UGameplayEffect*> Effects; // 0x40(0x10)
	float InflictDamage; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Gobi.StumbleInflictTypeRange
// Size: 0x20 (Inherited: 0x00)
struct FStumbleInflictTypeRange {
	float StumbleAmount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UGobiDamageType* InflictDamageType; // 0x08(0x08)
	struct TArray<struct UGameplayEffect*> Effects; // 0x10(0x10)
};

// ScriptStruct Gobi.DamageCameraShake
// Size: 0x38 (Inherited: 0x00)
struct FDamageCameraShake {
	struct FGameplayTagContainer DamageTags; // 0x00(0x20)
	struct UCameraShake* Shake; // 0x20(0x08)
	float InnerRadius; // 0x28(0x04)
	float OuterRadius; // 0x2c(0x04)
	float Falloff; // 0x30(0x04)
	bool bOrientShakeTowardsEpicenter; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Gobi.StackableDamageFilter
// Size: 0x10 (Inherited: 0x00)
struct FStackableDamageFilter {
	struct UDamageFilter* DamageFilter; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.DeathGasAppliedEffects
// Size: 0x10 (Inherited: 0x00)
struct FDeathGasAppliedEffects {
	struct TArray<struct TWeakObjectPtr<struct UGameplayEffect>> AppliedEffects; // 0x00(0x10)
};

// ScriptStruct Gobi.DecalCounter
// Size: 0x10 (Inherited: 0x00)
struct FDecalCounter {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.DecalDetail
// Size: 0x0c (Inherited: 0x00)
struct FDecalDetail {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Gobi.DecalDefLifetimeQuality
// Size: 0x08 (Inherited: 0x00)
struct FDecalDefLifetimeQuality {
	struct FVector2D Lifetime; // 0x00(0x08)
};

// ScriptStruct Gobi.DecalCategoryRow
// Size: 0x30 (Inherited: 0x08)
struct FDecalCategoryRow : FTableRowBase {
	enum class EDecalPriority Priority; // 0x08(0x01)
	bool FadeEarlyAllowed; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<int32_t> MaxCountPerQuality; // 0x10(0x10)
	bool bSkipInsignificantSpawns; // 0x20(0x01)
	bool bImpactSequenceReducesQuality; // 0x21(0x01)
	bool bImpactSequenceCanCull; // 0x22(0x01)
	bool bNonLocalReducesQuality; // 0x23(0x01)
	bool bNonLocalCanCull; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FBehindCamera BehindCamera; // 0x28(0x08)
};

// ScriptStruct Gobi.BehindCamera
// Size: 0x08 (Inherited: 0x00)
struct FBehindCamera {
	bool bBehindReducesQuality; // 0x00(0x01)
	bool bBehindCanCull; // 0x01(0x01)
	enum class EBehindCamera BehindFilter; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MinDistance; // 0x04(0x04)
};

// ScriptStruct Gobi.DecalPriorityQueue
// Size: 0xc8 (Inherited: 0x00)
struct FDecalPriorityQueue {
	char pad_0[0xc8]; // 0x00(0xc8)
};

// ScriptStruct Gobi.DecalInfo
// Size: 0x28 (Inherited: 0x00)
struct FDecalInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Gobi.DifficultyBool
// Size: 0x05 (Inherited: 0x01)
struct FDifficultyBool : FDifficultyValue {
	bool Easy; // 0x00(0x01)
	bool Normal; // 0x01(0x01)
	bool Hard; // 0x02(0x01)
	bool Legendary; // 0x03(0x01)
	bool PVP; // 0x04(0x01)
};

// ScriptStruct Gobi.DifficultyRow
// Size: 0xc0 (Inherited: 0x08)
struct FDifficultyRow : FTableRowBase {
	struct FText DifficultyDisplayName; // 0x08(0x18)
	float FriendlyFireScale; // 0x20(0x04)
	int32_t NumContinues; // 0x24(0x04)
	enum class EMissionEndedBehavior MissionEndBehavior; // 0x28(0x01)
	enum class ERespawnStatBehavior DamageRespawnBehavior[0x3]; // 0x29(0x03)
	enum class ERespawnStatBehavior TraumaDamageRespawnBehavior[0x3]; // 0x2c(0x03)
	enum class ERespawnStatBehavior IncapCountRespawnBehavior[0x3]; // 0x2f(0x03)
	enum class ERespawnStatBehavior InventoryItemsRespawnBehavior[0x3]; // 0x32(0x03)
	enum class ERespawnStatBehavior GameplayCardsRespawnBehavior[0x3]; // 0x35(0x03)
	struct TArray<struct FDataTableRowHandle> DifficultyCards; // 0x38(0x10)
	float MoneyLostOnFailure; // 0x48(0x04)
	int32_t MoneyPaidPerSuccessfulSurvivor; // 0x4c(0x04)
	struct UCurveFloat* SupplyPointRewardCurve; // 0x50(0x08)
	float SupplyPointRewardScalar; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FTaggedCardRolls> TaggedCardRolls; // 0x60(0x10)
	int32_t AdditionalCards; // 0x70(0x04)
	int32_t AdditionalCurrency; // 0x74(0x04)
	float AddtionalAmmoPercentage; // 0x78(0x04)
	float AdditionalHealth; // 0x7c(0x04)
	float AdditionalTraumaHeal; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FTitanTuning TitanTuningData; // 0x88(0x20)
	bool bSleeperTriggersHordesOnSnare; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FText> DifficultyStrings; // 0xb0(0x10)
};

// ScriptStruct Gobi.TitanTuning
// Size: 0x20 (Inherited: 0x08)
struct FTitanTuning : FTuningDataBase {
	struct TArray<float> TentacleEmergeDelay; // 0x08(0x10)
	float MinTimeBetweenAttacks; // 0x18(0x04)
	float MaxTimeBetweenAttacks; // 0x1c(0x04)
};

// ScriptStruct Gobi.TaggedCardRolls
// Size: 0x10 (Inherited: 0x00)
struct FTaggedCardRolls {
	int32_t MinRolls; // 0x00(0x04)
	int32_t MaxRolls; // 0x04(0x04)
	struct FGameplayTag GameplayTag; // 0x08(0x08)
};

// ScriptStruct Gobi.AnalyticsAIScenarioTracking
// Size: 0x90 (Inherited: 0x00)
struct FAnalyticsAIScenarioTracking {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Gobi.AnalyticsCardActionCounts
// Size: 0x68 (Inherited: 0x00)
struct FAnalyticsCardActionCounts {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct Gobi.AnalyticsCardActionKey
// Size: 0x0c (Inherited: 0x00)
struct FAnalyticsCardActionKey {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Gobi.DoorNavArea
// Size: 0x10 (Inherited: 0x00)
struct FDoorNavArea {
	struct UNavArea* ClosedNavAreaClass; // 0x00(0x08)
	struct UNavArea* OpenedNavAreaClass; // 0x08(0x08)
};

// ScriptStruct Gobi.DrenchReplicatedData
// Size: 0x0c (Inherited: 0x00)
struct FDrenchReplicatedData {
	enum class EDrenchType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InitialStrength; // 0x04(0x04)
	char Parity; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Gobi.DynamicSequenceBind
// Size: 0x40 (Inherited: 0x00)
struct FDynamicSequenceBind {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Gobi.ReplicatedEffectActorInfo
// Size: 0x0c (Inherited: 0x00)
struct FReplicatedEffectActorInfo {
	float Lifetime; // 0x00(0x04)
	int32_t RandomSeed; // 0x04(0x04)
	int32_t Parity; // 0x08(0x04)
};

// ScriptStruct Gobi.CharacterEmitterDef
// Size: 0x100 (Inherited: 0x00)
struct FCharacterEmitterDef {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	float Radius; // 0x48(0x04)
	int32_t CharacterTypeFlags; // 0x4c(0x04)
	bool bSinglePulse; // 0x50(0x01)
	bool bRemoveSelfEffectsOnEmitterEnd; // 0x51(0x01)
	bool bRemoveOtherEffectsOnEndOverlap; // 0x52(0x01)
	bool bRequireLineOfSight; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct UGameplayEffect*> SelfEffectClasses; // 0x58(0x10)
	struct TArray<struct UGameplayEffect*> OtherActorEffectClasses; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
	struct FGameplayEffectContext InstigatingEffectContext; // 0x80(0x80)
};

// ScriptStruct Gobi.GameplayEffectContext
// Size: 0x80 (Inherited: 0x00)
struct FGameplayEffectContext {
	float Damage; // 0x00(0x04)
	float PermanentDamage; // 0x04(0x04)
	float DamagePct; // 0x08(0x04)
	float PermanentDamagePct; // 0x0c(0x04)
	struct FVector ImpactPoint; // 0x10(0x0c)
	struct FVector ImpactDirection; // 0x1c(0x0c)
	struct FName BoneName; // 0x28(0x08)
	enum class EPhysicalSurface PhysicsSurface; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UPrimitiveComponent* HitComponent; // 0x38(0x08)
	struct FGameplayEffectSource EffectSource; // 0x40(0x38)
	int32_t ChainDepth; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Gobi.DurableEntitlementRow
// Size: 0xd8 (Inherited: 0x08)
struct FDurableEntitlementRow : FTableRowBase {
	struct FDurableEntitlementId SteamId; // 0x08(0x20)
	struct FDurableEntitlementId EOSId; // 0x28(0x20)
	struct FDurableEntitlementId PS4Id; // 0x48(0x20)
	struct FDurableEntitlementId PS5Id; // 0x68(0x20)
	struct FDurableEntitlementId XB1Id; // 0x88(0x20)
	struct FDurableEntitlementId XSXId; // 0xa8(0x20)
	struct TArray<struct FDataTableRowHandle> GrantedContent; // 0xc8(0x10)
};

// ScriptStruct Gobi.DurableEntitlementId
// Size: 0x20 (Inherited: 0x00)
struct FDurableEntitlementId {
	struct FString FirstPartyProductId; // 0x00(0x10)
	struct FString FirstPartyEntitlementId; // 0x10(0x10)
};

// ScriptStruct Gobi.ExplosionConfig
// Size: 0x100 (Inherited: 0x00)
struct FExplosionConfig {
	struct FExplosionProjectilesConfig Projectiles; // 0x00(0x20)
	struct FGameplayEffectsEmitterTestConfig ExplosionGameplayEffects; // 0x20(0x50)
	struct UGameplayEffectEmitterComponent* InRangeEmitter; // 0x70(0x08)
	struct AActor* InRangeReticle; // 0x78(0x08)
	struct UCameraShake* CameraShake; // 0x80(0x08)
	float CameraShakeOuterRadius; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UParticleSystem* ExplosionParticleEffect; // 0x90(0x08)
	struct TArray<struct UAkAudioEvent*> ExplosionAudioEvents; // 0x98(0x10)
	struct FExplosionJostler Jostler; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FGameplayTagContainer AppliedTags; // 0xb8(0x20)
	bool bExplodeOnDeath; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct UAnimMontage*> ExplodeMontages; // 0xe0(0x10)
	bool bExplodesOnlyOnce; // 0xf0(0x01)
	enum class EExplosionEffectSource EffectSourceType; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	float ImpulseStrength; // 0xf4(0x04)
	enum class ERadialImpulseFalloff ImpulseFalloff; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct Gobi.ExplosionProjectilesConfig
// Size: 0x20 (Inherited: 0x00)
struct FExplosionProjectilesConfig {
	struct FVector2D VelocityForward; // 0x00(0x08)
	struct FVector2D VelocityUp; // 0x08(0x08)
	struct FVector2D Count; // 0x10(0x08)
	struct AActor* ProjectileClass; // 0x18(0x08)
};

// ScriptStruct Gobi.FallingRockTell
// Size: 0x18 (Inherited: 0x00)
struct FFallingRockTell {
	struct FGameplayTag ParticleSystemTag; // 0x00(0x08)
	float Delay; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UParticleSystemComponent* ParticleSystem; // 0x10(0x08)
};

// ScriptStruct Gobi.FireModeBaseTuning
// Size: 0x34 (Inherited: 0x00)
struct FFireModeBaseTuning {
	float DelayBeforeInitialShot; // 0x00(0x04)
	float DelayBetweenShots; // 0x04(0x04)
	float DelayBetweenBursts; // 0x08(0x04)
	float DelayAfterFinalShot; // 0x0c(0x04)
	float RechamberLength; // 0x10(0x04)
	float RechamberAnimationLength; // 0x14(0x04)
	float SemiAutoAsFullAutoDelayScale; // 0x18(0x04)
	float AlertRadius; // 0x1c(0x04)
	float WhizbyAlertRadius; // 0x20(0x04)
	float ImpactAlertRadius; // 0x24(0x04)
	float SprintDisabledSettleTime; // 0x28(0x04)
	float WeakSpotDamageMultiplier; // 0x2c(0x04)
	float ImpulseStrength; // 0x30(0x04)
};

// ScriptStruct Gobi.RangedFalloffDamageSet
// Size: 0x08 (Inherited: 0x00)
struct FRangedFalloffDamageSet {
	float Range; // 0x00(0x04)
	float Damage; // 0x04(0x04)
};

// ScriptStruct Gobi.FireModeShotgunTuning
// Size: 0x28 (Inherited: 0x00)
struct FFireModeShotgunTuning {
	int32_t PelletCount; // 0x00(0x04)
	float StumbleDamagePerDamage; // 0x04(0x04)
	struct TArray<struct FRangedFalloffDamageSet> InitialHitRangedFalloffDamageSets; // 0x08(0x10)
	struct TArray<struct FRangedFalloffDamageSet> PerPelletRangedFalloffDamageSets; // 0x18(0x10)
};

// ScriptStruct Gobi.FireModeSingleTraceTuning
// Size: 0x18 (Inherited: 0x00)
struct FFireModeSingleTraceTuning {
	float StumbleDamagePerDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRangedFalloffDamageSet> RangedFalloffDamageSets; // 0x08(0x10)
};

// ScriptStruct Gobi.LookAtInfo
// Size: 0x34 (Inherited: 0x00)
struct FLookAtInfo {
	struct FName AlphaCurveName; // 0x00(0x08)
	struct FRotationConstraints Constraints; // 0x08(0x10)
	struct FVector LookAtLocation; // 0x18(0x0c)
	float AlphaCurve; // 0x24(0x04)
	bool bHasLookAtTarget; // 0x28(0x01)
	bool bShouldLookAtTarget; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float CounterRotation; // 0x2c(0x04)
	float LastYaw; // 0x30(0x04)
};

// ScriptStruct Gobi.RotationConstraints
// Size: 0x10 (Inherited: 0x00)
struct FRotationConstraints {
	struct FVector2D YawLimits; // 0x00(0x08)
	struct FVector2D PitchLimits; // 0x08(0x08)
};

// ScriptStruct Gobi.FortificationMeshInfo
// Size: 0x40 (Inherited: 0x00)
struct FFortificationMeshInfo {
	struct UStaticMesh* FortificationMesh; // 0x00(0x08)
	struct UMaterialInterface* MaterialOverride; // 0x08(0x08)
	float BreakAtHealthPct; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct UStaticMesh*> BrokenPieces; // 0x18(0x10)
	bool bCanBeUpgraded; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FUsableInventoryCondition> RequiredMaterialsForUpgrade; // 0x30(0x10)
};

// ScriptStruct Gobi.FortificationSkelMeshInfo
// Size: 0x30 (Inherited: 0x00)
struct FFortificationSkelMeshInfo {
	struct UStaticMesh* IntactStaticMesh; // 0x00(0x08)
	struct UStaticMesh* BrokenStaticMesh; // 0x08(0x08)
	enum class ECollisionEnabled BrokenStaticMeshCollisionEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct USkeletalMesh* SkeletalMesh; // 0x18(0x08)
	float ImpulseScale; // 0x20(0x04)
	struct FVector2D AngularImpulseRange; // 0x24(0x08)
	float TimeToHideSkelMesh; // 0x2c(0x04)
};

// ScriptStruct Gobi.PlayerFOVState
// Size: 0x120 (Inherited: 0x00)
struct FPlayerFOVState {
	char pad_0[0x120]; // 0x00(0x120)
};

// ScriptStruct Gobi.LessonNotificationData
// Size: 0x10 (Inherited: 0x00)
struct FLessonNotificationData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.GameCoachLessonSettings
// Size: 0x18 (Inherited: 0x00)
struct FGameCoachLessonSettings {
	struct FString Name; // 0x00(0x10)
	int32_t VisibleCount; // 0x10(0x04)
	int32_t SuccessCount; // 0x14(0x04)
};

// ScriptStruct Gobi.AISpawnActorDebugInfo
// Size: 0x18 (Inherited: 0x00)
struct FAISpawnActorDebugInfo {
	struct UObject* AIClass; // 0x00(0x08)
	int32_t TotalSpawnersOnWander; // 0x08(0x04)
	int32_t NumAvailableSpawnersOnWander; // 0x0c(0x04)
	int32_t TotalSpawnersOnHorde; // 0x10(0x04)
	int32_t NumAvailableSpawnersOnHorde; // 0x14(0x04)
};

// ScriptStruct Gobi.SpawnerPlacementContext
// Size: 0x08 (Inherited: 0x00)
struct FSpawnerPlacementContext {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Gobi.SpawningCard
// Size: 0x30 (Inherited: 0x00)
struct FSpawningCard {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Gobi.AISpawnCardRule
// Size: 0x10 (Inherited: 0x00)
struct FAISpawnCardRule {
	struct UAISpawnCard* SpawnCard; // 0x00(0x08)
	int32_t MinCards; // 0x08(0x04)
	int32_t MaxCards; // 0x0c(0x04)
};

// ScriptStruct Gobi.DirectorStateSummary
// Size: 0x1c (Inherited: 0x00)
struct FDirectorStateSummary {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Gobi.ScenarioContext
// Size: 0x14 (Inherited: 0x00)
struct FScenarioContext {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Gobi.HeroContext
// Size: 0x78 (Inherited: 0x00)
struct FHeroContext {
	struct TWeakObjectPtr<struct AHeroCharacter> HeroCharacter; // 0x00(0x08)
	int32_t PointBudget; // 0x08(0x04)
	struct FHeroIntensity Intensity; // 0x0c(0x08)
	char pad_14[0x10]; // 0x14(0x10)
	int32_t SpentBudget; // 0x24(0x04)
	uint32_t HeroCount; // 0x28(0x04)
	float HeroSeparation; // 0x2c(0x04)
	char pad_30[0x30]; // 0x30(0x30)
	float HeroScore; // 0x60(0x04)
	float HeroBudgetScore; // 0x64(0x04)
	float HeroDistanceScore; // 0x68(0x04)
	float HeroSeparationScore; // 0x6c(0x04)
	float HeroPopulationScore; // 0x70(0x04)
	float HeroLifeStateScore; // 0x74(0x04)
};

// ScriptStruct Gobi.HeroIntensity
// Size: 0x08 (Inherited: 0x00)
struct FHeroIntensity {
	float Current; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
};

// ScriptStruct Gobi.RecycleConfigOverride
// Size: 0x28 (Inherited: 0x00)
struct FRecycleConfigOverride {
	bool bOverrideRecycleEQS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UEnvQuery* RecycleEQS; // 0x08(0x08)
	bool bOverrideMinAICountNeededForRecycling; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MinAICountNeededForRecycling; // 0x14(0x04)
	bool bOverrideMaxRecycleDistanceFromPlayers; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MaxRecycleDistanceFromPlayers; // 0x1c(0x04)
	bool bOverrideMaxAIToRecyclePerTick; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MaxAIToRecyclePerTick; // 0x24(0x04)
};

// ScriptStruct Gobi.ClearAfterHordeConfig
// Size: 0x10 (Inherited: 0x00)
struct FClearAfterHordeConfig {
	struct UEnvQuery* ClearAfterHordeEQS; // 0x00(0x08)
	float ClearDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.RecycleConfig
// Size: 0x18 (Inherited: 0x00)
struct FRecycleConfig {
	struct UEnvQuery* RecycleEQS; // 0x00(0x08)
	int32_t MinAICountNeededForRecycling; // 0x08(0x04)
	float MaxRecycleDistanceFromPlayers; // 0x0c(0x04)
	int32_t MaxAIToRecyclePerTick; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.PacingConfigOverride
// Size: 0x7c (Inherited: 0x00)
struct FPacingConfigOverride {
	int32_t MinThreatLevel; // 0x00(0x04)
	bool bOverrideCalmDuration; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector2D CalmDuration; // 0x08(0x08)
	bool bOverrideCalmSpeedupIntensityThreshold; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float CalmSpeedupIntensityThreshold; // 0x14(0x04)
	bool bOverrideCalmSpeedupScale; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CalmSpeedupScale; // 0x1c(0x04)
	bool bOverrideViolentDuration; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector2D ViolentDuration; // 0x24(0x08)
	bool bOverrideHordeCleanupDuration; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector2D HordeCleanupDuration; // 0x30(0x08)
	bool bOverrideHordeCleanupTrailingZombieRange; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float HordeCleanupTrailingZombieRange; // 0x3c(0x04)
	bool bOverrideHordeCleanupHeroAdvanceRange; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float HordeCleanupHeroAdvanceRange; // 0x44(0x04)
	bool bOverridePeakIntensityThreshold; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float PeakIntensityThreshold; // 0x4c(0x04)
	bool bOverridePeakSustainDuration; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector2D PeakSustainDuration; // 0x54(0x08)
	bool bOverridePeakFadeIntensityThreshold; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float PeakFadeIntensityThreshold; // 0x60(0x04)
	bool bOverridePeakFadeDuration; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FVector2D PeakFadeDuration; // 0x68(0x08)
	bool bOverrideRecoverDuration; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector2D RecoverDuration; // 0x74(0x08)
};

// ScriptStruct Gobi.PacingConfigBase
// Size: 0x48 (Inherited: 0x00)
struct FPacingConfigBase {
	struct FVector2D CalmDuration; // 0x00(0x08)
	float CalmSpeedupIntensityThreshold; // 0x08(0x04)
	float CalmSpeedupScale; // 0x0c(0x04)
	struct FVector2D ViolentDuration; // 0x10(0x08)
	struct FVector2D HordeCleanupDuration; // 0x18(0x08)
	float HordeCleanupTrailingZombieRange; // 0x20(0x04)
	float HordeCleanupHeroAdvanceRange; // 0x24(0x04)
	float PeakIntensityThreshold; // 0x28(0x04)
	struct FVector2D PeakSustainDuration; // 0x2c(0x08)
	float PeakFadeIntensityThreshold; // 0x34(0x04)
	struct FVector2D PeakFadeDuration; // 0x38(0x08)
	struct FVector2D RecoverDuration; // 0x40(0x08)
};

// ScriptStruct Gobi.HeroIntensityEventData
// Size: 0x14 (Inherited: 0x00)
struct FHeroIntensityEventData {
	bool bShowDistance; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxIntensity; // 0x04(0x04)
	float Scale; // 0x08(0x04)
	struct FVector2D FalloffDistance; // 0x0c(0x08)
};

// ScriptStruct Gobi.FocusWatch
// Size: 0x44 (Inherited: 0x00)
struct FFocusWatch {
	enum class EFocusWatchType WatchType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D PitchClampRange; // 0x04(0x08)
	struct FVector2D YawClampRange; // 0x0c(0x08)
	float RotTolerance; // 0x14(0x04)
	bool bCycleBackToCenter; // 0x18(0x01)
	bool bClampOverridesUseTightest; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float InterpSpeed; // 0x1c(0x04)
	struct FVector2D UpdateFreq; // 0x20(0x08)
	char pad_28[0x1c]; // 0x28(0x1c)
};

// ScriptStruct Gobi.BotTraversalGroup
// Size: 0x18 (Inherited: 0x00)
struct FBotTraversalGroup {
	struct UGameplayEvaluatorSet* NavFilterSet; // 0x00(0x08)
	struct TArray<struct FBotTraversalDesc> TraversalDesc; // 0x08(0x10)
};

// ScriptStruct Gobi.BotTraversalDesc
// Size: 0x48 (Inherited: 0x00)
struct FBotTraversalDesc {
	enum class EBotTraversalType Type; // 0x00(0x01)
	bool bDisabled; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UGameplayEvaluatorSet* FilterSet; // 0x08(0x08)
	struct UAnimContext_Transform* DesiredDestContext; // 0x10(0x08)
	float DestDistConstraint; // 0x18(0x04)
	float MovementScale; // 0x1c(0x04)
	struct FGameplayTagContainer RemoveTags; // 0x20(0x20)
	float MaxIdleTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Gobi.ReachInSweepVolumeInfo
// Size: 0x28 (Inherited: 0x00)
struct FReachInSweepVolumeInfo {
	struct FGameplayTag CollisionVolumeTag; // 0x00(0x08)
	struct FName AttachSocketName; // 0x08(0x08)
	struct FVector AttachTranslation; // 0x10(0x0c)
	struct FRotator AttachRotation; // 0x1c(0x0c)
};

// ScriptStruct Gobi.TraversalSteeringConfig
// Size: 0x10 (Inherited: 0x00)
struct FTraversalSteeringConfig {
	struct UNavArea* NavArea; // 0x00(0x08)
	struct USteeringBehavior* SteeringBehaviorOverride; // 0x08(0x08)
};

// ScriptStruct Gobi.GameplayAnalyticsRoundData
// Size: 0x30 (Inherited: 0x00)
struct FGameplayAnalyticsRoundData {
	struct FGuid RoundId; // 0x00(0x10)
	struct FGuid MatchID; // 0x10(0x10)
	struct FString AnalyticsContext; // 0x20(0x10)
};

// ScriptStruct Gobi.GameplayAttributeAggregator
// Size: 0x80 (Inherited: 0x00)
struct FGameplayAttributeAggregator {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Gobi.GameplayAudioCaptions
// Size: 0x118 (Inherited: 0x08)
struct FGameplayAudioCaptions : FTableRowBase {
	struct FText SpeakerName; // 0x08(0x18)
	struct FText CaptionText; // 0x20(0x18)
	struct FSlateColor CaptionColor; // 0x38(0x30)
	struct FSlateColor CaptionColorProtanopia; // 0x68(0x30)
	struct FSlateColor CaptionColorDeuteranopia; // 0x98(0x30)
	struct FSlateColor CaptionColorTritanopia; // 0xc8(0x30)
	float CooldownTime; // 0xf8(0x04)
	float MaxDistance; // 0xfc(0x04)
	float DisplayTime; // 0x100(0x04)
	enum class ECaptionTeamRestriction CaptionTeamRestriction; // 0x104(0x01)
	bool bIsComms; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	struct TArray<struct UAkAudioEvent*> TriggeringEvents; // 0x108(0x10)
};

// ScriptStruct Gobi.GameplayCardRow
// Size: 0x150 (Inherited: 0x08)
struct FGameplayCardRow : FTableRowBase {
	enum class EGameplayCardCategory Category; // 0x08(0x01)
	enum class EGameplayCardAffinity Affinity; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText SharedEffectsDescription; // 0x40(0x18)
	struct UTexture2D* Icon; // 0x58(0x08)
	struct UTexture2D* Background; // 0x60(0x08)
	struct TSoftObjectPtr<UTexture2D> SmallDeckIcon; // 0x68(0x28)
	struct TArray<struct TSoftClassPtr<UObject>> Mods; // 0x90(0x10)
	bool Basic; // 0xa0(0x01)
	bool Hidden; // 0xa1(0x01)
	bool AllowedForDeckbuilding; // 0xa2(0x01)
	bool HiddenForTradeShow; // 0xa3(0x01)
	bool DisabledForPvE; // 0xa4(0x01)
	bool DisabledForPvP; // 0xa5(0x01)
	bool Armored; // 0xa6(0x01)
	bool Elite1; // 0xa7(0x01)
	bool Elite2; // 0xa8(0x01)
	bool Swarm; // 0xa9(0x01)
	bool CanBeSavedInSnapshot; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct UAkAudioEvent* EquipSound; // 0xb0(0x08)
	struct UAkAudioEvent* PickupSound; // 0xb8(0x08)
	struct UAkAudioBank* AkAudioBank; // 0xc0(0x08)
	struct FGameplayTagContainer AssociatedTags; // 0xc8(0x20)
	struct FGameplayTagContainer ExcludeTags; // 0xe8(0x20)
	int32_t PurchaseCost; // 0x108(0x04)
	int32_t MaxTeamCount; // 0x10c(0x04)
	struct TArray<struct FGameplayModTag> GameplayModTags; // 0x110(0x10)
	struct FName AssociatedInputAction; // 0x120(0x08)
	struct TArray<struct FItemAttributeModifier> ItemAttributeModifiers; // 0x128(0x10)
	float PlayerAttributeModifiers[0x5]; // 0x138(0x14)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct Gobi.ZombieMutationGameplayCardRow
// Size: 0x188 (Inherited: 0x150)
struct FZombieMutationGameplayCardRow : FGameplayCardRow {
	int32_t MutationPoints; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FDataTableRowHandle> Prereqs; // 0x158(0x10)
	struct FDataTableRowHandle OwningTree; // 0x168(0x20)
};

// ScriptStruct Gobi.DirectorCardWeightsRow
// Size: 0x58 (Inherited: 0x08)
struct FDirectorCardWeightsRow : FTableRowBase {
	struct TMap<enum class EMissionDifficulty, struct FDifficultyThreatWeights> DifficultyThreatWeights; // 0x08(0x50)
};

// ScriptStruct Gobi.DifficultyThreatWeights
// Size: 0x10 (Inherited: 0x00)
struct FDifficultyThreatWeights {
	struct TArray<int32_t> TicketCountForThreat; // 0x00(0x10)
};

// ScriptStruct Gobi.PerThreatCatchUpBonus
// Size: 0x18 (Inherited: 0x00)
struct FPerThreatCatchUpBonus {
	struct TArray<struct FCardAndQuantity> StaticBonusCards; // 0x00(0x10)
	int32_t BonusCardDraws; // 0x10(0x04)
	int32_t BonusLoadoutCards; // 0x14(0x04)
};

// ScriptStruct Gobi.CardAndQuantity
// Size: 0x48 (Inherited: 0x00)
struct FCardAndQuantity {
	struct FDataTableRowHandle CardRowHandle; // 0x00(0x20)
	struct FGameplayTagContainer CardTagQuery; // 0x20(0x20)
	int32_t Quantity; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Gobi.GameplayCardAffinity
// Size: 0x10 (Inherited: 0x00)
struct FGameplayCardAffinity {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.GameplayCardPresetRow
// Size: 0x58 (Inherited: 0x08)
struct FGameplayCardPresetRow : FTableRowBase {
	struct FGameplayCardPreset Preset; // 0x08(0x48)
	bool DevOnly; // 0x50(0x01)
	bool HiddenForTradeShow; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Gobi.TableOfGameplayCardTablesRow
// Size: 0x10 (Inherited: 0x08)
struct FTableOfGameplayCardTablesRow : FTableRowBase {
	struct UDataTable* Table; // 0x08(0x08)
};

// ScriptStruct Gobi.RepContextRotation
// Size: 0x18 (Inherited: 0x00)
struct FRepContextRotation {
	struct UGameplayContext* Context; // 0x00(0x08)
	struct FRotator Rotation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.RepContextLocation
// Size: 0x18 (Inherited: 0x00)
struct FRepContextLocation {
	struct UGameplayContext* Context; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.GameplayCueData
// Size: 0x10 (Inherited: 0x00)
struct FGameplayCueData {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct UGameplayCue* GameplayCue; // 0x08(0x08)
};

// ScriptStruct Gobi.GameplayCueContext
// Size: 0xa8 (Inherited: 0x00)
struct FGameplayCueContext {
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> SourceActor; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x10(0x08)
	struct FHitResult HitResult; // 0x18(0x88)
	float UserFloat1; // 0xa0(0x04)
	int32_t UserInt1; // 0xa4(0x04)
};

// ScriptStruct Gobi.GameplayCardUIData
// Size: 0x50 (Inherited: 0x00)
struct FGameplayCardUIData {
	struct FText Name; // 0x00(0x18)
	struct FSlateColor Color; // 0x18(0x30)
	struct UTexture2D* Icon; // 0x48(0x08)
};

// ScriptStruct Gobi.EffectActorSettings
// Size: 0x0c (Inherited: 0x00)
struct FEffectActorSettings {
	int32_t MaxActive; // 0x00(0x04)
	float StackingDistance; // 0x04(0x04)
	float ForceFadeOutTime; // 0x08(0x04)
};

// ScriptStruct Gobi.MapMeshRow
// Size: 0x28 (Inherited: 0x08)
struct FMapMeshRow : FTableRowBase {
	struct TArray<struct FMapMeshConfig> CharacterMeshConfigs; // 0x08(0x10)
	struct TArray<struct FMapMeshConfigMods> MapMeshConfigMods; // 0x18(0x10)
};

// ScriptStruct Gobi.MapMeshConfigMods
// Size: 0x18 (Inherited: 0x00)
struct FMapMeshConfigMods {
	struct TArray<struct UMapMeshConfigMod*> MeshConfigMods; // 0x00(0x10)
	uint32_t GameModes; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.MapMeshConfig
// Size: 0x28 (Inherited: 0x00)
struct FMapMeshConfig {
	struct USkeletalMeshRegionConfig* MeshConfig; // 0x00(0x08)
	struct FGameplayTagContainer ApplyTags; // 0x08(0x20)
};

// ScriptStruct Gobi.GobiAnimGraphTags
// Size: 0x28 (Inherited: 0x00)
struct FGobiAnimGraphTags {
	struct FGameplayTag FirstPersonLocoAnimGraph; // 0x00(0x08)
	struct FGameplayTag FirstPersonAdditiveAnimGraph; // 0x08(0x08)
	struct FGameplayTag FirstPersonPostProcessAnimGraph; // 0x10(0x08)
	struct FGameplayTag ThirdPersonLocoAnimGraph; // 0x18(0x08)
	struct FGameplayTag ThirdPersonAdditiveAnimGraph; // 0x20(0x08)
};

// ScriptStruct Gobi.WeaponSimulatedQualitySettings
// Size: 0x08 (Inherited: 0x00)
struct FWeaponSimulatedQualitySettings {
	float MaxSimulatedShotsPerSecond; // 0x00(0x04)
	int32_t MaxSimulatedShotgunPellets; // 0x04(0x04)
};

// ScriptStruct Gobi.MutilationCategory
// Size: 0x05 (Inherited: 0x00)
struct FMutilationCategory {
	struct FMutilationQuality QualitySettings[0x5]; // 0x00(0x05)
};

// ScriptStruct Gobi.MutilationQuality
// Size: 0x01 (Inherited: 0x00)
struct FMutilationQuality {
	bool bLimitMutilations; // 0x00(0x01)
};

// ScriptStruct Gobi.MutilationScalability
// Size: 0x20 (Inherited: 0x00)
struct FMutilationScalability {
	int32_t DismembermentSpawnsPerTimePeriodLocal; // 0x00(0x04)
	float DismembermentTimePeriodLocal; // 0x04(0x04)
	int32_t DismembermentSpawnsPerTimePeriodOther; // 0x08(0x04)
	float DismembermentTimePeriodOther; // 0x0c(0x04)
	int32_t ExplosionBreakOffSpawnsPerTimePeriodLocal; // 0x10(0x04)
	float ExplosionBreakOffTimePeriodLocal; // 0x14(0x04)
	int32_t ExplosionBreakOffSpawnsPerTimePeriodOther; // 0x18(0x04)
	float ExplosionBreakOffTimePeriodOther; // 0x1c(0x04)
};

// ScriptStruct Gobi.ParticleSpawnCullingGroup
// Size: 0x18 (Inherited: 0x00)
struct FParticleSpawnCullingGroup {
	enum class EParticleSpawnCullingBounds BoundsCullingMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BoundsRadius; // 0x04(0x04)
	bool bImpactSequenceReducesQuality; // 0x08(0x01)
	bool bImpactSequenceCanCull; // 0x09(0x01)
	bool bNonLocalReducesQuality; // 0x0a(0x01)
	bool bNonLocalCanCull; // 0x0b(0x01)
	struct FBehindCamera BehindCamera; // 0x0c(0x08)
	enum class EPerfScalingMethod QualityScaling; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Gobi.ParticleQualitySettings
// Size: 0x28 (Inherited: 0x00)
struct FParticleQualitySettings {
	float SpawnCullScreenSize; // 0x00(0x04)
	struct FBehindCameraQuality BehindCameraFilter; // 0x04(0x08)
	bool bImpactSequenceCanCull; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<enum class EImpactNewQuality> ImpactSequenceNewQualities; // 0x10(0x10)
	bool bNonLocalReducesQuality; // 0x20(0x01)
	enum class EImpactNewQuality NonLocalNewQuality; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Gobi.BehindCameraQuality
// Size: 0x08 (Inherited: 0x00)
struct FBehindCameraQuality {
	bool bBehindReducesQuality; // 0x00(0x01)
	enum class EImpactNewQuality BehindNewQuality; // 0x01(0x01)
	bool bBehindCanCull; // 0x02(0x01)
	enum class EBehindCamera BehindFilter; // 0x03(0x01)
	float MinDistance; // 0x04(0x04)
};

// ScriptStruct Gobi.ImpactQualitySettings
// Size: 0x1c (Inherited: 0x00)
struct FImpactQualitySettings {
	int32_t NonLocalPenetrationsAllowed; // 0x00(0x04)
	bool bNonLocalPenetrationsCullGore; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FBehindCameraQuality BehindCameraFilter; // 0x08(0x08)
	int32_t DeferredConfigMax; // 0x10(0x04)
	int32_t DeferredConfigAudioMax; // 0x14(0x04)
	bool bDeferredConfigMaxIsPerMaterial; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Gobi.DecalQualitySettings
// Size: 0x38 (Inherited: 0x00)
struct FDecalQualitySettings {
	float MaxPenaltyTimeDistance; // 0x00(0x04)
	struct FVector2D PenaltyTime; // 0x04(0x08)
	float InsignificantScreenSize; // 0x0c(0x04)
	bool bImpactSequenceReducesQuality; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<enum class EImpactNewQuality> ImpactSequenceNewQualities; // 0x18(0x10)
	bool bNonLocalReducesQuality; // 0x28(0x01)
	enum class EImpactNewQuality NonLocalNewQuality; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FBehindCameraQuality BehindCameraFilter; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Gobi.CorpseSettings
// Size: 0x70 (Inherited: 0x00)
struct FCorpseSettings {
	int32_t CharacterCorpsesDedicatedMax; // 0x00(0x04)
	float CharacterCorpsesDedicatedMaxLifeTime; // 0x04(0x04)
	enum class EPerfScalingMethod QualityScaling; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FCorpseQualitySettings QualitySettings[0x5]; // 0x0c(0x64)
};

// ScriptStruct Gobi.CorpseQualitySettings
// Size: 0x14 (Inherited: 0x00)
struct FCorpseQualitySettings {
	int32_t VFXCorpseMaxCount; // 0x00(0x04)
	int32_t VFXCorpseFadeEarlyCount; // 0x04(0x04)
	float VFXCorpseMaxLifetime; // 0x08(0x04)
	int32_t CharacterCorpseMaxCount; // 0x0c(0x04)
	float CharacterCorpseMaxLifetime; // 0x10(0x04)
};

// ScriptStruct Gobi.FootplantCategory
// Size: 0x18 (Inherited: 0x00)
struct FFootplantCategory {
	enum class EPerfScalingMethod QualityScaling; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxLODPerQuality[0x5]; // 0x04(0x14)
};

// ScriptStruct Gobi.UpdateRateOptimizationCategory
// Size: 0x78 (Inherited: 0x00)
struct FUpdateRateOptimizationCategory {
	struct FUpdateRateOptimizationQuality QualitySettings[0x5]; // 0x00(0x78)
};

// ScriptStruct Gobi.UpdateRateOptimizationQuality
// Size: 0x18 (Inherited: 0x00)
struct FUpdateRateOptimizationQuality {
	bool bInterpolateSkippedFrames; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> FramesToSkipPerLOD; // 0x08(0x10)
};

// ScriptStruct Gobi.SignificanceCategory
// Size: 0x58 (Inherited: 0x00)
struct FSignificanceCategory {
	enum class EPerfScalingMethod QualityScaling; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSignificanceQuality QualitySettings[0x5]; // 0x08(0x50)
};

// ScriptStruct Gobi.SignificanceQuality
// Size: 0x10 (Inherited: 0x00)
struct FSignificanceQuality {
	struct TArray<int32_t> MaxCharactersPerLOD; // 0x00(0x10)
};

// ScriptStruct Gobi.DrenchStrengthSettings
// Size: 0x14 (Inherited: 0x00)
struct FDrenchStrengthSettings {
	float DamagePct; // 0x00(0x04)
	float InnerStrength; // 0x04(0x04)
	float OuterStrength; // 0x08(0x04)
	float InnerRadius; // 0x0c(0x04)
	float OuterRadius; // 0x10(0x04)
};

// ScriptStruct Gobi.EffectEmitterSphere
// Size: 0x0c (Inherited: 0x00)
struct FEffectEmitterSphere {
	float Radius; // 0x00(0x04)
	struct FName CollisionProfile; // 0x04(0x08)
};

// ScriptStruct Gobi.FlashlightViewConfig
// Size: 0x60 (Inherited: 0x00)
struct FFlashlightViewConfig {
	struct FLightParameterConfig LightParameters; // 0x00(0x28)
	struct FLightParameterFlickerModifier LightFlickerMod; // 0x28(0x38)
};

// ScriptStruct Gobi.LightParameterFlickerModifier
// Size: 0x38 (Inherited: 0x00)
struct FLightParameterFlickerModifier {
	char pad_0[0x20]; // 0x00(0x20)
	struct FVector2D FlickerFrequency; // 0x20(0x08)
	float FlickeredIntensity; // 0x28(0x04)
	float FlickeredTemperature; // 0x2c(0x04)
	struct UCurveFloat* FlickerCurve; // 0x30(0x08)
};

// ScriptStruct Gobi.LightParameterConfig
// Size: 0x28 (Inherited: 0x00)
struct FLightParameterConfig {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<float> Intensity; // 0x08(0x10)
	struct TArray<float> Temperature; // 0x18(0x10)
};

// ScriptStruct Gobi.GameplayEffectKnockbackData
// Size: 0x58 (Inherited: 0x00)
struct FGameplayEffectKnockbackData {
	bool bUseKnockbackRange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D DistanceInterpRange; // 0x04(0x08)
	struct FVector2D LaunchBackSpeedRange; // 0x0c(0x08)
	struct FVector2D LaunchUpSpeedRange; // 0x14(0x08)
	float LaunchBackSpeed; // 0x1c(0x04)
	float LaunchUpSpeed; // 0x20(0x04)
	float GravityScalar; // 0x24(0x04)
	float KnockbackDuration; // 0x28(0x04)
	enum class EGameplayEffectKnockbackDirection Direction; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UCurveFloat* StrengthCurve; // 0x30(0x08)
	struct FGameplayTagContainer TagsToApply; // 0x38(0x20)
};

// ScriptStruct Gobi.RadialDamageSet
// Size: 0x20 (Inherited: 0x00)
struct FRadialDamageSet {
	struct FRadialDamage RadialDamageInner; // 0x00(0x0c)
	struct FRadialDamage RadialDamageOuter; // 0x0c(0x0c)
	bool bScaleFromZeroToInner; // 0x18(0x01)
	bool bScaleFromInnerToOuter; // 0x19(0x01)
	bool bApplyOuterBeyondRadius; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	int32_t MaxArmorPiecesToImpact; // 0x1c(0x04)
};

// ScriptStruct Gobi.RadialDamage
// Size: 0x0c (Inherited: 0x00)
struct FRadialDamage {
	float Damage; // 0x00(0x04)
	float PermanentDamage; // 0x04(0x04)
	float Radius; // 0x08(0x04)
};

// ScriptStruct Gobi.NetGameplayEffectArray
// Size: 0x118 (Inherited: 0x108)
struct FNetGameplayEffectArray : FFastArraySerializer {
	struct TArray<struct FNetGameplayEffect> Items; // 0x108(0x10)
};

// ScriptStruct Gobi.NetGameplayEffect
// Size: 0xb8 (Inherited: 0x0c)
struct FNetGameplayEffect : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UGameplayEffect* Effect; // 0x10(0x08)
	struct UGameplayEffect* EffectClass; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
	struct FGameplayEffectContext EffectContext; // 0x28(0x80)
	struct AActor* TargetActor; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct Gobi.ReviveEffectData
// Size: 0x18 (Inherited: 0x00)
struct FReviveEffectData {
	float HealthPercentFromDead; // 0x00(0x04)
	float HealthPercentFromIncap; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
	int32_t IncapStrikesToReturn; // 0x0c(0x04)
	struct FGameplayTag ReviveSourceTag; // 0x10(0x08)
};

// ScriptStruct Gobi.GameplayEval_CanUseUsable
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_CanUseUsable : FGameplayEval {
	struct UGameplayContext_UsableComponent* Usable; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_DirectorPacingPhase
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_DirectorPacingPhase : FGameplayEval {
	enum class EPacingPhase PacingPhase; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.GameplayEval_OverlapActor
// Size: 0xd8 (Inherited: 0x48)
struct FGameplayEval_OverlapActor : FGameplayEval {
	struct FAIDataProviderFloatValue Radius_DP; // 0x48(0x38)
	struct FAIDataProviderFloatValue HalfHeight_DP; // 0x80(0x38)
	struct FVector Offset; // 0xb8(0x0c)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UAnimContext_Transform* BoundsTransformContext; // 0xc8(0x08)
	struct UAnimContext_Actor* TestActorContext; // 0xd0(0x08)
};

// ScriptStruct Gobi.GameplayEval_HasVisibility
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_HasVisibility : FGameplayEval {
	struct UAnimContext_Actor* VisibilityTo; // 0x48(0x08)
	float VisibilityTimeWindow; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Gobi.GameplayEval_LadderIsReady
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_LadderIsReady : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_MantleIsReady
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_MantleIsReady : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_ClimbLink
// Size: 0x78 (Inherited: 0x48)
struct FGameplayEval_ClimbLink : FGameplayEval {
	float MaxStartingDistance; // 0x48(0x04)
	float MinClimbUp; // 0x4c(0x04)
	float MaxClimbUp; // 0x50(0x04)
	float MinTopDistance; // 0x54(0x04)
	float MaxTopDistance; // 0x58(0x04)
	float MinClimbDown; // 0x5c(0x04)
	float MaxClimbDown; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct UNavArea*> ClimbNavAreas; // 0x68(0x10)
};

// ScriptStruct Gobi.GameplayEval_Climb
// Size: 0x68 (Inherited: 0x48)
struct FGameplayEval_Climb : FGameplayEval {
	float MaxStartingDistance; // 0x48(0x04)
	float ClimbUp; // 0x4c(0x04)
	float TopDistance; // 0x50(0x04)
	float ClimbDown; // 0x54(0x04)
	struct TArray<struct UNavArea*> ClimbNavAreas; // 0x58(0x10)
};

// ScriptStruct Gobi.GameplayEval_IsGameModeClassification
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_IsGameModeClassification : FGameplayEval {
	enum class EGameModeClassification GameModeClassification; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.GameplayEval_HasItem
// Size: 0x90 (Inherited: 0x48)
struct FGameplayEval_HasItem : FGameplayEval {
	struct FGameplayTagQuery SelectedItemTag; // 0x48(0x48)
};

// ScriptStruct Gobi.GameplayEval_HasSelectedItem
// Size: 0x90 (Inherited: 0x48)
struct FGameplayEval_HasSelectedItem : FGameplayEval {
	struct FGameplayTagQuery SelectedItemTag; // 0x48(0x48)
};

// ScriptStruct Gobi.GameplayEval_HasHeroTeammateInLifeState
// Size: 0x68 (Inherited: 0x48)
struct FGameplayEval_HasHeroTeammateInLifeState : FGameplayEval {
	struct FGameplayTagContainer LifeStates; // 0x48(0x20)
};

// ScriptStruct Gobi.GameplayEval_MantleRemainingClimbHeight
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_MantleRemainingClimbHeight : FGameplayEval {
	float DesiredRemainingClimbHeight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Gobi.GameplayEval_MantleHeight
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_MantleHeight : FGameplayEval {
	float DesiredMantleHeight; // 0x48(0x04)
	enum class EMantleHeightMode Mode; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct Gobi.GameplayEval_MantleDepth
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_MantleDepth : FGameplayEval {
	float RequiredDepth; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Gobi.GameplayEval_IsFlashlightOn
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_IsFlashlightOn : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_SelectedItemAnimationStance
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_SelectedItemAnimationStance : FGameplayEval {
	struct FGameplayTag RequiredAnimStanceTag; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_ReviveSource
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_ReviveSource : FGameplayEval {
	struct FGameplayTag ReviveSourceTag; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_CheckLastDamagedBy
// Size: 0xe0 (Inherited: 0x48)
struct FGameplayEval_CheckLastDamagedBy : FGameplayEval {
	bool IgnoreSelfDamage; // 0x48(0x01)
	bool bDoTagsCheck; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FGameplayTagQuery CharacterTags; // 0x50(0x48)
	bool bDoSpeakerCheck; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FDataTableRowHandle VoiceRowHandle; // 0xa0(0x20)
	struct FGameplayTagContainer DamageTypeContainer; // 0xc0(0x20)
};

// ScriptStruct Gobi.GameplayEval_IsHeroPreviousLifeState
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_IsHeroPreviousLifeState : FGameplayEval {
	struct FGameplayTag PreviousLifeState; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_IsHeroLifeState
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_IsHeroLifeState : FGameplayEval {
	struct FGameplayTag LifeState; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_IsSpeakerAvailable
// Size: 0x70 (Inherited: 0x48)
struct FGameplayEval_IsSpeakerAvailable : FGameplayEval {
	struct FDataTableRowHandle Speaker; // 0x48(0x20)
	bool bCheckIsCapable; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Gobi.GameplayEval_HeroIsInCombat
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_HeroIsInCombat : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_LeapVelocityPitch
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_LeapVelocityPitch : FGameplayEval {
	float IdealPitch; // 0x48(0x04)
	float MaxPitchFromIdealPitch; // 0x4c(0x04)
};

// ScriptStruct Gobi.GameplayEval_VelocityPitch
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_VelocityPitch : FGameplayEval {
	float IdealPitch; // 0x48(0x04)
	float MaxPitchFromIdealPitch; // 0x4c(0x04)
};

// ScriptStruct Gobi.GameplayEval_CheckAmmoReserve
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_CheckAmmoReserve : FGameplayEval {
	enum class EAmmoInReserveCheck CheckType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.GameplayEval_PartyInSafeRoom
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_PartyInSafeRoom : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_MatchState
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_MatchState : FGameplayEval {
	struct TArray<struct FName> DesiredMatchStates; // 0x48(0x10)
};

// ScriptStruct Gobi.GameplayEval_LullActive
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_LullActive : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_NearbyCharacters
// Size: 0xb0 (Inherited: 0x48)
struct FGameplayEval_NearbyCharacters : FGameplayEval {
	int32_t MinCharacterCount; // 0x48(0x04)
	bool bDoRangeCheck; // 0x4c(0x01)
	bool bCheckZSeparately; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	float MinDistance; // 0x50(0x04)
	float MaxDistance; // 0x54(0x04)
	float MaxZDistance; // 0x58(0x04)
	bool bDoTagsCheck; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FGameplayTagQuery CharacterTags; // 0x60(0x48)
	struct UGameplayContext_NearbyCharacters* NearbyCharacters; // 0xa8(0x08)
};

// ScriptStruct Gobi.GameplayEval_ActorClass
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_ActorClass : FGameplayEval {
	struct UAnimContext_Actor* Actor; // 0x48(0x08)
	struct AActor* ActorClass; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_ClosestCharacter
// Size: 0xa8 (Inherited: 0x48)
struct FGameplayEval_ClosestCharacter : FGameplayEval {
	bool bDoRangeCheck; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float MinDistance; // 0x4c(0x04)
	float MaxDistance; // 0x50(0x04)
	bool bDoTagsCheck; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FGameplayTagQuery CharacterTags; // 0x58(0x48)
	struct UAnimContext_ClosestCharacter* ClosestCharacter; // 0xa0(0x08)
};

// ScriptStruct Gobi.GameplayEval_HasPath
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_HasPath : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_CurrentMap
// Size: 0x68 (Inherited: 0x48)
struct FGameplayEval_CurrentMap : FGameplayEval {
	struct FDataTableRowHandle MapRowHandle; // 0x48(0x20)
};

// ScriptStruct Gobi.GameplayEval_HasPounceTarget
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_HasPounceTarget : FGameplayEval {
	struct UAnimContext_PounceComponent* Pounce; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_ClingLocation
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_ClingLocation : FGameplayEval {
	enum class EZombieAttachLocationType LocationType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.GameplayEval_BlockedByPawn
// Size: 0x68 (Inherited: 0x48)
struct FGameplayEval_BlockedByPawn : FGameplayEval {
	float AvatarPersonalSpacePadding; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UAnimContext_PawnProximity* Proximity; // 0x50(0x08)
	struct UAnimContext_Actor* Avatar; // 0x58(0x08)
	struct UAnimContext_Transform* SegmentEnd; // 0x60(0x08)
};

// ScriptStruct Gobi.GameplayEval_LineOfSight
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_LineOfSight : FGameplayEval {
	struct UAnimContext_Trace* Trace; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_DamageBone
// Size: 0x60 (Inherited: 0x48)
struct FGameplayEval_DamageBone : FGameplayEval {
	struct FName HitBoneBelow; // 0x48(0x08)
	bool bIncludeBonesBelow; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UAnimContext_DamageInfo* DamageInfo; // 0x58(0x08)
};

// ScriptStruct Gobi.GameplayEval_DamageWeakSpot
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_DamageWeakSpot : FGameplayEval {
	enum class EPhysicalSurface WeakSpotSurface; // 0x48(0x01)
	bool bWeakSpotDestroyed; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct UAnimContext_DamageInfo* DamageInfo; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_HitReactionWeakSpot
// Size: 0x60 (Inherited: 0x48)
struct FGameplayEval_HitReactionWeakSpot : FGameplayEval {
	enum class EPhysicalSurface WeakSpotSurface; // 0x48(0x01)
	bool bTestHealthPercent; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float HealthPercent; // 0x4c(0x04)
	enum class ECompareOp CompareOperation; // 0x50(0x01)
	bool bWeakSpotDestroyed; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UAnimContext_HitReactionInfo* HitReaction; // 0x58(0x08)
};

// ScriptStruct Gobi.GameplayEval_HitReactionHealth
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_HitReactionHealth : FGameplayEval {
	float TestHealthPercent; // 0x48(0x04)
	enum class ECompareOp CompareOperation; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct UAnimContext_HitReactionInfo* HitReaction; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_HitReactionBone
// Size: 0xb0 (Inherited: 0x48)
struct FGameplayEval_HitReactionBone : FGameplayEval {
	struct FName HitBoneBelow; // 0x48(0x08)
	struct TSet<struct FName> HitBonesBelow; // 0x50(0x50)
	bool bIncludeBonesBelow; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UAnimContext_HitReactionInfo* HitReaction; // 0xa8(0x08)
};

// ScriptStruct Gobi.GameplayEval_HitReactionDamageAmount
// Size: 0x98 (Inherited: 0x48)
struct FGameplayEval_HitReactionDamageAmount : FGameplayEval {
	float Damage; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FAIDataProviderFloatValue DamageAmount; // 0x50(0x38)
	bool bAsPercent; // 0x88(0x01)
	enum class ECompareOp CompareOperation; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct UAnimContext_HitReactionInfo* HitReaction; // 0x90(0x08)
};

// ScriptStruct Gobi.GameplayEval_DamageRange
// Size: 0xc8 (Inherited: 0x48)
struct FGameplayEval_DamageRange : FGameplayEval {
	struct FAIDataProviderFloatValue DamageMin; // 0x48(0x38)
	struct FAIDataProviderFloatValue DamageMax; // 0x80(0x38)
	bool bAsPercent; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UAnimContext_DamageInfo* DamageInfo; // 0xc0(0x08)
};

// ScriptStruct Gobi.GameplayEval_DamageAmount
// Size: 0x98 (Inherited: 0x48)
struct FGameplayEval_DamageAmount : FGameplayEval {
	float Damage; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FAIDataProviderFloatValue DamageAmount; // 0x50(0x38)
	bool bAsPercent; // 0x88(0x01)
	enum class ECompareOp CompareOperation; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct UAnimContext_DamageInfo* DamageInfo; // 0x90(0x08)
};

// ScriptStruct Gobi.GameplayEval_Health
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_Health : FGameplayEval {
	float TestHealthPercent; // 0x48(0x04)
	bool bCheckTempHealth; // 0x4c(0x01)
	enum class ECompareOp CompareOperation; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct UAnimContext_Actor* Actor; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_SpeedRange
// Size: 0xc8 (Inherited: 0x48)
struct FGameplayEval_SpeedRange : FGameplayEval {
	struct FAIDataProviderFloatValue IdealSpeed; // 0x48(0x38)
	struct FAIDataProviderFloatValue MaxDistFromIdealSpeed; // 0x80(0x38)
	enum class EDimension TestMode; // 0xb8(0x01)
	enum class EIdealDistanceDirection IdealSpeedDirection; // 0xb9(0x01)
	enum class EScoringEquation ScoringEquation; // 0xba(0x01)
	char pad_BB[0x5]; // 0xbb(0x05)
	struct UAnimContext_Actor* Actor; // 0xc0(0x08)
};

// ScriptStruct Gobi.GameplayEval_Speed
// Size: 0x60 (Inherited: 0x48)
struct FGameplayEval_Speed : FGameplayEval {
	float IdealSpeed; // 0x48(0x04)
	float MaxSpeedRange; // 0x4c(0x04)
	enum class EDimension TestMode; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UAnimContext_Actor* Actor; // 0x58(0x08)
};

// ScriptStruct Gobi.GameplayEval_IsCrouching
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_IsCrouching : FGameplayEval {
	struct UAnimContext_Character* Character; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_MovementMode
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_MovementMode : FGameplayEval {
	enum class EMovementMode RequiredMovementMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAnimContext_Character* Character; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_DamageType
// Size: 0xc0 (Inherited: 0x48)
struct FGameplayEval_DamageType : FGameplayEval {
	bool bTestWithQuery; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FGameplayTagContainer DamageTypeTags; // 0x50(0x20)
	struct FGameplayTagQuery DamageTypeTagQuery; // 0x70(0x48)
	struct UAnimContext_DamageInfo* DamageInfo; // 0xb8(0x08)
};

// ScriptStruct Gobi.GameplayEval_HasHeroTeammate
// Size: 0x68 (Inherited: 0x48)
struct FGameplayEval_HasHeroTeammate : FGameplayEval {
	struct FDataTableRowHandle HeroTeammate; // 0x48(0x20)
};

// ScriptStruct Gobi.GameplayEval_PlayerStaminaState
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_PlayerStaminaState : FGameplayEval {
	bool bIsRangeCheck; // 0x48(0x01)
	enum class EStaminaState DesiredStaminaState; // 0x49(0x01)
	enum class EStaminaState MinStaminaState; // 0x4a(0x01)
	enum class EStaminaState MaxStaminaState; // 0x4b(0x01)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UGameplayContext_PlayerStaminaState* StaminaState; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_HeroHealthState
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_HeroHealthState : FGameplayEval {
	bool bIsRangeCheck; // 0x48(0x01)
	enum class EHealthState DesiredHealthState; // 0x49(0x01)
	enum class EHealthState MinHealthState; // 0x4a(0x01)
	enum class EHealthState MaxHealthState; // 0x4b(0x01)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UGameplayContext_HeroHealthState* HealthState; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_HeroDefinition
// Size: 0x68 (Inherited: 0x48)
struct FGameplayEval_HeroDefinition : FGameplayEval {
	struct FDataTableRowHandle HeroDefinition; // 0x48(0x20)
};

// ScriptStruct Gobi.GameplayEval_Distance
// Size: 0xd0 (Inherited: 0x48)
struct FGameplayEval_Distance : FGameplayEval {
	struct FAIDataProviderFloatValue IdealDistance; // 0x48(0x38)
	struct FAIDataProviderFloatValue MaxDistFromIdealDist; // 0x80(0x38)
	enum class EIdealDistanceDirection IdealDistanceDirection; // 0xb8(0x01)
	enum class EDimension TestMode; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct UAnimContext_Distance* Distance; // 0xc0(0x08)
	enum class EScoringEquation ScoringEquation; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct Gobi.GameplayEval_IsAvatarFacing
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_IsAvatarFacing : FGameplayEval {
	float MaxAngleFromIdealAngle; // 0x48(0x04)
	enum class EAngleAxis TestMode; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct UAnimContext_Transform* FacingTarget; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_Angle
// Size: 0x60 (Inherited: 0x48)
struct FGameplayEval_Angle : FGameplayEval {
	float IdealAngle; // 0x48(0x04)
	float MaxAngleFromIdealAngle; // 0x4c(0x04)
	enum class EAngleAxis TestMode; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UAnimContext_Rotation* Rotation; // 0x58(0x08)
};

// ScriptStruct Gobi.GameplayEval_ClingAttached
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_ClingAttached : FGameplayEval {
	enum class EZombieAttachLocationType AttachedLocationType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.GameplayEval_CanRupture
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_CanRupture : FGameplayEval {
	struct UAnimContext_Mutilation* Mutilation; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_Dismembered
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_Dismembered : FGameplayEval {
	int32_t Regions; // 0x48(0x04)
	enum class EDismembermentTestMode TestMode; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct UAnimContext_Mutilation* Mutilation; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_GameplayTags
// Size: 0x98 (Inherited: 0x48)
struct FGameplayEval_GameplayTags : FGameplayEval {
	struct UAnimContext_Actor* Actor; // 0x48(0x08)
	struct FGameplayTagQuery TagQuery; // 0x50(0x48)
};

// ScriptStruct Gobi.GameplayEval_Random
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_Random : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_RandomChanceByTag
// Size: 0xa8 (Inherited: 0x48)
struct FGameplayEval_RandomChanceByTag : FGameplayEval {
	struct UAnimContext_Actor* Actor; // 0x48(0x08)
	struct TMap<struct FGameplayTag, float> TagChanceMap; // 0x50(0x50)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// ScriptStruct Gobi.GameplayEval_RandomChance
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_RandomChance : FGameplayEval {
	float ChanceToPlay; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Gobi.GameplayEval_ReachedClimbLocation
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_ReachedClimbLocation : FGameplayEval {
	enum class ENavLinkContextLocations LocationType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float ArrivalDistance; // 0x4c(0x04)
};

// ScriptStruct Gobi.GameplayEval_NavCastDistance
// Size: 0xc8 (Inherited: 0x48)
struct FGameplayEval_NavCastDistance : FGameplayEval {
	struct UAnimContext_NavCast* NavCast; // 0x48(0x08)
	struct FAIDataProviderFloatValue IdealDistance; // 0x50(0x38)
	struct FAIDataProviderFloatValue MaxDistFromIdealDist; // 0x88(0x38)
	enum class EIdealDistanceDirection IdealDistanceDirection; // 0xc0(0x01)
	enum class EScoringEquation ScoringEquation; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
};

// ScriptStruct Gobi.GameplayEval_NavBlocked
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_NavBlocked : FGameplayEval {
	float MaxBlockedDistance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UAnimContext_NavCast* Distance; // 0x50(0x08)
};

// ScriptStruct Gobi.GameplayEval_IsNavLinkNext
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_IsNavLinkNext : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_NavArea
// Size: 0x70 (Inherited: 0x48)
struct FGameplayEval_NavArea : FGameplayEval {
	struct TArray<struct UNavArea*> AllowedNavAreas; // 0x48(0x10)
	struct UAnimContext_NavLinkLocation* NavLink; // 0x58(0x08)
	struct TArray<struct UAnimContext_NavLinkLocation*> NavLinkContexts; // 0x60(0x10)
};

// ScriptStruct Gobi.GameplayEval_HasContext
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_HasContext : FGameplayEval {
	struct UGameplayContext* ContextToCheck; // 0x48(0x08)
};

// ScriptStruct Gobi.GameplayEval_FixedScore
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_FixedScore : FGameplayEval {
	float FixedScore; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Gobi.GameplayModTagDisplayPolicy
// Size: 0x28 (Inherited: 0x08)
struct FGameplayModTagDisplayPolicy : FTableRowBase {
	struct FText ModTagText; // 0x08(0x18)
	bool bPositive; // 0x20(0x01)
	bool bShowTagWhenStackCountZero; // 0x21(0x01)
	bool bHidePlusOnPositive; // 0x22(0x01)
	bool bAsPercent; // 0x23(0x01)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.GameplayTagSet
// Size: 0x60 (Inherited: 0x00)
struct FGameplayTagSet {
	struct FGameplayTagQuery PrereqTags; // 0x00(0x48)
	struct TArray<struct FGameplayTagWeight> TagList; // 0x48(0x10)
	float Weight; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Gobi.GameplayTagWeight
// Size: 0x28 (Inherited: 0x00)
struct FGameplayTagWeight {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	float Weight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.GamePropertyIntMod
// Size: 0x10 (Inherited: 0x00)
struct FGamePropertyIntMod {
	enum class EGamePropertyIntModType ModType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
	float PerStackOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.GamePropertyFloatMod
// Size: 0x10 (Inherited: 0x00)
struct FGamePropertyFloatMod {
	enum class EGamePropertyFloatModType ModType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
	float PerStackOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.SystemRecord
// Size: 0x60 (Inherited: 0x00)
struct FSystemRecord {
	bool bReportZero; // 0x00(0x01)
	bool bFlushOnEndPlay; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<struct FName, struct FAggregationRecord> TrackedAggregations; // 0x08(0x50)
	float BeginObservationTimestamp; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Gobi.AggregationRecord
// Size: 0x08 (Inherited: 0x00)
struct FAggregationRecord {
	uint32_t Count; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct Gobi.AnalyticsGenericAggregationRow
// Size: 0x18 (Inherited: 0x08)
struct FAnalyticsGenericAggregationRow : FTableRowBase {
	struct FName System; // 0x08(0x08)
	float AggregationPeriod; // 0x10(0x04)
	bool bReportZero; // 0x14(0x01)
	bool bCollectOnlyWithAuthority; // 0x15(0x01)
	bool bFlushOnEndPlay; // 0x16(0x01)
	bool bEnabled; // 0x17(0x01)
};

// ScriptStruct Gobi.GlobalAssetLoaderAsset
// Size: 0x30 (Inherited: 0x00)
struct FGlobalAssetLoaderAsset {
	enum class EGlobalAssetPhase Phase; // 0x00(0x01)
	bool bClient; // 0x01(0x01)
	bool bServer; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TSoftClassPtr<UObject> Class; // 0x08(0x28)
};

// ScriptStruct Gobi.GlobalAssetTableRow
// Size: 0x18 (Inherited: 0x08)
struct FGlobalAssetTableRow : FTableRowBase {
	struct FGlobalAssetTable GlobalAssetTable; // 0x08(0x10)
};

// ScriptStruct Gobi.GlobalAssetTable
// Size: 0x10 (Inherited: 0x00)
struct FGlobalAssetTable {
	struct UAssetTable* AssetTable; // 0x00(0x08)
	bool bLoadOnDedicatedServer; // 0x08(0x01)
	enum class EGlobalAssetPhase LoadingPhase; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Gobi.DMapAISpawnData
// Size: 0x0c (Inherited: 0x00)
struct FDMapAISpawnData {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FNavAgentSelector NavMesh; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Gobi.OffHandIK
// Size: 0x34 (Inherited: 0x00)
struct FOffHandIK {
	struct FName IKEffectorName; // 0x00(0x08)
	struct FName AdditionalOffsetSocketName; // 0x08(0x08)
	struct FName IKTargetName; // 0x10(0x08)
	struct FName FemaleIKTargetName; // 0x18(0x08)
	struct FVector CalculatedEffectorLocation; // 0x20(0x0c)
	float EffectorInterpSpeed; // 0x2c(0x04)
	bool bHasTarget; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Gobi.AnimSequencePlayRate
// Size: 0x10 (Inherited: 0x00)
struct FAnimSequencePlayRate {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.GobiSlopeWarping
// Size: 0x14 (Inherited: 0x00)
struct FGobiSlopeWarping {
	struct FGobiAnimationCurveData SlopeWarpingCurve; // 0x00(0x10)
	float Alpha; // 0x10(0x04)
};

// ScriptStruct Gobi.GobiAnimationCurveData
// Size: 0x10 (Inherited: 0x00)
struct FGobiAnimationCurveData {
	struct FName CurveName; // 0x00(0x08)
	float DefaultCurveValue; // 0x08(0x04)
	bool bInvertCurve; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Gobi.AimRotationInfo
// Size: 0x0c (Inherited: 0x00)
struct FAimRotationInfo {
	float TurnSpeed; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)
};

// ScriptStruct Gobi.TaskEvent
// Size: 0x0c (Inherited: 0x00)
struct FTaskEvent {
	struct FName EventName; // 0x00(0x08)
	float EventWindowTime; // 0x08(0x04)
};

// ScriptStruct Gobi.FocusTrackingRefPose
// Size: 0x60 (Inherited: 0x00)
struct FFocusTrackingRefPose {
	struct FReferenceFrame ReferencePose; // 0x00(0x10)
	struct FBoneChain IkBoneChain; // 0x10(0x30)
	struct FRotationConstraints IKConstraints; // 0x40(0x10)
	enum class EAxis EffectorForwardAxis; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FRotator EffectorForwardOffset; // 0x54(0x0c)
};

// ScriptStruct Gobi.BoneChain
// Size: 0x30 (Inherited: 0x00)
struct FBoneChain {
	struct FName EffectorBone; // 0x00(0x08)
	struct FName RootBone; // 0x08(0x08)
	struct TArray<struct FWeightPerBone> BlendWeights; // 0x10(0x10)
	struct FRotator PerAxisAlignmentScale; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Gobi.WeightPerBone
// Size: 0x10 (Inherited: 0x00)
struct FWeightPerBone {
	struct FName BoneName; // 0x00(0x08)
	int32_t BlendWeight; // 0x08(0x04)
	int32_t BlendPercentage; // 0x0c(0x04)
};

// ScriptStruct Gobi.ReferenceFrame
// Size: 0x10 (Inherited: 0x00)
struct FReferenceFrame {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float ExplicitTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.NamedBone
// Size: 0x10 (Inherited: 0x00)
struct FNamedBone {
	struct FName BoneName; // 0x00(0x08)
	struct FName BoneDisplayName; // 0x08(0x08)
};

// ScriptStruct Gobi.FootSyncMarkerSuffix
// Size: 0x0c (Inherited: 0x00)
struct FFootSyncMarkerSuffix {
	enum class EFootSyncDetectionMode DetectionMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SyncMarkerSuffix; // 0x04(0x08)
};

// ScriptStruct Gobi.GobiAnimationState
// Size: 0x58 (Inherited: 0x00)
struct FGobiAnimationState {
	float AimYaw; // 0x00(0x04)
	float AimPitch; // 0x04(0x04)
	float Speed; // 0x08(0x04)
	float Speed2D; // 0x0c(0x04)
	float DeltaSeconds; // 0x10(0x04)
	struct FVector Velocity; // 0x14(0x0c)
	struct FVector Acceleration; // 0x20(0x0c)
	struct FRotator Rotation; // 0x2c(0x0c)
	float RelativeMovementDirection; // 0x38(0x04)
	float MeleeTwistRotation; // 0x3c(0x04)
	float FlinchWeight; // 0x40(0x04)
	float InjuredWeight; // 0x44(0x04)
	char IsAccelerating : 1; // 0x48(0x01)
	char bIsJumping : 1; // 0x48(0x01)
	char IsOnGround : 1; // 0x48(0x01)
	char IsInAir : 1; // 0x48(0x01)
	char IsCrouching : 1; // 0x48(0x01)
	char bIsMoving : 1; // 0x48(0x01)
	char bCanStartMoving : 1; // 0x48(0x01)
	char bIsDead : 1; // 0x48(0x01)
	char bIsPivoting : 1; // 0x49(0x01)
	char bIsMantling : 1; // 0x49(0x01)
	char bIsClimbing : 1; // 0x49(0x01)
	char pad_49_3 : 5; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	struct FVector CurrentLocation; // 0x4c(0x0c)
};

// ScriptStruct Gobi.GobiAnimationData
// Size: 0x14 (Inherited: 0x00)
struct FGobiAnimationData {
	float IsMovingThreshold; // 0x00(0x04)
	struct FGobiAnimationCurveData MeleeTwistCurve; // 0x04(0x10)
};

// ScriptStruct Gobi.CharacterCollisionProfileRequest
// Size: 0x10 (Inherited: 0x00)
struct FCharacterCollisionProfileRequest {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.DialogueEval
// Size: 0x48 (Inherited: 0x48)
struct FDialogueEval : FGameplayEval {
};

// ScriptStruct Gobi.DialogueEval_CheckHasGameplayTag
// Size: 0x58 (Inherited: 0x48)
struct FDialogueEval_CheckHasGameplayTag : FDialogueEval {
	bool bCheckTarget; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FGameplayTag GameplayTag; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Gobi.DialogueEval_IsConversationPlaying
// Size: 0x50 (Inherited: 0x48)
struct FDialogueEval_IsConversationPlaying : FDialogueEval {
	bool bCheckOnlyImmediate; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.DialogueEval_ConversationHasPlayed
// Size: 0x68 (Inherited: 0x48)
struct FDialogueEval_ConversationHasPlayed : FDialogueEval {
	struct FDataTableRowHandle EventDefinitionRow; // 0x48(0x20)
};

// ScriptStruct Gobi.DialogueEval_CompareLastSpeaker
// Size: 0x70 (Inherited: 0x48)
struct FDialogueEval_CompareLastSpeaker : FDialogueEval {
	bool CompareCurrentSpeaker; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FDataTableRowHandle VoiceRowHandle; // 0x50(0x20)
};

// ScriptStruct Gobi.DialogueEval_IsInSaferoom
// Size: 0x50 (Inherited: 0x48)
struct FDialogueEval_IsInSaferoom : FDialogueEval {
	bool bCheckTarget; // 0x48(0x01)
	bool bCheckSaferoomState; // 0x49(0x01)
	enum class EPartySafeRoomState DesiredSaferoomState; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct Gobi.DialogueEval_CheckTargetLastDamagedBy
// Size: 0xe0 (Inherited: 0x48)
struct FDialogueEval_CheckTargetLastDamagedBy : FDialogueEval {
	bool bIgnoreSelfDamage; // 0x48(0x01)
	bool bCheckIfDamagedBySpeaker; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FGameplayTagQuery CharacterTags; // 0x50(0x48)
	bool bDoSpeakerRowHandleCheck; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FDataTableRowHandle VoiceRowHandle; // 0xa0(0x20)
	struct FGameplayTagContainer DamageTypeContainer; // 0xc0(0x20)
};

// ScriptStruct Gobi.DialogueEval_InstigatorIs
// Size: 0x68 (Inherited: 0x48)
struct FDialogueEval_InstigatorIs : FDialogueEval {
	struct FDataTableRowHandle Instigator; // 0x48(0x20)
};

// ScriptStruct Gobi.DialogueEval_SpeakerDistanceToTarget
// Size: 0x50 (Inherited: 0x48)
struct FDialogueEval_SpeakerDistanceToTarget : FDialogueEval {
	float MinDistance; // 0x48(0x04)
	float MaxDistance; // 0x4c(0x04)
};

// ScriptStruct Gobi.DialogueEval_TargetIs
// Size: 0x68 (Inherited: 0x48)
struct FDialogueEval_TargetIs : FDialogueEval {
	struct FDataTableRowHandle Target; // 0x48(0x20)
};

// ScriptStruct Gobi.GameplayEval_DroppedItem
// Size: 0x58 (Inherited: 0x48)
struct FGameplayEval_DroppedItem : FGameplayEval {
	struct TArray<struct FDataTableRowHandle> Items; // 0x48(0x10)
};

// ScriptStruct Gobi.DialogueEval_InstigatorIsSpeaker
// Size: 0x48 (Inherited: 0x48)
struct FDialogueEval_InstigatorIsSpeaker : FDialogueEval {
};

// ScriptStruct Gobi.DialogueEval_TargetIsSpeaker
// Size: 0x48 (Inherited: 0x48)
struct FDialogueEval_TargetIsSpeaker : FDialogueEval {
};

// ScriptStruct Gobi.DialogueEval_CheckLastResponse
// Size: 0x80 (Inherited: 0x48)
struct FDialogueEval_CheckLastResponse : FDialogueEval {
	bool bCheckTarget; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FDataTableRowHandle ResponseGroup; // 0x50(0x20)
	struct TArray<struct FDataTableRowHandle> ResponseGroups; // 0x70(0x10)
};

// ScriptStruct Gobi.GameplayEval_IsUsingItem
// Size: 0x60 (Inherited: 0x48)
struct FGameplayEval_IsUsingItem : FGameplayEval {
	struct TArray<struct FDataTableRowHandle> Item; // 0x48(0x10)
	bool CheckIfTargetIsSelf; // 0x58(0x01)
	bool CheckIfTargetIsNotSelf; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct Gobi.GameplayEval_CommWheelAction
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_CommWheelAction : FGameplayEval {
	enum class ECommWheelAction CommWheelAction; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.GameplayEval_PingNonPingable
// Size: 0x48 (Inherited: 0x48)
struct FGameplayEval_PingNonPingable : FGameplayEval {
};

// ScriptStruct Gobi.GameplayEval_PingTarget
// Size: 0x50 (Inherited: 0x48)
struct FGameplayEval_PingTarget : FGameplayEval {
	struct FGameplayTag PingTarget; // 0x48(0x08)
};

// ScriptStruct Gobi.DialogueEval_AlwaysTrue
// Size: 0x48 (Inherited: 0x48)
struct FDialogueEval_AlwaysTrue : FDialogueEval {
};

// ScriptStruct Gobi.DialogueEvalContext
// Size: 0x38 (Inherited: 0x28)
struct FDialogueEvalContext : FGameplayEvalContext {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Gobi.DialogueEvalItem
// Size: 0x10 (Inherited: 0x08)
struct FDialogueEvalItem : FGameplayEvalItem {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.DialogueEvalConfig
// Size: 0x01 (Inherited: 0x01)
struct FDialogueEvalConfig : FGameplayEvalConfig {
};

// ScriptStruct Gobi.BossReqsData
// Size: 0x50 (Inherited: 0x00)
struct FBossReqsData {
	float MaxSpottedByEnemyDistance; // 0x00(0x04)
	float MaxWarningDistance; // 0x04(0x04)
	struct FGameplayTagQuery QueryArray; // 0x08(0x48)
};

// ScriptStruct Gobi.HintTimerInformation
// Size: 0x208 (Inherited: 0x00)
struct FHintTimerInformation {
	char pad_0[0x208]; // 0x00(0x208)
};

// ScriptStruct Gobi.NPCBanterRow
// Size: 0x40 (Inherited: 0x08)
struct FNPCBanterRow : FTableRowBase {
	bool bIsBanterStart; // 0x08(0x01)
	bool bIsAmbientBark; // 0x09(0x01)
	bool bAllowEarlyBanterEnd; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float ChanceToEndEarly; // 0x0c(0x04)
	struct FDataTableRowHandle BanterBeat; // 0x10(0x20)
	struct TArray<struct FDataTableRowHandle> BanterBeatResponses; // 0x30(0x10)
};

// ScriptStruct Gobi.CharacterStaminaInfo
// Size: 0x2c (Inherited: 0x00)
struct FCharacterStaminaInfo {
	struct FName CharacterName; // 0x00(0x08)
	struct FVector2D LowStamBreathIntervalMinMax; // 0x08(0x08)
	struct FVector2D RegStamBreathIntervalMinMax; // 0x10(0x08)
	bool bMixSmallBigBreaths; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PctForBreaths; // 0x1c(0x04)
	float PctForLowStamina; // 0x20(0x04)
	float FinalBreathsDelay; // 0x24(0x04)
	int32_t StamRecoveryThreshold; // 0x28(0x04)
};

// ScriptStruct Gobi.GobiCountAnim
// Size: 0x28 (Inherited: 0x20)
struct FGobiCountAnim : FGobiEasingAnim {
	bool bConstantRate; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Gobi.GobiEnemyAttackabilityParams
// Size: 0x1c (Inherited: 0x00)
struct FGobiEnemyAttackabilityParams {
	bool bOwnerDamageOnly; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxAttackFailures; // 0x04(0x04)
	bool bUseAttackTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxTimeSinceAttackFailure; // 0x0c(0x04)
	bool bUseAttackDistance; // 0x10(0x01)
	bool bUseAttackLocation; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float MinDistanceSinceAttackFailure; // 0x14(0x04)
	float MaxDistance; // 0x18(0x04)
};

// ScriptStruct Gobi.GobiEnemyDamage
// Size: 0x50 (Inherited: 0x00)
struct FGobiEnemyDamage {
	float FirstTargetTime; // 0x00(0x04)
	float LastTargetTime; // 0x04(0x04)
	int32_t NumAttackAttempts; // 0x08(0x04)
	float AttackAttemptTime; // 0x0c(0x04)
	struct FVector LocationAtAttackAttempt; // 0x10(0x0c)
	int32_t NumAttackFailures; // 0x1c(0x04)
	float FailedAttackTime; // 0x20(0x04)
	float FailureRecordTime; // 0x24(0x04)
	struct FGobiEnemyDamageData Damage; // 0x28(0x14)
	struct FGobiEnemyDamageData DamageByOwner; // 0x3c(0x14)
};

// ScriptStruct Gobi.GobiEnemyDamageData
// Size: 0x14 (Inherited: 0x00)
struct FGobiEnemyDamageData {
	float LastDamageTime; // 0x00(0x04)
	float TotalDamage; // 0x04(0x04)
	struct FVector DamageEnemyLocation; // 0x08(0x0c)
};

// ScriptStruct Gobi.GobiFootPlanting
// Size: 0x168 (Inherited: 0x00)
struct FGobiFootPlanting {
	bool bEnabled; // 0x00(0x01)
	bool bDrawDebug; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName HipBoneName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FAlphaBlend BlendIn; // 0x10(0x30)
	struct FAlphaBlend BlendOut; // 0x40(0x30)
	struct FCollisionProfileName GroundTraceProfile; // 0x70(0x08)
	float GroundTraceZOffset; // 0x78(0x04)
	struct FFootPlantState RightFoot; // 0x7c(0x34)
	struct FFootPlantState LeftFoot; // 0xb0(0x34)
	float HipDisplacementScale; // 0xe4(0x04)
	struct FFootPlantLerpRate StationaryLerpRate; // 0xe8(0x14)
	struct FFootPlantLerpRate MovingLerpRate; // 0xfc(0x14)
	bool bAdjustHipToLower; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float HipToHigherGroundThreshold; // 0x114(0x04)
	float HipToLowerGroundThreshold; // 0x118(0x04)
	float RightFootIKOffset; // 0x11c(0x04)
	float LeftFootIKOffset; // 0x120(0x04)
	float HipDisplacement; // 0x124(0x04)
	char pad_128[0x4]; // 0x128(0x04)
	struct FRotator RightFootRotation; // 0x12c(0x0c)
	struct FRotator LeftFootRotation; // 0x138(0x0c)
	struct FName IKFootRootBoneName; // 0x144(0x08)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct AGobiCharacter* OwnerCharacter; // 0x150(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x158(0x08)
	struct UGobiCharacterMovementComponent* MovementComponent; // 0x160(0x08)
};

// ScriptStruct Gobi.FootPlantLerpRate
// Size: 0x14 (Inherited: 0x00)
struct FFootPlantLerpRate {
	bool bUseContinuousBlend; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HipAscent; // 0x04(0x04)
	float HipDescent; // 0x08(0x04)
	float FootAscent; // 0x0c(0x04)
	float FootDescent; // 0x10(0x04)
};

// ScriptStruct Gobi.FootPlantState
// Size: 0x34 (Inherited: 0x00)
struct FFootPlantState {
	struct FVector GroundLocation; // 0x00(0x0c)
	struct FVector GroundNormal; // 0x0c(0x0c)
	struct FVector PreAdjustedLocation; // 0x18(0x0c)
	struct FName FootBoneName; // 0x24(0x08)
	struct FName IKFootBoneName; // 0x2c(0x08)
};

// ScriptStruct Gobi.GobiGameCoachEval
// Size: 0x48 (Inherited: 0x48)
struct FGobiGameCoachEval : FGameplayEval {
};

// ScriptStruct Gobi.GobiGameCoachEval_CanShowTip
// Size: 0x48 (Inherited: 0x48)
struct FGobiGameCoachEval_CanShowTip : FGobiGameCoachEval {
};

// ScriptStruct Gobi.GobiGameCoachEval_Health
// Size: 0x50 (Inherited: 0x48)
struct FGobiGameCoachEval_Health : FGobiGameCoachEval {
	float TestHealthPercent; // 0x48(0x04)
	bool bCheckTempHealth; // 0x4c(0x01)
	enum class ECompareOp CompareOperation; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct Gobi.GobiGameCoachEval_TraumaKitState
// Size: 0x50 (Inherited: 0x48)
struct FGobiGameCoachEval_TraumaKitState : FGobiGameCoachEval {
	int32_t ChargeCount; // 0x48(0x04)
	enum class ECompareOp CompareOperation; // 0x4c(0x01)
	bool bCanAffordIt; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct Gobi.GobiGameCoachEval_IsInSafeRoom
// Size: 0x50 (Inherited: 0x48)
struct FGobiGameCoachEval_IsInSafeRoom : FGobiGameCoachEval {
	enum class ESafeRoomEvalType SafeRoomType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.GobiGameCoachEval_AlwaysTrue
// Size: 0x48 (Inherited: 0x48)
struct FGobiGameCoachEval_AlwaysTrue : FGobiGameCoachEval {
};

// ScriptStruct Gobi.GobiGameCoachEvalContext
// Size: 0x28 (Inherited: 0x28)
struct FGobiGameCoachEvalContext : FGameplayEvalContext {
};

// ScriptStruct Gobi.GobiGameCoachEvalItem
// Size: 0x10 (Inherited: 0x08)
struct FGobiGameCoachEvalItem : FGameplayEvalItem {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.GobiGameCoachEvalConfig
// Size: 0x01 (Inherited: 0x01)
struct FGobiGameCoachEvalConfig : FGameplayEvalConfig {
};

// ScriptStruct Gobi.MissionState
// Size: 0x02 (Inherited: 0x00)
struct FMissionState {
	bool bMissionEnded; // 0x00(0x01)
	bool bSuccess; // 0x01(0x01)
};

// ScriptStruct Gobi.SyncedPacketSimulationSettings
// Size: 0x18 (Inherited: 0x00)
struct FSyncedPacketSimulationSettings {
	bool bSync; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PktLoss; // 0x04(0x04)
	int32_t PktOrder; // 0x08(0x04)
	int32_t PktDup; // 0x0c(0x04)
	int32_t PktLag; // 0x10(0x04)
	int32_t PktLagVariance; // 0x14(0x04)
};

// ScriptStruct Gobi.LevelTravelDetails
// Size: 0x38 (Inherited: 0x00)
struct FLevelTravelDetails {
	bool IsValid; // 0x00(0x01)
	bool GoToMainMenu; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FDataTableRowHandle LevelRowHandle; // 0x08(0x20)
	struct FString PoolConfig; // 0x28(0x10)
};

// ScriptStruct Gobi.GobiReadyStatus
// Size: 0x10 (Inherited: 0x00)
struct FGobiReadyStatus {
	struct APlayerState* PlayerState; // 0x00(0x08)
	bool bIsReady; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Gobi.AnimLocomotionData
// Size: 0x40 (Inherited: 0x00)
struct FAnimLocomotionData {
	struct UEnum* SpeedEnum; // 0x00(0x08)
	struct TArray<struct FAnimSpeedRange> SpeedRanges; // 0x08(0x10)
	char CurrentSpeedIdx; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FGameplayTag CurrentSpeedTag; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FAnimDirectionRange> DirectionRanges; // 0x28(0x10)
	char CurrentDirectionIdx; // 0x38(0x01)
	char StopDirectionIdx; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Gobi.AnimDirectionRange
// Size: 0x1c (Inherited: 0x00)
struct FAnimDirectionRange {
	struct FName DirectionLabel; // 0x00(0x08)
	float DirectionAngle; // 0x08(0x04)
	float MinDirectionAngle; // 0x0c(0x04)
	float MaxDirectionAngle; // 0x10(0x04)
	float HipDirectionAngle; // 0x14(0x04)
	float RelativeAngle; // 0x18(0x04)
};

// ScriptStruct Gobi.AnimSpeedRange
// Size: 0x18 (Inherited: 0x00)
struct FAnimSpeedRange {
	struct FName SpeedLabel; // 0x00(0x08)
	struct FGameplayTag SpeedTag; // 0x08(0x08)
	float MinSpeed; // 0x10(0x04)
	float MaxSpeed; // 0x14(0x04)
};

// ScriptStruct Gobi.CinematicSubtitleTimingRow
// Size: 0x40 (Inherited: 0x08)
struct FCinematicSubtitleTimingRow : FTableRowBase {
	struct FText Speaker; // 0x08(0x18)
	struct FText Subtitle; // 0x20(0x18)
	float StartTime; // 0x38(0x04)
	float EndTime; // 0x3c(0x04)
};

// ScriptStruct Gobi.CinematicDefinitionRow
// Size: 0x38 (Inherited: 0x08)
struct FCinematicDefinitionRow : FTableRowBase {
	struct FString DeveloperComments; // 0x08(0x10)
	struct UFileMediaSource* MediaSource; // 0x18(0x08)
	float Duration; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UDataTable* SubtitileTimingTable; // 0x28(0x08)
	enum class AudioSinkChannelConfigurations ChannelConfiguration; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Gobi.GobiNavLinkInstanceData
// Size: 0x80 (Inherited: 0x58)
struct FGobiNavLinkInstanceData : FActorComponentInstanceData {
	uint32_t CustomUserID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FVector> ContextLocations; // 0x60(0x10)
	struct TArray<float> ContextDistances; // 0x70(0x10)
};

// ScriptStruct Gobi.NavLinkGenerator
// Size: 0xb0 (Inherited: 0x00)
struct FNavLinkGenerator {
	char pad_0[0x50]; // 0x00(0x50)
	struct TArray<struct FString> GroundTraceHitActors; // 0x50(0x10)
	bool bShowDetailDebug; // 0x60(0x01)
	char pad_61[0x4f]; // 0x61(0x4f)
};

// ScriptStruct Gobi.NavLinkOffset
// Size: 0x20 (Inherited: 0x00)
struct FNavLinkOffset {
	struct FVector Left; // 0x00(0x0c)
	struct FVector Right; // 0x0c(0x0c)
	enum class ENavLinkDirection Direction; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FNavAgentSelector SupportedAgents; // 0x1c(0x04)
};

// ScriptStruct Gobi.PixelStreamingDeviceCode
// Size: 0x10 (Inherited: 0x00)
struct FPixelStreamingDeviceCode {
	struct FString DeviceCode; // 0x00(0x10)
};

// ScriptStruct Gobi.PlayerCameraManagerViewLimit
// Size: 0x18 (Inherited: 0x00)
struct FPlayerCameraManagerViewLimit {
	struct FVector2D Pitch; // 0x00(0x08)
	struct FVector2D Yaw; // 0x08(0x08)
	struct FVector2D Roll; // 0x10(0x08)
};

// ScriptStruct Gobi.GobiPlayerChallengeRank
// Size: 0x08 (Inherited: 0x00)
struct FGobiPlayerChallengeRank {
	int32_t StartingRank; // 0x00(0x04)
	int32_t NewRank; // 0x04(0x04)
};

// ScriptStruct Gobi.QueuedClientAdjustment
// Size: 0x18 (Inherited: 0x00)
struct FQueuedClientAdjustment {
	struct UPrimitiveComponent* NewBase; // 0x00(0x08)
	struct TArray<char> Buffer; // 0x08(0x10)
};

// ScriptStruct Gobi.MaxSpeedOverride
// Size: 0x10 (Inherited: 0x00)
struct FMaxSpeedOverride {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.InputScalar
// Size: 0x08 (Inherited: 0x00)
struct FInputScalar {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Gobi.PlayerProfileCommand
// Size: 0x08 (Inherited: 0x00)
struct FPlayerProfileCommand {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Gobi.UpdateSprayCommand
// Size: 0x18 (Inherited: 0x08)
struct FUpdateSprayCommand : FPlayerProfileCommand {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Gobi.EquipCharacterCustomizationSetCommand
// Size: 0xb0 (Inherited: 0x08)
struct FEquipCharacterCustomizationSetCommand : FPlayerProfileCommand {
	char pad_8[0xa8]; // 0x08(0xa8)
};

// ScriptStruct Gobi.ApplyWeaponSkinCommand
// Size: 0x38 (Inherited: 0x08)
struct FApplyWeaponSkinCommand : FPlayerProfileCommand {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Gobi.GrantAchievementRewardsCommand
// Size: 0x20 (Inherited: 0x08)
struct FGrantAchievementRewardsCommand : FPlayerProfileCommand {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Gobi.DeleteCampaignRunCommand
// Size: 0x10 (Inherited: 0x08)
struct FDeleteCampaignRunCommand : FPlayerProfileCommand {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.UpdateBadgeCommand
// Size: 0x18 (Inherited: 0x08)
struct FUpdateBadgeCommand : FPlayerProfileCommand {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Gobi.PurchaseOwnableCommand
// Size: 0x30 (Inherited: 0x08)
struct FPurchaseOwnableCommand : FPlayerProfileCommand {
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct Gobi.AddCaravanCommand
// Size: 0x68 (Inherited: 0x08)
struct FAddCaravanCommand : FPlayerProfileCommand {
	char pad_8[0x60]; // 0x08(0x60)
};

// ScriptStruct Gobi.UnlockStartingLocationCommand
// Size: 0x18 (Inherited: 0x08)
struct FUnlockStartingLocationCommand : FPlayerProfileCommand {
	struct FName MapSlug; // 0x08(0x08)
	enum class EMissionDifficulty Difficulty; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.AdjustStatValueCommand
// Size: 0x20 (Inherited: 0x08)
struct FAdjustStatValueCommand : FPlayerProfileCommand {
	struct FString Stat; // 0x08(0x10)
	float Delta; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Gobi.AdjustOwnableQuantityCommand
// Size: 0x30 (Inherited: 0x08)
struct FAdjustOwnableQuantityCommand : FPlayerProfileCommand {
	struct FDataTableRowHandle Product; // 0x08(0x20)
	int32_t Delta; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Gobi.AdjustSupplyPointsCommand
// Size: 0x10 (Inherited: 0x08)
struct FAdjustSupplyPointsCommand : FPlayerProfileCommand {
	int32_t Delta; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.TrackRecentCharacterCommand
// Size: 0x28 (Inherited: 0x08)
struct FTrackRecentCharacterCommand : FPlayerProfileCommand {
	struct FDataTableRowHandle Character; // 0x08(0x20)
};

// ScriptStruct Gobi.RemoveDeckCommand
// Size: 0x10 (Inherited: 0x08)
struct FRemoveDeckCommand : FPlayerProfileCommand {
	int32_t DeckId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.UpdateDeckCommand
// Size: 0x30 (Inherited: 0x08)
struct FUpdateDeckCommand : FPlayerProfileCommand {
	int32_t DeckId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString DeckName; // 0x10(0x10)
	struct TArray<struct FDataTableRowHandle> Cards; // 0x20(0x10)
};

// ScriptStruct Gobi.CreateDeckCommand
// Size: 0x30 (Inherited: 0x08)
struct FCreateDeckCommand : FPlayerProfileCommand {
	struct FString Name; // 0x08(0x10)
	enum class EGameplayCardDeckType DeckType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FDataTableRowHandle> Cards; // 0x20(0x10)
};

// ScriptStruct Gobi.EquippedCharacterCustomizationSetCollectionJson
// Size: 0x10 (Inherited: 0x00)
struct FEquippedCharacterCustomizationSetCollectionJson {
	struct TArray<struct FEquippedCharacterCustomizationSetJson> AppliedCharacterCustomizationSets; // 0x00(0x10)
};

// ScriptStruct Gobi.EquippedCharacterCustomizationSetJson
// Size: 0xa8 (Inherited: 0x00)
struct FEquippedCharacterCustomizationSetJson {
	struct FDataTableRowHandle Character; // 0x00(0x20)
	struct FCharacterCustomizationSet CustomizationSet; // 0x20(0x88)
};

// ScriptStruct Gobi.AppliedWeaponSkinCollectionJson
// Size: 0x10 (Inherited: 0x00)
struct FAppliedWeaponSkinCollectionJson {
	struct TArray<struct FAppliedWeaponSkinJson> AppliedWeaponSkins; // 0x00(0x10)
};

// ScriptStruct Gobi.AppliedWeaponSkinJson
// Size: 0x30 (Inherited: 0x00)
struct FAppliedWeaponSkinJson {
	struct FString WeaponId; // 0x00(0x10)
	struct FDataTableRowHandle Skin; // 0x10(0x20)
};

// ScriptStruct Gobi.PlayerProfileTableRedirectionRow
// Size: 0x10 (Inherited: 0x08)
struct FPlayerProfileTableRedirectionRow : FTableRowBase {
	struct FName TablePath; // 0x08(0x08)
};

// ScriptStruct Gobi.PlayerProfileData
// Size: 0x1b8 (Inherited: 0x00)
struct FPlayerProfileData {
	int32_t SupplyPoints; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayCardDeck> Decks; // 0x08(0x10)
	struct TArray<struct FDataTableRowHandle> RecentCharacters; // 0x18(0x10)
	struct TArray<struct FPlayerProfileOwnable> Ownables; // 0x28(0x10)
	struct TMap<struct FString, double> Stats; // 0x38(0x50)
	struct TArray<struct FPlayerProfileUnlockedStartingLocation> UnlockedStartingLocations; // 0x88(0x10)
	struct TMap<int32_t, struct FPlayerProfileCampaignRun> CampaignRuns; // 0x98(0x50)
	struct TArray<struct FCaravanInstance> Caravans; // 0xe8(0x10)
	struct FBadgeData BadgeData; // 0xf8(0x0c)
	struct FSprayData SprayData; // 0x104(0x10)
	char pad_114[0x4]; // 0x114(0x04)
	struct TMap<struct FString, struct FDataTableRowHandle> AppliedWeaponSkins; // 0x118(0x50)
	struct TMap<struct FDataTableRowHandle, struct FCharacterCustomizationSet> EquippedCharacterCustomizationSets; // 0x168(0x50)
};

// ScriptStruct Gobi.SprayData
// Size: 0x10 (Inherited: 0x00)
struct FSprayData {
	int32_t ForegroundIcon; // 0x00(0x04)
	int32_t ForegroundVariant; // 0x04(0x04)
	int32_t BackgroundIcon; // 0x08(0x04)
	int32_t BackgroundVariant; // 0x0c(0x04)
};

// ScriptStruct Gobi.PlayerProfileCampaignRun
// Size: 0x40 (Inherited: 0x00)
struct FPlayerProfileCampaignRun {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Map; // 0x08(0x10)
	enum class EMissionDifficulty Difficulty; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t RetriesRemaining; // 0x1c(0x04)
	int32_t Version; // 0x20(0x04)
	enum class ECampaignRunState State; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FString Data; // 0x28(0x10)
	int64_t LastUpdateTimestamp; // 0x38(0x08)
};

// ScriptStruct Gobi.PlayerProfileUnlockedStartingLocation
// Size: 0x58 (Inherited: 0x00)
struct FPlayerProfileUnlockedStartingLocation {
	struct FName MapSlug; // 0x00(0x08)
	struct TSet<enum class EMissionDifficulty> Difficulties; // 0x08(0x50)
};

// ScriptStruct Gobi.PlayerProfileOwnable
// Size: 0x28 (Inherited: 0x00)
struct FPlayerProfileOwnable {
	struct FDataTableRowHandle Product; // 0x00(0x20)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.GameplayCardDeck
// Size: 0x28 (Inherited: 0x00)
struct FGameplayCardDeck {
	int32_t ID; // 0x00(0x04)
	enum class EGameplayCardDeckType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString Name; // 0x08(0x10)
	struct TArray<struct FDataTableRowHandle> Cards; // 0x18(0x10)
};

// ScriptStruct Gobi.AkRTPCTransition
// Size: 0x18 (Inherited: 0x00)
struct FAkRTPCTransition {
	struct FString RTPCName; // 0x00(0x10)
	float Value; // 0x10(0x04)
	int32_t InterpolationTimeMs; // 0x14(0x04)
};

// ScriptStruct Gobi.CapData
// Size: 0x20 (Inherited: 0x00)
struct FCapData {
	struct FSplineMeshElement StartCap; // 0x00(0x10)
	struct FSplineMeshElement EndCap; // 0x10(0x10)
};

// ScriptStruct Gobi.SplineMeshElement
// Size: 0x10 (Inherited: 0x00)
struct FSplineMeshElement {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Gobi.PerInstanceData
// Size: 0x10 (Inherited: 0x00)
struct FPerInstanceData {
	float Bank; // 0x00(0x04)
	struct FVector Scale; // 0x04(0x0c)
};

// ScriptStruct Gobi.DebugNumbersPrefs
// Size: 0x0c (Inherited: 0x00)
struct FDebugNumbersPrefs {
	float Offset; // 0x00(0x04)
	float Size; // 0x04(0x04)
	struct FColor Color; // 0x08(0x04)
};

// ScriptStruct Gobi.ActiveGrappler
// Size: 0x0c (Inherited: 0x00)
struct FActiveGrappler {
	char pad_0[0x8]; // 0x00(0x08)
	uint32_t NetGuid; // 0x08(0x04)
};

// ScriptStruct Gobi.HagAnimState
// Size: 0x02 (Inherited: 0x00)
struct FHagAnimState {
	enum class EHagState HagState; // 0x00(0x01)
	enum class EHagLocomotionState LocomotionState; // 0x01(0x01)
};

// ScriptStruct Gobi.HealTracking
// Size: 0x18 (Inherited: 0x00)
struct FHealTracking {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Gobi.PredictedDamageAggregator
// Size: 0xb0 (Inherited: 0x00)
struct FPredictedDamageAggregator {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Gobi.OverrideHealthDamageRanges
// Size: 0x58 (Inherited: 0x00)
struct FOverrideHealthDamageRanges {
	struct FGameplayTagQuery Query; // 0x00(0x48)
	struct TArray<struct FHealthDamageRange> OverrideRanges; // 0x48(0x10)
};

// ScriptStruct Gobi.HealthDamageRange
// Size: 0x18 (Inherited: 0x00)
struct FHealthDamageRange {
	float Start; // 0x00(0x04)
	float End; // 0x04(0x04)
	float StartValue; // 0x08(0x04)
	float EndValue; // 0x0c(0x04)
	struct FName Filter; // 0x10(0x08)
};

// ScriptStruct Gobi.ReplicatedDamageInfo
// Size: 0x40 (Inherited: 0x00)
struct FReplicatedDamageInfo {
	int32_t Index; // 0x00(0x04)
	float Damage; // 0x04(0x04)
	float ServerWorldTime; // 0x08(0x04)
	struct FName BoneName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct UGobiDamageType* DamageType; // 0x18(0x08)
	struct AActor* Source; // 0x20(0x08)
	struct FName SourceName; // 0x28(0x08)
	struct FVector SourceLocation; // 0x30(0x0c)
	uint16_t DamageContextFlags; // 0x3c(0x02)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct Gobi.DamageMod
// Size: 0x1c (Inherited: 0x00)
struct FDamageMod {
	bool bIgnoreDamage; // 0x00(0x01)
	bool bApplyToWeakspots; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float AddValue; // 0x04(0x04)
	float MultValue; // 0x08(0x04)
	float PerStackAdditionalAddValue; // 0x0c(0x04)
	float PerStackAdditionalMultValue; // 0x10(0x04)
	float PermanentDamageScale; // 0x14(0x04)
	float PerStackPermanentDamageScale; // 0x18(0x04)
};

// ScriptStruct Gobi.DamageTypeDamageMod
// Size: 0xb0 (Inherited: 0x1c)
struct FDamageTypeDamageMod : FDamageMod {
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FGameplayTagQuery DamageTagQuery; // 0x20(0x48)
	struct FGameplayTagQuery InstigatorTagQuery; // 0x68(0x48)
};

// ScriptStruct Gobi.HelicopterAttachPoint
// Size: 0x10 (Inherited: 0x00)
struct FHelicopterAttachPoint {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.HeroAnimState3P
// Size: 0x28 (Inherited: 0x00)
struct FHeroAnimState3P {
	char bIsBeingRevived : 1; // 0x00(0x01)
	char bIsLedgeHanging : 1; // 0x00(0x01)
	char bIsIncapped : 1; // 0x00(0x01)
	char bWasCrouchedOnIncapEnter : 1; // 0x00(0x01)
	char bIsInjured : 1; // 0x00(0x01)
	char bStunTransition : 1; // 0x00(0x01)
	char bIsKnockedBack : 1; // 0x00(0x01)
	char bIsRevivingIncap : 1; // 0x00(0x01)
	char bIsPickingLock : 1; // 0x01(0x01)
	char bIsHelpingFromLedge : 1; // 0x01(0x01)
	char bIsPinned : 1; // 0x01(0x01)
	char bIsBeingDragged : 1; // 0x01(0x01)
	char bIsDragMoving : 1; // 0x01(0x01)
	char bUsingPlantedWeapon : 1; // 0x01(0x01)
	char bUsingMountedWeapon : 1; // 0x01(0x01)
	char bSleeperProne : 1; // 0x01(0x01)
	char bIsFiring : 1; // 0x02(0x01)
	char pad_2_1 : 7; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	enum class EHeroLedgeHangPose LedgeHangPose; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float RightHandIKAlpha; // 0x08(0x04)
	float LeftHandIKAlpha; // 0x0c(0x04)
	float AdditiveAimOffsetWeight; // 0x10(0x04)
	float MountedWeaponAimYaw; // 0x14(0x04)
	float MountedWeaponAimPitch; // 0x18(0x04)
	bool bCanLeaveIncap; // 0x1c(0x01)
	bool bValidRescueSpawnPoint; // 0x1d(0x01)
	bool bCanPlayFullBodyMontage; // 0x1e(0x01)
	bool bIsUnarmed; // 0x1f(0x01)
	enum class ERescueSpawnPointType RescueSpawnPointType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Gobi.HeroDraggedAnimData3P
// Size: 0x14 (Inherited: 0x00)
struct FHeroDraggedAnimData3P {
	char bIsTurn : 1; // 0x00(0x01)
	char bIsMove : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char DirectionIdx; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGameplayTag TurnAnimationTag; // 0x04(0x08)
	float Speed2D; // 0x0c(0x04)
	float YawCounterRotation; // 0x10(0x04)
};

// ScriptStruct Gobi.HeroAnimData3P
// Size: 0x248 (Inherited: 0x00)
struct FHeroAnimData3P {
	struct FGobiAnimationCurveData RightHandIKCurve; // 0x00(0x10)
	struct FGobiAnimationCurveData LeftHandIKCurve; // 0x10(0x10)
	struct FGobiAnimationCurveData AdditiveAimOffsetCurve; // 0x20(0x10)
	struct FGameplayTag RevivingIncapActionTag; // 0x30(0x08)
	struct FGameplayTag PickingLockActionTag; // 0x38(0x08)
	struct FGameplayTag HelpingFromLedgeActionTag; // 0x40(0x08)
	struct FGameplayTagQuery PouncedQuery; // 0x48(0x48)
	struct FGameplayTagQuery GrabbedQuery; // 0x90(0x48)
	struct FGameplayTagQuery PinnedQuery; // 0xd8(0x48)
	struct FGameplayTagQuery DraggedQuery; // 0x120(0x48)
	struct FGameplayTagQuery UsingPlantedWeaponQuery; // 0x168(0x48)
	struct FGameplayTagQuery UsingMountedWeaponQuery; // 0x1b0(0x48)
	struct FGameplayTagQuery SleeperProneQuery; // 0x1f8(0x48)
	struct FGameplayTag UnarmedStance; // 0x240(0x08)
};

// ScriptStruct Gobi.FirstPersonAdditiveState
// Size: 0x70 (Inherited: 0x00)
struct FFirstPersonAdditiveState {
	float AdditiveAnimationWeight; // 0x00(0x04)
	float ForwardMoveSpeed; // 0x04(0x04)
	float SidewaysMoveSpeed; // 0x08(0x04)
	float HipFiringNoiseWeight; // 0x0c(0x04)
	float ADSFiringNoiseWeight; // 0x10(0x04)
	float AdditiveIdleWeight; // 0x14(0x04)
	float AdditiveWalkWeight; // 0x18(0x04)
	float CrouchOffsetWeight; // 0x1c(0x04)
	float CrouchExitWeight; // 0x20(0x04)
	float SprintAimOffsetWeight; // 0x24(0x04)
	float WalkAdditivePlayRate; // 0x28(0x04)
	float AdjustedADSBlendPercent; // 0x2c(0x04)
	float OneMinusAdjustedADSBlendPercent; // 0x30(0x04)
	float JumpBaseWeight; // 0x34(0x04)
	float JumpLandWeight; // 0x38(0x04)
	bool bWantsFiringAdditives; // 0x3c(0x01)
	bool bIsMovingBackwards; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float TurnInPlaceWeight; // 0x40(0x04)
	float TurnInPlacePlayRate; // 0x44(0x04)
	float SwayYawTurnSpeed; // 0x48(0x04)
	float SwayPitchTurnSpeed; // 0x4c(0x04)
	float ADSLookSwayWeight; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
};

// ScriptStruct Gobi.HeroAnimStateFP
// Size: 0x2c (Inherited: 0x00)
struct FHeroAnimStateFP {
	char bIsKnockedBack : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	bool bCanEnterKnockback; // 0x04(0x01)
	bool bIsSprinting; // 0x05(0x01)
	bool bSprintIn; // 0x06(0x01)
	bool bSprintOut; // 0x07(0x01)
	bool bIsIncap; // 0x08(0x01)
	bool bPlayingFullbodyAnim; // 0x09(0x01)
	bool bWantsReachOutForUsable; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float LeftHandCopyBoneWeight; // 0x0c(0x04)
	float RightHandCopyBoneWeight; // 0x10(0x04)
	float SprintStateStartPos; // 0x14(0x04)
	float SprintLoopPlayRate; // 0x18(0x04)
	float ControlRotationYaw; // 0x1c(0x04)
	float ControlRotationPitch; // 0x20(0x04)
	enum class EPlayerSprintState SprintState; // 0x24(0x01)
	char pad_25[0x7]; // 0x25(0x07)
};

// ScriptStruct Gobi.LadderAnimStateFP
// Size: 0x10 (Inherited: 0x00)
struct FLadderAnimStateFP {
	bool bIsOnLadder; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AnimPlaybackRate; // 0x04(0x04)
	float ArmsYaw; // 0x08(0x04)
	float ArmsPitch; // 0x0c(0x04)
};

// ScriptStruct Gobi.HeroAnimDataFP
// Size: 0x68 (Inherited: 0x00)
struct FHeroAnimDataFP {
	struct FGobiAnimationCurveData LeftHandCopyBoneWeightCurve; // 0x00(0x10)
	struct FGobiAnimationCurveData CrouchOffsetCurve; // 0x10(0x10)
	struct FGobiAnimationCurveData AdditiveOverrideCurve; // 0x20(0x10)
	struct FGobiAnimationCurveData AdditiveIdleOverrideCurve; // 0x30(0x10)
	struct FGobiAnimationCurveData AdditiveWalkOverrideCurve; // 0x40(0x10)
	struct FVector2D JumpLandWeightMinMax; // 0x50(0x08)
	struct FVector2D JumpLandSpeedMinMax; // 0x58(0x08)
	float PlayerSprintNormalizedSpeed; // 0x60(0x04)
	float InterruptedSprintLoopPlayRate; // 0x64(0x04)
};

// ScriptStruct Gobi.WeaponAnimState
// Size: 0x44 (Inherited: 0x00)
struct FWeaponAnimState {
	float CurrentADSPercent; // 0x00(0x04)
	float OneMinusCurrentADSPercent; // 0x04(0x04)
	float ADSTransitionStartPosition; // 0x08(0x04)
	bool bIsADSActive; // 0x0c(0x01)
	bool bWantsADSAnimations; // 0x0d(0x01)
	bool bWeaponsDisabled; // 0x0e(0x01)
	bool bMaxADSPercent; // 0x0f(0x01)
	bool bZeroADSPercent; // 0x10(0x01)
	bool bIsFiring; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FGameplayTag WeaponStance; // 0x14(0x08)
	struct FVector PushbackTranslation; // 0x1c(0x0c)
	struct FRotator GunKickOffset; // 0x28(0x0c)
	char pad_34[0x10]; // 0x34(0x10)
};

// ScriptStruct Gobi.WeaponAnimData
// Size: 0x20 (Inherited: 0x00)
struct FWeaponAnimData {
	float FireIdleBlendTime; // 0x00(0x04)
	enum class EAlphaBlendOption ADSOffsetBlendOption; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UCurveFloat* ADSOffsetBlendCustomCurve; // 0x08(0x08)
	struct FGobiAnimationCurveData DisableMeshOffsetCurve; // 0x10(0x10)
};

// ScriptStruct Gobi.WeaponAnimsFP
// Size: 0x40 (Inherited: 0x00)
struct FWeaponAnimsFP {
	struct UAnimSequence* SprintEnter; // 0x00(0x08)
	struct UAnimSequence* SprintLoop; // 0x08(0x08)
	struct UAnimSequence* SprintExit; // 0x10(0x08)
	struct UAnimSequence* ADSEnter; // 0x18(0x08)
	struct UAnimSequence* ADSIdle; // 0x20(0x08)
	struct UAnimSequence* ADSExit; // 0x28(0x08)
	float SprintEnterPlayRate; // 0x30(0x04)
	float SprintExitPlayRate; // 0x34(0x04)
	float ADSEnterPlayRate; // 0x38(0x04)
	float ADSExitPlayRate; // 0x3c(0x04)
};

// ScriptStruct Gobi.acialExpressionCombos
// Size: 0x04 (Inherited: 0x00)
struct FacialExpressionCombos {
	enum class EFacialExpression FirstExpression; // 0x00(0x01)
	enum class EExpressionIntensity FirstIntensity; // 0x01(0x01)
	enum class EFacialExpression SecondExpression; // 0x02(0x01)
	enum class EExpressionIntensity SecondIntensity; // 0x03(0x01)
};

// ScriptStruct Gobi.HeroLedgeHangConfig
// Size: 0x90 (Inherited: 0x00)
struct FHeroLedgeHangConfig {
	float MinFallSpeed; // 0x00(0x04)
	float MaxFallSpeed; // 0x04(0x04)
	struct FGameplayTagQuery BlockingTagQuery; // 0x08(0x48)
	struct FGameplayTagContainer TagsToApply; // 0x50(0x20)
	struct FGameplayTag UsableComponentGameplayTag; // 0x70(0x08)
	struct UAnimMontage* ElbowClimbUpMontage; // 0x78(0x08)
	struct UAnimMontage* TwoArmsClimbUpMontage; // 0x80(0x08)
	struct UAnimMontage* OneArmClimbUpMontage; // 0x88(0x08)
};

// ScriptStruct Gobi.HeroLedgeHangData
// Size: 0x58 (Inherited: 0x00)
struct FHeroLedgeHangData {
	enum class EHeroLedgeHangState State; // 0x00(0x01)
	char pad_1[0x57]; // 0x01(0x57)
};

// ScriptStruct Gobi.HeroLedgeHangLocations
// Size: 0x48 (Inherited: 0x08)
struct FHeroLedgeHangLocations : FMovementTickableStruct {
	bool bIsValid; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector FallLocation; // 0x0c(0x0c)
	struct FRotator FallRotation; // 0x18(0x0c)
	struct FVector HangLocation; // 0x24(0x0c)
	struct FVector HangNormal; // 0x30(0x0c)
	struct FVector RescueLocation; // 0x3c(0x0c)
};

// ScriptStruct Gobi.LocomotionStance
// Size: 0x28 (Inherited: 0x00)
struct FLocomotionStance {
	struct FGameplayTag StanceTag; // 0x00(0x08)
	struct FLocoStanceAnimGraphs DefaultAnimGraphs; // 0x08(0x10)
	struct TArray<struct FLocoAnimInstanceQuery> OptionalAnimInstances; // 0x18(0x10)
};

// ScriptStruct Gobi.LocoAnimInstanceQuery
// Size: 0x58 (Inherited: 0x00)
struct FLocoAnimInstanceQuery {
	struct FGameplayTagQuery Query; // 0x00(0x48)
	struct FLocoStanceAnimGraphs AnimGraphs; // 0x48(0x10)
};

// ScriptStruct Gobi.LocoStanceAnimGraphs
// Size: 0x10 (Inherited: 0x00)
struct FLocoStanceAnimGraphs {
	struct UAnimInstance* AdditiveAnimInstance; // 0x00(0x08)
	struct UAnimInstance* LocoAnimInstance; // 0x08(0x08)
};

// ScriptStruct Gobi.MoveToTargetData
// Size: 0x10 (Inherited: 0x00)
struct FMoveToTargetData {
	struct FVector Target; // 0x00(0x0c)
	float Speed; // 0x0c(0x04)
};

// ScriptStruct Gobi.MovementForcePhysConfig
// Size: 0x0c (Inherited: 0x00)
struct FMovementForcePhysConfig {
	float ExitSpeed; // 0x00(0x04)
	float Deceleration; // 0x04(0x04)
	bool bExitOnDurationElapsed; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Gobi.MovementForceData
// Size: 0x40 (Inherited: 0x00)
struct FMovementForceData {
	struct FVector LaunchVelocity; // 0x00(0x0c)
	float Duration; // 0x0c(0x04)
	float Elapsed; // 0x10(0x04)
	float GravityScalar; // 0x14(0x04)
	struct UCurveFloat* StrengthCurve; // 0x18(0x08)
	struct FGameplayTagContainer TagsToApply; // 0x20(0x20)
};

// ScriptStruct Gobi.HarpoonData
// Size: 0x34 (Inherited: 0x00)
struct FHarpoonData {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector SlideDir; // 0x0c(0x0c)
	struct FVector Source; // 0x18(0x0c)
	bool bEndOnGround; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float HeightApplied; // 0x28(0x04)
	float Elapsed; // 0x2c(0x04)
	float Speed; // 0x30(0x04)
};

// ScriptStruct Gobi.BoneHiddenRefCount
// Size: 0x50 (Inherited: 0x00)
struct FBoneHiddenRefCount {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Gobi.HighlightState
// Size: 0x04 (Inherited: 0x00)
struct FHighlightState {
	enum class EStencilChannel Stencil; // 0x00(0x01)
	bool bPlayer1Enabled; // 0x01(0x01)
	bool bPlayer2Enabled; // 0x02(0x01)
	enum class EHighlightReceivers Receivers; // 0x03(0x01)
};

// ScriptStruct Gobi.HighlightPalette
// Size: 0x50 (Inherited: 0x00)
struct FHighlightPalette {
	struct TMap<enum class EHighlightSwatch, struct FLinearColor> Palette; // 0x00(0x50)
};

// ScriptStruct Gobi.NotificationShelfEntry
// Size: 0x168 (Inherited: 0x00)
struct FNotificationShelfEntry {
	enum class ENotificationShelfPriority Priority; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UUIScreen* AssociatedScreen; // 0x08(0x08)
	struct FText TitleText; // 0x10(0x18)
	struct FText DescriptionText; // 0x28(0x18)
	struct FDataTableRowHandle CardRowHandle; // 0x40(0x20)
	struct FString OtherPlayerName; // 0x60(0x10)
	struct UTexture2D* Icon; // 0x70(0x08)
	float TotalLifetime; // 0x78(0x04)
	bool bPartyInvite; // 0x7c(0x01)
	bool bFriendRequest; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	struct FGobiOnlineUser PendingActionUser; // 0x80(0xe8)
};

// ScriptStruct Gobi.HydraSteamUserTicket
// Size: 0x28 (Inherited: 0x00)
struct FHydraSteamUserTicket {
	struct FString UserId; // 0x00(0x10)
	struct FString Ticket; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
};

// ScriptStruct Gobi.HydraAccountChatMessage
// Size: 0x28 (Inherited: 0x00)
struct FHydraAccountChatMessage {
	char pad_0[0x10]; // 0x00(0x10)
	enum class EHydraAccountChatMessage Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Data; // 0x18(0x10)
};

// ScriptStruct Gobi.ImpactGameplayTagContainerDefinition
// Size: 0xa0 (Inherited: 0x00)
struct FImpactGameplayTagContainerDefinition {
	struct FGameplayTagContainer TagContainer; // 0x00(0x20)
	struct FImpactDefinition ImpactDefiniion; // 0x20(0x80)
};

// ScriptStruct Gobi.ImpactDefinition
// Size: 0x80 (Inherited: 0x00)
struct FImpactDefinition {
	bool UseOtherPhysMat; // 0x00(0x01)
	enum class EPhysicalSurface OtherPhysMat; // 0x01(0x01)
	bool UseOtherGameplayTag; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FGameplayTag OtherGameplayTag; // 0x04(0x08)
	float DecalSpawnChancePercent; // 0x0c(0x04)
	struct TArray<struct FImpactDecalDefinition> Decals; // 0x10(0x10)
	struct UParticleSpawnDef* ParticleSpawnDef; // 0x20(0x08)
	struct TArray<struct FImpactEmitterSet> EmitterSets; // 0x28(0x10)
	struct TArray<struct AActor*> SpawnActors; // 0x38(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffects; // 0x48(0x10)
	struct TArray<struct FImpactSourceEmitterSet> SourceItemEmitterSets; // 0x58(0x10)
	struct UWaterRipplerDef* WaterRipplerDef; // 0x68(0x08)
	struct TArray<struct FImpactAudioSet> AudioSweeteners; // 0x70(0x10)
};

// ScriptStruct Gobi.ImpactAudioSet
// Size: 0x20 (Inherited: 0x00)
struct FImpactAudioSet {
	struct TArray<struct FName> SpawnFilters; // 0x00(0x10)
	struct TArray<struct UAkAudioEvent*> AudioEvents; // 0x10(0x10)
};

// ScriptStruct Gobi.ImpactSourceEmitterSet
// Size: 0x38 (Inherited: 0x00)
struct FImpactSourceEmitterSet {
	struct TArray<struct FName> SpawnFilters; // 0x00(0x10)
	float EmitterSpawnChancePercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FImpactEmitterDefinition> Emitters; // 0x18(0x10)
	struct FName AttachToComponentTag; // 0x28(0x08)
	struct FName SocketName; // 0x30(0x08)
};

// ScriptStruct Gobi.ImpactEmitterDefinition
// Size: 0x68 (Inherited: 0x00)
struct FImpactEmitterDefinition {
	struct UParticleSystem* Emitter; // 0x00(0x08)
	bool bAttachToHitActor; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<struct FName, struct UImpactEffectConfig*> Events; // 0x10(0x50)
	bool bMaterialNormalParam; // 0x60(0x01)
	bool bMaterialLocationParam; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct Gobi.ImpactEmitterSet
// Size: 0x28 (Inherited: 0x00)
struct FImpactEmitterSet {
	struct TArray<struct FName> SpawnFilters; // 0x00(0x10)
	float EmitterSpawnChancePercent; // 0x10(0x04)
	enum class EImpactAlignment Alignment; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FImpactEmitterDefinition> Emitters; // 0x18(0x10)
};

// ScriptStruct Gobi.ImpactDecalDefinition
// Size: 0x08 (Inherited: 0x00)
struct FImpactDecalDefinition {
	struct UDecalDefinition* Definition; // 0x00(0x08)
};

// ScriptStruct Gobi.ImpactOverrideQuality
// Size: 0x0c (Inherited: 0x00)
struct FImpactOverrideQuality {
	int32_t ImpactsPerFrameMax; // 0x00(0x04)
	bool bImpactsPerFrameIsPerMaterial; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t AudioListsPerFrameMax; // 0x08(0x04)
};

// ScriptStruct Gobi.SpawnImpactArgs
// Size: 0xc4 (Inherited: 0x00)
struct FSpawnImpactArgs {
	char pad_0[0xc4]; // 0x00(0xc4)
};

// ScriptStruct Gobi.InteractiveCarAlarmMaterialParams
// Size: 0x48 (Inherited: 0x00)
struct FInteractiveCarAlarmMaterialParams {
	float AlarmMaterialIntensityIdle; // 0x00(0x04)
	float AlarmMaterialIntensityActive; // 0x04(0x04)
	struct FComponentReference MeshComponent; // 0x08(0x28)
	struct FName AlarmMaterialSlotName; // 0x30(0x08)
	struct FName AlarmMaterialParamName; // 0x38(0x08)
	struct UMaterialInstanceDynamic* AlarmMaterialInstance; // 0x40(0x08)
};

// ScriptStruct Gobi.InteractiveCarWindow
// Size: 0x38 (Inherited: 0x00)
struct FInteractiveCarWindow {
	struct UUsableComponent* Usable; // 0x00(0x08)
	struct ULootSpawnerComponent* LootSpawner; // 0x08(0x08)
	struct UMeshComponent* Mesh; // 0x10(0x08)
	struct UParticleSystemComponent* Particles; // 0x18(0x08)
	struct UAkAudioEvent* Audio; // 0x20(0x08)
	float ChanceWindowAlreadyBroken; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct Gobi.InteractiveCarDoor
// Size: 0x50 (Inherited: 0x00)
struct FInteractiveCarDoor {
	struct UUsableComponent* Usable; // 0x00(0x08)
	struct ULootSpawnerComponent* LootSpawner; // 0x08(0x08)
	struct UMeshComponent* Mesh; // 0x10(0x08)
	struct UAkAudioEvent* Audio; // 0x18(0x08)
	struct FRotator Rotation; // 0x20(0x0c)
	bool bIsTrunk; // 0x2c(0x01)
	char pad_2D[0x23]; // 0x2d(0x23)
};

// ScriptStruct Gobi.ItemAnimationDataTuning
// Size: 0x2c (Inherited: 0x00)
struct FItemAnimationDataTuning {
	struct FFirstPersonAdditiveConfig AdditiveConfig; // 0x00(0x2c)
};

// ScriptStruct Gobi.FirstPersonAdditiveConfig
// Size: 0x2c (Inherited: 0x00)
struct FFirstPersonAdditiveConfig {
	float FiringNoiseBlendInTime; // 0x00(0x04)
	float FiringNoiseBlendOutTime; // 0x04(0x04)
	float PlayerWalkNormalizedSpeed; // 0x08(0x04)
	float TurnSpeedSmoothLerpAlpha; // 0x0c(0x04)
	float TurnInPlaceMaxPlayRateSpeed; // 0x10(0x04)
	float TurnInPlaceADSAlpha; // 0x14(0x04)
	float MaxTurnSpeedForSway; // 0x18(0x04)
	struct FWeaponSwaySpringTuning SwaySpringTuningHip; // 0x1c(0x08)
	struct FWeaponSwaySpringTuning SwaySpringTuningADS; // 0x24(0x08)
};

// ScriptStruct Gobi.WeaponSwaySpringTuning
// Size: 0x08 (Inherited: 0x00)
struct FWeaponSwaySpringTuning {
	float DampingFactor; // 0x00(0x04)
	float Stiffness; // 0x04(0x04)
};

// ScriptStruct Gobi.WeaponAnimationConfig
// Size: 0x20 (Inherited: 0x00)
struct FWeaponAnimationConfig {
	struct UAnimSequence* SprintIn; // 0x00(0x08)
	struct UAnimSequence* SprintLoop; // 0x08(0x08)
	struct UAnimSequence* SprintOut; // 0x10(0x08)
	struct UAnimMontage* FirstPersonItemGrabMontage; // 0x18(0x08)
};

// ScriptStruct Gobi.ItemAkBankComponentInfo
// Size: 0x18 (Inherited: 0x00)
struct FItemAkBankComponentInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Gobi.ItemCycleTuning
// Size: 0x14 (Inherited: 0x00)
struct FItemCycleTuning {
	float RaiseStateLength; // 0x00(0x04)
	float QuickRaiseStateLength; // 0x04(0x04)
	float RaiseAnimationSettlePercent; // 0x08(0x04)
	float LowerStateLength; // 0x0c(0x04)
	float LowerAnimationLength; // 0x10(0x04)
};

// ScriptStruct Gobi.ItemCycleSpec
// Size: 0x40 (Inherited: 0x00)
struct FItemCycleSpec {
	struct UAnimMontage* AnimationFP; // 0x00(0x08)
	struct UAnimMontage* FirstTimeAnimationFP; // 0x08(0x08)
	struct UAnimMontage* Animation3P; // 0x10(0x08)
	struct UAkAudioEvent* AudioEvent; // 0x18(0x08)
	struct FGameplayTagContainer AppliedTags; // 0x20(0x20)
};

// ScriptStruct Gobi.ItemObservableToolTipOverride
// Size: 0x60 (Inherited: 0x00)
struct FItemObservableToolTipOverride {
	struct FText ItemCategory; // 0x00(0x18)
	struct FText ItemName; // 0x18(0x18)
	struct FText TooltipDescription; // 0x30(0x18)
	struct FText CalloutText; // 0x48(0x18)
};

// ScriptStruct Gobi.ItemObservableState
// Size: 0x20 (Inherited: 0x00)
struct FItemObservableState {
	struct AActor* TargetPlayer; // 0x00(0x08)
	struct UHeroUseComponent* HeroUseComponent; // 0x08(0x08)
	struct UItemPickupToolTipUserWidget* Widget; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Gobi.TooltipPerk
// Size: 0x28 (Inherited: 0x00)
struct FTooltipPerk {
	struct FDataTableRowHandle PerkRow; // 0x00(0x20)
	enum class EItemComparison Comparison; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Gobi.PerkItemRow
// Size: 0x300 (Inherited: 0x2c8)
struct FPerkItemRow : FItemRow {
	enum class EPerkCategory PerkCategory; // 0x2c8(0x01)
	enum class EBuffType BuffType; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct TArray<struct UGameplayEffect*> PerkAppliedEffects; // 0x2d0(0x10)
	struct FDataTableRowHandle CorrespondingBuffDebuff; // 0x2e0(0x20)
};

// ScriptStruct Gobi.LadderMovementModeConfig
// Size: 0x1b8 (Inherited: 0x00)
struct FLadderMovementModeConfig {
	float MinFacingDot; // 0x00(0x04)
	float MinMovingDot; // 0x04(0x04)
	float MinFastDescendFacingDot; // 0x08(0x04)
	float MinFastDescendMovingDot; // 0x0c(0x04)
	float MoveUpMinPitch; // 0x10(0x04)
	float MoveDownMaxPitch; // 0x14(0x04)
	struct FGamePropertyFloat AscendSpeed; // 0x18(0x38)
	struct FGamePropertyFloat DescendSpeed; // 0x50(0x38)
	float FastDescendSpeed; // 0x88(0x04)
	float ApproachSpeed; // 0x8c(0x04)
	float DismountSpeed; // 0x90(0x04)
	float DismountDistance; // 0x94(0x04)
	bool bRootMotionEnabled; // 0x98(0x01)
	bool bThirdPersonMode; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float MaxLookYaw; // 0x9c(0x04)
	float MaxLookYawFadeInTime; // 0xa0(0x04)
	bool bUseCustomDismountOffset; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float CustomDismountOffset; // 0xa8(0x04)
	float InAirLadderUseDistance; // 0xac(0x04)
	struct FGameplayTagQuery LadderTagQuery; // 0xb0(0x48)
	struct FGameplayTagQuery BlockingTagQuery; // 0xf8(0x48)
	struct FGameplayTagContainer TagsToApplyOnLadder; // 0x140(0x20)
	struct FGameplayTagContainer TagsToApplyWhenOccluded; // 0x160(0x20)
	struct FCameraViewModifier ViewModifier; // 0x180(0x38)
};

// ScriptStruct Gobi.LadderMovementModeData
// Size: 0x4c (Inherited: 0x00)
struct FLadderMovementModeData {
	enum class ELadderMovementModeState State; // 0x00(0x01)
	char pad_1[0x1b]; // 0x01(0x1b)
	struct FVector LadderForward; // 0x1c(0x0c)
	char pad_28[0x24]; // 0x28(0x24)
};

// ScriptStruct Gobi.LaserSightConfig
// Size: 0x38 (Inherited: 0x00)
struct FLaserSightConfig {
	struct UParticleSystem* LaserDotParticle; // 0x00(0x08)
	float TraceDistance; // 0x08(0x04)
	enum class EAxis StretchAxis; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float NormalizedStretchDistance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UStaticMesh* LaserBeamMesh; // 0x18(0x08)
	struct FGameplayTag MeshAttachComponentTag; // 0x20(0x08)
	struct FName MeshAttachSocketName; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Gobi.LeaderboardData
// Size: 0x18 (Inherited: 0x00)
struct FLeaderboardData {
	int32_t Rank; // 0x00(0x04)
	int32_t Score; // 0x04(0x04)
	struct FString PlayerName; // 0x08(0x10)
};

// ScriptStruct Gobi.PlayerLeapConfig
// Size: 0x88 (Inherited: 0x00)
struct FPlayerLeapConfig {
	float MaxTrajectorySimTime; // 0x00(0x04)
	bool bUsesSecondaryButton; // 0x04(0x01)
	bool bSetDesiredWallGrabLocation; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct AActor* WallGrabVisualizer; // 0x08(0x08)
	struct FLinearColor ReticleTrajectoryNonGrabColor; // 0x10(0x10)
	struct FLinearColor ReticleTrajectoryGrabColor; // 0x20(0x10)
	float ReticleTrajectoryDownZOffset; // 0x30(0x04)
	float ReticleTrajectoryDownForwardOffset; // 0x34(0x04)
	float InterpTrajectoryToImpactLocationIfHeightDifferenceAbove; // 0x38(0x04)
	bool bDisableControllerRotationYaw; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MovementInputScale; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct AGobiReticle* TargetReticle; // 0x48(0x08)
	struct FCameraViewModifier ViewModifier; // 0x50(0x38)
};

// ScriptStruct Gobi.GameModeStreamingVolumes
// Size: 0x28 (Inherited: 0x00)
struct FGameModeStreamingVolumes {
	struct TArray<struct ALevelStreamingVolume*> StreamingLevelVolumes; // 0x00(0x10)
	struct TArray<struct ALevelStreamingVolume*> StreamingSaferoomVolumes; // 0x10(0x10)
	uint32_t SupportedGameModes; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.GameModeStreamingVolume
// Size: 0x10 (Inherited: 0x00)
struct FGameModeStreamingVolume {
	struct ALevelStreamingVolume* StreamingLevelVolume; // 0x00(0x08)
	uint32_t SupportedGameModes; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.CardStreamingVolumes
// Size: 0x28 (Inherited: 0x00)
struct FCardStreamingVolumes {
	struct TArray<struct ALevelStreamingVolume*> ExistStreamingLevelVolumes; // 0x00(0x10)
	struct TArray<struct ALevelStreamingVolume*> MissingStreamingLevelVolumes; // 0x10(0x10)
	struct FName Key; // 0x20(0x08)
};

// ScriptStruct Gobi.CardDependentStreamingVolume
// Size: 0x18 (Inherited: 0x00)
struct FCardDependentStreamingVolume {
	struct ALevelStreamingVolume* StreamingLevelVolume; // 0x00(0x08)
	struct FName Key; // 0x08(0x08)
	bool bDoNotLoadIfKeyExists; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.LifeStateChangeInfo
// Size: 0x10 (Inherited: 0x00)
struct FLifeStateChangeInfo {
	struct FGameplayTag LifeStateTag; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> ChangeInstigator; // 0x08(0x08)
};

// ScriptStruct Gobi.ReviveInfo
// Size: 0x14 (Inherited: 0x00)
struct FReviveInfo {
	float NewHealth; // 0x00(0x04)
	float NewPermanentHealth; // 0x04(0x04)
	int32_t IncapStrikesToReturn; // 0x08(0x04)
	struct FGameplayTag ReviveSourceTag; // 0x0c(0x08)
};

// ScriptStruct Gobi.LifeStateMap
// Size: 0x10 (Inherited: 0x00)
struct FLifeStateMap {
	struct FGameplayTag LifeStateTag; // 0x00(0x08)
	struct ULifeStateBase* LifeState; // 0x08(0x08)
};

// ScriptStruct Gobi.LifeStateTransitionRuleHealth
// Size: 0x10 (Inherited: 0x00)
struct FLifeStateTransitionRuleHealth {
	struct FGameplayTag LifeStateTag; // 0x00(0x08)
	enum class ELifeStateTransitionCompare HealthCompare; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HealthPercent; // 0x0c(0x04)
};

// ScriptStruct Gobi.LoadoutCharacterOverride
// Size: 0x58 (Inherited: 0x00)
struct FLoadoutCharacterOverride {
	struct FDataTableRowHandle CharacterRowHandle; // 0x00(0x20)
	struct FInventoryLoadout Loadout; // 0x20(0x38)
};

// ScriptStruct Gobi.LocoLeaning
// Size: 0x0c (Inherited: 0x00)
struct FLocoLeaning {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LeanPercent; // 0x04(0x04)
	float MaxLeanInputDeltaAngle; // 0x08(0x04)
};

// ScriptStruct Gobi.LocomotionPrediction
// Size: 0x68 (Inherited: 0x00)
struct FLocomotionPrediction {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartTransitionDistance; // 0x04(0x04)
	float PostPivotTransitionDistance; // 0x08(0x04)
	bool bCanTransitionFromStart; // 0x0c(0x01)
	bool bCanTransitionFromPivot; // 0x0d(0x01)
	bool bIsPivoting; // 0x0e(0x01)
	enum class EAnimPredictType PredictType; // 0x0f(0x01)
	struct FVector MarkerLocation; // 0x10(0x0c)
	float DistanceToMarker; // 0x1c(0x04)
	struct FVector PrevLocation; // 0x20(0x0c)
	struct FVector PrevAcceleration; // 0x2c(0x0c)
	struct FVector PrevVelocity; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct UGobiAnimInstance* AnimInstance; // 0x48(0x08)
	struct UGobiCharacterMovementComponent* MovementComponent; // 0x50(0x08)
	struct FName DistanceCurveName; // 0x58(0x08)
	float DistanceRemaining; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Gobi.LocoTurnInPlace
// Size: 0xb0 (Inherited: 0x00)
struct FLocoTurnInPlace {
	char bIsTurning : 1; // 0x00(0x01)
	char bShouldTurn : 1; // 0x00(0x01)
	char bInTurnState : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RelativeFacingAngle; // 0x04(0x04)
	float RelativeFacingAngleProcessed; // 0x08(0x04)
	struct FGameplayTag CurrentTurnAnimationTag; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FLocoTurnInPlaceThreshold> Thresholds; // 0x18(0x10)
	float ErrorTolerance; // 0x28(0x04)
	float MaxTurnDelta; // 0x2c(0x04)
	struct FGameplayTagQuery TurnInPlaceTagQuery; // 0x30(0x48)
	float ActorYaw; // 0x78(0x04)
	float LastActorYaw; // 0x7c(0x04)
	float RemainingTurnAngle; // 0x80(0x04)
	char pad_84[0x2c]; // 0x84(0x2c)
};

// ScriptStruct Gobi.LocoTurnInPlaceThreshold
// Size: 0x1c (Inherited: 0x00)
struct FLocoTurnInPlaceThreshold {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AngleThreshold; // 0x04(0x04)
	float TurnDelay; // 0x08(0x04)
	struct FGameplayTag RightTurnTag; // 0x0c(0x08)
	struct FGameplayTag LeftTurnTag; // 0x14(0x08)
};

// ScriptStruct Gobi.LookInputHandler
// Size: 0xa0 (Inherited: 0x00)
struct FLookInputHandler {
	struct FMouseInputSettings MouseSettings; // 0x00(0x08)
	struct FGamepadInputSettings GamepadSettings; // 0x08(0x1c)
	char pad_24[0x7c]; // 0x24(0x7c)
};

// ScriptStruct Gobi.GamepadInputSettings
// Size: 0x1c (Inherited: 0x00)
struct FGamepadInputSettings {
	float LookRate; // 0x00(0x04)
	float ExtraSensitivityDeflectionThreshold; // 0x04(0x04)
	float ExtraSensitivityActivationDelay; // 0x08(0x04)
	float ExtraSensitivityBlendInTime; // 0x0c(0x04)
	float ExtraSensitivityBlendOutTime; // 0x10(0x04)
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct Gobi.MouseInputSettings
// Size: 0x08 (Inherited: 0x00)
struct FMouseInputSettings {
	float LookScale; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
};

// ScriptStruct Gobi.LookInputRotationClamp
// Size: 0x10 (Inherited: 0x00)
struct FLookInputRotationClamp {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Gobi.LootScenarioItemMaintenance
// Size: 0x20 (Inherited: 0x00)
struct FLootScenarioItemMaintenance {
	struct FGameplayTag ItemTag; // 0x00(0x08)
	bool bDifficultyOverride; // 0x08(0x01)
	enum class EMissionDifficulty Difficulty; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t Maintenance; // 0x0c(0x04)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Gobi.LootSpawnCountModifier
// Size: 0x10 (Inherited: 0x00)
struct FLootSpawnCountModifier {
	struct TArray<struct FLootSpawnConfig> SpawnConfigs; // 0x00(0x10)
};

// ScriptStruct Gobi.LootSpawnConfig
// Size: 0x20 (Inherited: 0x00)
struct FLootSpawnConfig {
	struct FGameplayTag LootTag; // 0x00(0x08)
	struct FSpawnCountRange SpawnCountRange; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	bool bExplicit; // 0x14(0x01)
	bool bIgnoreRequired; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FGameplayTag SpawnerRequiredTag; // 0x18(0x08)
};

// ScriptStruct Gobi.SpawnCountRange
// Size: 0x08 (Inherited: 0x00)
struct FSpawnCountRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Gobi.LootCategoryInfo
// Size: 0x28 (Inherited: 0x00)
struct FLootCategoryInfo {
	struct TArray<struct FSpawnCountRange> SpawnRanges; // 0x00(0x10)
	struct FSpawnCountRange BaseRange; // 0x10(0x08)
	int32_t BasePool; // 0x18(0x04)
	int32_t ModPool; // 0x1c(0x04)
	int32_t TotalPool; // 0x20(0x04)
	int32_t TotalSpawned; // 0x24(0x04)
};

// ScriptStruct Gobi.LootSystemMapChainConfig
// Size: 0x18 (Inherited: 0x08)
struct FLootSystemMapChainConfig : FTableRowBase {
	struct TArray<struct FLootSystemConfig> SystemConfigs; // 0x08(0x10)
};

// ScriptStruct Gobi.LootSystemConfig
// Size: 0xa0 (Inherited: 0x00)
struct FLootSystemConfig {
	struct ULootSpawnConfigAsset* LootConfig; // 0x00(0x08)
	struct ULootSpawnConfigAsset* LootConfigPVPClassic; // 0x08(0x08)
	struct ULootSpawnConfigAsset* LootConfigPVPHoldout; // 0x10(0x08)
	struct ULootSpawnConfigAsset* TradeShowLootConfig; // 0x18(0x08)
	struct ULootSpawnConfigAsset* TradeShowLootConfigPVPClassic; // 0x20(0x08)
	struct ULootSpawnConfigAsset* TradeShowLootConfigPVPHoldout; // 0x28(0x08)
	struct FGamePropertyFloat TreasureRoomsMin; // 0x30(0x38)
	struct FGamePropertyFloat TreasureRoomsMax; // 0x68(0x38)
};

// ScriptStruct Gobi.RuntimeSpawnCountModifier
// Size: 0x18 (Inherited: 0x00)
struct FRuntimeSpawnCountModifier {
	int32_t NumApplied; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRolledLootPool> Pools; // 0x08(0x10)
};

// ScriptStruct Gobi.RolledLootPool
// Size: 0x0c (Inherited: 0x00)
struct FRolledLootPool {
	struct FGameplayTag LootTag; // 0x00(0x08)
	int32_t TotalPool; // 0x08(0x04)
};

// ScriptStruct Gobi.LootUpgradeConfig
// Size: 0xc0 (Inherited: 0x00)
struct FLootUpgradeConfig {
	struct FGameplayTagContainer UpgradeTags; // 0x00(0x20)
	struct FGameplayTagQuery ItemQuery; // 0x20(0x48)
	struct FGameplayTagQuery SpawnerQuery; // 0x68(0x48)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// ScriptStruct Gobi.LootCategoryPercentage
// Size: 0x10 (Inherited: 0x00)
struct FLootCategoryPercentage {
	struct FGameplayTag LootCategory; // 0x00(0x08)
	struct FSpawnPercentage PercentOfGlobalPoolToSpawn; // 0x08(0x08)
};

// ScriptStruct Gobi.SpawnPercentage
// Size: 0x08 (Inherited: 0x00)
struct FSpawnPercentage {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct Gobi.RolledLootSpec
// Size: 0x0c (Inherited: 0x00)
struct FRolledLootSpec {
	struct FGameplayTag LootTag; // 0x00(0x08)
	int32_t NumToSpawn; // 0x08(0x04)
};

// ScriptStruct Gobi.DebugLootSpawnCountMod
// Size: 0x20 (Inherited: 0x00)
struct FDebugLootSpawnCountMod {
	int32_t Count; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ULootSpawnCountMod* Mod; // 0x08(0x08)
	struct TArray<struct FRolledLootPool> RolledPools; // 0x10(0x10)
};

// ScriptStruct Gobi.DebugLootCategoryInfo
// Size: 0x30 (Inherited: 0x00)
struct FDebugLootCategoryInfo {
	struct FGameplayTag LootTag; // 0x00(0x08)
	struct FLootCategoryInfo CategoryInfo; // 0x08(0x28)
};

// ScriptStruct Gobi.MantleClimbHeightConfig
// Size: 0x30 (Inherited: 0x00)
struct FMantleClimbHeightConfig {
	float ClimbHeightMin; // 0x00(0x04)
	float ClimbHeightMax; // 0x04(0x04)
	float RequiredDepthBelow; // 0x08(0x04)
	struct FMantleProceduralClimbParameters ProceduralClimbingParameters; // 0x0c(0x0c)
	bool bAllowThirdPersonAnimationControl; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float AnimatedClimbTimeOverride; // 0x1c(0x04)
	bool bRetainDismountSpeedAfterAnimation; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCameraShake* CameraShake; // 0x28(0x08)
};

// ScriptStruct Gobi.MantleProceduralClimbParameters
// Size: 0x0c (Inherited: 0x00)
struct FMantleProceduralClimbParameters {
	float VerticalClimbSpeed; // 0x00(0x04)
	float HorizontalClimbSpeed; // 0x04(0x04)
	float ClimbingDismountSpeed; // 0x08(0x04)
};

// ScriptStruct Gobi.MantleMontageConfig
// Size: 0xc8 (Inherited: 0x00)
struct FMantleMontageConfig {
	struct TArray<struct FMantleHeightDefinition> MantleDefinitions; // 0x00(0x10)
	struct FGameplayTagContainer AppliedTags; // 0x10(0x20)
	struct FGameplayTagQuery CancelTags; // 0x30(0x48)
	bool bUseMantleTargetLedgePos; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FCameraViewModifier ViewModifier; // 0x80(0x38)
	float ViewModHeightRequirement; // 0xb8(0x04)
	bool bUseMantleCollisionProfile; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FCollisionProfileName MantleCollisionProfile; // 0xc0(0x08)
};

// ScriptStruct Gobi.MantleHeightDefinition
// Size: 0x20 (Inherited: 0x00)
struct FMantleHeightDefinition {
	struct TArray<struct UAnimMontage*> MantleMontages; // 0x00(0x10)
	float DistanceToStartMontage; // 0x10(0x04)
	float PlayOnTotalMantleDistance; // 0x14(0x04)
	float MantleDestinationDistanceForgiveness; // 0x18(0x04)
	float MantleTimeOverride; // 0x1c(0x04)
};

// ScriptStruct Gobi.MapMetricData
// Size: 0x38 (Inherited: 0x00)
struct FMapMetricData {
	struct FString MapName; // 0x00(0x10)
	struct TArray<struct FClimbMetric> ClimbMetrics; // 0x10(0x10)
	struct TArray<struct FJumpMetric> JumpMetrics; // 0x20(0x10)
	int32_t NumOfClimbs; // 0x30(0x04)
	int32_t NumOfJumps; // 0x34(0x04)
};

// ScriptStruct Gobi.JumpMetric
// Size: 0x0c (Inherited: 0x00)
struct FJumpMetric {
	int32_t Count; // 0x00(0x04)
	float Horizontal; // 0x04(0x04)
	float Vertical; // 0x08(0x04)
};

// ScriptStruct Gobi.ClimbMetric
// Size: 0x10 (Inherited: 0x00)
struct FClimbMetric {
	int32_t Count; // 0x00(0x04)
	float ClimbUp; // 0x04(0x04)
	float Top; // 0x08(0x04)
	float ClimbDown; // 0x0c(0x04)
};

// ScriptStruct Gobi.MapMusicBehaviorRow
// Size: 0x150 (Inherited: 0x08)
struct FMapMusicBehaviorRow : FTableRowBase {
	bool bPushWwiseGameSyncs; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<struct FName, struct FName> MusicSwitchesToApplyOnEnter; // 0x10(0x50)
	struct TMap<struct FName, struct FName> StatesToApplyOnEnter; // 0x60(0x50)
	struct TMap<struct FName, struct FName> MusicSwitchesToApplyOnExit; // 0xb0(0x50)
	struct TMap<struct FName, struct FName> StatesToApplyOnExit; // 0x100(0x50)
};

// ScriptStruct Gobi.OnlineMap
// Size: 0x178 (Inherited: 0x08)
struct FOnlineMap : FTableRowBase {
	struct FName Slug; // 0x08(0x08)
	enum class EGobiMapDevEnvType DevEnv; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FFilePath Path; // 0x18(0x10)
	char GameModes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSet<enum class EMissionDifficulty> StartingPoints; // 0x30(0x50)
	bool bLastMapInChain; // 0x80(0x01)
	bool bAvailableDuringChunkInstall; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FText MapChainName; // 0x88(0x18)
	struct FText MapName; // 0xa0(0x18)
	struct FText MissionNumber; // 0xb8(0x18)
	struct TSoftObjectPtr<UTexture2D> MapOverviewTexture; // 0xd0(0x28)
	struct FString PresenceName; // 0xf8(0x10)
	struct FString ActivityID; // 0x108(0x10)
	struct FString ActivityTaskID; // 0x118(0x10)
	struct FString ActivitySubTaskID; // 0x128(0x10)
	struct FDataTableRowHandle PreRoundCinematic; // 0x138(0x20)
	struct FDataTableRowHandle PostRoundCinematic; // 0x158(0x20)
};

// ScriptStruct Gobi.MatchmakingRemoveParticipantsTaskData
// Size: 0x28 (Inherited: 0x00)
struct FMatchmakingRemoveParticipantsTaskData {
	int32_t ControllerId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SessionId; // 0x08(0x10)
	struct TArray<struct FGobiSessionUser> Users; // 0x18(0x10)
};

// ScriptStruct Gobi.MatchmakingJoinExistingSessionTaskData
// Size: 0x28 (Inherited: 0x00)
struct FMatchmakingJoinExistingSessionTaskData {
	struct FString SessionId; // 0x00(0x10)
	struct FString SessionCluster; // 0x10(0x10)
	int32_t ControllerId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.MatchmakingSessionDataTaskData
// Size: 0x20 (Inherited: 0x00)
struct FMatchmakingSessionDataTaskData {
	struct FString SessionId; // 0x00(0x10)
	struct FString JsonString; // 0x10(0x10)
};

// ScriptStruct Gobi.MatchmakingUserDataTaskData
// Size: 0x28 (Inherited: 0x00)
struct FMatchmakingUserDataTaskData {
	struct FString SessionId; // 0x00(0x10)
	struct FString JsonString; // 0x10(0x10)
	int32_t ControllerId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.MatchmakingReconnectSettings
// Size: 0x68 (Inherited: 0x00)
struct FMatchmakingReconnectSettings {
	struct FString PrimaryUserId; // 0x00(0x10)
	int32_t PrimaryUserNonce; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SecondaryUserId; // 0x18(0x10)
	int32_t SecondaryUserNonce; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDateTime Timestamp; // 0x30(0x08)
	struct FString GroupSessionId; // 0x38(0x10)
	struct FString GameSessionId; // 0x48(0x10)
	struct FString Team; // 0x58(0x10)
};

// ScriptStruct Gobi.MatchmakingSavedSettings
// Size: 0x28 (Inherited: 0x00)
struct FMatchmakingSavedSettings {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UiBucket; // 0x08(0x10)
	struct FString AtuinEnvironment; // 0x18(0x10)
};

// ScriptStruct Gobi.AnalyticsMatchmakingTracker
// Size: 0xb0 (Inherited: 0x00)
struct FAnalyticsMatchmakingTracker {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Gobi.SignInProgress
// Size: 0x18 (Inherited: 0x00)
struct FSignInProgress {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Gobi.MatchmakingPoolConfig
// Size: 0x48 (Inherited: 0x00)
struct FMatchmakingPoolConfig {
	struct FString Name; // 0x00(0x10)
	int32_t MinUnknowns; // 0x10(0x04)
	int32_t MaxUnknowns; // 0x14(0x04)
	int32_t MinTeamA; // 0x18(0x04)
	int32_t MaxTeamA; // 0x1c(0x04)
	int32_t MinTeamB; // 0x20(0x04)
	int32_t MaxTeamB; // 0x24(0x04)
	bool bBackfill; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString GameMode; // 0x30(0x10)
	bool bTeamSwap; // 0x40(0x01)
	enum class EGobiMapGameModesType GameModeType; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Gobi.UIMatchmakingPrefs
// Size: 0x03 (Inherited: 0x00)
struct FUIMatchmakingPrefs {
	bool bIsPrivate; // 0x00(0x01)
	bool bIsCrossplay; // 0x01(0x01)
	enum class EMatchmakingVoicePreference VoicePreference; // 0x02(0x01)
};

// ScriptStruct Gobi.MatchmakingPreferenceData
// Size: 0x01 (Inherited: 0x00)
struct FMatchmakingPreferenceData {
	enum class EMatchmakingVoicePreference VoicePreference; // 0x00(0x01)
};

// ScriptStruct Gobi.MatchmakingUIState
// Size: 0x3e8 (Inherited: 0x00)
struct FMatchmakingUIState {
	bool bActive; // 0x00(0x01)
	enum class EOnlineMode OnlineMode; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString BuildId; // 0x08(0x10)
	struct FString AtuinEnvironment; // 0x18(0x10)
	struct FString HomeRegion; // 0x28(0x10)
	struct FString BestPoolSessionId; // 0x38(0x10)
	struct FGobiSession PartySession; // 0x48(0xe0)
	struct FGobiSession SplitscreenSession; // 0x128(0xe0)
	struct FGobiSession GroupSession; // 0x208(0xe0)
	struct FGobiSession GameSession; // 0x2e8(0xe0)
	struct TArray<struct FGobiSession> OtherSessions; // 0x3c8(0x10)
	bool bServerConnectionProblem; // 0x3d8(0x01)
	char pad_3D9[0xf]; // 0x3d9(0x0f)
};

// ScriptStruct Gobi.RawSessionId
// Size: 0x10 (Inherited: 0x00)
struct FRawSessionId {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct Gobi.MeshMaterialParamValueMapper
// Size: 0x28 (Inherited: 0x00)
struct FMeshMaterialParamValueMapper {
	struct TArray<struct FName> MaterialSlotNames; // 0x00(0x10)
	struct FName MaterialParam; // 0x10(0x08)
	struct FVector2D Range; // 0x18(0x08)
	struct FVector2D MaterialValue; // 0x20(0x08)
};

// ScriptStruct Gobi.StaticMeshConfig
// Size: 0xb0 (Inherited: 0x00)
struct FStaticMeshConfig {
	struct FMeshTraitConfig MeshConfig; // 0x00(0xa0)
	struct UStaticMesh* StaticMesh; // 0xa0(0x08)
	struct UStaticMeshComponent* ComponentClass; // 0xa8(0x08)
};

// ScriptStruct Gobi.MeshTraitConfig
// Size: 0xa0 (Inherited: 0x00)
struct FMeshTraitConfig {
	enum class EActorRole CheckForMeshOn; // 0x00(0x01)
	enum class EActorRole AttachNewComponentTo; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGameplayTag ComponentGameplayTag; // 0x04(0x08)
	struct FGameplayTag ParentComponentGameplayTag; // 0x0c(0x08)
	struct FName SocketName; // 0x14(0x08)
	enum class EAttachmentRule AttachmentRule; // 0x1c(0x01)
	bool bRelativeTransform; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FTransform RelativeTransform; // 0x20(0x30)
	bool bInWeldSimulatedBodies; // 0x50(0x01)
	bool bOverrideCollisionProfile; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	struct FCollisionProfileName CollisionProfileOverrideName; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FGameplayTagContainer AdditionalComponentTags; // 0x60(0x20)
	struct FMeshLightingOverrides LightingOverrides; // 0x80(0x04)
	struct FMeshRenderingOverrides RenderingOverrides; // 0x84(0x10)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Gobi.MeshRenderingOverrides
// Size: 0x10 (Inherited: 0x00)
struct FMeshRenderingOverrides {
	bool bRenderCustomDepthPass; // 0x00(0x01)
	enum class EMeshBoolApplicationType HiddenInGame; // 0x01(0x01)
	enum class EMeshBoolApplicationType Visible; // 0x02(0x01)
	enum class EMeshBoolApplicationType OwnerNoSee; // 0x03(0x01)
	enum class EMeshBoolApplicationType OnlyOwnerSee; // 0x04(0x01)
	enum class EMeshBoolApplicationType OverrideLODSettings; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t ForceLODLevel; // 0x08(0x04)
	int32_t MinLODLevel; // 0x0c(0x04)
};

// ScriptStruct Gobi.MeshLightingOverrides
// Size: 0x04 (Inherited: 0x00)
struct FMeshLightingOverrides {
	enum class EMeshBoolApplicationType CastsShadow; // 0x00(0x01)
	enum class EMeshBoolApplicationType SelfShadow; // 0x01(0x01)
	enum class EMeshBoolApplicationType OverrideLightingChannels; // 0x02(0x01)
	struct FLightingChannels LightingChannels; // 0x03(0x01)
};

// ScriptStruct Gobi.SkeletalMeshConfig
// Size: 0xc0 (Inherited: 0x00)
struct FSkeletalMeshConfig {
	struct FMeshTraitConfig MeshConfig; // 0x00(0xa0)
	struct USkeletalMesh* SkeletalMesh; // 0xa0(0x08)
	bool bUseParentMasterPose; // 0xa8(0x01)
	bool bSyncAttachParentLOD; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct USkeletalMeshComponent* ComponentClass; // 0xb0(0x08)
	struct UAnimInstance* AnimClass; // 0xb8(0x08)
};

// ScriptStruct Gobi.MeshMaterialParamValuesSet
// Size: 0x10 (Inherited: 0x00)
struct FMeshMaterialParamValuesSet {
	struct TArray<struct FMeshMaterialParamValue> ParamValues; // 0x00(0x10)
};

// ScriptStruct Gobi.MeshMaterialParamValue
// Size: 0x80 (Inherited: 0x00)
struct FMeshMaterialParamValue {
	struct FName Name; // 0x00(0x08)
	enum class EMaterialParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor LinearColor; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FLinearColor> LinearColors; // 0x20(0x10)
	struct FColor Color; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FColor> Colors; // 0x38(0x10)
	float Scalar; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<float> Scalars; // 0x50(0x10)
	struct UTexture* Texture; // 0x60(0x08)
	struct TArray<struct UTexture*> Textures; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Gobi.MeshMaterialConfig
// Size: 0x58 (Inherited: 0x00)
struct FMeshMaterialConfig {
	struct FGameplayTag MeshComponentTag; // 0x00(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> SlotsToSet; // 0x08(0x50)
};

// ScriptStruct Gobi.MicroManagerDefault
// Size: 0x10 (Inherited: 0x00)
struct FMicroManagerDefault {
	struct UMicroManagerMod* Mod; // 0x00(0x08)
	bool bDifficultyOverride; // 0x08(0x01)
	enum class EMissionDifficulty Difficulty; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Gobi.AutoStartMapMission
// Size: 0x20 (Inherited: 0x00)
struct FAutoStartMapMission {
	struct FDataTableRowHandle MissionHandle; // 0x00(0x20)
};

// ScriptStruct Gobi.FlatChapter
// Size: 0x30 (Inherited: 0x08)
struct FFlatChapter : FTableRowBase {
	struct FName ChapterName; // 0x08(0x08)
	struct FText ChapterDisplayName; // 0x10(0x18)
	bool bDevChapter; // 0x28(0x01)
	bool bLocked; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Gobi.FlatMission
// Size: 0xe8 (Inherited: 0x08)
struct FFlatMission : FTableRowBase {
	struct FDataTableRowHandle OwningChapter; // 0x08(0x20)
	struct FDataTableRowHandle MissionSublevelData; // 0x28(0x20)
	enum class EMissionType MissionType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FDataTableRowHandle LastMissionObjective; // 0x50(0x20)
	struct FText MissionDisplayName; // 0x70(0x18)
	struct TArray<struct FItemRowAndQuantity> Rewards; // 0x88(0x10)
	struct TArray<struct FDataTableRowHandle> PrereqMissions; // 0x98(0x10)
	bool ShowInHUDMissionList; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FDataTableRowHandle> StaticAIDirectorCards; // 0xb0(0x10)
	struct TArray<struct FDataTableRowHandle> DynamicAIDirectorCards; // 0xc0(0x10)
	struct TArray<struct FGameplayTag> TaggedDifficultyRollsToSkip; // 0xd0(0x10)
	enum class EGobiTeam RequiredTeam; // 0xe0(0x01)
	bool bPreventCatchup; // 0xe1(0x01)
	bool bAllowDefaultRespawnBehavior; // 0xe2(0x01)
	char pad_E3[0x5]; // 0xe3(0x05)
};

// ScriptStruct Gobi.FlatMissionObjective
// Size: 0x1f8 (Inherited: 0x08)
struct FFlatMissionObjective : FTableRowBase {
	struct FDataTableRowHandle OwningMission; // 0x08(0x20)
	struct UTexture2D* WaypointIcon; // 0x28(0x08)
	struct FText ObjectiveDisplayFormat; // 0x30(0x18)
	int32_t InitialCount; // 0x48(0x04)
	int32_t FinalCount; // 0x4c(0x04)
	float TimerStart; // 0x50(0x04)
	float TimerEnd; // 0x54(0x04)
	bool TimerEndFailsObjective; // 0x58(0x01)
	bool TimerStartsPaused; // 0x59(0x01)
	bool AutoComplete; // 0x5a(0x01)
	bool Optional; // 0x5b(0x01)
	bool ShowInHUDObjectiveList; // 0x5c(0x01)
	bool ShowInHUDMissionTip; // 0x5d(0x01)
	bool HideWhenCompleted; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	struct UTexture2D* HUDMissionTipIcon; // 0x60(0x08)
	struct UTexture2D* ObjectiveIconOverride; // 0x68(0x08)
	struct FSlateColor ObjectiveColorOverride; // 0x70(0x30)
	struct TArray<struct FItemRowAndQuantity> Rewards; // 0xa0(0x10)
	struct TArray<struct FDataTableRowHandle> PrereqObjectives; // 0xb0(0x10)
	struct FDataTableRowHandle ObjectiveStartDialogue; // 0xc0(0x20)
	struct FDataTableRowHandle ObjectiveEndDialogue; // 0xe0(0x20)
	struct TMap<enum class EObjectiveState, struct UAkAudioEvent*> StateToAudioEvent; // 0x100(0x50)
	struct TMap<int32_t, struct FDataTableRowHandle> ObjectiveHintDialogue; // 0x150(0x50)
	struct TMap<int32_t, struct FDataTableRowHandle> ObjectiveCountDialogue; // 0x1a0(0x50)
	bool ShowWaypointWhenCompleted; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
};

// ScriptStruct Gobi.MissionSublevelData
// Size: 0x28 (Inherited: 0x08)
struct FMissionSublevelData : FTableRowBase {
	struct TArray<struct FName> RequiredSublevels; // 0x08(0x10)
	struct TArray<struct FName> RequestedSublevels; // 0x18(0x10)
};

// ScriptStruct Gobi.WeaponDamageTrackingData
// Size: 0x20 (Inherited: 0x00)
struct FWeaponDamageTrackingData {
	struct FDataTableRowHandle ObjectiveHandle; // 0x00(0x20)
};

// ScriptStruct Gobi.KillTrackingData
// Size: 0x20 (Inherited: 0x00)
struct FKillTrackingData {
	struct FDataTableRowHandle ObjectiveHandle; // 0x00(0x20)
};

// ScriptStruct Gobi.PlayerLiveMissionData
// Size: 0x48 (Inherited: 0x00)
struct FPlayerLiveMissionData {
	struct FSlotIndex SlotIndex; // 0x00(0x08)
	struct TArray<struct FDataTableRowHandle> ActiveMissions; // 0x08(0x10)
	struct TArray<struct FLiveObjective> ActiveObjectives; // 0x18(0x10)
	struct TArray<struct FLiveObjective> CompletedObjectives; // 0x28(0x10)
	struct TArray<struct FLiveObjective> FailedObjectives; // 0x38(0x10)
};

// ScriptStruct Gobi.LiveObjective
// Size: 0x30 (Inherited: 0x00)
struct FLiveObjective {
	struct FDataTableRowHandle ObjectiveHandle; // 0x00(0x20)
	int32_t CurrentCount; // 0x20(0x04)
	int32_t FinalCountDelta; // 0x24(0x04)
	int32_t TimerIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Gobi.ObjectiveTimerData
// Size: 0x28 (Inherited: 0x00)
struct FObjectiveTimerData {
	struct FDataTableRowHandle ObjectiveHandle; // 0x00(0x20)
	float TimeRemaining; // 0x20(0x04)
	bool Paused; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Gobi.VertSliceMission
// Size: 0x30 (Inherited: 0x00)
struct FVertSliceMission {
	struct FName MissionHandle; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct TArray<struct FVertSliceObjective> Objectives; // 0x20(0x10)
};

// ScriptStruct Gobi.VertSliceObjective
// Size: 0x28 (Inherited: 0x00)
struct FVertSliceObjective {
	struct FName ObjectiveHandle; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	int32_t TimerSeconds; // 0x20(0x04)
	bool TimerActive; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Gobi.TipRow
// Size: 0x28 (Inherited: 0x08)
struct FTipRow : FTableRowBase {
	struct FText Text; // 0x08(0x18)
	bool bShowInCoop; // 0x20(0x01)
	bool bShowInPvP; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Gobi.MixProfileRow
// Size: 0x38 (Inherited: 0x08)
struct FMixProfileRow : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct UAkAudioEvent* AudioEvent; // 0x20(0x08)
	float MasterVolume; // 0x28(0x04)
	float SFXVolume; // 0x2c(0x04)
	float DialogVolume; // 0x30(0x04)
	float MusicVolume; // 0x34(0x04)
};

// ScriptStruct Gobi.MOTDRow
// Size: 0x30 (Inherited: 0x08)
struct FMOTDRow : FTableRowBase {
	struct FName Slug; // 0x08(0x08)
	struct TArray<struct FMOTDTab> Tabs; // 0x10(0x10)
	struct TArray<struct FMOTDTiledLayout> TileLayouts; // 0x20(0x10)
};

// ScriptStruct Gobi.MOTDLayout
// Size: 0x01 (Inherited: 0x00)
struct FMOTDLayout {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Gobi.MOTDTiledLayout
// Size: 0x48 (Inherited: 0x01)
struct FMOTDTiledLayout : FMOTDLayout {
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TArray<struct FMOTDTile> Tiles; // 0x38(0x10)
};

// ScriptStruct Gobi.MOTDTile
// Size: 0x58 (Inherited: 0x00)
struct FMOTDTile {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x30(0x28)
};

// ScriptStruct Gobi.MOTDTab
// Size: 0xd8 (Inherited: 0x00)
struct FMOTDTab {
	struct FText TabName; // 0x00(0x18)
	struct FDeepLinkButton DeepLinkButton; // 0x18(0x70)
	struct FMOTDHubInfo HubInfo; // 0x88(0x40)
	char pad_C8[0x10]; // 0xc8(0x10)
};

// ScriptStruct Gobi.MOTDHubInfo
// Size: 0x40 (Inherited: 0x00)
struct FMOTDHubInfo {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* Image; // 0x30(0x08)
	bool bIsStatic; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Gobi.DeepLinkButton
// Size: 0x70 (Inherited: 0x00)
struct FDeepLinkButton {
	struct FText ButtonText; // 0x00(0x18)
	struct TSoftClassPtr<UObject> LinkedScreen; // 0x18(0x28)
	struct FString LinkedURL; // 0x40(0x10)
	struct FDataTableRowHandle DurableEntitlement; // 0x50(0x20)
};

// ScriptStruct Gobi.MotionCorrectionGoal
// Size: 0x90 (Inherited: 0x00)
struct FMotionCorrectionGoal {
	struct FName GoalLabel; // 0x00(0x08)
	struct UAnimContext_Transform* TranslationGoal; // 0x08(0x08)
	enum class EMotionCorrectionContextUpdateMode TranslationContextUpdateMode; // 0x10(0x01)
	bool bUseGlobalTranslationGoalPosition; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FVector TranslationGoalsPosition; // 0x14(0x0c)
	struct FVector TranslationOffset; // 0x20(0x0c)
	enum class EMotionCorrectionDimension Dimension; // 0x2c(0x01)
	enum class EMotionCorrectionMode LimitTranslationMode; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FBox TranslationLimits; // 0x30(0x1c)
	float MaxTransFromRootMotionPct; // 0x4c(0x04)
	struct UAnimContext_Rotation* RotationGoal; // 0x50(0x08)
	enum class EMotionCorrectionContextUpdateMode RotationContextUpdateMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FRotator RotationOffset; // 0x5c(0x0c)
	enum class EMotionCorrectionAxis Axis; // 0x68(0x01)
	enum class EMotionCorrectionMode LimitRotationMode; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	struct FRotator RotationLimits; // 0x6c(0x0c)
	float MaxRotFromRootMotionPct; // 0x78(0x04)
	float GoalTime; // 0x7c(0x04)
	float TotalDuration; // 0x80(0x04)
	float RemainingDuration; // 0x84(0x04)
	float CorrectionPct; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Gobi.MovementTickableInput
// Size: 0x24 (Inherited: 0x00)
struct FMovementTickableInput {
	enum class EEquipmentSlot DesiredEquipmentSlot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct AItem> DesiredEquipmentActor; // 0x04(0x08)
	struct TWeakObjectPtr<struct AActor> PotentialUsableActor; // 0x0c(0x08)
	bool bPrimaryPressed; // 0x14(0x01)
	bool bSecondaryPressed; // 0x15(0x01)
	bool bReloadPressed; // 0x16(0x01)
	bool bADSPressed; // 0x17(0x01)
	bool bSprintPressed; // 0x18(0x01)
	bool bBurstPressed; // 0x19(0x01)
	bool bCancelPressed; // 0x1a(0x01)
	bool bMantlePressed; // 0x1b(0x01)
	bool bUtilityAccessoryPressed; // 0x1c(0x01)
	bool bItemAltUsePressed; // 0x1d(0x01)
	bool bCrouchPressed; // 0x1e(0x01)
	bool bJumpPressed; // 0x1f(0x01)
	bool bUsePressed; // 0x20(0x01)
	bool bMeleePressed; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct Gobi.GenericMusicRow
// Size: 0xb0 (Inherited: 0x08)
struct FGenericMusicRow : FTableRowBase {
	enum class EMusicEventBranchingMode BranchingMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<struct FGameplayTag, struct FDataTableRowHandle> CharacterTagToMusicEventMapping; // 0x10(0x50)
	struct TMap<struct AActor*, struct FDataTableRowHandle> ActorToMusicEventMapping; // 0x60(0x50)
};

// ScriptStruct Gobi.MusicEventConfig
// Size: 0x28 (Inherited: 0x08)
struct FMusicEventConfig : FTableRowBase {
	enum class EMusicEventType Type; // 0x08(0x01)
	enum class ECharacterFilter CharacterFilter; // 0x09(0x01)
	enum class EMusicEventMood Mood; // 0x0a(0x01)
	enum class EMusicEventIntensity Intensity; // 0x0b(0x01)
	float RelevancyTime; // 0x0c(0x04)
	bool bSuppressIfPVP; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UAkAudioEvent* AssociatedAudioEvent; // 0x18(0x08)
	struct UAkAudioEvent* FirstPersonAudioEvent; // 0x20(0x08)
};

// ScriptStruct Gobi.MusicStateBehavior
// Size: 0xc0 (Inherited: 0x08)
struct FMusicStateBehavior : FTableRowBase {
	enum class EMusicStateType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName AssociatedWwiseMusicSwitch; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, struct FName> AdditionalSwitchesToApplyOnEnter; // 0x18(0x50)
	struct TMap<struct FName, struct FName> StatesToApplyOnEnter; // 0x68(0x50)
	bool bSuppressHordeEvents; // 0xb8(0x01)
	bool bSuppressCharacterMusic; // 0xb9(0x01)
	bool bSuppressGameDrivenRTPCs; // 0xba(0x01)
	bool bFlushInvalidEvents; // 0xbb(0x01)
	bool bSetHordeGameStateInWwise; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// ScriptStruct Gobi.ExplodeInfo
// Size: 0x38 (Inherited: 0x00)
struct FExplodeInfo {
	bool bExploded; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Impulse; // 0x04(0x0c)
	struct FVector ImpactPoint; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* SourceActor; // 0x20(0x08)
	float PctToDismember; // 0x28(0x04)
	struct FVector DismemberImpulse; // 0x2c(0x0c)
};

// ScriptStruct Gobi.MutilationInfo
// Size: 0x28 (Inherited: 0x00)
struct FMutilationInfo {
	enum class EMutilationRegion Region; // 0x00(0x01)
	enum class EMutilationType Type; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Impulse; // 0x04(0x0c)
	struct FVector ImpactPoint; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* SourceActor; // 0x20(0x08)
};

// ScriptStruct Gobi.SpawnedDismembermentPiece
// Size: 0x28 (Inherited: 0x00)
struct FSpawnedDismembermentPiece {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Gobi.DismembermentMeshPiece
// Size: 0x38 (Inherited: 0x00)
struct FDismembermentMeshPiece {
	struct USkeletalMesh* SkelMesh; // 0x00(0x08)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	struct FName StaticMeshAttachName; // 0x10(0x08)
	struct FGameplayTag MeshCompGameplayTag; // 0x18(0x08)
	enum class EMutilationRegion Region; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UParticleSystem* ParticleSystem; // 0x28(0x08)
	struct FName ParticleAttachSocketName; // 0x30(0x08)
};

// ScriptStruct Gobi.MutilationHitReaction
// Size: 0x20 (Inherited: 0x00)
struct FMutilationHitReaction {
	struct FGameplayTag HitReactionTag; // 0x00(0x08)
	struct UGameplayEvaluatorSet* FilterSet; // 0x08(0x08)
	struct TArray<struct FMutilationHitReactionEvent> Mutilations; // 0x10(0x10)
};

// ScriptStruct Gobi.MutilationHitReactionEvent
// Size: 0x18 (Inherited: 0x00)
struct FMutilationHitReactionEvent {
	bool bExplode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PctToDismember; // 0x04(0x04)
	float DismemberImpulseMagnitude; // 0x08(0x04)
	float ImpulseMagnitude; // 0x0c(0x04)
	int32_t Regions; // 0x10(0x04)
	bool bChooseOneRegionRandomly; // 0x14(0x01)
	enum class EMutilationType Type; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct Gobi.MutilationWoundsConfig
// Size: 0x18 (Inherited: 0x00)
struct FMutilationWoundsConfig {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct TArray<struct FWoundData> Wounds; // 0x08(0x10)
};

// ScriptStruct Gobi.WoundData
// Size: 0xf0 (Inherited: 0x00)
struct FWoundData {
	struct FGameplayTagQuery MutilationTagRequirements; // 0x00(0x48)
	struct FGameplayTagContainer SkelMeshMasterCompTags; // 0x48(0x20)
	struct FGameplayTagContainer UnhideSkelMeshCompTags; // 0x68(0x20)
	bool bRupture; // 0x88(0x01)
	enum class EMutilationRegion Region; // 0x89(0x01)
	bool bDismember; // 0x8a(0x01)
	bool bUseImpactLocation; // 0x8b(0x01)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct UTexture*> WoundTextures; // 0x90(0x10)
	float GrowSizeTime; // 0xa0(0x04)
	float StartSizePct; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FTransform Transform; // 0xb0(0x30)
	bool bStartOn; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// ScriptStruct Gobi.MutilationPieceConfig
// Size: 0x68 (Inherited: 0x00)
struct FMutilationPieceConfig {
	struct TSet<struct FName> BoneNames; // 0x00(0x50)
	struct FGameplayTag SourceMeshTag; // 0x50(0x08)
	struct TArray<struct FGibCapDefinition> GibCaps; // 0x58(0x10)
};

// ScriptStruct Gobi.GibCapDefinition
// Size: 0x40 (Inherited: 0x00)
struct FGibCapDefinition {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct Gobi.NotificationItem
// Size: 0x50 (Inherited: 0x00)
struct FNotificationItem {
	enum class ENotificationType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagQuery ActorTagQuery; // 0x08(0x48)
};

// ScriptStruct Gobi.NPCObjectiveDataRow
// Size: 0x28 (Inherited: 0x08)
struct FNPCObjectiveDataRow : FTableRowBase {
	struct FDataTableRowHandle ObjectiveHandle; // 0x08(0x20)
};

// ScriptStruct Gobi.NPCMissionDataRow
// Size: 0x30 (Inherited: 0x08)
struct FNPCMissionDataRow : FTableRowBase {
	struct FDataTableRowHandle MissionHandle; // 0x08(0x20)
	bool bAllSurvivorsStartMission; // 0x28(0x01)
	bool bEvenIfPreviouslyCompleted; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Gobi.ClassPool
// Size: 0x28 (Inherited: 0x00)
struct FClassPool {
	struct UObject* ObjectClass; // 0x00(0x08)
	struct TArray<struct UObject*> ActiveList; // 0x08(0x10)
	struct TArray<struct UObject*> FreeList; // 0x18(0x10)
};

// ScriptStruct Gobi.OmenConfig
// Size: 0x98 (Inherited: 0x00)
struct FOmenConfig {
	struct FGameplayTagQuery OmenQuery; // 0x00(0x48)
	bool bCustomRange; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float Range; // 0x4c(0x04)
	bool bCustomHighlightChannel; // 0x50(0x01)
	enum class EStencilChannel HighlightChannel; // 0x51(0x01)
	bool bCustomScreenEffectTag; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	struct FGameplayTag ScreenEffectTag; // 0x54(0x08)
	bool bCustomScreenEffectDuration; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float ScreenEffectDuration; // 0x60(0x04)
	bool bCustomScreenEffectCooldown; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float ScreenEffectCooldown; // 0x68(0x04)
	bool bCustomDialogue; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FDataTableRowHandle Dialogue; // 0x70(0x20)
	bool bCustomDialogueCooldown; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float DialogueCooldown; // 0x94(0x04)
};

// ScriptStruct Gobi.OnlineConfigurationData
// Size: 0x38 (Inherited: 0x00)
struct FOnlineConfigurationData {
	int32_t Changelist; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Bucket; // 0x08(0x10)
	struct TArray<struct FOnlineConfigurationCVarData> CVars; // 0x18(0x10)
	struct TArray<struct FOnlineConfigurationGameModeData> GameModes; // 0x28(0x10)
};

// ScriptStruct Gobi.OnlineConfigurationGameModeData
// Size: 0x20 (Inherited: 0x00)
struct FOnlineConfigurationGameModeData {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FString> EnabledMaps; // 0x10(0x10)
};

// ScriptStruct Gobi.OnlineConfigurationCVarData
// Size: 0x20 (Inherited: 0x00)
struct FOnlineConfigurationCVarData {
	struct FString Name; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Gobi.OnlineInventoryItemJson
// Size: 0x40 (Inherited: 0x00)
struct FOnlineInventoryItemJson {
	struct FString TransientId; // 0x00(0x10)
	struct FName DataTableName; // 0x10(0x08)
	struct FName DataTableRowName; // 0x18(0x08)
	enum class EInventoryContainer Container; // 0x20(0x01)
	bool bAcknowledged; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32_t ClipAmmo; // 0x24(0x04)
	int32_t Durability; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FString> Extensions; // 0x30(0x10)
};

// ScriptStruct Gobi.GPUGraphicsSettings
// Size: 0x10 (Inherited: 0x08)
struct FGPUGraphicsSettings : FTableRowBase {
	int32_t GraphicsQuality; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.OptionsBindingTextLabelInputType
// Size: 0x08 (Inherited: 0x00)
struct FOptionsBindingTextLabelInputType {
	struct FName InputName; // 0x00(0x08)
};

// ScriptStruct Gobi.ParticleEffectTraitDef
// Size: 0x18 (Inherited: 0x00)
struct FParticleEffectTraitDef {
	struct FGameplayTag ComponentTag; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct UParticleSystem* ParticleEffect; // 0x10(0x08)
};

// ScriptStruct Gobi.ParticleSet
// Size: 0x80 (Inherited: 0x00)
struct FParticleSet {
	char pad_0[0x18]; // 0x00(0x18)
	struct UParticleSystem* RootParticleSystem; // 0x18(0x08)
	struct FTransform RelativeTransform; // 0x20(0x30)
	bool bVisibilityMatchesMesh; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FName SkelMeshActorParamName; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FParticleSetInfo> Particles; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
};

// ScriptStruct Gobi.ParticleSetInfo
// Size: 0x50 (Inherited: 0x00)
struct FParticleSetInfo {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct TArray<struct FName> Sockets; // 0x40(0x10)
};

// ScriptStruct Gobi.ParticleOnCollideParams
// Size: 0x80 (Inherited: 0x00)
struct FParticleOnCollideParams {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Gobi.MenuCommand
// Size: 0x20 (Inherited: 0x00)
struct FMenuCommand {
	struct FText DisplayName; // 0x00(0x18)
	enum class EPartyMenuCommand Command; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Gobi.PerkDetailEntry
// Size: 0x28 (Inherited: 0x00)
struct FPerkDetailEntry {
	struct FDataTableRowHandle RowHandle; // 0x00(0x20)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Gobi.LinearImpulseParams
// Size: 0x30 (Inherited: 0x00)
struct FLinearImpulseParams {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Gobi.InputIcons
// Size: 0x58 (Inherited: 0x00)
struct FInputIcons {
	struct UTexture2D* PC; // 0x00(0x08)
	struct FText PCText; // 0x08(0x18)
	struct UTexture2D* Steam; // 0x20(0x08)
	struct UTexture2D* Switch; // 0x28(0x08)
	struct UTexture2D* XboxOne; // 0x30(0x08)
	struct UTexture2D* Xbox360; // 0x38(0x08)
	struct UTexture2D* XSX; // 0x40(0x08)
	struct UTexture2D* PS4; // 0x48(0x08)
	struct UTexture2D* DPX; // 0x50(0x08)
};

// ScriptStruct Gobi.PlayerLoadout
// Size: 0xa8 (Inherited: 0x00)
struct FPlayerLoadout {
	struct FInventoryLoadout FlattenedDefaultLoadout; // 0x00(0x38)
	struct FInventoryLoadout DefaultLoadoutFromCharacter; // 0x38(0x38)
	struct FInventoryLoadout DefaultLoadoutFromMods; // 0x70(0x38)
};

// ScriptStruct Gobi.DirectionalMoveSpeedScale
// Size: 0xa8 (Inherited: 0x00)
struct FDirectionalMoveSpeedScale {
	struct FGamePropertyFloat ForwardMoveSpeedScale; // 0x00(0x38)
	struct FGamePropertyFloat BackwardMoveSpeedScale; // 0x38(0x38)
	struct FGamePropertyFloat SidewaysMoveSpeedScale; // 0x70(0x38)
};

// ScriptStruct Gobi.DirectionalMoveSpeedModifier
// Size: 0x30 (Inherited: 0x00)
struct FDirectionalMoveSpeedModifier {
	struct FGamePropertyFloatMod ForwardMoveSpeedMod; // 0x00(0x10)
	struct FGamePropertyFloatMod BackwardMoveSpeedMod; // 0x10(0x10)
	struct FGamePropertyFloatMod SidewaysMoveSpeedMod; // 0x20(0x10)
};

// ScriptStruct Gobi.MovementSpeedConfig
// Size: 0x60 (Inherited: 0x00)
struct FMovementSpeedConfig {
	struct FMovementSpeedStanceConfig Standing; // 0x00(0x30)
	struct FMovementSpeedStanceConfig Crouched; // 0x30(0x30)
};

// ScriptStruct Gobi.MovementSpeedStanceConfig
// Size: 0x30 (Inherited: 0x00)
struct FMovementSpeedStanceConfig {
	struct FVector BaseMoveSpeed; // 0x00(0x0c)
	struct FVector ADSMoveSpeed; // 0x0c(0x0c)
	struct FVector HipFiringMoveSpeed; // 0x18(0x0c)
	struct FVector ADSFiringMoveSpeed; // 0x24(0x0c)
};

// ScriptStruct Gobi.PerkSet
// Size: 0x18 (Inherited: 0x00)
struct FPerkSet {
	struct TArray<struct FDataTableRowHandle> PerksToApply; // 0x00(0x10)
	int32_t TicketCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.ColorBlindGroupPalette
// Size: 0x50 (Inherited: 0x00)
struct FColorBlindGroupPalette {
	struct TMap<struct FName, struct FLinearColor> GroupMap; // 0x00(0x50)
};

// ScriptStruct Gobi.AimSensitivitySettings
// Size: 0x24 (Inherited: 0x00)
struct FAimSensitivitySettings {
	struct FVector2D GamepadSensitivity; // 0x00(0x08)
	struct FVector2D GamepadExtraSensitivity; // 0x08(0x08)
	float MouseSensitivity; // 0x10(0x04)
	float LowZoomMouseSensitivityScalar; // 0x14(0x04)
	float HighZoomMouseSensitivityScalar; // 0x18(0x04)
	float LowZoomGamepadSensitivityScalar; // 0x1c(0x04)
	float HighZoomGamepadSensitivityScalar; // 0x20(0x04)
};

// ScriptStruct Gobi.SlotManagerConfig
// Size: 0x10 (Inherited: 0x00)
struct FSlotManagerConfig {
	enum class ETeamCounts NumTeams; // 0x00(0x04)
	int32_t TeamSize; // 0x04(0x04)
	struct UCharacterSelect* CharacterSelectClass; // 0x08(0x08)
};

// ScriptStruct Gobi.TeamSlots
// Size: 0x20 (Inherited: 0x00)
struct FTeamSlots {
	enum class EGobiTeam Team; // 0x00(0x01)
	enum class EMatchmakingTeam MatchmakingTeam; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct APlayerSlot*> Slots; // 0x08(0x10)
	struct UCharacterSelect* CharacterSelect; // 0x18(0x08)
};

// ScriptStruct Gobi.RescueRespawnRequestContext
// Size: 0x08 (Inherited: 0x00)
struct FRescueRespawnRequestContext {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Gobi.SpawnRequestContext
// Size: 0x18 (Inherited: 0x00)
struct FSpawnRequestContext {
	struct AGobiPlayerState* PlayerToSpawn; // 0x00(0x08)
	struct AActor* StartSpot; // 0x08(0x08)
	bool bSpawnImmediately; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.PlayerDebugInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerDebugInfo {
	struct FString PlayerName; // 0x00(0x10)
	float PercentAlongGoldenPath; // 0x10(0x04)
	float DifferenceFromFurthestPlayer; // 0x14(0x04)
};

// ScriptStruct Gobi.SprintConfig
// Size: 0x98 (Inherited: 0x00)
struct FSprintConfig {
	float SprintInTime; // 0x00(0x04)
	float SprintOutTime; // 0x04(0x04)
	float SprintSpeedActivatePercent; // 0x08(0x04)
	float SprintSpeedDeactivatePercent; // 0x0c(0x04)
	float MaxSprintSpeed; // 0x10(0x04)
	float MinRequiredStaminaToStart; // 0x14(0x04)
	float StaminaConsumptionPerSecond; // 0x18(0x04)
	float SprintJumpStaminaCost; // 0x1c(0x04)
	float RequiredInputAxisForward; // 0x20(0x04)
	float RequiredSpeedToConsumeStamina; // 0x24(0x04)
	float LowStaminaSprintSpeedScale; // 0x28(0x04)
	bool bLowStaminaCancelsSprint; // 0x2c(0x01)
	bool bEmptyStaminaCancelsSprint; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FGameplayTagQuery SprintBlockingTagQuery; // 0x30(0x48)
	struct FGameplayTagContainer SprintAppliedTags; // 0x78(0x20)
};

// ScriptStruct Gobi.SprintStateData
// Size: 0x08 (Inherited: 0x00)
struct FSprintStateData {
	enum class EPlayerSprintState CurrentSprintState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct Gobi.LooseSprintConfig
// Size: 0x0c (Inherited: 0x00)
struct FLooseSprintConfig {
	bool bIsSprintingAllowed; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SprintSpeedOverride; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Gobi.AdjustStatValuesCommand
// Size: 0x10 (Inherited: 0x00)
struct FAdjustStatValuesCommand {
	uint64_t StatHash; // 0x00(0x08)
	float Delta; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.PlayerStatValueContainer
// Size: 0x18 (Inherited: 0x00)
struct FPlayerStatValueContainer {
	double CareerTotal; // 0x00(0x08)
	double CurrentSessionTotal; // 0x08(0x08)
	double CurrentMapTotal; // 0x10(0x08)
};

// ScriptStruct Gobi.PlayerViewData
// Size: 0x0c (Inherited: 0x00)
struct FPlayerViewData {
	struct FRotator TargetRotation; // 0x00(0x0c)
};

// ScriptStruct Gobi.PlayerViewConfig
// Size: 0x3c (Inherited: 0x00)
struct FPlayerViewConfig {
	struct FGameplayTag CameraTag; // 0x00(0x08)
	struct FGameplayTag SpringArmTag; // 0x08(0x08)
	struct FGameplayTag MeshTag; // 0x10(0x08)
	bool bUpdatesArmorView; // 0x18(0x01)
	char pad_19[0x23]; // 0x19(0x23)
};

// ScriptStruct Gobi.SceneComponentHitResult
// Size: 0x90 (Inherited: 0x00)
struct FSceneComponentHitResult {
	struct FHitResult HitResult; // 0x00(0x88)
	struct UActorComponent* ActorComponent; // 0x88(0x08)
};

// ScriptStruct Gobi.CameraShakeReaction
// Size: 0x60 (Inherited: 0x00)
struct FCameraShakeReaction {
	struct UCameraShake* CameraShake; // 0x00(0x08)
	struct FGameplayTagQuery DamageTypeTagQuery; // 0x08(0x48)
	float IdealAngle; // 0x50(0x04)
	float MaxAngleOffset; // 0x54(0x04)
	struct FVector2D DamagePercentWindow; // 0x58(0x08)
};

// ScriptStruct Gobi.PostRoundPanelInfo
// Size: 0x18 (Inherited: 0x00)
struct FPostRoundPanelInfo {
	struct UGobiUserWidget* PanelWidget; // 0x00(0x08)
	enum class EPostRoundPanel PanelType; // 0x08(0x01)
	bool ShowSkipButton; // 0x09(0x01)
	bool ShowHeaderTabs; // 0x0a(0x01)
	bool StopAutoAdvance; // 0x0b(0x01)
	bool ShowSystemSettingsCallout; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Duration; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.PounceBunnyKick
// Size: 0x60 (Inherited: 0x00)
struct FPounceBunnyKick {
	struct FGameplayTag BunnyKickGrabPrimitiveComponentTag; // 0x00(0x08)
	struct FName BunnyKickGrabBone; // 0x08(0x08)
	struct FVector BunnyKickGrabOffset; // 0x10(0x0c)
	struct FRotator BunnyKickGrabRelativeRotation; // 0x1c(0x0c)
	struct FRotator BunnyKickMindControlAttachRelativeRotation; // 0x28(0x0c)
	bool bBunnyKickTriggerOnHit; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UEnvQuery* BunnyKickOffEqs; // 0x38(0x08)
	struct TArray<struct UAnimMontage*> BunnyKickOffMontages; // 0x40(0x10)
	struct TArray<struct UGameplayEffect*> ApplyBunnyKickOffEffects; // 0x50(0x10)
};

// ScriptStruct Gobi.AttackStumbleMontage
// Size: 0x10 (Inherited: 0x00)
struct FAttackStumbleMontage {
	struct UAnimMontage* PounceMontage; // 0x00(0x08)
	struct UAnimMontage* VictimMontage; // 0x08(0x08)
};

// ScriptStruct Gobi.PouncePlayerConfig
// Size: 0xd8 (Inherited: 0x00)
struct FPouncePlayerConfig {
	bool bLaunchUseCameraPitch; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UEnvQuery* MoveVictimToLocationEQS; // 0x08(0x08)
	struct AGobiReticle* TargetReticle; // 0x10(0x08)
	struct AGobiReticle* TargetReticleLockedOn; // 0x18(0x08)
	float MaxTrajectorySimTime; // 0x20(0x04)
	bool bUsesSecondaryButton; // 0x24(0x01)
	bool bSetDesiredWallGrabLocation; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct AActor* WallGrabVisualizer; // 0x28(0x08)
	struct FLinearColor ReticleTrajectoryNonGrabColor; // 0x30(0x10)
	struct FLinearColor ReticleTrajectoryGrabColor; // 0x40(0x10)
	float ReticleTrajectoryDownZOffset; // 0x50(0x04)
	float ReticleTrajectoryDownForwardOffset; // 0x54(0x04)
	float InterpTrajectoryToImpactLocationIfHeightDifferenceAbove; // 0x58(0x04)
	bool bShowFloatingCrossHair; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FCameraViewModifier LeapViewModifier; // 0x60(0x38)
	struct FCameraViewModifier AttackingViewModifier; // 0x98(0x38)
	bool bDisableControllerRotationYaw; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float MovementInputScale; // 0xd4(0x04)
};

// ScriptStruct Gobi.PounceAIConfig
// Size: 0x10 (Inherited: 0x00)
struct FPounceAIConfig {
	bool bPredictiveAimingEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UEnvQuery* MoveVictimToLocationEQS; // 0x08(0x08)
};

// ScriptStruct Gobi.PreSpawnInfo
// Size: 0x38 (Inherited: 0x00)
struct FPreSpawnInfo {
	bool bInPreSpawn; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector SpawnActorLocation; // 0x04(0x0c)
	struct FRotator SpawnActorRotation; // 0x10(0x0c)
	struct FVector PreSpawnLocationAudioOffset; // 0x1c(0x0c)
	struct UAnimSequence* PreSpawnMeshAnimation; // 0x28(0x08)
	struct UParticleSystem* PreSpawnEmitter; // 0x30(0x08)
};

// ScriptStruct Gobi.ProductRow
// Size: 0x88 (Inherited: 0x08)
struct FProductRow : FTableRowBase {
	struct FDataTableRowHandle Unlock; // 0x08(0x20)
	int32_t Price; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDataTableRowHandle Rarity; // 0x30(0x20)
	struct FGameplayTagContainer CaravanTags; // 0x50(0x20)
	bool bSecure; // 0x70(0x01)
	enum class EProductType ProductType; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct UAkAudioEvent* PurchaseSound; // 0x78(0x08)
	struct UTexture2D* Icon; // 0x80(0x08)
};

// ScriptStruct Gobi.RarityRow
// Size: 0x58 (Inherited: 0x08)
struct FRarityRow : FTableRowBase {
	int32_t RarityValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText RarityName; // 0x10(0x18)
	struct FSlateColor RarityColor; // 0x28(0x30)
};

// ScriptStruct Gobi.ProfileDataCapture
// Size: 0x78 (Inherited: 0x00)
struct FProfileDataCapture {
	struct FString WorldName; // 0x00(0x10)
	struct FString VersionString; // 0x10(0x10)
	uint32_t Changelist; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString BuildConfig; // 0x28(0x10)
	struct FString PlatformName; // 0x38(0x10)
	struct FString DeviceProfileName; // 0x48(0x10)
	struct FString Guid; // 0x58(0x10)
	struct TArray<struct FProfileDataRecord> ProfileDataRecords; // 0x68(0x10)
};

// ScriptStruct Gobi.ProfileDataRecord
// Size: 0xe0 (Inherited: 0x00)
struct FProfileDataRecord {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector CameraLocation; // 0x08(0x0c)
	struct FRotator CameraRotation; // 0x14(0x0c)
	struct FString SetposString; // 0x20(0x10)
	struct FRotator CameraRotationGPU; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString SetposStringGPU; // 0x40(0x10)
	struct FRotator CameraRotationRT; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString SetposStringRT; // 0x60(0x10)
	struct FRotator CameraRotationShadowDC; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString SetposStringShadowDC; // 0x80(0x10)
	float AverageRenderThreadTime; // 0x90(0x04)
	float MaxRenderThreadTime; // 0x94(0x04)
	float AverageGPUTime; // 0x98(0x04)
	float MaxGPUTime; // 0x9c(0x04)
	uint32_t AverageDrawCalls; // 0xa0(0x04)
	uint32_t MaxDrawCalls; // 0xa4(0x04)
	uint32_t AverageShadowDrawCalls; // 0xa8(0x04)
	uint32_t MaxShadowDrawCalls; // 0xac(0x04)
	uint32_t AveragePrimitivesDrawn; // 0xb0(0x04)
	uint32_t MaxPrimitivesDrawn; // 0xb4(0x04)
	uint32_t MaxTextureMemoryUsedMB; // 0xb8(0x04)
	uint32_t MaxMemoryUsedMB; // 0xbc(0x04)
	uint32_t MinMemoryFreeMB; // 0xc0(0x04)
	char pad_C4[0x1c]; // 0xc4(0x1c)
};

// ScriptStruct Gobi.ProductDetails
// Size: 0xb0 (Inherited: 0x00)
struct FProductDetails {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Price; // 0x04(0x04)
	struct UTexture2D* Icon; // 0x08(0x08)
	struct UTexture2D* ShowcaseImage; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText TypeName; // 0x30(0x18)
	struct FText RarityName; // 0x48(0x18)
	struct FSlateColor RarityColor; // 0x60(0x30)
	struct FDataTableRowHandle Unlock; // 0x90(0x20)
};

// ScriptStruct Gobi.ProjectileSprayMoveTickData
// Size: 0x0c (Inherited: 0x00)
struct FProjectileSprayMoveTickData {
	enum class ESprayState CurrentState; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)
};

// ScriptStruct Gobi.ProjectilePointsList
// Size: 0x10 (Inherited: 0x00)
struct FProjectilePointsList {
	struct TArray<struct FVector> Points; // 0x00(0x10)
};

// ScriptStruct Gobi.ProjectileSprayConfig
// Size: 0x130 (Inherited: 0x01)
struct FProjectileSprayConfig : FAbilityConfig {
	char pad_1[0x3]; // 0x01(0x03)
	float InitialVelocityForward; // 0x04(0x04)
	float SprayAngle; // 0x08(0x04)
	float ProjectileBurstCount; // 0x0c(0x04)
	struct FVector2D ProjectileHorizontalOffset; // 0x10(0x08)
	float BurstFrequency; // 0x18(0x04)
	float GravityScale; // 0x1c(0x04)
	float MaxDuration; // 0x20(0x04)
	float MaxTargetDistance; // 0x24(0x04)
	float Cooldown; // 0x28(0x04)
	float VelocityTransitionTime; // 0x2c(0x04)
	float VelocityStartPct; // 0x30(0x04)
	bool bUseFixedSprayLocation; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector SprayLocation; // 0x38(0x0c)
	struct FVector SprayCrouchedLocation; // 0x44(0x0c)
	struct FName SpraySocket; // 0x50(0x08)
	bool bUseSpraySocketDirection; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct UAnimMontage*> SprayMontages; // 0x60(0x10)
	struct TArray<struct UAnimMontage*> SprayEndMontages; // 0x70(0x10)
	struct UParticleSystem* ParticleEmitter; // 0x80(0x08)
	struct UProjectileSimple* ProjectileClass; // 0x88(0x08)
	struct FGameplayTagContainer AppliedTags; // 0x90(0x20)
	struct FGameplayTagContainer BlockingTags; // 0xb0(0x20)
	struct FGameplayTagContainer CancelTags; // 0xd0(0x20)
	struct TArray<struct UGameplayEffect*> AppliedEffects; // 0xf0(0x10)
	struct FVector2D CrossHairLerpDistanceThreshold; // 0x100(0x08)
	bool bFloatingCrossHairEnabled; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct UAkAudioEvent*> AKEStartSpray; // 0x110(0x10)
	struct TArray<struct UAkAudioEvent*> AKEStopSpray; // 0x120(0x10)
};

// ScriptStruct Gobi.ReplicatedThrowInfo
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedThrowInfo {
	struct FVector TargetLocation; // 0x00(0x0c)
	bool bUseSuggestedVelocity; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float CookTime; // 0x10(0x04)
	uint16_t ThrowCount; // 0x14(0x02)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct Gobi.ProjectileThrowTickData
// Size: 0x20 (Inherited: 0x00)
struct FProjectileThrowTickData {
	enum class EProjectileThrowState CurrentState; // 0x00(0x01)
	char pad_1[0x1f]; // 0x01(0x1f)
};

// ScriptStruct Gobi.ProjectileThrowConfig
// Size: 0x160 (Inherited: 0x01)
struct FProjectileThrowConfig : FAbilityConfig {
	char pad_1[0x7]; // 0x01(0x07)
	struct ABaseProjectile* Projectile; // 0x08(0x08)
	struct TArray<struct UAnimMontage*> ThrowMontages; // 0x10(0x10)
	struct FGameplayTagQuery BlockingTags; // 0x20(0x48)
	struct FGameplayTagQuery CancelTags; // 0x68(0x48)
	struct FGameplayTagContainer AppliedActiveTags; // 0xb0(0x20)
	struct TArray<struct UGameplayEffect*> ApplyActiveEffects; // 0xd0(0x10)
	struct TArray<struct UGameplayEffect*> ApplyThrowingEffects; // 0xe0(0x10)
	struct TArray<struct UGameplayEffect*> ApplyCooldownEffects; // 0xf0(0x10)
	bool bHasCookingState; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<struct UAnimMontage*> CookingMontages; // 0x108(0x10)
	struct TArray<struct UGameplayEffect*> ApplyCookingEffects; // 0x118(0x10)
	bool bChargeEnabled; // 0x128(0x01)
	bool bUseFixedProjectileStartLocation; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	struct FVector ProjectileStartLocation; // 0x12c(0x0c)
	struct FVector ProjectileCrouchedStartLocation; // 0x138(0x0c)
	struct FName AttachProjectileToSocket; // 0x144(0x08)
	struct FName TargetBone; // 0x14c(0x08)
	struct FCollisionProfileName TrajectoryCollisionProfile; // 0x154(0x08)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Gobi.PvPEventData
// Size: 0x18 (Inherited: 0x00)
struct FPvPEventData {
	float ExpiryTime; // 0x00(0x04)
	struct TWeakObjectPtr<struct UGobiUserWidget> EntryWidget; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTimerHandle TimerHandle; // 0x10(0x08)
};

// ScriptStruct Gobi.QueuedZombieRespawnState
// Size: 0x28 (Inherited: 0x00)
struct FQueuedZombieRespawnState {
	struct APawn* PawnClass; // 0x00(0x08)
	float NextSpawnTime; // 0x08(0x04)
	float CurrentQueueTurnWaitTime; // 0x0c(0x04)
	struct AGobiPlayerState* PlayerTurnToSpawn; // 0x10(0x08)
	struct TArray<struct AGobiPlayerState*> Queue; // 0x18(0x10)
};

// ScriptStruct Gobi.HoldoutCollapseStateData
// Size: 0x24 (Inherited: 0x00)
struct FHoldoutCollapseStateData {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector EndLocation; // 0x0c(0x0c)
	char CurrentPhase; // 0x18(0x01)
	char pad_19[0xb]; // 0x19(0x0b)
};

// ScriptStruct Gobi.PVPHoldoutSupplyPointsConfig
// Size: 0x18 (Inherited: 0x00)
struct FPVPHoldoutSupplyPointsConfig {
	float MinHealthyMatchTime; // 0x00(0x04)
	float MaxHealthyMatchTime; // 0x04(0x04)
	float PointsPerSecond; // 0x08(0x04)
	float BadGameScalar; // 0x0c(0x04)
	float WinScalar; // 0x10(0x04)
	float WinFlatBonus; // 0x14(0x04)
};

// ScriptStruct Gobi.HoldoutCollapsePhase
// Size: 0x58 (Inherited: 0x00)
struct FHoldoutCollapsePhase {
	float ScenarioActiveDuration; // 0x00(0x04)
	float SafeZoneSizeProgress; // 0x04(0x04)
	struct TArray<struct UGameplayEffect*> OutOfSafeZoneGameplayEffects; // 0x08(0x10)
	struct FDataTableRowHandle PhaseStartDialogue; // 0x18(0x20)
	struct FDataTableRowHandle PhaseEndDialogue; // 0x38(0x20)
};

// ScriptStruct Gobi.RadioButtonStyle
// Size: 0x408 (Inherited: 0x08)
struct FRadioButtonStyle : FSlateWidgetStyle {
	struct FSlateBrush UncheckedImage; // 0x08(0x90)
	struct FSlateBrush UncheckedHoveredImage; // 0x98(0x90)
	struct FSlateBrush UncheckedPressedImage; // 0x128(0x90)
	struct FSlateBrush CheckedImage; // 0x1b8(0x90)
	struct FSlateBrush CheckedHoveredImage; // 0x248(0x90)
	struct FSlateBrush CheckedPressedImage; // 0x2d8(0x90)
	struct FMargin Padding; // 0x368(0x10)
	struct FSlateColor ForegroundColor; // 0x378(0x30)
	struct FSlateColor BorderBackgroundColor; // 0x3a8(0x30)
	struct FSlateSound CheckedSlateSound; // 0x3d8(0x18)
	struct FSlateSound HoveredSlateSound; // 0x3f0(0x18)
};

// ScriptStruct Gobi.RagdollSavedData
// Size: 0x1c (Inherited: 0x00)
struct FRagdollSavedData {
	struct FName PhysicalAnimProfile; // 0x00(0x08)
	struct FName CollisionProfileToSet; // 0x08(0x08)
	struct FName BoneName; // 0x10(0x08)
	bool RagdollPhysicsWasEnabled; // 0x18(0x01)
	bool bFixedBoundsWasEnabled; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct Gobi.RagdollReplicatedData
// Size: 0x14 (Inherited: 0x00)
struct FRagdollReplicatedData {
	struct FName CollisionProfileToSet; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	bool bSetToRagdoll; // 0x10(0x01)
	bool bForceReplicationFlag; // 0x11(0x01)
	bool bOwnerIsDead; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
};

// ScriptStruct Gobi.RagdollWaterData
// Size: 0x40 (Inherited: 0x00)
struct FRagdollWaterData {
	struct UWaterRagdollSettings* Settings; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Gobi.RagdollWaterBoneData
// Size: 0x1c (Inherited: 0x00)
struct FRagdollWaterBoneData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Gobi.RagdollWaterBoneSettings
// Size: 0x10 (Inherited: 0x00)
struct FRagdollWaterBoneSettings {
	struct FName BoneName; // 0x00(0x08)
	float ForceMultiplier; // 0x08(0x04)
	float DampeningMultiplier; // 0x0c(0x04)
};

// ScriptStruct Gobi.RecoilTuning
// Size: 0x140 (Inherited: 0x00)
struct FRecoilTuning {
	struct TArray<struct FWeaponRecoilEntry> RecoilEntries; // 0x00(0x10)
	struct TArray<struct FWeaponRecoilEntry> ADSRecoilEntries; // 0x10(0x10)
	struct FRecoilViewKickTuning HipViewKickConfig; // 0x20(0x08)
	struct FRecoilViewKickTuning ADSViewKickConfig; // 0x28(0x08)
	bool bPredictiveRecoil; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float PredictivePatternResetDelay; // 0x34(0x04)
	float ADSViewKickCenterSpeed; // 0x38(0x04)
	float HipViewKickCenterSpeed; // 0x3c(0x04)
	float RecenterCenterSpeedModifier; // 0x40(0x04)
	float RecenterDelay; // 0x44(0x04)
	bool bAutoRecenter; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float GunKickDeadZoneAngle; // 0x4c(0x04)
	float GunKickDeadZoneVelocity; // 0x50(0x04)
	struct FGunKickRecoilSpec HipGunKickSpec; // 0x54(0x50)
	struct FGunKickRecoilSpec ADSGunKickSpec; // 0xa4(0x50)
	struct FRecoilPushbackTuning HipPushbackConfig; // 0xf4(0x24)
	struct FRecoilPushbackTuning ADSPushbackConfig; // 0x118(0x24)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct Gobi.RecoilPushbackTuning
// Size: 0x24 (Inherited: 0x00)
struct FRecoilPushbackTuning {
	struct FVector InitialTranslationOffset; // 0x00(0x0c)
	struct FVector StabilizedTranslationOffset; // 0x0c(0x0c)
	float InitialBlendRate; // 0x18(0x04)
	float StabilizedBlendRate; // 0x1c(0x04)
	float BlendOffRate; // 0x20(0x04)
};

// ScriptStruct Gobi.GunKickRecoilSpec
// Size: 0x50 (Inherited: 0x00)
struct FGunKickRecoilSpec {
	struct FVector MaxGunKickAngles; // 0x00(0x0c)
	struct FVector2D YawVelocityMinMax; // 0x0c(0x08)
	struct FVector2D PitchVelocityMinMax; // 0x14(0x08)
	struct FVector2D RollVelocityMinMax; // 0x1c(0x08)
	bool AlternateYawVelocities; // 0x24(0x01)
	bool AlternatePitchVelocities; // 0x25(0x01)
	bool AlternateRollVelocities; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	struct FVector MinRequiredAxisVelocities; // 0x28(0x0c)
	float AbsoluteVelocityMax; // 0x34(0x04)
	struct FVector AxisSnapFactors; // 0x38(0x0c)
	struct FVector AxisDampingFactors; // 0x44(0x0c)
};

// ScriptStruct Gobi.RecoilViewKickTuning
// Size: 0x08 (Inherited: 0x00)
struct FRecoilViewKickTuning {
	float RollSpringSnap; // 0x00(0x04)
	float RollSpringDamping; // 0x04(0x04)
};

// ScriptStruct Gobi.WeaponRecoilEntry
// Size: 0x28 (Inherited: 0x00)
struct FWeaponRecoilEntry {
	struct FVector2D YawStrengthMinMax; // 0x00(0x08)
	struct FVector2D PitchStrengthMinMax; // 0x08(0x08)
	struct FVector2D RollStrengthMinMax; // 0x10(0x08)
	float MinRequiredYawRecoil; // 0x18(0x04)
	float MinRequiredPitchRecoil; // 0x1c(0x04)
	float MinRequiredRollRecoil; // 0x20(0x04)
	int32_t NextEntryIndex; // 0x24(0x04)
};

// ScriptStruct Gobi.RelationshipIncomingFriendInvite
// Size: 0x18 (Inherited: 0x00)
struct FRelationshipIncomingFriendInvite {
	struct FString UnixTimestamp; // 0x00(0x10)
	bool bReported; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.RelationshipOutgoingFriendInvite
// Size: 0x18 (Inherited: 0x00)
struct FRelationshipOutgoingFriendInvite {
	struct FString UnixTimestamp; // 0x00(0x10)
	enum class EHydraRelationshipLevel ReportedLevel; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Gobi.ReplicatedMontageData
// Size: 0x14 (Inherited: 0x00)
struct FReplicatedMontageData {
	float Position; // 0x00(0x04)
	float PlayRate; // 0x04(0x04)
	float BlendOutTime; // 0x08(0x04)
	char MontageId; // 0x0c(0x01)
	int8_t SectionId; // 0x0d(0x01)
	int8_t NextSectionId; // 0x0e(0x01)
	char Parity; // 0x0f(0x01)
	bool bPlayLinkedMontage; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Gobi.ReportPlayerEntry
// Size: 0x20 (Inherited: 0x00)
struct FReportPlayerEntry {
	struct FText DisplayName; // 0x00(0x18)
	enum class EZendeskReportingCategory Category; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Gobi.CheckpointSaferoomConfig
// Size: 0x10 (Inherited: 0x00)
struct FCheckpointSaferoomConfig {
	struct ADoor* Entrance; // 0x00(0x08)
	struct ADoor* Exit; // 0x08(0x08)
};

// ScriptStruct Gobi.SafeRoomMissionObjectiveConfig
// Size: 0x28 (Inherited: 0x00)
struct FSafeRoomMissionObjectiveConfig {
	struct FDataTableRowHandle ObjectiveHandle; // 0x00(0x20)
	bool bObjectiveCompleted; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Gobi.ScenarioHeroDebugInfo
// Size: 0x0c (Inherited: 0x00)
struct FScenarioHeroDebugInfo {
	struct TWeakObjectPtr<struct AHeroCharacter> Hero; // 0x00(0x08)
	float HeroScore; // 0x08(0x04)
};

// ScriptStruct Gobi.ScenarioEval
// Size: 0x40 (Inherited: 0x40)
struct FScenarioEval : FEvaluator {
};

// ScriptStruct Gobi.ScenarioEval_AllUsablesUsed
// Size: 0x50 (Inherited: 0x40)
struct FScenarioEval_AllUsablesUsed : FScenarioEval {
	bool bAllUsablesRequired; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t DesiredUsablesUsed; // 0x44(0x04)
	enum class ECompareOp Op; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Gobi.ScenarioEval_HerosInVolume
// Size: 0x78 (Inherited: 0x40)
struct FScenarioEval_HerosInVolume : FScenarioEval {
	struct FGameplayTag VolumeTag; // 0x40(0x08)
	struct TArray<struct ATriggerVolume*> TriggerVolumes; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	bool bAllHerosRequired; // 0x68(0x01)
	bool bExcludeDeadHeroes; // 0x69(0x01)
	bool bExcludeBots; // 0x6a(0x01)
	bool bExcludeIncap; // 0x6b(0x01)
	bool bExcludeHerosInRescuePod; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	int32_t DesiredHeroCount; // 0x70(0x04)
	enum class ECompareOp Op; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct Gobi.ScenarioEval_HeroPathDistance
// Size: 0x58 (Inherited: 0x40)
struct FScenarioEval_HeroPathDistance : FScenarioEval {
	float MaxRange; // 0x40(0x04)
	bool bAllHerosRequired; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t DesiredHeroCount; // 0x48(0x04)
	enum class ECompareOp Op; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FNavAgentSelector NavMeshSelector; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Gobi.ScenarioEval_TimeSinceActivation
// Size: 0x48 (Inherited: 0x40)
struct FScenarioEval_TimeSinceActivation : FScenarioEval {
	float Time; // 0x40(0x04)
	enum class ECompareOp Op; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct Gobi.ScenarioEval_PacingPhase
// Size: 0x48 (Inherited: 0x40)
struct FScenarioEval_PacingPhase : FScenarioEval {
	char RequiredPacing; // 0x40(0x01)
	enum class ECompareOp Op; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Gobi.ScenarioEval_CVar
// Size: 0x60 (Inherited: 0x40)
struct FScenarioEval_CVar : FScenarioEval {
	char pad_40[0x8]; // 0x40(0x08)
	struct FString CVarName; // 0x48(0x10)
	int32_t CVarValue; // 0x58(0x04)
	enum class ECompareOp Op; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct Gobi.ScenarioEval_FixedScore
// Size: 0x48 (Inherited: 0x40)
struct FScenarioEval_FixedScore : FScenarioEval {
	float FixedScore; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Gobi.ScenarioEvalContext
// Size: 0x10 (Inherited: 0x01)
struct FScenarioEvalContext : FEvaluatorContext {
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct Gobi.ScenarioEvalItem
// Size: 0x10 (Inherited: 0x08)
struct FScenarioEvalItem : FEvaluatorItem {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.ScenarioEvalConfig
// Size: 0x08 (Inherited: 0x01)
struct FScenarioEvalConfig : FEvaluatorConfig {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct Gobi.ScenarioHeroEvaluator
// Size: 0x40 (Inherited: 0x40)
struct FScenarioHeroEvaluator : FEvaluator {
};

// ScriptStruct Gobi.ScenarioHeroEval_HeroInVolume
// Size: 0x70 (Inherited: 0x40)
struct FScenarioHeroEval_HeroInVolume : FScenarioHeroEvaluator {
	struct FGameplayTag VolumeTag; // 0x40(0x08)
	struct TArray<struct ATriggerVolume*> TriggerVolumes; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	bool bHeroMustBeInVolume; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Gobi.ScenarioHeroEval_PathDistance
// Size: 0x48 (Inherited: 0x40)
struct FScenarioHeroEval_PathDistance : FScenarioHeroEvaluator {
	float MaxRange; // 0x40(0x04)
	struct FNavAgentSelector NavMeshSelector; // 0x44(0x04)
};

// ScriptStruct Gobi.ScenarioHeroEval_FixedScore
// Size: 0x48 (Inherited: 0x40)
struct FScenarioHeroEval_FixedScore : FScenarioHeroEvaluator {
	float FixedScore; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Gobi.ScenarioHeroEvalContext
// Size: 0x10 (Inherited: 0x01)
struct FScenarioHeroEvalContext : FEvaluatorContext {
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct Gobi.ScenarioHeroEvalItem
// Size: 0x10 (Inherited: 0x08)
struct FScenarioHeroEvalItem : FEvaluatorItem {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.ScenarioHeroEvalConfig
// Size: 0x08 (Inherited: 0x01)
struct FScenarioHeroEvalConfig : FEvaluatorConfig {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct Gobi.ScenarioCollection
// Size: 0x78 (Inherited: 0x00)
struct FScenarioCollection {
	bool bIsEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MinNumToEnable; // 0x04(0x04)
	int32_t MaxNumToEnable; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct AActor*> ScenarioActors; // 0x10(0x10)
	struct FGameplayTagQuery ScenarioManagerModQuery; // 0x20(0x48)
	struct TArray<struct UScenarioManagerMod*> Mods; // 0x68(0x10)
};

// ScriptStruct Gobi.DamageScreenEffectMapping
// Size: 0x18 (Inherited: 0x00)
struct FDamageScreenEffectMapping {
	struct UScreenEffect* ScreenEffectClass; // 0x00(0x08)
	struct UScreenEffect* ScreenEffectInstance; // 0x08(0x08)
	struct FGameplayTag DamageTypeTag; // 0x10(0x08)
};

// ScriptStruct Gobi.SegmentedReloadTuning
// Size: 0x14 (Inherited: 0x00)
struct FSegmentedReloadTuning {
	float ReloadEnterLength; // 0x00(0x04)
	float ReloadAddTime; // 0x04(0x04)
	float ReloadLoopLength; // 0x08(0x04)
	float ReloadExitLength; // 0x0c(0x04)
	float ReloadExitAnimationLength; // 0x10(0x04)
};

// ScriptStruct Gobi.ServerStatus
// Size: 0x2c (Inherited: 0x00)
struct FServerStatus {
	float AvgFPS; // 0x00(0x04)
	float WorstFPS; // 0x04(0x04)
	float MainThreadCPUTime; // 0x08(0x04)
	float MemPhysicalUsedMB; // 0x0c(0x04)
	float MemVirtualUsedMB; // 0x10(0x04)
	int32_t NumAICharacters; // 0x14(0x04)
	int32_t NumLivingAICharacters; // 0x18(0x04)
	int32_t NumPlayers; // 0x1c(0x04)
	int32_t NumSpectators; // 0x20(0x04)
	float InRateClientAvg; // 0x24(0x04)
	float OutRateClientAvg; // 0x28(0x04)
};

// ScriptStruct Gobi.SignInTasks
// Size: 0x20 (Inherited: 0x00)
struct FSignInTasks {
	struct TArray<struct USignInTask*> Tasks; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Gobi.SignInTaskDependency
// Size: 0x10 (Inherited: 0x00)
struct FSignInTaskDependency {
	struct USignInTask* Task; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Gobi.SkeletalMeshConfigMod
// Size: 0x20 (Inherited: 0x00)
struct FSkeletalMeshConfigMod {
	enum class ESkeletalMeshConfigModType ModType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PercentageOfPoolToMod; // 0x04(0x04)
	bool bExclusive; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct USkeletalMeshRegionConfig*> Configs; // 0x10(0x10)
};

// ScriptStruct Gobi.MeshConfigCombination
// Size: 0xa8 (Inherited: 0x00)
struct FMeshConfigCombination {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct UMeshMaterialParamSet*> MaterialParamSets; // 0x18(0x10)
	struct TArray<struct FSkeletalMeshPiece> DismembermentPieces; // 0x28(0x10)
	struct UMaterialInterface* InnerMeshMaterial; // 0x38(0x08)
	char pad_40[0x68]; // 0x40(0x68)
};

// ScriptStruct Gobi.MeshRegionCombination
// Size: 0x68 (Inherited: 0x00)
struct FMeshRegionCombination {
	char pad_0[0x58]; // 0x00(0x58)
	struct TArray<struct FSkeletalMeshSetMaterialOverride> MaterialOverrides; // 0x58(0x10)
};

// ScriptStruct Gobi.SkeletalMeshSet
// Size: 0xa8 (Inherited: 0x00)
struct FSkeletalMeshSet {
	struct TArray<struct FSkeletalMeshPiece> Meshes; // 0x00(0x10)
	struct TArray<struct FSkeletalMeshSetMaterialOverride> MaterialOverrides; // 0x10(0x10)
	struct TArray<struct UMeshMaterialParamSet*> MaterialParamSets; // 0x20(0x10)
	struct FGameplayTagQuery TagRequirements; // 0x30(0x48)
	struct FGameplayTagContainer ApplyTags; // 0x78(0x20)
	struct TArray<struct UMeshMaterialSet*> MaterialSets; // 0x98(0x10)
};

// ScriptStruct Gobi.MeshesConfig
// Size: 0x78 (Inherited: 0x00)
struct FMeshesConfig {
	struct TArray<struct FMeshConfig> Meshes; // 0x00(0x10)
	struct TArray<struct UMeshMaterialSet*> MaterialSets; // 0x10(0x10)
	struct TArray<struct UMeshMaterialParamSet*> MaterialParamSets; // 0x20(0x10)
	struct FGameplayTagQuery TagRequirements; // 0x30(0x48)
};

// ScriptStruct Gobi.MeshConfig
// Size: 0x30 (Inherited: 0x00)
struct FMeshConfig {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	struct FGameplayTag SkelMeshCompGameplayTag; // 0x08(0x08)
	bool bOptimization_UseAttachParentBounds; // 0x10(0x01)
	bool bStartHidden; // 0x11(0x01)
	bool bIsDismembermentPiece; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct UStaticMesh* StaticMeshDismembermentPiece; // 0x18(0x08)
	struct FName StaticMeshDismembermentAttachName; // 0x20(0x08)
	enum class EMutilationRegion MutilationRegion; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Gobi.HitData
// Size: 0x20 (Inherited: 0x00)
struct FHitData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Gobi.WeaponSoundCollectionRow
// Size: 0x38 (Inherited: 0x08)
struct FWeaponSoundCollectionRow : FTableRowBase {
	struct UAkAudioEvent* AKEBoltBack; // 0x08(0x08)
	struct UAkAudioEvent* AKEBoltForward; // 0x10(0x08)
	struct UAkAudioEvent* AKEBoltRelease; // 0x18(0x08)
	struct UAkAudioEvent* AKEMagIn; // 0x20(0x08)
	struct UAkAudioEvent* AKEMagOut; // 0x28(0x08)
	struct UAkAudioEvent* AKEMovement; // 0x30(0x08)
};

// ScriptStruct Gobi.SharedSoundBehavior
// Size: 0x10 (Inherited: 0x00)
struct FSharedSoundBehavior {
	struct UAkAudioEvent* Sound; // 0x00(0x08)
	bool bShouldFollowBone; // 0x08(0x01)
	bool bShouldPrepSurface; // 0x09(0x01)
	bool bShouldStopOnDestroy; // 0x0a(0x01)
	bool bShouldSupressIfHeadless; // 0x0b(0x01)
	float CooldownDuration; // 0x0c(0x04)
};

// ScriptStruct Gobi.SpawnLocalityCharacterSet
// Size: 0x28 (Inherited: 0x00)
struct FSpawnLocalityCharacterSet {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayTagContainer CharacterTags; // 0x08(0x20)
};

// ScriptStruct Gobi.SprayElementRow
// Size: 0x38 (Inherited: 0x08)
struct FSprayElementRow : FTableRowBase {
	enum class ESprayElement Element; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> Textures; // 0x28(0x10)
};

// ScriptStruct Gobi.SpreadTuning
// Size: 0x60 (Inherited: 0x00)
struct FSpreadTuning {
	struct FSpreadDef HipSpreadDef; // 0x00(0x28)
	struct FSpreadDef ADSSpreadDef; // 0x28(0x28)
	float StandingFiringSpreadDecayRate; // 0x50(0x04)
	float StandingMovingSpreadDecayRate; // 0x54(0x04)
	float CrouchedFiringSpreadDecayRate; // 0x58(0x04)
	float CrouchedMovingSpreadDecayRate; // 0x5c(0x04)
};

// ScriptStruct Gobi.SpreadDef
// Size: 0x28 (Inherited: 0x00)
struct FSpreadDef {
	struct FVector2D StandingSpreadMinMax; // 0x00(0x08)
	struct FVector2D CrouchedSpreadMinMax; // 0x08(0x08)
	float FiringSpreadAdd; // 0x10(0x04)
	float MovingSpreadAdd; // 0x14(0x04)
	float MaxPercentFromFiring; // 0x18(0x04)
	float MaxPercentFromMoving; // 0x1c(0x04)
	float CenterClusterMagnitude; // 0x20(0x04)
	float VerticalityScale; // 0x24(0x04)
};

// ScriptStruct Gobi.SteeringBehaviorChild
// Size: 0x10 (Inherited: 0x00)
struct FSteeringBehaviorChild {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USteeringBehavior* SteeringBehavior; // 0x08(0x08)
};

// ScriptStruct Gobi.MovementSpeedStance
// Size: 0x68 (Inherited: 0x00)
struct FMovementSpeedStance {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	struct FVector BaseMoveSpeed; // 0x48(0x0c)
	struct FVector MinBaseMoveSpeed; // 0x54(0x0c)
	bool bUseRandomSpeed; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Gobi.StepOnActorConfig
// Size: 0x18 (Inherited: 0x00)
struct FStepOnActorConfig {
	struct AActor* StepOnActorSubclass; // 0x00(0x08)
	struct TArray<struct UGameplayEffect*> StepOnGEs; // 0x08(0x10)
};

// ScriptStruct Gobi.StumbleConfig
// Size: 0x90 (Inherited: 0x00)
struct FStumbleConfig {
	struct TArray<struct UMontageSet*> StumbleMontageSets; // 0x00(0x10)
	struct TArray<struct UAnimMontage*> StumbleMontages; // 0x10(0x10)
	struct FGameplayTagContainer DamageTags; // 0x20(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x40(0x20)
	struct FGameplayTagContainer ReevaluateMontageTags; // 0x60(0x20)
	struct TArray<struct UGameplayEffect*> ApplyEffects; // 0x80(0x10)
};

// ScriptStruct Gobi.SubtitleWidgetList
// Size: 0x10 (Inherited: 0x00)
struct FSubtitleWidgetList {
	struct UGobiUserWidget* SubtitleWidgetBlueprint; // 0x00(0x08)
	float CooldownTimeRemaining; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.SuicideConfig
// Size: 0x120 (Inherited: 0x01)
struct FSuicideConfig : FAbilityConfig {
	char pad_1[0x7]; // 0x01(0x07)
	struct UGobiDamageType* DamageType; // 0x08(0x08)
	struct TArray<struct UGameplayEffect*> ApplyEffectsOnDeath; // 0x10(0x10)
	struct TArray<struct UAnimMontage*> CookingMontages; // 0x20(0x10)
	struct TArray<struct UGameplayEffect*> CookingEffects; // 0x30(0x10)
	struct FGameplayTagQuery BlockingTags; // 0x40(0x48)
	struct FGameplayTagQuery ByPassCookingTags; // 0x88(0x48)
	float MinCookTime; // 0xd0(0x04)
	bool bCanCancel; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct FGameplayTagQuery DieOnContactWithCharacters; // 0xd8(0x48)
};

// ScriptStruct Gobi.TargetingReticleTuning
// Size: 0x24 (Inherited: 0x00)
struct FTargetingReticleTuning {
	float MaxTargetDistance2D; // 0x00(0x04)
	float TargetDistanceWeight; // 0x04(0x04)
	float MaxTargetDistanceZ; // 0x08(0x04)
	float MaxTargetAngle; // 0x0c(0x04)
	float TargetAngleWeight; // 0x10(0x04)
	float MaxLockedOnCharacterDistance2D; // 0x14(0x04)
	float MaxLockedOnCharacterDistanceZ; // 0x18(0x04)
	float MinReticleFeetZDistance; // 0x1c(0x04)
	float MinReticleHeadDistance; // 0x20(0x04)
};

// ScriptStruct Gobi.TeamRelationship
// Size: 0x48 (Inherited: 0x00)
struct FTeamRelationship {
	struct FGameplayTag TeamTag; // 0x00(0x08)
	struct FGameplayTagContainer FriendlyTeams; // 0x08(0x20)
	struct FGameplayTagContainer EnemyTeams; // 0x28(0x20)
};

// ScriptStruct Gobi.TitanTentacleAnimInfo
// Size: 0x48 (Inherited: 0x00)
struct FTitanTentacleAnimInfo {
	bool bIdle; // 0x00(0x01)
	bool bSmashTell; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float SmashTellPlayRate; // 0x04(0x04)
	bool bSmashAttack; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SmashAttackPlayRate; // 0x0c(0x04)
	bool bSwipeTell; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float SwipeTellPlayRate; // 0x14(0x04)
	bool bSwipeAttack; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float SwipeAttackPlayRate; // 0x1c(0x04)
	float TellAngle; // 0x20(0x04)
	float AttackAngle; // 0x24(0x04)
	struct UBlendSpace1D* SmashTellBlendSpace; // 0x28(0x08)
	struct UBlendSpace1D* SmashAttackBlendSpace; // 0x30(0x08)
	struct UAnimSequence* SwipeTellAnimSequence; // 0x38(0x08)
	struct UAnimSequence* SwipeAttackAnimSequence; // 0x40(0x08)
};

// ScriptStruct Gobi.TitanStage3TentacleAnimInfo
// Size: 0x28 (Inherited: 0x00)
struct FTitanStage3TentacleAnimInfo {
	bool bIdle; // 0x00(0x01)
	bool bAcidSprayAttackEnter; // 0x01(0x01)
	bool bAcidSprayAttackLoop; // 0x02(0x01)
	bool bAcidSprayAttackExit; // 0x03(0x01)
	float AcidSprayAttackEnterPlayRate; // 0x04(0x04)
	float AcidSprayAttackExitPlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x10(0x08)
	struct UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x18(0x08)
	struct UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x20(0x08)
};

// ScriptStruct Gobi.TitanStage2StateInfo
// Size: 0x02 (Inherited: 0x00)
struct FTitanStage2StateInfo {
	enum class ETitanPhase2TentacleState State; // 0x00(0x01)
	int8_t AttackZone; // 0x01(0x01)
};

// ScriptStruct Gobi.TitanStage3AcidSprayAttackZone
// Size: 0x30 (Inherited: 0x00)
struct FTitanStage3AcidSprayAttackZone {
	struct FGameplayTag SphereTag; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	float LoopSecondsWhenOccupiedByPlayer; // 0x10(0x04)
	float LoopSecondsWhenNotOccupiedByPlayer; // 0x14(0x04)
	struct UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x18(0x08)
	struct UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x20(0x08)
	struct UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x28(0x08)
};

// ScriptStruct Gobi.TitanStage2TentacleZoneAnims
// Size: 0x28 (Inherited: 0x00)
struct FTitanStage2TentacleZoneAnims {
	struct UAnimSequence* SmashTellBeginAnimSequence; // 0x00(0x08)
	struct UAnimSequence* SmashTellLoopAnimSequence; // 0x08(0x08)
	struct UAnimSequence* SmashAttackBeginAnimSequence; // 0x10(0x08)
	struct UAnimSequence* SmashAttackLoopAnimSequence; // 0x18(0x08)
	struct UAnimSequence* SmashRetractAnimSequence; // 0x20(0x08)
};

// ScriptStruct Gobi.TraceMeleeTuning
// Size: 0x98 (Inherited: 0x00)
struct FTraceMeleeTuning {
	float Damage; // 0x00(0x04)
	float HeavyAttackDamage; // 0x04(0x04)
	float LightStumbleDamagePerDamage; // 0x08(0x04)
	float HeavyStumbleDamagePerDamage; // 0x0c(0x04)
	float WeakSpotMultiplier; // 0x10(0x04)
	float MeleeCooldown; // 0x14(0x04)
	float StaminaCost; // 0x18(0x04)
	float LowStaminaDamageScalar; // 0x1c(0x04)
	float HeavyAttackStaminaDrain; // 0x20(0x04)
	float LowStaminaScalar; // 0x24(0x04)
	bool bOnlyApplyCleaveDuringLowStaminaAttack; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float TraceSize; // 0x2c(0x04)
	float TraceLength; // 0x30(0x04)
	float MinRequiredTimeForHeavyAttack; // 0x34(0x04)
	float LightAttackImpulse; // 0x38(0x04)
	float HeavyAttackImpulse; // 0x3c(0x04)
	struct TArray<struct FTraceMeleeTuningAttack> LightAttackSequence; // 0x40(0x10)
	struct TArray<struct FTraceMeleeTuningAttack> HeavyAttackSequence; // 0x50(0x10)
	float MinRequiredStaminaToStartBlocking; // 0x60(0x04)
	float StaminaDrainWhileBlocking; // 0x64(0x04)
	struct FMeleeMoveForceParameters LightAttackMoveForce; // 0x68(0x18)
	struct FMeleeMoveForceParameters HeavyAttackMoveForce; // 0x80(0x18)
};

// ScriptStruct Gobi.MeleeMoveForceParameters
// Size: 0x18 (Inherited: 0x00)
struct FMeleeMoveForceParameters {
	float LaunchSpeed; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	float GravityScalar; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* StrengthCurve; // 0x10(0x08)
};

// ScriptStruct Gobi.TraceMeleeTuningAttack
// Size: 0x24 (Inherited: 0x00)
struct FTraceMeleeTuningAttack {
	struct FVector2D StartTraceRotationOffset; // 0x00(0x08)
	struct FVector2D EndTraceRotationOffset; // 0x08(0x08)
	int32_t DesiredTraceCount; // 0x10(0x04)
	float MeleeStateLength; // 0x14(0x04)
	float MeleeStateInterruptiblePercent; // 0x18(0x04)
	float MeleeImpactStateLength; // 0x1c(0x04)
	float InitialCleavePower; // 0x20(0x04)
};

// ScriptStruct Gobi.ReplicatedAttackData
// Size: 0x02 (Inherited: 0x00)
struct FReplicatedAttackData {
	char AttackIndex; // 0x00(0x01)
	bool bHeavyAttack; // 0x01(0x01)
};

// ScriptStruct Gobi.TraceMeleeActiveMontage
// Size: 0x10 (Inherited: 0x00)
struct FTraceMeleeActiveMontage {
	struct UAnimMontage* FirstPersonMontage; // 0x00(0x08)
	struct UAnimMontage* ThirdPersonMontage; // 0x08(0x08)
};

// ScriptStruct Gobi.TraceMeleeAttack
// Size: 0x48 (Inherited: 0x00)
struct FTraceMeleeAttack {
	struct UAnimMontage* FirstPersonAttack; // 0x00(0x08)
	struct UAnimMontage* FirstPersonImpact; // 0x08(0x08)
	struct UAnimMontage* ThirdPersonAttack; // 0x10(0x08)
	struct UMontageSet* ThirdPersonAttackSet; // 0x18(0x08)
	struct UAnimMontage* ThirdPersonImpact; // 0x20(0x08)
	struct UMontageSet* ThirdPersonImpactSet; // 0x28(0x08)
	int32_t NextAttackIndex; // 0x30(0x04)
	float AttackDirectionPitch; // 0x34(0x04)
	float AttackDirectionYaw; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// ScriptStruct Gobi.HeavyHeroMeleeAttack
// Size: 0x60 (Inherited: 0x48)
struct FHeavyHeroMeleeAttack : FTraceMeleeAttack {
	struct UAnimMontage* FirstPersonBuildUp; // 0x48(0x08)
	struct UAnimMontage* ThirdPersonBuildUp; // 0x50(0x08)
	struct UMontageSet* ThirdPersonBuildUpSet; // 0x58(0x08)
};

// ScriptStruct Gobi.TriggerHordeMoveTickData
// Size: 0x08 (Inherited: 0x00)
struct FTriggerHordeMoveTickData {
	enum class ETriggerHordeState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct Gobi.TutorialPopupRow
// Size: 0x48 (Inherited: 0x08)
struct FTutorialPopupRow : FTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TArray<struct FTutorialTile> Tiles; // 0x38(0x10)
};

// ScriptStruct Gobi.TutorialTile
// Size: 0x38 (Inherited: 0x00)
struct FTutorialTile {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* Image; // 0x30(0x08)
};

// ScriptStruct Gobi.UnboundActionAndKeyCombo
// Size: 0x20 (Inherited: 0x00)
struct FUnboundActionAndKeyCombo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Gobi.GamepadPresetConfigRemapping
// Size: 0x18 (Inherited: 0x08)
struct FGamepadPresetConfigRemapping : FTableRowBase {
	struct FName NewInput; // 0x08(0x08)
	float NewScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Gobi.KeybindRowBase
// Size: 0x10 (Inherited: 0x08)
struct FKeybindRowBase : FTableRowBase {
	bool bIsKeyRebindable; // 0x08(0x01)
	bool bIsGamepadRebindable; // 0x09(0x01)
	bool bShowKey; // 0x0a(0x01)
	bool bShowGamepad; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.AxisKeybind
// Size: 0x50 (Inherited: 0x10)
struct FAxisKeybind : FKeybindRowBase {
	struct FName AxisName; // 0x10(0x08)
	float Scale; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText DisplayName; // 0x20(0x18)
	struct FText AlternateGamepadDisplayName; // 0x38(0x18)
};

// ScriptStruct Gobi.ActionKeybind
// Size: 0x58 (Inherited: 0x10)
struct FActionKeybind : FKeybindRowBase {
	struct FName ActionName; // 0x10(0x08)
	struct FText DisplayName; // 0x18(0x18)
	struct FString OtherActionsToBeBoundWithThis; // 0x30(0x10)
	struct FText MultiActionDisplayName; // 0x40(0x18)
};

// ScriptStruct Gobi.PostRoundStat
// Size: 0x28 (Inherited: 0x00)
struct FPostRoundStat {
	struct FText StatName; // 0x00(0x18)
	struct TArray<struct FPostRoundStatValue> PlayerValues; // 0x18(0x10)
};

// ScriptStruct Gobi.PostRoundStatValue
// Size: 0x10 (Inherited: 0x00)
struct FPostRoundStatValue {
	struct AGobiPlayerState* PlayerState; // 0x00(0x08)
	int32_t StatValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Gobi.UIPlayerStat
// Size: 0x38 (Inherited: 0x00)
struct FUIPlayerStat {
	struct FText DisplayName; // 0x00(0x18)
	enum class EPlayerProfileStat Stat; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString StatSuffix; // 0x20(0x10)
	bool bIsTimer; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Gobi.MatchStartedCondition
// Size: 0x28 (Inherited: 0x28)
struct FMatchStartedCondition : FUsableCondition {
};

// ScriptStruct Gobi.UsableBeginUsePayload
// Size: 0x20 (Inherited: 0x00)
struct FUsableBeginUsePayload {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Gobi.VendorSaleParams
// Size: 0x30 (Inherited: 0x00)
struct FVendorSaleParams {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	enum class EVendorSaleBehavior Behavior; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Probability; // 0x24(0x04)
	float MinDiscount; // 0x28(0x04)
	float MaxDiscount; // 0x2c(0x04)
};

// ScriptStruct Gobi.CategoryGroup
// Size: 0x30 (Inherited: 0x00)
struct FCategoryGroup {
	struct FText GroupName; // 0x00(0x18)
	struct TArray<enum class EVendorCategory> Categories; // 0x18(0x10)
	int32_t NumRows; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Gobi.WallGrabConfig
// Size: 0x148 (Inherited: 0x00)
struct FWallGrabConfig {
	bool bRequiresButtonPressToGrab; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UAnimMontage*> GrabMontages; // 0x08(0x10)
	struct FGameplayTagQuery BlockingTags; // 0x18(0x48)
	struct FGameplayTagQuery CancelTags; // 0x60(0x48)
	struct FGameplayTagContainer AttachingTags; // 0xa8(0x20)
	float ForwardGrabTraceDistance; // 0xc8(0x04)
	float MaxGrabDistance; // 0xcc(0x04)
	float MinGrabHeight; // 0xd0(0x04)
	float MinLedgeDistance; // 0xd4(0x04)
	float MinLedgeDistanceTraceDistance; // 0xd8(0x04)
	bool bGrabUsesSecondaryButton; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FVector2D GrabbingViewPitch; // 0xe0(0x08)
	struct FVector2D GrabbingViewYaw; // 0xe8(0x08)
	struct TArray<struct UGameplayEffect*> ApplyEffects; // 0xf0(0x10)
	float SetControlRotationDelay; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FCameraViewModifier ViewModifier; // 0x108(0x38)
	float CharacterFadeOutDistanceOverride; // 0x140(0x04)
	float MinDotToGrab; // 0x144(0x04)
};

// ScriptStruct Gobi.WallGrabMoveTickData
// Size: 0x24 (Inherited: 0x00)
struct FWallGrabMoveTickData {
	enum class EWallGrabState CurrentState; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FRotator GrabRotation; // 0x10(0x0c)
	char pad_1C[0x8]; // 0x1c(0x08)
};

// ScriptStruct Gobi.WanderPopulationBucketDensityLevel
// Size: 0x20 (Inherited: 0x00)
struct FWanderPopulationBucketDensityLevel {
	float SpawnersPerSqrKM; // 0x00(0x04)
	int32_t MaxOverlapsPerSeparationDistance; // 0x04(0x04)
	struct TArray<struct FActiveAreaSetHuddleDefinition> HuddleDefinitions; // 0x08(0x10)
	struct UAISpawnActorVariantsConfig* SpawnActorVariantsConfig; // 0x18(0x08)
};

// ScriptStruct Gobi.WaterMapperData
// Size: 0x30 (Inherited: 0x00)
struct FWaterMapperData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UTexture2D* MaskTexture; // 0x08(0x08)
	struct UTexture2D* HeightTexture; // 0x10(0x08)
	uint32_t TextureSize; // 0x18(0x04)
	float PixelSizeWorld; // 0x1c(0x04)
	float HeightScale; // 0x20(0x04)
	struct FVector Location; // 0x24(0x0c)
};

// ScriptStruct Gobi.WaterRipplerRuntime
// Size: 0x20 (Inherited: 0x00)
struct FWaterRipplerRuntime {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Gobi.WaterRipplerRequest
// Size: 0x20 (Inherited: 0x00)
struct FWaterRipplerRequest {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Gobi.WaterRipplerProxy
// Size: 0x38 (Inherited: 0x00)
struct FWaterRipplerProxy {
	struct UWaterRipplerDef* RipplerDefinition; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FWaterRipplerRuntime RuntimeData; // 0x18(0x20)
};

// ScriptStruct Gobi.WaterRipplerHit
// Size: 0x50 (Inherited: 0x00)
struct FWaterRipplerHit {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Gobi.BuoyantVFX
// Size: 0x0c (Inherited: 0x00)
struct FBuoyantVFX {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Gobi.CharacterVFX
// Size: 0x38 (Inherited: 0x00)
struct FCharacterVFX {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Gobi.WaypointDefinition
// Size: 0xd0 (Inherited: 0x00)
struct FWaypointDefinition {
	enum class EWaypointType Type; // 0x00(0x01)
	enum class EGobiTeam OwnerTeam; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TSoftClassPtr<UObject> WidgetClass; // 0x08(0x28)
	struct TArray<struct FDataTableRowHandle> MissionManagerObjectiveBindings; // 0x30(0x10)
	struct UTexture2D* Icon; // 0x40(0x08)
	struct FSlateColor Tint; // 0x48(0x30)
	struct FSlateColor MissionCompletedTint; // 0x78(0x30)
	struct FText Text; // 0xa8(0x18)
	float Lifetime; // 0xc0(0x04)
	bool bShowDistanceText; // 0xc4(0x01)
	bool bShowOffscreen; // 0xc5(0x01)
	bool bStartsVisible; // 0xc6(0x01)
	bool bFollowOwnerPosition; // 0xc7(0x01)
	enum class EWaypointVisibility Visibility; // 0xc8(0x01)
	enum class ECommWheelAction CommWheelAction; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// ScriptStruct Gobi.WeakSpot
// Size: 0xf0 (Inherited: 0x00)
struct FWeakSpot {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName TuningName; // 0x08(0x08)
	struct FGamePropertyFloat MaxHealth; // 0x10(0x38)
	float StumbleAccumMultiplier; // 0x48(0x04)
	bool bForwardDamageToHealthComponent; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float ForwardDamageToHealthComponentMutliplier; // 0x50(0x04)
	bool bForwardedDamageAppliesInflictDamageType; // 0x54(0x01)
	bool bClampForwardedDamageToWeakSpotHealth; // 0x55(0x01)
	bool bAbsorbsHealthComponentDamage; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	float InflictDamage; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UGobiDamageType* InflictDamageType; // 0x60(0x08)
	struct TArray<struct UGameplayEffect*> DestroyedEffects; // 0x68(0x10)
	struct TArray<struct FWeakSpotHitGameplayTag> HitImpactGameplayTags; // 0x78(0x10)
	struct TArray<struct FWeakSpotHealthStateActor> HealthStateActors; // 0x88(0x10)
	struct TArray<struct FMeshMaterialParamValueMapper> HealthMaterialModifiers; // 0x98(0x10)
	bool bRegisterAsAimAssistSnapLocation; // 0xa8(0x01)
	bool bUseHealthComponentDamageFilters; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float Health; // 0xac(0x04)
	struct FReplicatedDamageInfo ReplicatedDamageInfo; // 0xb0(0x40)
};

// ScriptStruct Gobi.WeakSpotHealthStateActor
// Size: 0x20 (Inherited: 0x00)
struct FWeakSpotHealthStateActor {
	float HealthPctThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AActor* SpawnActor; // 0x08(0x08)
	struct FName SocketName; // 0x10(0x08)
	struct AActor* SpawnedActor; // 0x18(0x08)
};

// ScriptStruct Gobi.WeakSpotHitGameplayTag
// Size: 0x0c (Inherited: 0x00)
struct FWeakSpotHitGameplayTag {
	float HealthPctThreshold; // 0x00(0x04)
	struct FGameplayTag Tag; // 0x04(0x08)
};

// ScriptStruct Gobi.WeakSpotAttachment
// Size: 0x1e0 (Inherited: 0xf0)
struct FWeakSpotAttachment : FWeakSpot {
	struct UStaticMesh* StaticMesh; // 0xf0(0x08)
	bool bMeshIsVisible; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FName SocketName; // 0xfc(0x08)
	char pad_104[0xc]; // 0x104(0x0c)
	struct FTransform RelativeTransform; // 0x110(0x30)
	bool bOffsetWhenDamaged; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FVector MaxOffsetWhenDamaged; // 0x144(0x0c)
	float WeakSpotDuration; // 0x150(0x04)
	struct FName CollisionProfileName; // 0x154(0x08)
	float ElapsedTime; // 0x15c(0x04)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x160(0x08)
	struct FWeakSpotAttachmentTuning WeakSpotAttachmentTuning; // 0x168(0x70)
	char pad_1D8[0x8]; // 0x1d8(0x08)
};

// ScriptStruct Gobi.WeakSpotSurface
// Size: 0x1a0 (Inherited: 0xf0)
struct FWeakSpotSurface : FWeakSpot {
	enum class EPhysicalSurface Surface; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TSet<struct FName> AssociatedBoneNames; // 0xf8(0x50)
	struct FWeakSpotSurfaceTuning WeakSpotSurfaceTuning; // 0x148(0x58)
};

// ScriptStruct Gobi.WeaponCustomizationUtils
// Size: 0x01 (Inherited: 0x00)
struct FWeaponCustomizationUtils {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Gobi.WeaponCustomizationRow
// Size: 0x140 (Inherited: 0x08)
struct FWeaponCustomizationRow : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	enum class EItemQuality Quality; // 0x38(0x01)
	enum class EWeaponCustomizationType Type; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UAkAudioEvent* EquipSound; // 0x40(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>> FirstPersonSkinDefinition; // 0x48(0x50)
	bool bUseUniqueThirdPersonDefinition; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>> ThirdPersonSkinDefinition; // 0xa0(0x50)
	struct TSoftObjectPtr<USkeletalMesh> FirstPersonMesh; // 0xf0(0x28)
	struct TSoftObjectPtr<UStaticMesh> ThirdPersonMesh; // 0x118(0x28)
};

// ScriptStruct Gobi.WeaponMoveSpeedTuning
// Size: 0x6c (Inherited: 0x00)
struct FWeaponMoveSpeedTuning {
	struct FMovementSpeedConfig MovementSpeedConfig; // 0x00(0x60)
	struct FLooseSprintConfig SprintConfig; // 0x60(0x0c)
};

// ScriptStruct Gobi.WeaponAttachmentConfigBase
// Size: 0x08 (Inherited: 0x00)
struct FWeaponAttachmentConfigBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Gobi.WeaponTracking
// Size: 0x90 (Inherited: 0x00)
struct FWeaponTracking {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Gobi.ZombieAnimState
// Size: 0x04 (Inherited: 0x00)
struct FZombieAnimState {
	bool bIsChargeMoving; // 0x00(0x01)
	bool bIsChargePushing; // 0x01(0x01)
	bool bHasEnemy; // 0x02(0x01)
	bool bIsAggro; // 0x03(0x01)
};

// ScriptStruct Gobi.GhostMaterial
// Size: 0x18 (Inherited: 0x00)
struct FGhostMaterial {
	struct TArray<struct FName> SlotNames; // 0x00(0x10)
	struct UMaterialInterface* Material; // 0x10(0x08)
};

// ScriptStruct Gobi.ZombieMovementSpeedConfig
// Size: 0x30 (Inherited: 0x00)
struct FZombieMovementSpeedConfig {
	struct FZombieMovementSpeedStanceConfig Standing; // 0x00(0x18)
	struct FZombieMovementSpeedStanceConfig Crouched; // 0x18(0x18)
};

// ScriptStruct Gobi.ZombieMovementSpeedStanceConfig
// Size: 0x18 (Inherited: 0x00)
struct FZombieMovementSpeedStanceConfig {
	struct FVector BaseMoveSpeed; // 0x00(0x0c)
	struct FVector GhostMoveSpeed; // 0x0c(0x0c)
};

// ScriptStruct Gobi.ZombieMovementForce
// Size: 0x1c (Inherited: 0x00)
struct FZombieMovementForce {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	float RemainingTime; // 0x18(0x04)
};

// ScriptStruct Gobi.ZombieMovementForceProperties
// Size: 0x08 (Inherited: 0x00)
struct FZombieMovementForceProperties {
	struct UCurveFloat* StrengthCurve; // 0x00(0x08)
};

// ScriptStruct Gobi.ZombieMovementForceAttributes
// Size: 0x0c (Inherited: 0x00)
struct FZombieMovementForceAttributes {
	float Speed; // 0x00(0x04)
	float EndSpeed; // 0x04(0x04)
	float Duration; // 0x08(0x04)
};

// ScriptStruct Gobi.ZombieMutationTreeRow
// Size: 0x90 (Inherited: 0x08)
struct FZombieMutationTreeRow : FTableRowBase {
	enum class EZombieMutationTree Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	float RespawnTime; // 0x40(0x04)
	bool bRespawnQueueBased; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float InitialSpawnDelay; // 0x48(0x04)
	int32_t BuybackCost; // 0x4c(0x04)
	int32_t OnFieldLimit; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UTexture2D* TileImage; // 0x58(0x08)
	struct TArray<struct FZombieMutationBranchRow> MutationBranches; // 0x60(0x10)
	struct APawn* PawnClass; // 0x70(0x08)
	struct TArray<struct FZombieMutationVariant> Variants; // 0x78(0x10)
	bool Hidden; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct Gobi.ZombieMutationVariant
// Size: 0x58 (Inherited: 0x00)
struct FZombieMutationVariant {
	struct APawn* PawnClass; // 0x00(0x08)
	struct FGameplayTagQuery TagRequirements; // 0x08(0x48)
	bool DisabledForTradeShow; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Gobi.ZombieMutationBranchRow
// Size: 0x28 (Inherited: 0x00)
struct FZombieMutationBranchRow {
	struct FText BranchName; // 0x00(0x18)
	struct TArray<struct FDataTableRowHandle> Mutations; // 0x18(0x10)
};

