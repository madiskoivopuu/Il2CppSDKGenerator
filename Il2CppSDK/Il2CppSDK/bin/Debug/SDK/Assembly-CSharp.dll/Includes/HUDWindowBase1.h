#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

template <typename T>
class HUDWindowBase1 : public UIWindow1<T>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowBase`1"));
	}

	template <typename R = HUDConnectionPanel*> R& _connectionPanel() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = QuestsTrackerController*> R& _questsTracker() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = IQuestTrackerController*> R& CurrentQuestTracker() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDMagicsPanel*> R& _magicsPanel() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDSeasonButton*> R& SeasonButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDQuestsButton*> R& QuestsButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDRaidButton*> R& RaidButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDTournamentButton*> R& TournamentButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDGuildButton*> R& GuildButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDSettingsButton*> R& SettingsButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDMainInventoryButton*> R& MainInventoryButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDBlueprintsButton*> R& BlueprintButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDClassesButton*> R& ClassesButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = HUDStoreButton*> R& StoreButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& _isCustomizationModeOn() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& _isShortModeOn() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _hudCustomizationKey() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _hudCustomizationSettingsKey() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _shortModeKey() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Action1bool>*& OnSwitchCustomizationMode() {
		return *(Action1bool>**)((uintptr_t)this + 0x0);
	}
	 Action1bool>*& OnSwitchShortMode() {
		return *(Action1bool>**)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& OnEditedSave() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = HUDConnectionPanel*> R get_ConnectionPanel() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IQuestTrackerController*> R get_CurrentQuestTracker() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_CurrentQuestTracker(IQuestTrackerController* value) {
		return ((R (*)(HUDWindowBase1*, IQuestTrackerController*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R get_IsCustomizationModeOn() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnSwitchCustomizationMode(Action1bool>* value) {
		return ((R (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnSwitchCustomizationMode(Action1bool>* value) {
		return ((R (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnSwitchShortMode(Action1bool>* value) {
		return ((R (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnSwitchShortMode(Action1bool>* value) {
		return ((R (*)(HUDWindowBase1*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEditedSave(uintptr_t value) {
		return ((R (*)(HUDWindowBase1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEditedSave(uintptr_t value) {
		return ((R (*)(HUDWindowBase1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SetCustomizationShortMode() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SwitchToCustomizationMode() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ChangeCustomizationMode(bool isOn) {
		return ((R (*)(HUDWindowBase1*, bool))(Il2CppBase() + 0x0))(this, isOn);
	}
	template <typename R = void> R SwitchToShortMode() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R CustomizationSave() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R BindTopButtons() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R BindBottomButtons() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R BindLeftButtons() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnExitGameClick() {
		return ((R (*)(HUDWindowBase1*))(Il2CppBase() + 0x0))(this);
	}

};

