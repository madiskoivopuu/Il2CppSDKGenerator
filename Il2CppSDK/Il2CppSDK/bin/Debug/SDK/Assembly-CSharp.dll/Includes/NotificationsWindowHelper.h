#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsWindowHelper"));
	}


	template <typename R = void> static R ShowLocationEnterNotify(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13BDF50))(0, manager);
	}
	template <typename R = NotificationsWindow*> static R GetNotificationsWindow(UIWindowsManager* manager, UIWindowsLayerType* layer) {
		return ((R (*)(void *, UIWindowsManager*, UIWindowsLayerType*))(Il2CppBase() + 0x13BE4A0))(0, manager, layer);
	}
	template <typename R = void> static R ShowWarning(UIWindowsManager* manager, Il2CppString* text, UIWindowsLayerType* layer) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BE588))(0, manager, text, layer);
	}
	template <typename R = void> static R ShowWarningIfNeed(UIWindowsManager* manager, Il2CppString* text, UIWindowsLayerType* layer) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BE760))(0, manager, text, layer);
	}
	template <typename R = void> static R ShowActionBreakReasons(UIWindowsManager* manager, GameEntity* actor, ActionBreakReasons* breakReason, Il2CppString* failMsg, bool ifNeed) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*, ActionBreakReasons*, Il2CppString*, bool))(Il2CppBase() + 0x13BE934))(0, manager, actor, breakReason, failMsg, ifNeed);
	}
	template <typename R = void> static R ShowError(UIWindowsManager* manager, Il2CppString* text, UIWindowsLayerType* layer) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BEFE0))(0, manager, text, layer);
	}
	template <typename R = void> static R ShowCheckNotification(UIWindowsManager* manager, Il2CppString* key, Il2CppString* text) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BF018))(0, manager, key, text);
	}
	template <typename R = void> static R ShowNotification(UIWindowsManager* manager, Il2CppString* key, Il2CppString* text) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BF05C))(0, manager, key, text);
	}
	template <typename R = void> static R ShowItemNotify(UIWindowsManager* manager, ItemEntity* item, BaseNotifyComponent* notifyComponent) {
		return ((R (*)(void *, UIWindowsManager*, ItemEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BF0A0))(0, manager, item, notifyComponent);
	}
	template <typename R = void> static R ShowClassNotify(UIWindowsManager* manager, ItemEntity* item, BaseNotifyComponent* notifyComponent) {
		return ((R (*)(void *, UIWindowsManager*, ItemEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BF3C0))(0, manager, item, notifyComponent);
	}
	template <typename R = void> static R ShowItemNotify_1(UIWindowsManager* manager, ItemEntity* item, Il2CppString* caption, Il2CppString* sound, UIWindowsLayerType* layer) {
		return ((R (*)(void *, UIWindowsManager*, ItemEntity*, Il2CppString*, Il2CppString*, UIWindowsLayerType*))(Il2CppBase() + 0x13BF478))(0, manager, item, caption, sound, layer);
	}
	template <typename R = void> static R ShowQuestCompleted(UIWindowsManager* manager, QuestDataEntity* questData) {
		return ((R (*)(void *, UIWindowsManager*, QuestDataEntity*))(Il2CppBase() + 0x13BF640))(0, manager, questData);
	}
	template <typename R = void> static R ShowNotify(UIWindowsManager* manager, BaseNotifyComponent* notifyComponent) {
		return ((R (*)(void *, UIWindowsManager*, BaseNotifyComponent*))(Il2CppBase() + 0x13BFA7C))(0, manager, notifyComponent);
	}
	template <typename R = void> static R ShowQuestNotify(UIWindowsManager* manager, QuestDataEntity* questData, BaseNotifyComponent* notifyComponent) {
		return ((R (*)(void *, UIWindowsManager*, QuestDataEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BFE9C))(0, manager, questData, notifyComponent);
	}
	template <typename R = void> static R ShowGuildQuestNotify(UIWindowsManager* manager, QuestDataEntity* questData, BaseNotifyComponent* notifyComponent, NotifyQuestPhase* phase) {
		return ((R (*)(void *, UIWindowsManager*, QuestDataEntity*, BaseNotifyComponent*, NotifyQuestPhase*))(Il2CppBase() + 0x13C0350))(0, manager, questData, notifyComponent, phase);
	}
	template <typename R = void> static R ShowPortalQuestNotify(UIWindowsManager* manager, QuestDataEntity* questData, BaseNotifyComponent* notifyComponent, NotifyQuestPhase* phase) {
		return ((R (*)(void *, UIWindowsManager*, QuestDataEntity*, BaseNotifyComponent*, NotifyQuestPhase*))(Il2CppBase() + 0x13C0AD8))(0, manager, questData, notifyComponent, phase);
	}
	template <typename R = void> static R ShowLevelCapNotify(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C1410))(0, manager);
	}
	template <typename R = HUDNotifyView*> static R ShowSpectatorNotify(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C1434))(0, manager);
	}
	template <typename R = void> static R ShowQuestNotify_1(UIWindowsManager* manager, QuestDataEntity* questData, NotifyQuestPhase* phase) {
		return ((R (*)(void *, UIWindowsManager*, QuestDataEntity*, NotifyQuestPhase*))(Il2CppBase() + 0x13C1458))(0, manager, questData, phase);
	}
	template <typename R = void> static R ShowOrUpdateEventNotify(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* msg, Il2CppString* sound) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13C1E70))(0, manager, caption, msg, sound);
	}
	template <typename R = void> static R ShowEventNotify(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* msg, Il2CppString* sound) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13C1FC4))(0, manager, caption, msg, sound);
	}
	template <typename R = void> static R ShowRaidBeginNotify(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C2018))(0, manager);
	}
	template <typename R = void> static R ShowTournamentBeginNotify(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13C2270))(0, manager);
	}
	template <typename R = void> static R ShowMountAddedNotify(UIWindowsManager* manager, Il2CppString* mountName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C24C8))(0, manager, mountName);
	}
	template <typename R = void> static R ShowPetAddedNotify(UIWindowsManager* manager, Il2CppString* petName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C29A0))(0, manager, petName);
	}
	template <typename R = void> static R ShowRuneAddedNotify(UIWindowsManager* manager, Il2CppString* runeName, int32_t count) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x13C2E78))(0, manager, runeName, count);
	}
	template <typename R = void> static R ShowRuneDeactivatedNotify(UIWindowsManager* manager, PlayerClassType* classType, Il2CppString* runeName) {
		return ((R (*)(void *, UIWindowsManager*, PlayerClassType*, Il2CppString*))(Il2CppBase() + 0x13C3884))(0, manager, classType, runeName);
	}
	template <typename R = void> static R ShowItemAddedNotify(UIWindowsManager* manager, Il2CppString* itemSting) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C3DD0))(0, manager, itemSting);
	}
	template <typename R = void> static R ShowItemGotNotify(UIWindowsManager* manager, Il2CppString* itemSting) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C40E8))(0, manager, itemSting);
	}
	template <typename R = void> static R ShowAddClassRuneSlotsNotify(UIWindowsManager* manager, Il2CppString* countString) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C4458))(0, manager, countString);
	}
	template <typename R = void> static R ShowAddRuneSlotsNotify(UIWindowsManager* manager, Il2CppString* countString) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C473C))(0, manager, countString);
	}
	template <typename R = void> static R ShowCosmeticAddedNotify(UIWindowsManager* manager, Il2CppString* itemName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C4A20))(0, manager, itemName);
	}
	template <typename R = void> static R ShowLevelCapAddedNotify(UIWindowsManager* manager, Il2CppString* value) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C4E5C))(0, manager, value);
	}
	template <typename R = void> static R ShowNewWaveNotify(UIWindowsManager* manager, GameEntity* wavesEventEntity) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x13C5198))(0, manager, wavesEventEntity);
	}
	template <typename R = void> static R ShowPhaseNotify(UIWindowsManager* manager, Phase* phase, bool isWarning) {
		return ((R (*)(void *, UIWindowsManager*, Phase*, bool))(Il2CppBase() + 0x13C5754))(0, manager, phase, isWarning);
	}
	template <typename R = void> static R ShowItemsToMasterServerNotify(UIWindowsManager* manager, Il2CppString* description) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13C6114))(0, manager, description);
	}

};

