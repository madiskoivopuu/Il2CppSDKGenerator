#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseClientWorldSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseClientWorldSender"));
	}


	template <typename R = void> static R SendHello(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFC9794))(0, world);
	}
	template <typename R = void> static R SendWaitMe(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFC8960))(0, world);
	}
	template <typename R = void> static R SendWorldIsNotEmpty(ICommonClientWorld* world, Il2CppString* blueprints) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFC9BE8))(0, world, blueprints);
	}
	template <typename R = void> static R SendWorldRequst(ICommonClientWorld* world, int64_t ticks) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0xFBEB08))(0, world, ticks);
	}
	template <typename R = void> static R SendPlayerReady(ICommonClientWorld* world, int64_t ticks) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0xFC8E64))(0, world, ticks);
	}
	template <typename R = void> static R SendApplicationStatus(ICommonClientWorld* world, bool paused, bool isAfk) {
		return ((R (*)(void *, ICommonClientWorld*, bool, bool))(Il2CppBase() + 0xFC9D14))(0, world, paused, isAfk);
	}
	template <typename R = void> static R SendDevToDevId(ICommonClientWorld* world, Il2CppString* id) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFC9E4C))(0, world, id);
	}
	template <typename R = void> static R SendSelectMount(ICommonClientWorld* world, Il2CppString* newMount, bool fast) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0xFC9F70))(0, world, newMount, fast);
	}
	template <typename R = void> static R SendSelectPet(ICommonClientWorld* world, Il2CppString* newPet, bool fast) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0xFCA0B0))(0, world, newPet, fast);
	}
	template <typename R = void> static R SendAddMountSlots(ICommonClientWorld* world, int32_t newGrade) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0xFCA1F0))(0, world, newGrade);
	}
	template <typename R = void> static R SendAddRuneSlots(ICommonClientWorld* world, int32_t newGrade) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0xFCA314))(0, world, newGrade);
	}
	template <typename R = void> static R SendMoveRuneToFromClassSlots(ICommonClientWorld* world, int32_t slotId, PlayerClassType classType, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, bool toClass, bool allowMerge) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, PlayerClassType, int32_t, int32_t, bool, bool))(Il2CppBase() + 0xFCA438))(0, world, slotId, classType, fromClassSlotIndex, toClassSlotIndex, toClass, allowMerge);
	}
	template <typename R = void> static R SendSeenClassRune(ICommonClientWorld* world, PlayerClassType classType, bool deactivated) {
		return ((R (*)(void *, ICommonClientWorld*, PlayerClassType, bool))(Il2CppBase() + 0xFCA5A8))(0, world, classType, deactivated);
	}
	template <typename R = void> static R SendTrackingQuest(ICommonClientWorld* world, Il2CppString* questName, bool tracking) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0xFCA788))(0, world, questName, tracking);
	}
	template <typename R = void> static R SendClaimQuest(ICommonClientWorld* world, Il2CppString* questName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCA8C8))(0, world, questName);
	}
	template <typename R = void> static R SendSkipQuest(ICommonClientWorld* world, Il2CppString* questName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCA9FC))(0, world, questName);
	}
	template <typename R = void> static R SendBuyDailyItem(ICommonClientWorld* world, int32_t slotId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0xFCAB30))(0, world, slotId);
	}
	template <typename R = void> static R SendTryCompleteQuest(ICommonClientWorld* world, Il2CppString* questName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCAC54))(0, world, questName);
	}
	template <typename R = void> static R SendShowQuest(ICommonClientWorld* world, Il2CppString* questName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCAD7C))(0, world, questName);
	}
	template <typename R = void> static R SendShowTempBuffInfo(ICommonClientWorld* world, Il2CppString* uniqueLookup) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCAEA4))(0, world, uniqueLookup);
	}
	template <typename R = void> static R SendFirstTimeEventGlobalMap(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFCAFCC))(0, world);
	}
	template <typename R = void> static R SendChatRegistrationSuccess(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFCB0D0))(0, world);
	}
	template <typename R = void> static R SendChatChannelSelect(ICommonClientWorld* world, Il2CppString* newChannelType) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCB1D4))(0, world, newChannelType);
	}
	template <typename R = void> static R SendChatUpdateLastOpened(ICommonClientWorld* world, Il2CppString* roomType) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCB300))(0, world, roomType);
	}
	template <typename R = void> static R SendDialogueAnswer(ICommonClientWorld* world, int32_t id, int32_t index) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0xFCB42C))(0, world, id, index);
	}
	template <typename R = void> static R SendDialogueGoToCity(ICommonClientWorld* world, int32_t id, int32_t index) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0xFCB558))(0, world, id, index);
	}
	template <typename R = void> static R SendHideHead(ICommonClientWorld* world, int32_t id, bool hide) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0xFCB684))(0, world, id, hide);
	}
	template <typename R = void> static R SendHidePet(ICommonClientWorld* world, int32_t id, bool hide) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0xFCB7BC))(0, world, id, hide);
	}
	template <typename R = void> static R SendHideBag(ICommonClientWorld* world, int32_t id, bool hide) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0xFCB8F4))(0, world, id, hide);
	}
	template <typename R = void> static R SendDialogueClose(ICommonClientWorld* world, int32_t id) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0xFCBA2C))(0, world, id);
	}
	template <typename R = void> static R SendDonation(ICommonClientWorld* world, Il2CppString* className, PlayerClassProgress progressType, Il2CppArray<int32_t>* slotIds) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, PlayerClassProgress, Il2CppArray<int32_t>*))(Il2CppBase() + 0xFCBB4C))(0, world, className, progressType, slotIds);
	}
	template <typename R = void> static R SendExchange(ICommonClientWorld* world, ExchangeType type, Il2CppArray<int32_t>* slotIds, Il2CppArray<Resource>* resources, int32_t rewardSlotId) {
		return ((R (*)(void *, ICommonClientWorld*, ExchangeType, Il2CppArray<int32_t>*, Il2CppArray<Resource>*, int32_t))(Il2CppBase() + 0xFCBCB0))(0, world, type, slotIds, resources, rewardSlotId);
	}
	template <typename R = void> static R SendCurrencyExchange(ICommonClientWorld* world, int32_t count, int32_t buffSlotId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0xFCBE20))(0, world, count, buffSlotId);
	}
	template <typename R = void> static R SendBossOperation(ICommonClientWorld* world, BossActions action, Il2CppString* bossName, Il2CppArray<int32_t>* slotIds) {
		return ((R (*)(void *, ICommonClientWorld*, BossActions, Il2CppString*, Il2CppArray<int32_t>*))(Il2CppBase() + 0xFCBF4C))(0, world, action, bossName, slotIds);
	}
	template <typename R = void> static R SendSearchPvpGroup(ICommonClientWorld* world, bool start) {
		return ((R (*)(void *, ICommonClientWorld*, bool))(Il2CppBase() + 0xFCC0B4))(0, world, start);
	}
	template <typename R = void> static R SendUpdateStoreRequest(ICommonClientWorld* world, StoreCategory category) {
		return ((R (*)(void *, ICommonClientWorld*, StoreCategory))(Il2CppBase() + 0xFCC1D8))(0, world, category);
	}
	template <typename R = void> static R SendJoinTournament(ICommonClientWorld* world, Il2CppString* tournamentName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCC2FC))(0, world, tournamentName);
	}
	template <typename R = void> static R SendStartWindowEvent(ICommonClientWorld* world, ClientStartWindowEvent windowEvent) {
		return ((R (*)(void *, ICommonClientWorld*, ClientStartWindowEvent))(Il2CppBase() + 0xFCC41C))(0, world, windowEvent);
	}
	template <typename R = void> static R SendSupportClick(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFCC550))(0, world);
	}
	template <typename R = void> static R SendChangeServer(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCC664))(0, world, name);
	}
	template <typename R = void> static R SendTrophyRoadBuild(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFCC798))(0, world);
	}
	template <typename R = void> static R SendScouting(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCC89C))(0, world, name);
	}
	template <typename R = void> static R SendSelectedQuickSwitchClasses(ICommonClientWorld* world, Il2CppArray<Il2CppString*>* classes) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFCC9D0))(0, world, classes);
	}
	template <typename R = void> static R SendArmingEmojis(ICommonClientWorld* world, Il2CppArray<Il2CppString*>* names) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFCCAFC))(0, world, names);
	}
	template <typename R = void> static R SendSeenNewClass(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCCC50))(0, world, blueprintName);
	}
	template <typename R = void> static R SendSeenNewPet(ICommonClientWorld* world, Il2CppString* petType) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCCD90))(0, world, petType);
	}
	template <typename R = void> static R SendSeenNewCosmetic(ICommonClientWorld* world, Il2CppString* name) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0xFCCED0))(0, world, name);
	}
	template <typename R = void> static R SendChangeManualTrackingOrder(ICommonClientWorld* world, Il2CppString* quests, int32_t count) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0xFCD010))(0, world, quests, count);
	}
	template <typename R = void> static R SendBugReport(ICommonClientWorld* world, int64_t now) {
		return ((R (*)(void *, ICommonClientWorld*, int64_t))(Il2CppBase() + 0xFCD14C))(0, world, now);
	}
	template <typename R = void> static R SendTimeSync(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFCD26C))(0, world);
	}
	template <typename R = void> static R SendBugreportUrlRequest(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xFCD480))(0, world);
	}
	template <typename R = void> static R SendAFKStateMessage(ICommonClientWorld* world, bool afkWindowWasOpened) {
		return ((R (*)(void *, ICommonClientWorld*, bool))(Il2CppBase() + 0xFCD5C0))(0, world, afkWindowWasOpened);
	}
	template <typename R = void> static R SendGetAllBPRewards(ICommonClientWorld* world, CurrencyType currencyType) {
		return ((R (*)(void *, ICommonClientWorld*, CurrencyType))(Il2CppBase() + 0xFCD6E4))(0, world, currencyType);
	}
	template <typename R = void> static R SendRuneMerge(ICommonClientWorld* world, int32_t id, int32_t toId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0xFCD804))(0, world, id, toId);
	}
	template <typename R = void> static R SendAdsData(ICommonClientWorld* world, Il2CppString* action, AdsActor actor, Il2CppString* reason) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, AdsActor, Il2CppString*))(Il2CppBase() + 0xFCD930))(0, world, action, actor, reason);
	}
	template <typename R = void> static R SendOpenInventoryContainer(ICommonClientWorld* world, int32_t targetId, Il2CppString* key) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, Il2CppString*))(Il2CppBase() + 0xFCDA94))(0, world, targetId, key);
	}
	template <typename R = void> static R SendGradeUpPetSkill(ICommonClientWorld* world, int32_t slotId, int32_t skillIndex) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0xFCDBD4))(0, world, slotId, skillIndex);
	}
	template <typename R = void> static R SendShowChestMarker(ICommonClientWorld* world, bool show) {
		return ((R (*)(void *, ICommonClientWorld*, bool))(Il2CppBase() + 0xFCDD00))(0, world, show);
	}

};

