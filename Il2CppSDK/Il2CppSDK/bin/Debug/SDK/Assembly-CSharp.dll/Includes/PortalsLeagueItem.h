#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassItem.h" 

class PortalsLeagueItem : public BattlePassItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLeagueItem"));
	}

	template <typename R = uintptr_t> R& _leagueImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _progressPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = TooltipTrigger*> R& _tooltipTrigger() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = float> R get_StepProgress() {
		return ((R (*)(PortalsLeagueItem*))(Il2CppBase() + 0x15778E8))(this);
	}
	template <typename R = void> R set_StepProgress(float value) {
		return ((R (*)(PortalsLeagueItem*, float))(Il2CppBase() + 0x1577904))(this, value);
	}
	template <typename R = bool> R get_LastLeague() {
		return ((R (*)(PortalsLeagueItem*))(Il2CppBase() + 0x1577920))(this);
	}
	template <typename R = void> R set_LastLeague(bool value) {
		return ((R (*)(PortalsLeagueItem*, bool))(Il2CppBase() + 0x1577964))(this, value);
	}
	template <typename R = void> R Bind(BattlePassWindow* window, ItemEntity* item) {
		return ((R (*)(PortalsLeagueItem*, BattlePassWindow*, ItemEntity*))(Il2CppBase() + 0x15779B0))(this, window, item);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(PortalsLeagueItem*))(Il2CppBase() + 0x1577AA4))(this);
	}
	template <typename R = void> R PlayOpenAnim() {
		return ((R (*)(PortalsLeagueItem*))(Il2CppBase() + 0x1577AD8))(this);
	}
	template <typename R = void> R UpdateStepView(ItemEntity* item) {
		return ((R (*)(PortalsLeagueItem*, ItemEntity*))(Il2CppBase() + 0x1577B54))(this, item);
	}

};

