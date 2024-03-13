#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsWindowHelper"));
	}


	template <typename T = void> static T ShowLocationEnterNotify(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13BDF50))(0, manager);
	}
	template <typename T = NotificationsWindow*> static T GetNotificationsWindow(UIWindowsManager* manager, UIWindowsLayerType* layer) {
		return ((T (*)(void *, UIWindowsManager*, UIWindowsLayerType*))(Il2CppBase() + 0x13BE4A0))(0, manager, layer);
	}
	template <typename T = void> static T ShowWarning(UIWindowsManager* manager, Il2CppString* text, UIWindowsLayerType* layer) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BE588))(0, manager, text, layer);
	}
	template <typename T = void> static T ShowWarningIfNeed(UIWindowsManager* manager, Il2CppString* text, UIWindowsLayerType* layer) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BE760))(0, manager, text, layer);
	}
	template <typename T = void> static T ShowActionBreakReasons(UIWindowsManager* manager, GameEntity* actor, ActionBreakReasons* breakReason, Il2CppString* failMsg, bool ifNeed) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*, ActionBreakReasons*, Il2CppString*, bool))(Il2CppBase() + 0x13BE934))(0, manager, actor, breakReason, failMsg, ifNeed);
	}
	template <typename T = void> static T ShowError(UIWindowsManager* manager, Il2CppString* text, UIWindowsLayerType* layer) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BEFE0))(0, manager, text, layer);
	}
	template <typename T = void> static T ShowCheckNotification(UIWindowsManager* manager, Il2CppString* key, Il2CppString* text) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BF018))(0, manager, key, text);
	}
	template <typename T = void> static T ShowNotification(UIWindowsManager* manager, Il2CppString* key, Il2CppString* text) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BF05C))(0, manager, key, text);
	}
	template <typename T = void> static T ShowItemNotify(UIWindowsManager* manager, ItemEntity* item, BaseNotifyComponent* notifyComponent) {
		return ((T (*)(void *, UIWindowsManager*, ItemEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BF0A0))(0, manager, item, notifyComponent);
	}
	template <typename T = void> static T ShowClassNotify(UIWindowsManager* manager, ItemEntity* item, BaseNotifyComponent* notifyComponent) {
		return ((T (*)(void *, UIWindowsManager*, ItemEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BF3C0))(0, manager, item, notifyComponent);
	}
	template <typename T = void> static T ShowItemNotify_1(UIWindowsManager* manager, ItemEntity* item, Il2CppString* caption, Il2CppString* sound, UIWindowsLayerType* layer) {
		return ((T (*)(void *, UIWindowsManager*, ItemEntity*, Il2CppString*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BF478))(0, manager, item, caption, sound, layer);
	}
	template <typename T = void> static T ShowQuestCompleted(UIWindowsManager* manager, QuestDataEntity* questData) {
		return ((T (*)(void *, UIWindowsManager*, QuestDataEntity*))(Il2CppBase() + 0x13BF640))(0, manager, questData);
	}
	template <typename T = void> static T ShowNotify(UIWindowsManager* manager, BaseNotifyComponent* notifyComponent) {
		return ((T (*)(void *, UIWindowsManager*, BaseNotifyComponent*))(Il2CppBase() + 0x13BFA7C))(0, manager, notifyComponent);
	}
	template <typename T = void> static T ShowQuestNotify(UIWindowsManager* manager, QuestDataEntity* questData, BaseNotifyComponent* notifyComponent) {
		return ((T (*)(void *, UIWindowsManager*, QuestDataEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BFE9C))(0, manager, questData, notifyComponent);
	}
	template <typename T = void> static T ShowGuildQuestNotify(UIWindowsManager* manager, QuestDataEntity* questData, BaseNotifyComponent* notifyComponent, NotifyQuestPhase* phase) {
		return ((T (*)(void *, UIWindowsManager*, QuestDataEntity*, BaseNotifyComponent*, NotifyQuestPhase*))(Il2CppBase() + 0x13C0350))(0, manager, questData, notifyComponent, phase);
	}
	template <typename T = void> static T ShowPortalQuestNotify(UIWindowsManager* manager, QuestDataEntity* questData, BaseNotifyComponent* notifyComponent, NotifyQuestPhase* phase) {
		return ((T (*)(void *, UIWindowsManager*, QuestDataEntity*, BaseNotifyComponent*, NotifyQuestPhase*))(Il2CppBase() + 0x13C0AD8))(0, manager, questData, notifyComponent, phase);
	}
	template <typename T = void> static T ShowLevelCapNotify(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C1410))(0, manager);
	}
	template <typename T = HUDNotifyView*> static T ShowSpectatorNotify(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C1434))(0, manager);
	}
	template <typename T = void> static T ShowQuestNotify_1(UIWindowsManager* manager, QuestDataEntity* questData, NotifyQuestPhase* phase) {
		return ((T (*)(void *, UIWindowsManager*, QuestDataEntity*, NotifyQuestPhase*))(Il2CppBase() + 0x13C1458))(0, manager, questData, phase);
	}
	template <typename T = void> static T ShowOrUpdateEventNotify(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* msg, Il2CppString* sound) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13C1E70))(0, manager, caption, msg, sound);
	}
	template <typename T = void> static T ShowEventNotify(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* msg, Il2CppString* sound) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13C1FC4))(0, manager, caption, msg, sound);
	}
	template <typename T = void> static T ShowRaidBeginNotify(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C2018))(0, manager);
	}
	template <typename T = void> static T ShowTournamentBeginNotify(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C2270))(0, manager);
	}
	template <typename T = void> static T ShowMountAddedNotify(UIWindowsManager* manager, Il2CppString* mountName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C24C8))(0, manager, mountName);
	}
	template <typename T = void> static T ShowPetAddedNotify(UIWindowsManager* manager, Il2CppString* petName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C29A0))(0, manager, petName);
	}
	template <typename T = void> static T ShowRuneAddedNotify(UIWindowsManager* manager, Il2CppString* runeName, int32_t count) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x13C2E78))(0, manager, runeName, count);
	}
	template <typename T = void> static T ShowRuneDeactivatedNotify(UIWindowsManager* manager, PlayerClassType* classType, Il2CppString* runeName) {
		return ((T (*)(void *, UIWindowsManager*, PlayerClassType*, Il2CppString*))(Il2CppBase() + 0x13C3884))(0, manager, classType, runeName);
	}
	template <typename T = void> static T ShowItemAddedNotify(UIWindowsManager* manager, Il2CppString* itemSting) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C3DD0))(0, manager, itemSting);
	}
	template <typename T = void> static T ShowItemGotNotify(UIWindowsManager* manager, Il2CppString* itemSting) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C40E8))(0, manager, itemSting);
	}
	template <typename T = void> static T ShowAddClassRuneSlotsNotify(UIWindowsManager* manager, Il2CppString* countString) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C4458))(0, manager, countString);
	}
	template <typename T = void> static T ShowAddRuneSlotsNotify(UIWindowsManager* manager, Il2CppString* countString) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C473C))(0, manager, countString);
	}
	template <typename T = void> static T ShowCosmeticAddedNotify(UIWindowsManager* manager, Il2CppString* itemName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C4A20))(0, manager, itemName);
	}
	template <typename T = void> static T ShowLevelCapAddedNotify(UIWindowsManager* manager, Il2CppString* value) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C4E5C))(0, manager, value);
	}
	template <typename T = void> static T ShowNewWaveNotify(UIWindowsManager* manager, GameEntity* wavesEventEntity) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x13C5198))(0, manager, wavesEventEntity);
	}
	template <typename T = void> static T ShowPhaseNotify(UIWindowsManager* manager, Phase* phase, bool isWarning) {
		return ((T (*)(void *, UIWindowsManager*, Phase*, bool))(Il2CppBase() + 0x13C5754))(0, manager, phase, isWarning);
	}
	template <typename T = void> static T ShowItemsToMasterServerNotify(UIWindowsManager* manager, Il2CppString* description) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C6114))(0, manager, description);
	}

};

