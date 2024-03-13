#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassWindow.h" 

class PortalsLeagueWindow : public BattlePassWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLeagueWindow"));
	}

	template <typename T = Il2CppString*> static T& lastPortalsPointsKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& lastPortalsPointsRewardKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = TooltipView*> T& LeagueTooltipView() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& _currentLeagueImage() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& _currentLeagueText() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& _currentStepText() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = TooltipTrigger*> T& _currentLeagueTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = TooltipView*> T& _tooltipLeaguePrefab() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _portalsLeagueItems() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = bool> T& _lastSeasonState() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = int32_t> T& _lastPortalsPoints() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = int32_t> T& _lastPortalsPointsReward() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = bool> T& _resetSend() {
		return *(T*)((uintptr_t)this + 0x27C);
	}

	template <typename T = uintptr_t> T get_ContextType() {
		return ((T (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577CA4))(this);
	}
	template <typename T = TooltipView*> T get_LeagueTooltipView() {
		return ((T (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577D1C))(this);
	}
	template <typename T = void> T set_LeagueTooltipView(TooltipView* value) {
		return ((T (*)(PortalsLeagueWindow*, TooltipView*))(Il2CppBase() + 0x1577D24))(this, value);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577D34))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x1577D88))(this);
	}
	template <typename T = void> T InitItems(AccountEntity* account) {
		return ((T (*)(PortalsLeagueWindow*, AccountEntity*))(Il2CppBase() + 0x15780DC))(this, account);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PortalsLeagueWindow*, float))(Il2CppBase() + 0x1578790))(this, deltaTime);
	}
	template <typename T = void> T CheckForSeasonReset() {
		return ((T (*)(PortalsLeagueWindow*))(Il2CppBase() + 0x157883C))(this);
	}
	template <typename T = void> T OnProgressChanged(int32_t currentValue) {
		return ((T (*)(PortalsLeagueWindow*, int32_t))(Il2CppBase() + 0x1578CA8))(this, currentValue);
	}

};

