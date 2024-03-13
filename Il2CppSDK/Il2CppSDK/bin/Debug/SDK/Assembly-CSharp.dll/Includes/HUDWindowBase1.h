#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class HUDWindowBase1 : public UIWindow1<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowBase`1"));
	}

	template <typename T = HUDConnectionPanel*> T& _connectionPanel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = QuestsTrackerController*> T& _questsTracker() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = IQuestTrackerController*> T& CurrentQuestTracker() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDMagicsPanel*> T& _magicsPanel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDSeasonButton*> T& SeasonButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDQuestsButton*> T& QuestsButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDRaidButton*> T& RaidButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDTournamentButton*> T& TournamentButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDGuildButton*> T& GuildButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDSettingsButton*> T& SettingsButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDMainInventoryButton*> T& MainInventoryButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDBlueprintsButton*> T& BlueprintButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDClassesButton*> T& ClassesButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HUDStoreButton*> T& StoreButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& _isCustomizationModeOn() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& _isShortModeOn() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _hudCustomizationKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _hudCustomizationSettingsKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _shortModeKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action1bool>*> T& OnSwitchCustomizationMode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action1bool>*> T& OnSwitchShortMode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& OnEditedSave() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = HUDConnectionPanel*> T get_ConnectionPanel() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IQuestTrackerController*> T get_CurrentQuestTracker() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CurrentQuestTracker(IQuestTrackerController* value) {
		return ((T (*)(HUDWindowBase1*, IQuestTrackerController*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_IsCustomizationModeOn() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnSwitchCustomizationMode(Action1bool>* value) {
		return ((T (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSwitchCustomizationMode(Action1bool>* value) {
		return ((T (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnSwitchShortMode(Action1bool>* value) {
		return ((T (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSwitchShortMode(Action1bool>* value) {
		return ((T (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEditedSave(uintptr_t value) {
		return ((T (*)(HUDWindowBase1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEditedSave(uintptr_t value) {
		return ((T (*)(HUDWindowBase1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetCustomizationShortMode() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SwitchToCustomizationMode() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ChangeCustomizationMode(bool isOn) {
		return ((T (*)(HUDWindowBase1*, bool))(Il2CppBase() + 0x0))(this, isOn);
	}
	template <typename T = void> T SwitchToShortMode() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CustomizationSave() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BindTopButtons() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BindBottomButtons() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BindLeftButtons() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnExitGameClick() {
		return ((T (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}

};

