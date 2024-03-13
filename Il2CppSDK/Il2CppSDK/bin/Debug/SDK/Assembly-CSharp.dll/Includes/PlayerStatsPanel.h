#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatsPanel"));
	}

	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TextMonoBehaviour*> T& _statGroupPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = PlayerStatView*> T& _statViewPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _showZeroToggle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<PlayerStatView*>*> T& _views() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& Inited() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _nextTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T get_Inited() {
		return ((T (*)(PlayerStatsPanel*))(Il2CppBase() + 0x1572C58))(this);
	}
	template <typename T = void> T set_Inited(bool value) {
		return ((T (*)(PlayerStatsPanel*, bool))(Il2CppBase() + 0x1572C60))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerStatsPanel*))(Il2CppBase() + 0x1572C6C))(this);
	}
	template <typename T = void> T Init(TooltipView* tooltipView) {
		return ((T (*)(PlayerStatsPanel*, TooltipView*))(Il2CppBase() + 0x1572CBC))(this, tooltipView);
	}
	template <typename T = void> T UpdateView(GameEntity* avatar) {
		return ((T (*)(PlayerStatsPanel*, GameEntity*))(Il2CppBase() + 0x15735BC))(this, avatar);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PlayerStatsPanel*))(Il2CppBase() + 0x157372C))(this);
	}

};

