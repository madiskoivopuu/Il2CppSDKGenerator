#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsWindowHelper"));
	}


	template <typename T = void> static T ShowLocationEnterNotify(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13BDF50))(0, manager);
	}
	template <typename T = uintptr_t> static T GetNotificationsWindow(uintptr_t manager, uintptr_t layer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BE4A0))(0, manager, layer);
	}
	template <typename T = void> static T ShowWarning(uintptr_t manager, Il2CppString* text, uintptr_t layer) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BE588))(0, manager, text, layer);
	}
	template <typename T = void> static T ShowWarningIfNeed(uintptr_t manager, Il2CppString* text, uintptr_t layer) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BE760))(0, manager, text, layer);
	}
	template <typename T = void> static T ShowActionBreakReasons(uintptr_t manager, uintptr_t actor, uintptr_t breakReason, Il2CppString* failMsg, bool ifNeed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x13BE934))(0, manager, actor, breakReason, failMsg, ifNeed);
	}
	template <typename T = void> static T ShowError(uintptr_t manager, Il2CppString* text, uintptr_t layer) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BEFE0))(0, manager, text, layer);
	}
	template <typename T = void> static T ShowCheckNotification(uintptr_t manager, Il2CppString* key, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BF018))(0, manager, key, text);
	}
	template <typename T = void> static T ShowNotification(uintptr_t manager, Il2CppString* key, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BF05C))(0, manager, key, text);
	}
	template <typename T = void> static T ShowItemNotify(uintptr_t manager, uintptr_t item, uintptr_t notifyComponent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BF0A0))(0, manager, item, notifyComponent);
	}
	template <typename T = void> static T ShowClassNotify(uintptr_t manager, uintptr_t item, uintptr_t notifyComponent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BF3C0))(0, manager, item, notifyComponent);
	}
	template <typename T = void> static T ShowItemNotify_1(uintptr_t manager, uintptr_t item, Il2CppString* caption, Il2CppString* sound, uintptr_t layer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BF478))(0, manager, item, caption, sound, layer);
	}
	template <typename T = void> static T ShowQuestCompleted(uintptr_t manager, uintptr_t questData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BF640))(0, manager, questData);
	}
	template <typename T = void> static T ShowNotify(uintptr_t manager, uintptr_t notifyComponent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BFA7C))(0, manager, notifyComponent);
	}
	template <typename T = void> static T ShowQuestNotify(uintptr_t manager, uintptr_t questData, uintptr_t notifyComponent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BFE9C))(0, manager, questData, notifyComponent);
	}
	template <typename T = void> static T ShowGuildQuestNotify(uintptr_t manager, uintptr_t questData, uintptr_t notifyComponent, uintptr_t phase) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x13C0350))(0, manager, questData, notifyComponent, phase);
	}
	template <typename T = void> static T ShowPortalQuestNotify(uintptr_t manager, uintptr_t questData, uintptr_t notifyComponent, uintptr_t phase) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x13C0AD8))(0, manager, questData, notifyComponent, phase);
	}
	template <typename T = void> static T ShowLevelCapNotify(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13C1410))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowSpectatorNotify(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13C1434))(0, manager);
	}
	template <typename T = void> static T ShowQuestNotify_1(uintptr_t manager, uintptr_t questData, uintptr_t phase) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x13C1458))(0, manager, questData, phase);
	}
	template <typename T = void> static T ShowOrUpdateEventNotify(uintptr_t manager, Il2CppString* caption, Il2CppString* msg, Il2CppString* sound) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13C1E70))(0, manager, caption, msg, sound);
	}
	template <typename T = void> static T ShowEventNotify(uintptr_t manager, Il2CppString* caption, Il2CppString* msg, Il2CppString* sound) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13C1FC4))(0, manager, caption, msg, sound);
	}
	template <typename T = void> static T ShowRaidBeginNotify(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13C2018))(0, manager);
	}
	template <typename T = void> static T ShowTournamentBeginNotify(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13C2270))(0, manager);
	}
	template <typename T = void> static T ShowMountAddedNotify(uintptr_t manager, Il2CppString* mountName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C24C8))(0, manager, mountName);
	}
	template <typename T = void> static T ShowPetAddedNotify(uintptr_t manager, Il2CppString* petName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C29A0))(0, manager, petName);
	}
	template <typename T = void> static T ShowRuneAddedNotify(uintptr_t manager, Il2CppString* runeName, int32_t count) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x13C2E78))(0, manager, runeName, count);
	}
	template <typename T = void> static T ShowRuneDeactivatedNotify(uintptr_t manager, uintptr_t classType, Il2CppString* runeName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C3884))(0, manager, classType, runeName);
	}
	template <typename T = void> static T ShowItemAddedNotify(uintptr_t manager, Il2CppString* itemSting) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C3DD0))(0, manager, itemSting);
	}
	template <typename T = void> static T ShowItemGotNotify(uintptr_t manager, Il2CppString* itemSting) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C40E8))(0, manager, itemSting);
	}
	template <typename T = void> static T ShowAddClassRuneSlotsNotify(uintptr_t manager, Il2CppString* countString) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C4458))(0, manager, countString);
	}
	template <typename T = void> static T ShowAddRuneSlotsNotify(uintptr_t manager, Il2CppString* countString) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C473C))(0, manager, countString);
	}
	template <typename T = void> static T ShowCosmeticAddedNotify(uintptr_t manager, Il2CppString* itemName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C4A20))(0, manager, itemName);
	}
	template <typename T = void> static T ShowLevelCapAddedNotify(uintptr_t manager, Il2CppString* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C4E5C))(0, manager, value);
	}
	template <typename T = void> static T ShowNewWaveNotify(uintptr_t manager, uintptr_t wavesEventEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13C5198))(0, manager, wavesEventEntity);
	}
	template <typename T = void> static T ShowPhaseNotify(uintptr_t manager, uintptr_t phase, bool isWarning) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x13C5754))(0, manager, phase, isWarning);
	}
	template <typename T = void> static T ShowItemsToMasterServerNotify(uintptr_t manager, Il2CppString* description) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13C6114))(0, manager, description);
	}

};

}
