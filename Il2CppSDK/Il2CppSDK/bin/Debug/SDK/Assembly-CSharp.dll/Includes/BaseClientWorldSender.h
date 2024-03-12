#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseClientWorldSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseClientWorldSender"));
	}


	template <typename T = void> static T SendHello(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFC9794))(0, world);
	}
	template <typename T = void> static T SendWaitMe(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFC8960))(0, world);
	}
	template <typename T = void> static T SendWorldIsNotEmpty(uintptr_t world, Il2CppString* blueprints) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFC9BE8))(0, world, blueprints);
	}
	template <typename T = void> static T SendWorldRequst(uintptr_t world, int64_t ticks) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xFBEB08))(0, world, ticks);
	}
	template <typename T = void> static T SendPlayerReady(uintptr_t world, int64_t ticks) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xFC8E64))(0, world, ticks);
	}
	template <typename T = void> static T SendApplicationStatus(uintptr_t world, bool paused, bool isAfk) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0xFC9D14))(0, world, paused, isAfk);
	}
	template <typename T = void> static T SendDevToDevId(uintptr_t world, Il2CppString* id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFC9E4C))(0, world, id);
	}
	template <typename T = void> static T SendSelectMount(uintptr_t world, Il2CppString* newMount, bool fast) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0xFC9F70))(0, world, newMount, fast);
	}
	template <typename T = void> static T SendSelectPet(uintptr_t world, Il2CppString* newPet, bool fast) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0xFCA0B0))(0, world, newPet, fast);
	}
	template <typename T = void> static T SendAddMountSlots(uintptr_t world, int32_t newGrade) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xFCA1F0))(0, world, newGrade);
	}
	template <typename T = void> static T SendAddRuneSlots(uintptr_t world, int32_t newGrade) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xFCA314))(0, world, newGrade);
	}
	template <typename T = void> static T SendMoveRuneToFromClassSlots(uintptr_t world, int32_t slotId, uintptr_t classType, int32_t fromClassSlotIndex, int32_t toClassSlotIndex, bool toClass, bool allowMerge) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0xFCA438))(0, world, slotId, classType, fromClassSlotIndex, toClassSlotIndex, toClass, allowMerge);
	}
	template <typename T = void> static T SendSeenClassRune(uintptr_t world, uintptr_t classType, bool deactivated) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0xFCA5A8))(0, world, classType, deactivated);
	}
	template <typename T = void> static T SendTrackingQuest(uintptr_t world, Il2CppString* questName, bool tracking) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0xFCA788))(0, world, questName, tracking);
	}
	template <typename T = void> static T SendClaimQuest(uintptr_t world, Il2CppString* questName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCA8C8))(0, world, questName);
	}
	template <typename T = void> static T SendSkipQuest(uintptr_t world, Il2CppString* questName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCA9FC))(0, world, questName);
	}
	template <typename T = void> static T SendBuyDailyItem(uintptr_t world, int32_t slotId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xFCAB30))(0, world, slotId);
	}
	template <typename T = void> static T SendTryCompleteQuest(uintptr_t world, Il2CppString* questName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCAC54))(0, world, questName);
	}
	template <typename T = void> static T SendShowQuest(uintptr_t world, Il2CppString* questName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCAD7C))(0, world, questName);
	}
	template <typename T = void> static T SendShowTempBuffInfo(uintptr_t world, Il2CppString* uniqueLookup) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCAEA4))(0, world, uniqueLookup);
	}
	template <typename T = void> static T SendFirstTimeEventGlobalMap(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCAFCC))(0, world);
	}
	template <typename T = void> static T SendChatRegistrationSuccess(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCB0D0))(0, world);
	}
	template <typename T = void> static T SendChatChannelSelect(uintptr_t world, Il2CppString* newChannelType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCB1D4))(0, world, newChannelType);
	}
	template <typename T = void> static T SendChatUpdateLastOpened(uintptr_t world, Il2CppString* roomType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCB300))(0, world, roomType);
	}
	template <typename T = void> static T SendDialogueAnswer(uintptr_t world, int32_t id, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xFCB42C))(0, world, id, index);
	}
	template <typename T = void> static T SendDialogueGoToCity(uintptr_t world, int32_t id, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xFCB558))(0, world, id, index);
	}
	template <typename T = void> static T SendHideHead(uintptr_t world, int32_t id, bool hide) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0xFCB684))(0, world, id, hide);
	}
	template <typename T = void> static T SendHidePet(uintptr_t world, int32_t id, bool hide) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0xFCB7BC))(0, world, id, hide);
	}
	template <typename T = void> static T SendHideBag(uintptr_t world, int32_t id, bool hide) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0xFCB8F4))(0, world, id, hide);
	}
	template <typename T = void> static T SendDialogueClose(uintptr_t world, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xFCBA2C))(0, world, id);
	}
	template <typename T = void> static T SendDonation(uintptr_t world, Il2CppString* className, uintptr_t progressType, Il2CppArray<uintptr_t>* slotIds) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFCBB4C))(0, world, className, progressType, slotIds);
	}
	template <typename T = void> static T SendExchange(uintptr_t world, uintptr_t type, Il2CppArray<uintptr_t>* slotIds, Il2CppArray<uintptr_t>* resources, int32_t rewardSlotId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xFCBCB0))(0, world, type, slotIds, resources, rewardSlotId);
	}
	template <typename T = void> static T SendCurrencyExchange(uintptr_t world, int32_t count, int32_t buffSlotId) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xFCBE20))(0, world, count, buffSlotId);
	}
	template <typename T = void> static T SendBossOperation(uintptr_t world, uintptr_t action, Il2CppString* bossName, Il2CppArray<uintptr_t>* slotIds) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFCBF4C))(0, world, action, bossName, slotIds);
	}
	template <typename T = void> static T SendSearchPvpGroup(uintptr_t world, bool start) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0xFCC0B4))(0, world, start);
	}
	template <typename T = void> static T SendUpdateStoreRequest(uintptr_t world, uintptr_t category) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCC1D8))(0, world, category);
	}
	template <typename T = void> static T SendJoinTournament(uintptr_t world, Il2CppString* tournamentName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCC2FC))(0, world, tournamentName);
	}
	template <typename T = void> static T SendStartWindowEvent(uintptr_t world, uintptr_t windowEvent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCC41C))(0, world, windowEvent);
	}
	template <typename T = void> static T SendSupportClick(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCC550))(0, world);
	}
	template <typename T = void> static T SendChangeServer(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCC664))(0, world, name);
	}
	template <typename T = void> static T SendTrophyRoadBuild(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCC798))(0, world);
	}
	template <typename T = void> static T SendScouting(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCC89C))(0, world, name);
	}
	template <typename T = void> static T SendSelectedQuickSwitchClasses(uintptr_t world, Il2CppArray<uintptr_t>* classes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFCC9D0))(0, world, classes);
	}
	template <typename T = void> static T SendArmingEmojis(uintptr_t world, Il2CppArray<uintptr_t>* names) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFCCAFC))(0, world, names);
	}
	template <typename T = void> static T SendSeenNewClass(uintptr_t world, Il2CppString* blueprintName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCCC50))(0, world, blueprintName);
	}
	template <typename T = void> static T SendSeenNewPet(uintptr_t world, Il2CppString* petType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCCD90))(0, world, petType);
	}
	template <typename T = void> static T SendSeenNewCosmetic(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCCED0))(0, world, name);
	}
	template <typename T = void> static T SendChangeManualTrackingOrder(uintptr_t world, Il2CppString* quests, int32_t count) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0xFCD010))(0, world, quests, count);
	}
	template <typename T = void> static T SendBugReport(uintptr_t world, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xFCD14C))(0, world, now);
	}
	template <typename T = void> static T SendTimeSync(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCD26C))(0, world);
	}
	template <typename T = void> static T SendBugreportUrlRequest(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCD480))(0, world);
	}
	template <typename T = void> static T SendAFKStateMessage(uintptr_t world, bool afkWindowWasOpened) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0xFCD5C0))(0, world, afkWindowWasOpened);
	}
	template <typename T = void> static T SendGetAllBPRewards(uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCD6E4))(0, world, currencyType);
	}
	template <typename T = void> static T SendRuneMerge(uintptr_t world, int32_t id, int32_t toId) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xFCD804))(0, world, id, toId);
	}
	template <typename T = void> static T SendAdsData(uintptr_t world, Il2CppString* action, uintptr_t actor, Il2CppString* reason) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFCD930))(0, world, action, actor, reason);
	}
	template <typename T = void> static T SendOpenInventoryContainer(uintptr_t world, int32_t targetId, Il2CppString* key) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0xFCDA94))(0, world, targetId, key);
	}
	template <typename T = void> static T SendGradeUpPetSkill(uintptr_t world, int32_t slotId, int32_t skillIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xFCDBD4))(0, world, slotId, skillIndex);
	}
	template <typename T = void> static T SendShowChestMarker(uintptr_t world, bool show) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0xFCDD00))(0, world, show);
	}

};

}
