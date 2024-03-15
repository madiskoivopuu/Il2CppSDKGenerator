#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataEntity"));
	}

	template <typename R = ActivateTournamentComponent*> static R& activateTournamentComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AlwaysActualComponent*> static R& alwaysActualComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = DailyComponent*> static R& dailyComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = DailyProgressComponent*> static R& dailyProgressComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = EventComponent*> static R& eventComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = ManualTrackProhibitionComponent*> static R& manualTrackProhibitionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = NotAutoCompleteComponent*> static R& notAutoCompleteComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = OfferComponent*> static R& offerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = ShareableComponent*> static R& shareableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = TargetSelfComponent*> static R& targetSelfComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = TriggerBuildOwnComponent*> static R& triggerBuildOwnComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = TriggerCraftComponent*> static R& triggerCraftComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = TriggerDamageComponent*> static R& triggerDamageComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = TriggerDonateComponent*> static R& triggerDonateComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = TriggerExitComponent*> static R& triggerExitComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = TriggerFinalizeComponent*> static R& triggerFinalizeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = TriggerGameEventComponent*> static R& triggerGameEventComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = TriggerHealComponent*> static R& triggerHealComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = TriggerKillComponent*> static R& triggerKillComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename R = TriggerLevelComponent*> static R& triggerLevelComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename R = TriggerOwnComponent*> static R& triggerOwnComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = TriggerQuestCompletedComponent*> static R& triggerQuestCompletedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename R = TriggerSneakComponent*> static R& triggerSneakComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename R = TriggerSneakDamageComponent*> static R& triggerSneakDamageComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename R = TriggerUnlockComponent*> static R& triggerUnlockComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename R = TriggerUpLevelCapComponent*> static R& triggerUpLevelCapComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename R = TriggerUseComponent*> static R& triggerUseComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename R = TriggerVisitComponent*> static R& triggerVisitComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename R = TriggerVisitGlobalMapComponent*> static R& triggerVisitGlobalMapComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1BD60))(this);
	}
	template <typename R = ActComponent*> R get_act() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B890))(this);
	}
	template <typename R = bool> R get_hasAct() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B884))(this);
	}
	template <typename R = void> R AddAct(Il2CppString* newMainQuest) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1BE10))(this, newMainQuest);
	}
	template <typename R = void> R ReplaceAct(Il2CppString* newMainQuest) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1BF24))(this, newMainQuest);
	}
	template <typename R = void> R RemoveAct() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C038))(this);
	}
	template <typename R = ActivateNotifyComponent*> R get_activateNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C044))(this);
	}
	template <typename R = bool> R get_hasActivateNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C0CC))(this);
	}
	template <typename R = void> R AddActivateNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(QuestDataEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1C0D8))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R ReplaceActivateNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(QuestDataEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1C240))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R RemoveActivateNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C3A8))(this);
	}
	template <typename R = ActivateQuestsComponent*> R get_activateQuests() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C3B4))(this);
	}
	template <typename R = bool> R get_hasActivateQuests() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C43C))(this);
	}
	template <typename R = void> R AddActivateQuests(Il2CppArray<Il2CppString*>* newOnActivate, Il2CppArray<Il2CppString*>* newOnCompleted, Il2CppArray<Il2CppString*>* newOnRewarded, Il2CppArray<Il2CppString*>* newOnEndTime, bool newShareDuration, bool newNotStarted) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool, bool))(Il2CppBase() + 0x1C1C448))(this, newOnActivate, newOnCompleted, newOnRewarded, newOnEndTime, newShareDuration, newNotStarted);
	}
	template <typename R = void> R ReplaceActivateQuests(Il2CppArray<Il2CppString*>* newOnActivate, Il2CppArray<Il2CppString*>* newOnCompleted, Il2CppArray<Il2CppString*>* newOnRewarded, Il2CppArray<Il2CppString*>* newOnEndTime, bool newShareDuration, bool newNotStarted) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool, bool))(Il2CppBase() + 0x1C1C5C0))(this, newOnActivate, newOnCompleted, newOnRewarded, newOnEndTime, newShareDuration, newNotStarted);
	}
	template <typename R = void> R RemoveActivateQuests() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C738))(this);
	}
	template <typename R = bool> R get_isActivateTournament() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C744))(this);
	}
	template <typename R = void> R set_isActivateTournament(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1C750))(this, value);
	}
	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C868))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1C8F0))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x1C1C8FC))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x1C1CA4C))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CB9C))(this);
	}
	template <typename R = ActiveLocationsComponent*> R get_activeLocations() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CBA8))(this);
	}
	template <typename R = bool> R get_hasActiveLocations() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CC30))(this);
	}
	template <typename R = void> R AddActiveLocations(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C1CC3C))(this, newValues);
	}
	template <typename R = void> R ReplaceActiveLocations(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C1CD50))(this, newValues);
	}
	template <typename R = void> R RemoveActiveLocations() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CE64))(this);
	}
	template <typename R = AlertButtonComponent*> R get_alertButton() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CE70))(this);
	}
	template <typename R = bool> R get_hasAlertButton() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1CEF8))(this);
	}
	template <typename R = void> R AddAlertButton(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1CF04))(this, newName);
	}
	template <typename R = void> R ReplaceAlertButton(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D018))(this, newName);
	}
	template <typename R = void> R RemoveAlertButton() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D12C))(this);
	}
	template <typename R = AliveConditionComponent*> R get_aliveCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D138))(this);
	}
	template <typename R = bool> R get_hasAliveCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D1C0))(this);
	}
	template <typename R = void> R AddAliveCondition(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D1CC))(this, newName);
	}
	template <typename R = void> R ReplaceAliveCondition(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D2E0))(this, newName);
	}
	template <typename R = void> R RemoveAliveCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D3F4))(this);
	}
	template <typename R = bool> R get_isAlwaysActual() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D400))(this);
	}
	template <typename R = void> R set_isAlwaysActual(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1D40C))(this, value);
	}
	template <typename R = AnalyticsComponent*> R get_analytics() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D524))(this);
	}
	template <typename R = bool> R get_hasAnalytics() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D5AC))(this);
	}
	template <typename R = void> R AddAnalytics(AnalyticsTypes newType, Il2CppString* newParam) {
		return ((R (*)(QuestDataEntity*, AnalyticsTypes, Il2CppString*))(Il2CppBase() + 0x1C1D5B8))(this, newType, newParam);
	}
	template <typename R = void> R ReplaceAnalytics(AnalyticsTypes newType, Il2CppString* newParam) {
		return ((R (*)(QuestDataEntity*, AnalyticsTypes, Il2CppString*))(Il2CppBase() + 0x1C1D6D4))(this, newType, newParam);
	}
	template <typename R = void> R RemoveAnalytics() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D7F0))(this);
	}
	template <typename R = ApplyStartDialogueComponent*> R get_applyStartDialogue() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D7FC))(this);
	}
	template <typename R = bool> R get_hasApplyStartDialogue() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1D884))(this);
	}
	template <typename R = void> R AddApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D890))(this, newName);
	}
	template <typename R = void> R ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1D9A4))(this, newName);
	}
	template <typename R = void> R RemoveApplyStartDialogue() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DAB8))(this);
	}
	template <typename R = AutoActivateComponent*> R get_autoActivate() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DAC4))(this);
	}
	template <typename R = bool> R get_hasAutoActivate() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DB4C))(this);
	}
	template <typename R = void> R AddAutoActivate(int32_t newLevel, Il2CppString* newQuestCompleted, bool newNotStarted) {
		return ((R (*)(QuestDataEntity*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1C1DB58))(this, newLevel, newQuestCompleted, newNotStarted);
	}
	template <typename R = void> R ReplaceAutoActivate(int32_t newLevel, Il2CppString* newQuestCompleted, bool newNotStarted) {
		return ((R (*)(QuestDataEntity*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1C1DC88))(this, newLevel, newQuestCompleted, newNotStarted);
	}
	template <typename R = void> R RemoveAutoActivate() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DDB8))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B918))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1BE04))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1DDC4))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1DED8))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DFEC))(this);
	}
	template <typename R = ChildrenComponent*> R get_children() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1DFF8))(this);
	}
	template <typename R = bool> R get_hasChildren() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E080))(this);
	}
	template <typename R = void> R AddChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C1E08C))(this, newNames);
	}
	template <typename R = void> R ReplaceChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C1E1A0))(this, newNames);
	}
	template <typename R = void> R RemoveChildren() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E2B4))(this);
	}
	template <typename R = CompleteChatNotifyComponent*> R get_completeChatNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E2C0))(this);
	}
	template <typename R = bool> R get_hasCompleteChatNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E348))(this);
	}
	template <typename R = void> R AddCompleteChatNotify(Il2CppString* newText) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E354))(this, newText);
	}
	template <typename R = void> R ReplaceCompleteChatNotify(Il2CppString* newText) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E468))(this, newText);
	}
	template <typename R = void> R RemoveCompleteChatNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E57C))(this);
	}
	template <typename R = CompleteCutsceneComponent*> R get_completeCutscene() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E588))(this);
	}
	template <typename R = bool> R get_hasCompleteCutscene() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E610))(this);
	}
	template <typename R = void> R AddCompleteCutscene(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E61C))(this, newName);
	}
	template <typename R = void> R ReplaceCompleteCutscene(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1E730))(this, newName);
	}
	template <typename R = void> R RemoveCompleteCutscene() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E844))(this);
	}
	template <typename R = CompleteNotifyComponent*> R get_completeNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E850))(this);
	}
	template <typename R = bool> R get_hasCompleteNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1E8D8))(this);
	}
	template <typename R = void> R AddCompleteNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(QuestDataEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1E8E4))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R ReplaceCompleteNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(QuestDataEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1EA4C))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R RemoveCompleteNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EBB4))(this);
	}
	template <typename R = bool> R get_isDaily() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EBC0))(this);
	}
	template <typename R = void> R set_isDaily(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1EBCC))(this, value);
	}
	template <typename R = bool> R get_isDailyProgress() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1ECE4))(this);
	}
	template <typename R = void> R set_isDailyProgress(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1ECF0))(this, value);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EE08))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1EE90))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1EE9C))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1EFC4))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F0EC))(this);
	}
	template <typename R = DestroyOnRewardedComponent*> R get_destroyOnRewarded() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F0F8))(this);
	}
	template <typename R = bool> R get_hasDestroyOnRewarded() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F180))(this);
	}
	template <typename R = void> R AddDestroyOnRewarded(float newDuration) {
		return ((R (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F18C))(this, newDuration);
	}
	template <typename R = void> R ReplaceDestroyOnRewarded(float newDuration) {
		return ((R (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F290))(this, newDuration);
	}
	template <typename R = void> R RemoveDestroyOnRewarded() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F394))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F3A0))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F428))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F434))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(QuestDataEntity*, float))(Il2CppBase() + 0x1C1F538))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F63C))(this);
	}
	template <typename R = bool> R get_isEvent() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F648))(this);
	}
	template <typename R = void> R set_isEvent(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C1F654))(this, value);
	}
	template <typename R = FailNotifyComponent*> R get_failNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F76C))(this);
	}
	template <typename R = bool> R get_hasFailNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1F7F4))(this);
	}
	template <typename R = void> R AddFailNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(QuestDataEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1F800))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R ReplaceFailNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(QuestDataEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C1F968))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R RemoveFailNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FAD0))(this);
	}
	template <typename R = FinishOnCompletedComponent*> R get_finishOnCompleted() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FADC))(this);
	}
	template <typename R = bool> R get_hasFinishOnCompleted() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FB64))(this);
	}
	template <typename R = void> R AddFinishOnCompleted(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FB70))(this, newName);
	}
	template <typename R = void> R ReplaceFinishOnCompleted(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FC84))(this, newName);
	}
	template <typename R = void> R RemoveFinishOnCompleted() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FD98))(this);
	}
	template <typename R = FogComponent*> R get_fog() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FDA4))(this);
	}
	template <typename R = bool> R get_hasFog() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1FE2C))(this);
	}
	template <typename R = void> R AddFog(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FE38))(this, newName);
	}
	template <typename R = void> R ReplaceFog(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C1FF4C))(this, newName);
	}
	template <typename R = void> R RemoveFog() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20060))(this);
	}
	template <typename R = GetRewardQuestComponent*> R get_getRewardQuest() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2006C))(this);
	}
	template <typename R = bool> R get_hasGetRewardQuest() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C200F4))(this);
	}
	template <typename R = void> R AddGetRewardQuest(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20100))(this, newName);
	}
	template <typename R = void> R ReplaceGetRewardQuest(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20214))(this, newName);
	}
	template <typename R = void> R RemoveGetRewardQuest() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20328))(this);
	}
	template <typename R = GuildQuestDescriptionComponent*> R get_guildQuestDescription() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20334))(this);
	}
	template <typename R = bool> R get_hasGuildQuestDescription() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C203BC))(this);
	}
	template <typename R = void> R AddGuildQuestDescription(GuildQuestDifficulty newDifficulty, int32_t newMinGuildRankPoints, int32_t newMaxGuildRankPoints, Il2CppArray<int32_t>* newPlayerRewards) {
		return ((R (*)(QuestDataEntity*, GuildQuestDifficulty, int32_t, int32_t, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C203C8))(this, newDifficulty, newMinGuildRankPoints, newMaxGuildRankPoints, newPlayerRewards);
	}
	template <typename R = void> R ReplaceGuildQuestDescription(GuildQuestDifficulty newDifficulty, int32_t newMinGuildRankPoints, int32_t newMaxGuildRankPoints, Il2CppArray<int32_t>* newPlayerRewards) {
		return ((R (*)(QuestDataEntity*, GuildQuestDifficulty, int32_t, int32_t, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C204F8))(this, newDifficulty, newMinGuildRankPoints, newMaxGuildRankPoints, newPlayerRewards);
	}
	template <typename R = void> R RemoveGuildQuestDescription() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20628))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20634))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C206BC))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C206C8))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C20820))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20978))(this);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20984))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20A0C))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20A18))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C20B2C))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20C40))(this);
	}
	template <typename R = ItemConditionComponent*> R get_itemCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20C4C))(this);
	}
	template <typename R = bool> R get_hasItemCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20CD4))(this);
	}
	template <typename R = void> R AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType newEquipmentType) {
		return ((R (*)(QuestDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType))(Il2CppBase() + 0x1C20CE0))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType newEquipmentType) {
		return ((R (*)(QuestDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType))(Il2CppBase() + 0x1C20E54))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R RemoveItemCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C20FC8))(this);
	}
	template <typename R = MagicsComponent*> R get_magics() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B7FC))(this);
	}
	template <typename R = bool> R get_hasMagics() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B7F0))(this);
	}
	template <typename R = void> R AddMagics(Il2CppArray<Item>* newValues, bool newDontShow) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Item>*, bool))(Il2CppBase() + 0x1C20FD4))(this, newValues, newDontShow);
	}
	template <typename R = void> R ReplaceMagics(Il2CppArray<Item>* newValues, bool newDontShow) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Item>*, bool))(Il2CppBase() + 0x1C210F4))(this, newValues, newDontShow);
	}
	template <typename R = void> R RemoveMagics() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21214))(this);
	}
	template <typename R = bool> R get_isManualTrackProhibition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21220))(this);
	}
	template <typename R = void> R set_isManualTrackProhibition(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C2122C))(this, value);
	}
	template <typename R = MaxProgressComponent*> R get_maxProgress() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21344))(this);
	}
	template <typename R = bool> R get_hasMaxProgress() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C213CC))(this);
	}
	template <typename R = void> R AddMaxProgress(int32_t newValue) {
		return ((R (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C213D8))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxProgress(int32_t newValue) {
		return ((R (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C214DC))(this, newValue);
	}
	template <typename R = void> R RemoveMaxProgress() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C215E0))(this);
	}
	template <typename R = MultiplierByConditionComponent*> R get_multiplierByCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C215EC))(this);
	}
	template <typename R = bool> R get_hasMultiplierByCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21674))(this);
	}
	template <typename R = void> R AddMultiplierByCondition(Il2CppArray<Item>* newItems) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Item>*))(Il2CppBase() + 0x1C21680))(this, newItems);
	}
	template <typename R = void> R ReplaceMultiplierByCondition(Il2CppArray<Item>* newItems) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Item>*))(Il2CppBase() + 0x1C21794))(this, newItems);
	}
	template <typename R = void> R RemoveMultiplierByCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C218A8))(this);
	}
	template <typename R = MultiplierTagsComponent*> R get_multiplierTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C218B4))(this);
	}
	template <typename R = bool> R get_hasMultiplierTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2193C))(this);
	}
	template <typename R = void> R AddMultiplierTags(float newValue, float newRange, Il2CppArray<float>* newCoefByGrade, Il2CppArray<TagValue>* newItems) {
		return ((R (*)(QuestDataEntity*, float, float, Il2CppArray<float>*, Il2CppArray<TagValue>*))(Il2CppBase() + 0x1C21948))(this, newValue, newRange, newCoefByGrade, newItems);
	}
	template <typename R = void> R ReplaceMultiplierTags(float newValue, float newRange, Il2CppArray<float>* newCoefByGrade, Il2CppArray<TagValue>* newItems) {
		return ((R (*)(QuestDataEntity*, float, float, Il2CppArray<float>*, Il2CppArray<TagValue>*))(Il2CppBase() + 0x1C21A84))(this, newValue, newRange, newCoefByGrade, newItems);
	}
	template <typename R = void> R RemoveMultiplierTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21BC0))(this);
	}
	template <typename R = NoSaveableComponent*> R get_noSaveable() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21BCC))(this);
	}
	template <typename R = bool> R get_hasNoSaveable() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21C54))(this);
	}
	template <typename R = void> R AddNoSaveable(bool newSaveInLocation) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21C60))(this, newSaveInLocation);
	}
	template <typename R = void> R ReplaceNoSaveable(bool newSaveInLocation) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21D68))(this, newSaveInLocation);
	}
	template <typename R = void> R RemoveNoSaveable() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21E70))(this);
	}
	template <typename R = bool> R get_isNotAutoComplete() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21E7C))(this);
	}
	template <typename R = void> R set_isNotAutoComplete(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21E88))(this, value);
	}
	template <typename R = bool> R get_isOffer() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C21FA0))(this);
	}
	template <typename R = void> R set_isOffer(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C21FAC))(this, value);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C220C4))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2214C))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C22158))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C2226C))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22380))(this);
	}
	template <typename R = OnCompletedActorMagicComponent*> R get_onCompletedActorMagic() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2238C))(this);
	}
	template <typename R = bool> R get_hasOnCompletedActorMagic() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22414))(this);
	}
	template <typename R = void> R AddOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(QuestDataEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1C22420))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(QuestDataEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1C22588))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveOnCompletedActorMagic() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C226F0))(this);
	}
	template <typename R = OnCompletedTargetEffectComponent*> R get_onCompletedTargetEffect() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C226FC))(this);
	}
	template <typename R = bool> R get_hasOnCompletedTargetEffect() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22784))(this);
	}
	template <typename R = void> R AddOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1C22790))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1C2292C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveOnCompletedTargetEffect() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22AC8))(this);
	}
	template <typename R = OrderComponent*> R get_order() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22AD4))(this);
	}
	template <typename R = bool> R get_hasOrder() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22B5C))(this);
	}
	template <typename R = void> R AddOrder(int32_t newValue) {
		return ((R (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C22B68))(this, newValue);
	}
	template <typename R = void> R ReplaceOrder(int32_t newValue) {
		return ((R (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C22C6C))(this, newValue);
	}
	template <typename R = void> R RemoveOrder() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22D70))(this);
	}
	template <typename R = ParametersComponent*> R get_parameters() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22D7C))(this);
	}
	template <typename R = bool> R get_hasParameters() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C22E04))(this);
	}
	template <typename R = void> R AddParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C22E10))(this, newNames);
	}
	template <typename R = void> R ReplaceParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C22F24))(this, newNames);
	}
	template <typename R = void> R RemoveParameters() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23038))(this);
	}
	template <typename R = PointComponent*> R get_point() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23044))(this);
	}
	template <typename R = bool> R get_hasPoint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C230CC))(this);
	}
	template <typename R = void> R AddPoint(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C230D8))(this, newName);
	}
	template <typename R = void> R ReplacePoint(Il2CppString* newName) {
		return ((R (*)(QuestDataEntity*, Il2CppString*))(Il2CppBase() + 0x1C231EC))(this, newName);
	}
	template <typename R = void> R RemovePoint() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23300))(this);
	}
	template <typename R = PortalQuestComponent*> R get_portalQuest() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2330C))(this);
	}
	template <typename R = bool> R get_hasPortalQuest() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23394))(this);
	}
	template <typename R = void> R AddPortalQuest(PortalQuestType newType) {
		return ((R (*)(QuestDataEntity*, PortalQuestType))(Il2CppBase() + 0x1C233A0))(this, newType);
	}
	template <typename R = void> R ReplacePortalQuest(PortalQuestType newType) {
		return ((R (*)(QuestDataEntity*, PortalQuestType))(Il2CppBase() + 0x1C234A4))(this, newType);
	}
	template <typename R = void> R RemovePortalQuest() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C235A8))(this);
	}
	template <typename R = PositionTransactionComponent*> R get_positionTransaction() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C235B4))(this);
	}
	template <typename R = bool> R get_hasPositionTransaction() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2363C))(this);
	}
	template <typename R = void> R AddPositionTransaction(Ease newEase, float newDuration, int64_t newStartTime, Vec2 newStartPosition, Vec2 newEndPosition) {
		return ((R (*)(QuestDataEntity*, Ease, float, int64_t, Vec2, Vec2))(Il2CppBase() + 0x1C23648))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R ReplacePositionTransaction(Ease newEase, float newDuration, int64_t newStartTime, Vec2 newStartPosition, Vec2 newEndPosition) {
		return ((R (*)(QuestDataEntity*, Ease, float, int64_t, Vec2, Vec2))(Il2CppBase() + 0x1C2378C))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R RemovePositionTransaction() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C238D0))(this);
	}
	template <typename R = ProgressNotifyComponent*> R get_progressNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C238DC))(this);
	}
	template <typename R = bool> R get_hasProgressNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23964))(this);
	}
	template <typename R = void> R AddProgressNotify(Il2CppString* newResource, Il2CppString* newEffect) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C23970))(this, newResource, newEffect);
	}
	template <typename R = void> R ReplaceProgressNotify(Il2CppString* newResource, Il2CppString* newEffect) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C23A98))(this, newResource, newEffect);
	}
	template <typename R = void> R RemoveProgressNotify() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23BC0))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23BCC))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23C54))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x1C23C60))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x1C23D74))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23E88))(this);
	}
	template <typename R = RewardByTimeComponent*> R get_rewardByTime() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23E94))(this);
	}
	template <typename R = bool> R get_hasRewardByTime() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C23F1C))(this);
	}
	template <typename R = void> R AddRewardByTime(int32_t newMinRewardTime, int32_t newMaxRewardTime, float newMinRewardCoef, float newMaxRewardCoef) {
		return ((R (*)(QuestDataEntity*, int32_t, int32_t, float, float))(Il2CppBase() + 0x1C23F28))(this, newMinRewardTime, newMaxRewardTime, newMinRewardCoef, newMaxRewardCoef);
	}
	template <typename R = void> R ReplaceRewardByTime(int32_t newMinRewardTime, int32_t newMaxRewardTime, float newMinRewardCoef, float newMaxRewardCoef) {
		return ((R (*)(QuestDataEntity*, int32_t, int32_t, float, float))(Il2CppBase() + 0x1C24044))(this, newMinRewardTime, newMaxRewardTime, newMinRewardCoef, newMaxRewardCoef);
	}
	template <typename R = void> R RemoveRewardByTime() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24160))(this);
	}
	template <typename R = RewardComponent*> R get_reward() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2416C))(this);
	}
	template <typename R = bool> R get_hasReward() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C241F4))(this);
	}
	template <typename R = void> R AddReward(bool newAutomatic, bool newSendToMailOnEndTime, RewardRules newRule, Il2CppArray<Resource>* newResources, Il2CppArray<Resource>* newPremiumResources, Il2CppArray<Resource>* newMainServerResources, Il2CppString* newRandomGroup, Il2CppString* newPremiumRandomGroup) {
		return ((R (*)(QuestDataEntity*, bool, bool, RewardRules, Il2CppArray<Resource>*, Il2CppArray<Resource>*, Il2CppArray<Resource>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C24200))(this, newAutomatic, newSendToMailOnEndTime, newRule, newResources, newPremiumResources, newMainServerResources, newRandomGroup, newPremiumRandomGroup);
	}
	template <typename R = void> R ReplaceReward(bool newAutomatic, bool newSendToMailOnEndTime, RewardRules newRule, Il2CppArray<Resource>* newResources, Il2CppArray<Resource>* newPremiumResources, Il2CppArray<Resource>* newMainServerResources, Il2CppString* newRandomGroup, Il2CppString* newPremiumRandomGroup) {
		return ((R (*)(QuestDataEntity*, bool, bool, RewardRules, Il2CppArray<Resource>*, Il2CppArray<Resource>*, Il2CppArray<Resource>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C2439C))(this, newAutomatic, newSendToMailOnEndTime, newRule, newResources, newPremiumResources, newMainServerResources, newRandomGroup, newPremiumRandomGroup);
	}
	template <typename R = void> R RemoveReward() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24538))(this);
	}
	template <typename R = bool> R get_isShareable() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24544))(this);
	}
	template <typename R = void> R set_isShareable(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C24550))(this, value);
	}
	template <typename R = SkipPriceComponent*> R get_skipPrice() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24668))(this);
	}
	template <typename R = bool> R get_hasSkipPrice() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C246F0))(this);
	}
	template <typename R = void> R AddSkipPrice(uint32_t newValue) {
		return ((R (*)(QuestDataEntity*, uint32_t))(Il2CppBase() + 0x1C246FC))(this, newValue);
	}
	template <typename R = void> R ReplaceSkipPrice(uint32_t newValue) {
		return ((R (*)(QuestDataEntity*, uint32_t))(Il2CppBase() + 0x1C24800))(this, newValue);
	}
	template <typename R = void> R RemoveSkipPrice() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24904))(this);
	}
	template <typename R = StartConditionComponent*> R get_startCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24910))(this);
	}
	template <typename R = bool> R get_hasStartCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24998))(this);
	}
	template <typename R = void> R AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C249A4))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(QuestDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C24ACC))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveStartCondition() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24BF4))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24C00))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24C88))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C24C94))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C24DA8))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24EBC))(this);
	}
	template <typename R = TargetMarkerComponent*> R get_targetMarker() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24EC8))(this);
	}
	template <typename R = bool> R get_hasTargetMarker() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C24F50))(this);
	}
	template <typename R = void> R AddTargetMarker(int32_t newPriority, Il2CppArray<Il2CppString*>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(QuestDataEntity*, int32_t, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C24F5C))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceTargetMarker(int32_t newPriority, Il2CppArray<Il2CppString*>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(QuestDataEntity*, int32_t, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C25108))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveTargetMarker() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C252B4))(this);
	}
	template <typename R = bool> R get_isTargetSelf() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C252C0))(this);
	}
	template <typename R = void> R set_isTargetSelf(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C252CC))(this, value);
	}
	template <typename R = TargetTagsComponent*> R get_targetTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C253E4))(this);
	}
	template <typename R = bool> R get_hasTargetTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2546C))(this);
	}
	template <typename R = void> R AddTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C25478))(this, newValues);
	}
	template <typename R = void> R ReplaceTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C2558C))(this, newValues);
	}
	template <typename R = void> R RemoveTargetTags() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C256A0))(this);
	}
	template <typename R = TrackingSettingComponent*> R get_trackingSetting() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C256AC))(this);
	}
	template <typename R = bool> R get_hasTrackingSetting() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25734))(this);
	}
	template <typename R = void> R AddTrackingSetting(TrackingSlot newSlot, bool newZeroOne, bool newWithoutMaxProgress, float newWeight, Il2CppString* newIcon) {
		return ((R (*)(QuestDataEntity*, TrackingSlot, bool, bool, float, Il2CppString*))(Il2CppBase() + 0x1C25740))(this, newSlot, newZeroOne, newWithoutMaxProgress, newWeight, newIcon);
	}
	template <typename R = void> R ReplaceTrackingSetting(TrackingSlot newSlot, bool newZeroOne, bool newWithoutMaxProgress, float newWeight, Il2CppString* newIcon) {
		return ((R (*)(QuestDataEntity*, TrackingSlot, bool, bool, float, Il2CppString*))(Il2CppBase() + 0x1C2588C))(this, newSlot, newZeroOne, newWithoutMaxProgress, newWeight, newIcon);
	}
	template <typename R = void> R RemoveTrackingSetting() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C259D8))(this);
	}
	template <typename R = TriggerBuildComponent*> R get_triggerBuild() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C259E4))(this);
	}
	template <typename R = bool> R get_hasTriggerBuild() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25A6C))(this);
	}
	template <typename R = void> R AddTriggerBuild(bool newUpgrade) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25A78))(this, newUpgrade);
	}
	template <typename R = void> R ReplaceTriggerBuild(bool newUpgrade) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25B80))(this, newUpgrade);
	}
	template <typename R = void> R RemoveTriggerBuild() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25C88))(this);
	}
	template <typename R = bool> R get_isTriggerBuildOwn() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25C94))(this);
	}
	template <typename R = void> R set_isTriggerBuildOwn(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25CA0))(this, value);
	}
	template <typename R = bool> R get_isTriggerCraft() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25DB8))(this);
	}
	template <typename R = void> R set_isTriggerCraft(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C25DC4))(this, value);
	}
	template <typename R = TriggerCurrencyComponent*> R get_triggerCurrency() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25EDC))(this);
	}
	template <typename R = bool> R get_hasTriggerCurrency() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C25F64))(this);
	}
	template <typename R = void> R AddTriggerCurrency(CurrencyType newType, bool newSpending) {
		return ((R (*)(QuestDataEntity*, CurrencyType, bool))(Il2CppBase() + 0x1C25F70))(this, newType, newSpending);
	}
	template <typename R = void> R ReplaceTriggerCurrency(CurrencyType newType, bool newSpending) {
		return ((R (*)(QuestDataEntity*, CurrencyType, bool))(Il2CppBase() + 0x1C26080))(this, newType, newSpending);
	}
	template <typename R = void> R RemoveTriggerCurrency() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26190))(this);
	}
	template <typename R = bool> R get_isTriggerDamage() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2619C))(this);
	}
	template <typename R = void> R set_isTriggerDamage(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C261A8))(this, value);
	}
	template <typename R = TriggerDeathComponent*> R get_triggerDeath() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C262C0))(this);
	}
	template <typename R = bool> R get_hasTriggerDeath() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26348))(this);
	}
	template <typename R = void> R AddTriggerDeath(Il2CppArray<DamageStatType>* newStats) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<DamageStatType>*))(Il2CppBase() + 0x1C26354))(this, newStats);
	}
	template <typename R = void> R ReplaceTriggerDeath(Il2CppArray<DamageStatType>* newStats) {
		return ((R (*)(QuestDataEntity*, Il2CppArray<DamageStatType>*))(Il2CppBase() + 0x1C26468))(this, newStats);
	}
	template <typename R = void> R RemoveTriggerDeath() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2657C))(this);
	}
	template <typename R = TriggerDistrictLevelComponent*> R get_triggerDistrictLevel() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26588))(this);
	}
	template <typename R = bool> R get_hasTriggerDistrictLevel() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26610))(this);
	}
	template <typename R = void> R AddTriggerDistrictLevel(bool newCanBuild) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C2661C))(this, newCanBuild);
	}
	template <typename R = void> R ReplaceTriggerDistrictLevel(bool newCanBuild) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26724))(this, newCanBuild);
	}
	template <typename R = void> R RemoveTriggerDistrictLevel() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2682C))(this);
	}
	template <typename R = bool> R get_isTriggerDonate() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26838))(this);
	}
	template <typename R = void> R set_isTriggerDonate(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26844))(this, value);
	}
	template <typename R = bool> R get_isTriggerExit() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2695C))(this);
	}
	template <typename R = void> R set_isTriggerExit(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26968))(this, value);
	}
	template <typename R = TriggerExtractComponent*> R get_triggerExtract() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26A80))(this);
	}
	template <typename R = bool> R get_hasTriggerExtract() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26B08))(this);
	}
	template <typename R = void> R AddTriggerExtract(RequestType newType) {
		return ((R (*)(QuestDataEntity*, RequestType))(Il2CppBase() + 0x1C26B14))(this, newType);
	}
	template <typename R = void> R ReplaceTriggerExtract(RequestType newType) {
		return ((R (*)(QuestDataEntity*, RequestType))(Il2CppBase() + 0x1C26C18))(this, newType);
	}
	template <typename R = void> R RemoveTriggerExtract() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26D1C))(this);
	}
	template <typename R = bool> R get_isTriggerFinalize() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26D28))(this);
	}
	template <typename R = void> R set_isTriggerFinalize(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26D34))(this, value);
	}
	template <typename R = bool> R get_isTriggerGameEvent() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26E4C))(this);
	}
	template <typename R = void> R set_isTriggerGameEvent(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26E58))(this, value);
	}
	template <typename R = bool> R get_isTriggerHeal() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C26F70))(this);
	}
	template <typename R = void> R set_isTriggerHeal(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C26F7C))(this, value);
	}
	template <typename R = bool> R get_isTriggerKill() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27094))(this);
	}
	template <typename R = void> R set_isTriggerKill(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C270A0))(this, value);
	}
	template <typename R = bool> R get_isTriggerLevel() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C271B8))(this);
	}
	template <typename R = void> R set_isTriggerLevel(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C271C4))(this, value);
	}
	template <typename R = bool> R get_isTriggerOwn() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C1B7E4))(this);
	}
	template <typename R = void> R set_isTriggerOwn(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C272DC))(this, value);
	}
	template <typename R = TriggerPickupComponent*> R get_triggerPickup() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C273F4))(this);
	}
	template <typename R = bool> R get_hasTriggerPickup() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2747C))(this);
	}
	template <typename R = void> R AddTriggerPickup(bool newAutoFarm) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27488))(this, newAutoFarm);
	}
	template <typename R = void> R ReplaceTriggerPickup(bool newAutoFarm) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27590))(this, newAutoFarm);
	}
	template <typename R = void> R RemoveTriggerPickup() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27698))(this);
	}
	template <typename R = TriggerPlayerClassProgressComponent*> R get_triggerPlayerClassProgress() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C276A4))(this);
	}
	template <typename R = bool> R get_hasTriggerPlayerClassProgress() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2772C))(this);
	}
	template <typename R = void> R AddTriggerPlayerClassProgress(PlayerClassProgress newType) {
		return ((R (*)(QuestDataEntity*, PlayerClassProgress))(Il2CppBase() + 0x1C27738))(this, newType);
	}
	template <typename R = void> R ReplaceTriggerPlayerClassProgress(PlayerClassProgress newType) {
		return ((R (*)(QuestDataEntity*, PlayerClassProgress))(Il2CppBase() + 0x1C2783C))(this, newType);
	}
	template <typename R = void> R RemoveTriggerPlayerClassProgress() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27940))(this);
	}
	template <typename R = bool> R get_isTriggerQuestCompleted() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2794C))(this);
	}
	template <typename R = void> R set_isTriggerQuestCompleted(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27958))(this, value);
	}
	template <typename R = TriggerSeasonEndComponent*> R get_triggerSeasonEnd() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27A70))(this);
	}
	template <typename R = bool> R get_hasTriggerSeasonEnd() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27AF8))(this);
	}
	template <typename R = void> R AddTriggerSeasonEnd(int32_t newSeasonOrder) {
		return ((R (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C27B04))(this, newSeasonOrder);
	}
	template <typename R = void> R ReplaceTriggerSeasonEnd(int32_t newSeasonOrder) {
		return ((R (*)(QuestDataEntity*, int32_t))(Il2CppBase() + 0x1C27C08))(this, newSeasonOrder);
	}
	template <typename R = void> R RemoveTriggerSeasonEnd() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27D0C))(this);
	}
	template <typename R = TriggerSeasonLevelComponent*> R get_triggerSeasonLevel() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27D18))(this);
	}
	template <typename R = bool> R get_hasTriggerSeasonLevel() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27DA0))(this);
	}
	template <typename R = void> R AddTriggerSeasonLevel(int32_t newSeasonOrder, bool newClaimed) {
		return ((R (*)(QuestDataEntity*, int32_t, bool))(Il2CppBase() + 0x1C27DAC))(this, newSeasonOrder, newClaimed);
	}
	template <typename R = void> R ReplaceTriggerSeasonLevel(int32_t newSeasonOrder, bool newClaimed) {
		return ((R (*)(QuestDataEntity*, int32_t, bool))(Il2CppBase() + 0x1C27EBC))(this, newSeasonOrder, newClaimed);
	}
	template <typename R = void> R RemoveTriggerSeasonLevel() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27FCC))(this);
	}
	template <typename R = bool> R get_isTriggerSneak() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C27FD8))(this);
	}
	template <typename R = void> R set_isTriggerSneak(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C27FE4))(this, value);
	}
	template <typename R = bool> R get_isTriggerSneakDamage() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C280FC))(this);
	}
	template <typename R = void> R set_isTriggerSneakDamage(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28108))(this, value);
	}
	template <typename R = bool> R get_isTriggerUnlock() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28220))(this);
	}
	template <typename R = void> R set_isTriggerUnlock(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C2822C))(this, value);
	}
	template <typename R = bool> R get_isTriggerUpLevelCap() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28344))(this);
	}
	template <typename R = void> R set_isTriggerUpLevelCap(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28350))(this, value);
	}
	template <typename R = bool> R get_isTriggerUse() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28468))(this);
	}
	template <typename R = void> R set_isTriggerUse(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28474))(this, value);
	}
	template <typename R = bool> R get_isTriggerVisit() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2858C))(this);
	}
	template <typename R = void> R set_isTriggerVisit(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C28598))(this, value);
	}
	template <typename R = bool> R get_isTriggerVisitGlobalMap() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C286B0))(this);
	}
	template <typename R = void> R set_isTriggerVisitGlobalMap(bool value) {
		return ((R (*)(QuestDataEntity*, bool))(Il2CppBase() + 0x1C286BC))(this, value);
	}
	template <typename R = WorldStatusComponent*> R get_worldStatus() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C287D4))(this);
	}
	template <typename R = bool> R get_hasWorldStatus() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C2885C))(this);
	}
	template <typename R = void> R AddWorldStatus(ProtoModels::WorldStatusType newType) {
		return ((R (*)(QuestDataEntity*, ProtoModels::WorldStatusType))(Il2CppBase() + 0x1C28868))(this, newType);
	}
	template <typename R = void> R ReplaceWorldStatus(ProtoModels::WorldStatusType newType) {
		return ((R (*)(QuestDataEntity*, ProtoModels::WorldStatusType))(Il2CppBase() + 0x1C2896C))(this, newType);
	}
	template <typename R = void> R RemoveWorldStatus() {
		return ((R (*)(QuestDataEntity*))(Il2CppBase() + 0x1C28A70))(this);
	}

};

