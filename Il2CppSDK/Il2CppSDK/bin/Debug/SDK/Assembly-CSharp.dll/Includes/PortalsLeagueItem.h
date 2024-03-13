#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassItem.h" 

class PortalsLeagueItem : public BattlePassItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLeagueItem"));
	}

	template <typename T = uintptr_t> T& _leagueImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _progressPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = TooltipTrigger*> T& _tooltipTrigger() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = float> T get_StepProgress() {
		return ((T (*)(PortalsLeagueItem*))(Il2CppBase() + 0x15778E8))(this);
	}
	template <typename T = void> T set_StepProgress(float value) {
		return ((T (*)(PortalsLeagueItem*, float))(Il2CppBase() + 0x1577904))(this, value);
	}
	template <typename T = bool> T get_LastLeague() {
		return ((T (*)(PortalsLeagueItem*))(Il2CppBase() + 0x1577920))(this);
	}
	template <typename T = void> T set_LastLeague(bool value) {
		return ((T (*)(PortalsLeagueItem*, bool))(Il2CppBase() + 0x1577964))(this, value);
	}
	template <typename T = void> T Bind(BattlePassWindow* window, ItemEntity* item) {
		return ((T (*)(PortalsLeagueItem*, BattlePassWindow*, ItemEntity*))(Il2CppBase() + 0x15779B0))(this, window, item);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PortalsLeagueItem*))(Il2CppBase() + 0x1577AA4))(this);
	}
	template <typename T = void> T PlayOpenAnim() {
		return ((T (*)(PortalsLeagueItem*))(Il2CppBase() + 0x1577AD8))(this);
	}
	template <typename T = void> T UpdateStepView(ItemEntity* item) {
		return ((T (*)(PortalsLeagueItem*, ItemEntity*))(Il2CppBase() + 0x1577B54))(this, item);
	}

};

