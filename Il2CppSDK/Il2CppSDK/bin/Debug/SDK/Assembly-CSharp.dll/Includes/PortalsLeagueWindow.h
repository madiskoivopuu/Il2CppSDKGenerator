#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassWindow.h" 

class PortalsLeagueWindow : public BattlePassWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLeagueWindow"));
	}

	template <typename R = Il2CppString*> static R& lastPortalsPointsKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& lastPortalsPointsRewardKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = TooltipView*> R& LeagueTooltipView() {
		return *(R*)((uintptr_t)this + 0x238);
	}
	template <typename R = uintptr_t> R& _currentLeagueImage() {
		return *(R*)((uintptr_t)this + 0x240);
	}
	template <typename R = uintptr_t> R& _currentLeagueText() {
		return *(R*)((uintptr_t)this + 0x248);
	}
	template <typename R = uintptr_t> R& _currentStepText() {
		return *(R*)((uintptr_t)this + 0x250);
	}
	template <typename R = TooltipTrigger*> R& _currentLeagueTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	template <typename R = TooltipView*> R& _tooltipLeaguePrefab() {
		return *(R*)((uintptr_t)this + 0x260);
	}
	template <typename R = Il2CppArray<PortalsLeagueItem*>*> R& _portalsLeagueItems() {
		return *(R*)((uintptr_t)this + 0x268);
	}
	template <typename R = bool> R& _lastSeasonState() {
		return *(R*)((uintptr_t)this + 0x270);
	}
	template <typename R = int32_t> R& _lastPortalsPoints() {
		return *(R*)((uintptr_t)this + 0x274);
	}
	template <typename R = int32_t> R& _lastPortalsPointsReward() {
		return *(R*)((uintptr_t)this + 0x278);
	}
	template <typename R = bool> R& _resetSend() {
		return *(R*)((uintptr_t)this + 0x27C);
	}

	template <typename R = uintptr_t> R get_ContextType() {
		return ((R (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577CA4))(this);
	}
	template <typename R = TooltipView*> R get_LeagueTooltipView() {
		return ((R (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577D1C))(this);
	}
	template <typename R = void> R set_LeagueTooltipView(TooltipView* value) {
		return ((R (*)(PortalsLeagueWindow*, TooltipView*))(Il2CppBase() + 0x1577D24))(this, value);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577D34))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577D88))(this);
	}
	template <typename R = void> R InitItems(AccountEntity* account) {
		return ((R (*)(PortalsLeagueWindow*, AccountEntity*))(Il2CppBase() + 0x15780DC))(this, account);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PortalsLeagueWindow*, float))(Il2CppBase() + 0x1578790))(this, deltaTime);
	}
	template <typename R = void> R CheckForSeasonReset() {
		return ((R (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x157883C))(this);
	}
	template <typename R = void> R OnProgressChanged(int32_t currentValue) {
		return ((R (*)(PortalsLeagueWindow*, int32_t))(Il2CppBase() + 0x1578CA8))(this, currentValue);
	}

};

