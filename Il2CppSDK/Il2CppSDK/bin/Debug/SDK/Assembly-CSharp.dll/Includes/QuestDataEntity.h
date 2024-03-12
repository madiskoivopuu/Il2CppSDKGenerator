#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataEntity"));
	}

	template <typename T = uintptr_t> static T& activateTournamentComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& alwaysActualComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& dailyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& dailyProgressComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& eventComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& manualTrackProhibitionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& notAutoCompleteComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& offerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& shareableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& targetSelfComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& triggerBuildOwnComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& triggerCraftComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& triggerDamageComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& triggerDonateComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& triggerExitComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& triggerFinalizeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& triggerGameEventComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& triggerHealComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& triggerKillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& triggerLevelComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& triggerOwnComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& triggerQuestCompletedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& triggerSneakComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& triggerSneakDamageComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& triggerUnlockComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& triggerUpLevelCapComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& triggerUseComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& triggerVisitComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& triggerVisitGlobalMapComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1BD60))(this);
	}
	template <typename T = uintptr_t> T get_act() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B890))(this);
	}
	template <typename T = bool> T get_hasAct() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B884))(this);
	}
	template <typename T = void> T AddAct(Il2CppString* newMainQuest) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1BE10))(this, newMainQuest);
	}
	template <typename T = void> T ReplaceAct(Il2CppString* newMainQuest) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1BF24))(this, newMainQuest);
	}
	template <typename T = void> T RemoveAct() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C038))(this);
	}
	template <typename T = uintptr_t> T get_activateNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C044))(this);
	}
	template <typename T = bool> T get_hasActivateNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C0CC))(this);
	}
	template <typename T = void> T AddActivateNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1C0D8))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T ReplaceActivateNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1C240))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T RemoveActivateNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C3A8))(this);
	}
	template <typename T = uintptr_t> T get_activateQuests() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C3B4))(this);
	}
	template <typename T = bool> T get_hasActivateQuests() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C43C))(this);
	}
	template <typename T = void> T AddActivateQuests(Il2CppArray<uintptr_t>* newOnActivate, Il2CppArray<uintptr_t>* newOnCompleted, Il2CppArray<uintptr_t>* newOnRewarded, Il2CppArray<uintptr_t>* newOnEndTime, bool newShareDuration, bool newNotStarted) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, bool))(Il2CppBase() + 0x1C1C448))(this, newOnActivate, newOnCompleted, newOnRewarded, newOnEndTime, newShareDuration, newNotStarted);
	}
	template <typename T = void> T ReplaceActivateQuests(Il2CppArray<uintptr_t>* newOnActivate, Il2CppArray<uintptr_t>* newOnCompleted, Il2CppArray<uintptr_t>* newOnRewarded, Il2CppArray<uintptr_t>* newOnEndTime, bool newShareDuration, bool newNotStarted) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, bool))(Il2CppBase() + 0x1C1C5C0))(this, newOnActivate, newOnCompleted, newOnRewarded, newOnEndTime, newShareDuration, newNotStarted);
	}
	template <typename T = void> T RemoveActivateQuests() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C738))(this);
	}
	template <typename T = bool> T get_isActivateTournament() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C744))(this);
	}
	template <typename T = void> T set_isActivateTournament(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1C750))(this, value);
	}
	template <typename T = uintptr_t> T get_activeCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C868))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C8F0))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x1C1C8FC))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x1C1CA4C))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CB9C))(this);
	}
	template <typename T = uintptr_t> T get_activeLocations() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CBA8))(this);
	}
	template <typename T = bool> T get_hasActiveLocations() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CC30))(this);
	}
	template <typename T = void> T AddActiveLocations(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C1CC3C))(this, newValues);
	}
	template <typename T = void> T ReplaceActiveLocations(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C1CD50))(this, newValues);
	}
	template <typename T = void> T RemoveActiveLocations() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CE64))(this);
	}
	template <typename T = uintptr_t> T get_alertButton() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CE70))(this);
	}
	template <typename T = bool> T get_hasAlertButton() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CEF8))(this);
	}
	template <typename T = void> T AddAlertButton(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1CF04))(this, newName);
	}
	template <typename T = void> T ReplaceAlertButton(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D018))(this, newName);
	}
	template <typename T = void> T RemoveAlertButton() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D12C))(this);
	}
	template <typename T = uintptr_t> T get_aliveCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D138))(this);
	}
	template <typename T = bool> T get_hasAliveCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D1C0))(this);
	}
	template <typename T = void> T AddAliveCondition(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D1CC))(this, newName);
	}
	template <typename T = void> T ReplaceAliveCondition(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D2E0))(this, newName);
	}
	template <typename T = void> T RemoveAliveCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D3F4))(this);
	}
	template <typename T = bool> T get_isAlwaysActual() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D400))(this);
	}
	template <typename T = void> T set_isAlwaysActual(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1D40C))(this, value);
	}
	template <typename T = uintptr_t> T get_analytics() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D524))(this);
	}
	template <typename T = bool> T get_hasAnalytics() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D5AC))(this);
	}
	template <typename T = void> T AddAnalytics(uintptr_t newType, Il2CppString* newParam) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C1D5B8))(this, newType, newParam);
	}
	template <typename T = void> T ReplaceAnalytics(uintptr_t newType, Il2CppString* newParam) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C1D6D4))(this, newType, newParam);
	}
	template <typename T = void> T RemoveAnalytics() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D7F0))(this);
	}
	template <typename T = uintptr_t> T get_applyStartDialogue() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D7FC))(this);
	}
	template <typename T = bool> T get_hasApplyStartDialogue() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D884))(this);
	}
	template <typename T = void> T AddApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D890))(this, newName);
	}
	template <typename T = void> T ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D9A4))(this, newName);
	}
	template <typename T = void> T RemoveApplyStartDialogue() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DAB8))(this);
	}
	template <typename T = uintptr_t> T get_autoActivate() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DAC4))(this);
	}
	template <typename T = bool> T get_hasAutoActivate() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DB4C))(this);
	}
	template <typename T = void> T AddAutoActivate(int32_t newLevel, Il2CppString* newQuestCompleted, bool newNotStarted) {
		return ((T (*)(QuestDataEntity*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1C1DB58))(this, newLevel, newQuestCompleted, newNotStarted);
	}
	template <typename T = void> T ReplaceAutoActivate(int32_t newLevel, Il2CppString* newQuestCompleted, bool newNotStarted) {
		return ((T (*)(QuestDataEntity*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1C1DC88))(this, newLevel, newQuestCompleted, newNotStarted);
	}
	template <typename T = void> T RemoveAutoActivate() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DDB8))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B918))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1BE04))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1DDC4))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1DED8))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DFEC))(this);
	}
	template <typename T = uintptr_t> T get_children() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DFF8))(this);
	}
	template <typename T = bool> T get_hasChildren() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E080))(this);
	}
	template <typename T = void> T AddChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C1E08C))(this, newNames);
	}
	template <typename T = void> T ReplaceChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C1E1A0))(this, newNames);
	}
	template <typename T = void> T RemoveChildren() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E2B4))(this);
	}
	template <typename T = uintptr_t> T get_completeChatNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E2C0))(this);
	}
	template <typename T = bool> T get_hasCompleteChatNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E348))(this);
	}
	template <typename T = void> T AddCompleteChatNotify(Il2CppString* newText) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E354))(this, newText);
	}
	template <typename T = void> T ReplaceCompleteChatNotify(Il2CppString* newText) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E468))(this, newText);
	}
	template <typename T = void> T RemoveCompleteChatNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E57C))(this);
	}
	template <typename T = uintptr_t> T get_completeCutscene() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E588))(this);
	}
	template <typename T = bool> T get_hasCompleteCutscene() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E610))(this);
	}
	template <typename T = void> T AddCompleteCutscene(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E61C))(this, newName);
	}
	template <typename T = void> T ReplaceCompleteCutscene(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E730))(this, newName);
	}
	template <typename T = void> T RemoveCompleteCutscene() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E844))(this);
	}
	template <typename T = uintptr_t> T get_completeNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E850))(this);
	}
	template <typename T = bool> T get_hasCompleteNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E8D8))(this);
	}
	template <typename T = void> T AddCompleteNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1E8E4))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T ReplaceCompleteNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1EA4C))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T RemoveCompleteNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EBB4))(this);
	}
	template <typename T = bool> T get_isDaily() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EBC0))(this);
	}
	template <typename T = void> T set_isDaily(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1EBCC))(this, value);
	}
	template <typename T = bool> T get_isDailyProgress() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1ECE4))(this);
	}
	template <typename T = void> T set_isDailyProgress(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1ECF0))(this, value);
	}
	template <typename T = uintptr_t> T get_description() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EE08))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EE90))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1EE9C))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1EFC4))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F0EC))(this);
	}
	template <typename T = uintptr_t> T get_destroyOnRewarded() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F0F8))(this);
	}
	template <typename T = bool> T get_hasDestroyOnRewarded() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F180))(this);
	}
	template <typename T = void> T AddDestroyOnRewarded(float newDuration) {
		return ((T (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F18C))(this, newDuration);
	}
	template <typename T = void> T ReplaceDestroyOnRewarded(float newDuration) {
		return ((T (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F290))(this, newDuration);
	}
	template <typename T = void> T RemoveDestroyOnRewarded() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F394))(this);
	}
	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F3A0))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F428))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F434))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F538))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F63C))(this);
	}
	template <typename T = bool> T get_isEvent() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F648))(this);
	}
	template <typename T = void> T set_isEvent(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1F654))(this, value);
	}
	template <typename T = uintptr_t> T get_failNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F76C))(this);
	}
	template <typename T = bool> T get_hasFailNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F7F4))(this);
	}
	template <typename T = void> T AddFailNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1F800))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T ReplaceFailNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(QuestDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1F968))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T RemoveFailNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FAD0))(this);
	}
	template <typename T = uintptr_t> T get_finishOnCompleted() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FADC))(this);
	}
	template <typename T = bool> T get_hasFinishOnCompleted() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FB64))(this);
	}
	template <typename T = void> T AddFinishOnCompleted(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FB70))(this, newName);
	}
	template <typename T = void> T ReplaceFinishOnCompleted(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FC84))(this, newName);
	}
	template <typename T = void> T RemoveFinishOnCompleted() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FD98))(this);
	}
	template <typename T = uintptr_t> T get_fog() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FDA4))(this);
	}
	template <typename T = bool> T get_hasFog() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FE2C))(this);
	}
	template <typename T = void> T AddFog(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FE38))(this, newName);
	}
	template <typename T = void> T ReplaceFog(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FF4C))(this, newName);
	}
	template <typename T = void> T RemoveFog() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20060))(this);
	}
	template <typename T = uintptr_t> T get_getRewardQuest() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2006C))(this);
	}
	template <typename T = bool> T get_hasGetRewardQuest() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C200F4))(this);
	}
	template <typename T = void> T AddGetRewardQuest(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20100))(this, newName);
	}
	template <typename T = void> T ReplaceGetRewardQuest(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20214))(this, newName);
	}
	template <typename T = void> T RemoveGetRewardQuest() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20328))(this);
	}
	template <typename T = uintptr_t> T get_guildQuestDescription() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20334))(this);
	}
	template <typename T = bool> T get_hasGuildQuestDescription() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C203BC))(this);
	}
	template <typename T = void> T AddGuildQuestDescription(uintptr_t newDifficulty, int32_t newMinGuildRankPoints, int32_t newMaxGuildRankPoints, Il2CppArray<uintptr_t>* newPlayerRewards) {
		return ((T (*)(QuestDataEntity*, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C203C8))(this, newDifficulty, newMinGuildRankPoints, newMaxGuildRankPoints, newPlayerRewards);
	}
	template <typename T = void> T ReplaceGuildQuestDescription(uintptr_t newDifficulty, int32_t newMinGuildRankPoints, int32_t newMaxGuildRankPoints, Il2CppArray<uintptr_t>* newPlayerRewards) {
		return ((T (*)(QuestDataEntity*, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C204F8))(this, newDifficulty, newMinGuildRankPoints, newMaxGuildRankPoints, newPlayerRewards);
	}
	template <typename T = void> T RemoveGuildQuestDescription() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20628))(this);
	}
	template <typename T = uintptr_t> T get_icon() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20634))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C206BC))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C206C8))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C20820))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20978))(this);
	}
	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20984))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20A0C))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20A18))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20B2C))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20C40))(this);
	}
	template <typename T = uintptr_t> T get_itemCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20C4C))(this);
	}
	template <typename T = bool> T get_hasItemCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20CD4))(this);
	}
	template <typename T = void> T AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(QuestDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C20CE0))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(QuestDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C20E54))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T RemoveItemCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20FC8))(this);
	}
	template <typename T = uintptr_t> T get_magics() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B7FC))(this);
	}
	template <typename T = bool> T get_hasMagics() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B7F0))(this);
	}
	template <typename T = void> T AddMagics(Il2CppArray<uintptr_t>* newValues, bool newDontShow) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1C20FD4))(this, newValues, newDontShow);
	}
	template <typename T = void> T ReplaceMagics(Il2CppArray<uintptr_t>* newValues, bool newDontShow) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1C210F4))(this, newValues, newDontShow);
	}
	template <typename T = void> T RemoveMagics() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21214))(this);
	}
	template <typename T = bool> T get_isManualTrackProhibition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21220))(this);
	}
	template <typename T = void> T set_isManualTrackProhibition(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C2122C))(this, value);
	}
	template <typename T = uintptr_t> T get_maxProgress() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21344))(this);
	}
	template <typename T = bool> T get_hasMaxProgress() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C213CC))(this);
	}
	template <typename T = void> T AddMaxProgress(int32_t newValue) {
		return ((T (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C213D8))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxProgress(int32_t newValue) {
		return ((T (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C214DC))(this, newValue);
	}
	template <typename T = void> T RemoveMaxProgress() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C215E0))(this);
	}
	template <typename T = uintptr_t> T get_multiplierByCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C215EC))(this);
	}
	template <typename T = bool> T get_hasMultiplierByCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21674))(this);
	}
	template <typename T = void> T AddMultiplierByCondition(Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C21680))(this, newItems);
	}
	template <typename T = void> T ReplaceMultiplierByCondition(Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C21794))(this, newItems);
	}
	template <typename T = void> T RemoveMultiplierByCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C218A8))(this);
	}
	template <typename T = uintptr_t> T get_multiplierTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C218B4))(this);
	}
	template <typename T = bool> T get_hasMultiplierTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2193C))(this);
	}
	template <typename T = void> T AddMultiplierTags(float newValue, float newRange, Il2CppArray<uintptr_t>* newCoefByGrade, Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(QuestDataEntity*, float, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C21948))(this, newValue, newRange, newCoefByGrade, newItems);
	}
	template <typename T = void> T ReplaceMultiplierTags(float newValue, float newRange, Il2CppArray<uintptr_t>* newCoefByGrade, Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(QuestDataEntity*, float, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C21A84))(this, newValue, newRange, newCoefByGrade, newItems);
	}
	template <typename T = void> T RemoveMultiplierTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21BC0))(this);
	}
	template <typename T = uintptr_t> T get_noSaveable() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21BCC))(this);
	}
	template <typename T = bool> T get_hasNoSaveable() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21C54))(this);
	}
	template <typename T = void> T AddNoSaveable(bool newSaveInLocation) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21C60))(this, newSaveInLocation);
	}
	template <typename T = void> T ReplaceNoSaveable(bool newSaveInLocation) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21D68))(this, newSaveInLocation);
	}
	template <typename T = void> T RemoveNoSaveable() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21E70))(this);
	}
	template <typename T = bool> T get_isNotAutoComplete() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21E7C))(this);
	}
	template <typename T = void> T set_isNotAutoComplete(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21E88))(this, value);
	}
	template <typename T = bool> T get_isOffer() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21FA0))(this);
	}
	template <typename T = void> T set_isOffer(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21FAC))(this, value);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C220C4))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2214C))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C22158))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C2226C))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22380))(this);
	}
	template <typename T = uintptr_t> T get_onCompletedActorMagic() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2238C))(this);
	}
	template <typename T = bool> T get_hasOnCompletedActorMagic() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22414))(this);
	}
	template <typename T = void> T AddOnCompletedActorMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(QuestDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1C22420))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceOnCompletedActorMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(QuestDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1C22588))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveOnCompletedActorMagic() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C226F0))(this);
	}
	template <typename T = uintptr_t> T get_onCompletedTargetEffect() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C226FC))(this);
	}
	template <typename T = bool> T get_hasOnCompletedTargetEffect() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22784))(this);
	}
	template <typename T = void> T AddOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1C22790))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1C2292C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveOnCompletedTargetEffect() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22AC8))(this);
	}
	template <typename T = uintptr_t> T get_order() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22AD4))(this);
	}
	template <typename T = bool> T get_hasOrder() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22B5C))(this);
	}
	template <typename T = void> T AddOrder(int32_t newValue) {
		return ((T (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C22B68))(this, newValue);
	}
	template <typename T = void> T ReplaceOrder(int32_t newValue) {
		return ((T (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C22C6C))(this, newValue);
	}
	template <typename T = void> T RemoveOrder() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22D70))(this);
	}
	template <typename T = uintptr_t> T get_parameters() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22D7C))(this);
	}
	template <typename T = bool> T get_hasParameters() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22E04))(this);
	}
	template <typename T = void> T AddParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C22E10))(this, newNames);
	}
	template <typename T = void> T ReplaceParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C22F24))(this, newNames);
	}
	template <typename T = void> T RemoveParameters() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23038))(this);
	}
	template <typename T = uintptr_t> T get_point() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23044))(this);
	}
	template <typename T = bool> T get_hasPoint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C230CC))(this);
	}
	template <typename T = void> T AddPoint(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C230D8))(this, newName);
	}
	template <typename T = void> T ReplacePoint(Il2CppString* newName) {
		return ((T (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C231EC))(this, newName);
	}
	template <typename T = void> T RemovePoint() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23300))(this);
	}
	template <typename T = uintptr_t> T get_portalQuest() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2330C))(this);
	}
	template <typename T = bool> T get_hasPortalQuest() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23394))(this);
	}
	template <typename T = void> T AddPortalQuest(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C233A0))(this, newType);
	}
	template <typename T = void> T ReplacePortalQuest(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C234A4))(this, newType);
	}
	template <typename T = void> T RemovePortalQuest() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C235A8))(this);
	}
	template <typename T = uintptr_t> T get_positionTransaction() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C235B4))(this);
	}
	template <typename T = bool> T get_hasPositionTransaction() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2363C))(this);
	}
	template <typename T = void> T AddPositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(QuestDataEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C23648))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T ReplacePositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(QuestDataEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C2378C))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T RemovePositionTransaction() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C238D0))(this);
	}
	template <typename T = uintptr_t> T get_progressNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C238DC))(this);
	}
	template <typename T = bool> T get_hasProgressNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23964))(this);
	}
	template <typename T = void> T AddProgressNotify(Il2CppString* newResource, Il2CppString* newEffect) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C23970))(this, newResource, newEffect);
	}
	template <typename T = void> T ReplaceProgressNotify(Il2CppString* newResource, Il2CppString* newEffect) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C23A98))(this, newResource, newEffect);
	}
	template <typename T = void> T RemoveProgressNotify() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23BC0))(this);
	}
	template <typename T = uintptr_t> T get_resources() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23BCC))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23C54))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C23C60))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C23D74))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23E88))(this);
	}
	template <typename T = uintptr_t> T get_rewardByTime() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23E94))(this);
	}
	template <typename T = bool> T get_hasRewardByTime() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23F1C))(this);
	}
	template <typename T = void> T AddRewardByTime(int32_t newMinRewardTime, int32_t newMaxRewardTime, float newMinRewardCoef, float newMaxRewardCoef) {
		return ((T (*)(QuestDataEntity*, int32_t, int32_t, float, float))(Il2CppBase() + 0x1C23F28))(this, newMinRewardTime, newMaxRewardTime, newMinRewardCoef, newMaxRewardCoef);
	}
	template <typename T = void> T ReplaceRewardByTime(int32_t newMinRewardTime, int32_t newMaxRewardTime, float newMinRewardCoef, float newMaxRewardCoef) {
		return ((T (*)(QuestDataEntity*, int32_t, int32_t, float, float))(Il2CppBase() + 0x1C24044))(this, newMinRewardTime, newMaxRewardTime, newMinRewardCoef, newMaxRewardCoef);
	}
	template <typename T = void> T RemoveRewardByTime() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24160))(this);
	}
	template <typename T = uintptr_t> T get_reward() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2416C))(this);
	}
	template <typename T = bool> T get_hasReward() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C241F4))(this);
	}
	template <typename T = void> T AddReward(bool newAutomatic, bool newSendToMailOnEndTime, uintptr_t newRule, Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newPremiumResources, Il2CppArray<uintptr_t>* newMainServerResources, Il2CppString* newRandomGroup, Il2CppString* newPremiumRandomGroup) {
		return ((T (*)(QuestDataEntity*, bool, bool, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C24200))(this, newAutomatic, newSendToMailOnEndTime, newRule, newResources, newPremiumResources, newMainServerResources, newRandomGroup, newPremiumRandomGroup);
	}
	template <typename T = void> T ReplaceReward(bool newAutomatic, bool newSendToMailOnEndTime, uintptr_t newRule, Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newPremiumResources, Il2CppArray<uintptr_t>* newMainServerResources, Il2CppString* newRandomGroup, Il2CppString* newPremiumRandomGroup) {
		return ((T (*)(QuestDataEntity*, bool, bool, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C2439C))(this, newAutomatic, newSendToMailOnEndTime, newRule, newResources, newPremiumResources, newMainServerResources, newRandomGroup, newPremiumRandomGroup);
	}
	template <typename T = void> T RemoveReward() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24538))(this);
	}
	template <typename T = bool> T get_isShareable() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24544))(this);
	}
	template <typename T = void> T set_isShareable(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C24550))(this, value);
	}
	template <typename T = uintptr_t> T get_skipPrice() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24668))(this);
	}
	template <typename T = bool> T get_hasSkipPrice() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C246F0))(this);
	}
	template <typename T = void> T AddSkipPrice(uint32_t newValue) {
		return ((T (*)(QuestDataEntity*, uint32_t))(Il2CppBase() + 0x1C246FC))(this, newValue);
	}
	template <typename T = void> T ReplaceSkipPrice(uint32_t newValue) {
		return ((T (*)(QuestDataEntity*, uint32_t))(Il2CppBase() + 0x1C24800))(this, newValue);
	}
	template <typename T = void> T RemoveSkipPrice() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24904))(this);
	}
	template <typename T = uintptr_t> T get_startCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24910))(this);
	}
	template <typename T = bool> T get_hasStartCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24998))(this);
	}
	template <typename T = void> T AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C249A4))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C24ACC))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveStartCondition() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24BF4))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24C00))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24C88))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C24C94))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C24DA8))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24EBC))(this);
	}
	template <typename T = uintptr_t> T get_targetMarker() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24EC8))(this);
	}
	template <typename T = bool> T get_hasTargetMarker() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24F50))(this);
	}
	template <typename T = void> T AddTargetMarker(int32_t newPriority, Il2CppArray<uintptr_t>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(QuestDataEntity*, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C24F5C))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceTargetMarker(int32_t newPriority, Il2CppArray<uintptr_t>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(QuestDataEntity*, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C25108))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveTargetMarker() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C252B4))(this);
	}
	template <typename T = bool> T get_isTargetSelf() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C252C0))(this);
	}
	template <typename T = void> T set_isTargetSelf(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C252CC))(this, value);
	}
	template <typename T = uintptr_t> T get_targetTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C253E4))(this);
	}
	template <typename T = bool> T get_hasTargetTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2546C))(this);
	}
	template <typename T = void> T AddTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C25478))(this, newValues);
	}
	template <typename T = void> T ReplaceTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C2558C))(this, newValues);
	}
	template <typename T = void> T RemoveTargetTags() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C256A0))(this);
	}
	template <typename T = uintptr_t> T get_trackingSetting() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C256AC))(this);
	}
	template <typename T = bool> T get_hasTrackingSetting() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25734))(this);
	}
	template <typename T = void> T AddTrackingSetting(uintptr_t newSlot, bool newZeroOne, bool newWithoutMaxProgress, float newWeight, Il2CppString* newIcon) {
		return ((T (*)(QuestDataEntity*, uintptr_t, bool, bool, float, Il2CppString*))(Il2CppBase() + 0x1C25740))(this, newSlot, newZeroOne, newWithoutMaxProgress, newWeight, newIcon);
	}
	template <typename T = void> T ReplaceTrackingSetting(uintptr_t newSlot, bool newZeroOne, bool newWithoutMaxProgress, float newWeight, Il2CppString* newIcon) {
		return ((T (*)(QuestDataEntity*, uintptr_t, bool, bool, float, Il2CppString*))(Il2CppBase() + 0x1C2588C))(this, newSlot, newZeroOne, newWithoutMaxProgress, newWeight, newIcon);
	}
	template <typename T = void> T RemoveTrackingSetting() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C259D8))(this);
	}
	template <typename T = uintptr_t> T get_triggerBuild() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C259E4))(this);
	}
	template <typename T = bool> T get_hasTriggerBuild() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25A6C))(this);
	}
	template <typename T = void> T AddTriggerBuild(bool newUpgrade) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25A78))(this, newUpgrade);
	}
	template <typename T = void> T ReplaceTriggerBuild(bool newUpgrade) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25B80))(this, newUpgrade);
	}
	template <typename T = void> T RemoveTriggerBuild() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25C88))(this);
	}
	template <typename T = bool> T get_isTriggerBuildOwn() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25C94))(this);
	}
	template <typename T = void> T set_isTriggerBuildOwn(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25CA0))(this, value);
	}
	template <typename T = bool> T get_isTriggerCraft() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25DB8))(this);
	}
	template <typename T = void> T set_isTriggerCraft(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25DC4))(this, value);
	}
	template <typename T = uintptr_t> T get_triggerCurrency() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25EDC))(this);
	}
	template <typename T = bool> T get_hasTriggerCurrency() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25F64))(this);
	}
	template <typename T = void> T AddTriggerCurrency(uintptr_t newType, bool newSpending) {
		return ((T (*)(QuestDataEntity*, uintptr_t, bool))(Il2CppBase() + 0x1C25F70))(this, newType, newSpending);
	}
	template <typename T = void> T ReplaceTriggerCurrency(uintptr_t newType, bool newSpending) {
		return ((T (*)(QuestDataEntity*, uintptr_t, bool))(Il2CppBase() + 0x1C26080))(this, newType, newSpending);
	}
	template <typename T = void> T RemoveTriggerCurrency() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26190))(this);
	}
	template <typename T = bool> T get_isTriggerDamage() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2619C))(this);
	}
	template <typename T = void> T set_isTriggerDamage(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C261A8))(this, value);
	}
	template <typename T = uintptr_t> T get_triggerDeath() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C262C0))(this);
	}
	template <typename T = bool> T get_hasTriggerDeath() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26348))(this);
	}
	template <typename T = void> T AddTriggerDeath(Il2CppArray<uintptr_t>* newStats) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C26354))(this, newStats);
	}
	template <typename T = void> T ReplaceTriggerDeath(Il2CppArray<uintptr_t>* newStats) {
		return ((T (*)(QuestDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C26468))(this, newStats);
	}
	template <typename T = void> T RemoveTriggerDeath() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2657C))(this);
	}
	template <typename T = uintptr_t> T get_triggerDistrictLevel() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26588))(this);
	}
	template <typename T = bool> T get_hasTriggerDistrictLevel() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26610))(this);
	}
	template <typename T = void> T AddTriggerDistrictLevel(bool newCanBuild) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C2661C))(this, newCanBuild);
	}
	template <typename T = void> T ReplaceTriggerDistrictLevel(bool newCanBuild) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26724))(this, newCanBuild);
	}
	template <typename T = void> T RemoveTriggerDistrictLevel() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2682C))(this);
	}
	template <typename T = bool> T get_isTriggerDonate() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26838))(this);
	}
	template <typename T = void> T set_isTriggerDonate(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26844))(this, value);
	}
	template <typename T = bool> T get_isTriggerExit() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2695C))(this);
	}
	template <typename T = void> T set_isTriggerExit(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26968))(this, value);
	}
	template <typename T = uintptr_t> T get_triggerExtract() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26A80))(this);
	}
	template <typename T = bool> T get_hasTriggerExtract() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26B08))(this);
	}
	template <typename T = void> T AddTriggerExtract(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C26B14))(this, newType);
	}
	template <typename T = void> T ReplaceTriggerExtract(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C26C18))(this, newType);
	}
	template <typename T = void> T RemoveTriggerExtract() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26D1C))(this);
	}
	template <typename T = bool> T get_isTriggerFinalize() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26D28))(this);
	}
	template <typename T = void> T set_isTriggerFinalize(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26D34))(this, value);
	}
	template <typename T = bool> T get_isTriggerGameEvent() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26E4C))(this);
	}
	template <typename T = void> T set_isTriggerGameEvent(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26E58))(this, value);
	}
	template <typename T = bool> T get_isTriggerHeal() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26F70))(this);
	}
	template <typename T = void> T set_isTriggerHeal(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26F7C))(this, value);
	}
	template <typename T = bool> T get_isTriggerKill() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27094))(this);
	}
	template <typename T = void> T set_isTriggerKill(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C270A0))(this, value);
	}
	template <typename T = bool> T get_isTriggerLevel() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C271B8))(this);
	}
	template <typename T = void> T set_isTriggerLevel(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C271C4))(this, value);
	}
	template <typename T = bool> T get_isTriggerOwn() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B7E4))(this);
	}
	template <typename T = void> T set_isTriggerOwn(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C272DC))(this, value);
	}
	template <typename T = uintptr_t> T get_triggerPickup() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C273F4))(this);
	}
	template <typename T = bool> T get_hasTriggerPickup() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2747C))(this);
	}
	template <typename T = void> T AddTriggerPickup(bool newAutoFarm) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27488))(this, newAutoFarm);
	}
	template <typename T = void> T ReplaceTriggerPickup(bool newAutoFarm) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27590))(this, newAutoFarm);
	}
	template <typename T = void> T RemoveTriggerPickup() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27698))(this);
	}
	template <typename T = uintptr_t> T get_triggerPlayerClassProgress() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C276A4))(this);
	}
	template <typename T = bool> T get_hasTriggerPlayerClassProgress() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2772C))(this);
	}
	template <typename T = void> T AddTriggerPlayerClassProgress(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C27738))(this, newType);
	}
	template <typename T = void> T ReplaceTriggerPlayerClassProgress(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C2783C))(this, newType);
	}
	template <typename T = void> T RemoveTriggerPlayerClassProgress() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27940))(this);
	}
	template <typename T = bool> T get_isTriggerQuestCompleted() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2794C))(this);
	}
	template <typename T = void> T set_isTriggerQuestCompleted(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27958))(this, value);
	}
	template <typename T = uintptr_t> T get_triggerSeasonEnd() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27A70))(this);
	}
	template <typename T = bool> T get_hasTriggerSeasonEnd() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27AF8))(this);
	}
	template <typename T = void> T AddTriggerSeasonEnd(int32_t newSeasonOrder) {
		return ((T (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C27B04))(this, newSeasonOrder);
	}
	template <typename T = void> T ReplaceTriggerSeasonEnd(int32_t newSeasonOrder) {
		return ((T (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C27C08))(this, newSeasonOrder);
	}
	template <typename T = void> T RemoveTriggerSeasonEnd() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27D0C))(this);
	}
	template <typename T = uintptr_t> T get_triggerSeasonLevel() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27D18))(this);
	}
	template <typename T = bool> T get_hasTriggerSeasonLevel() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27DA0))(this);
	}
	template <typename T = void> T AddTriggerSeasonLevel(int32_t newSeasonOrder, bool newClaimed) {
		return ((T (*)(QuestDataEntity*, int32_t, bool))(Il2CppBase() + 0x1C27DAC))(this, newSeasonOrder, newClaimed);
	}
	template <typename T = void> T ReplaceTriggerSeasonLevel(int32_t newSeasonOrder, bool newClaimed) {
		return ((T (*)(QuestDataEntity*, int32_t, bool))(Il2CppBase() + 0x1C27EBC))(this, newSeasonOrder, newClaimed);
	}
	template <typename T = void> T RemoveTriggerSeasonLevel() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27FCC))(this);
	}
	template <typename T = bool> T get_isTriggerSneak() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27FD8))(this);
	}
	template <typename T = void> T set_isTriggerSneak(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27FE4))(this, value);
	}
	template <typename T = bool> T get_isTriggerSneakDamage() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C280FC))(this);
	}
	template <typename T = void> T set_isTriggerSneakDamage(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28108))(this, value);
	}
	template <typename T = bool> T get_isTriggerUnlock() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28220))(this);
	}
	template <typename T = void> T set_isTriggerUnlock(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C2822C))(this, value);
	}
	template <typename T = bool> T get_isTriggerUpLevelCap() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28344))(this);
	}
	template <typename T = void> T set_isTriggerUpLevelCap(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28350))(this, value);
	}
	template <typename T = bool> T get_isTriggerUse() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28468))(this);
	}
	template <typename T = void> T set_isTriggerUse(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28474))(this, value);
	}
	template <typename T = bool> T get_isTriggerVisit() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2858C))(this);
	}
	template <typename T = void> T set_isTriggerVisit(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28598))(this, value);
	}
	template <typename T = bool> T get_isTriggerVisitGlobalMap() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C286B0))(this);
	}
	template <typename T = void> T set_isTriggerVisitGlobalMap(bool value) {
		return ((T (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C286BC))(this, value);
	}
	template <typename T = uintptr_t> T get_worldStatus() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C287D4))(this);
	}
	template <typename T = bool> T get_hasWorldStatus() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2885C))(this);
	}
	template <typename T = void> T AddWorldStatus(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C28868))(this, newType);
	}
	template <typename T = void> T ReplaceWorldStatus(uintptr_t newType) {
		return ((T (*)(QuestDataEntity*, uintptr_t))(Il2CppBase() + 0x1C2896C))(this, newType);
	}
	template <typename T = void> T RemoveWorldStatus() {
		return ((T (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28A70))(this);
	}

};

}
