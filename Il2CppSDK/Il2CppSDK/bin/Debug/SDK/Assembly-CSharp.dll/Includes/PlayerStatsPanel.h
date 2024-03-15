#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatsPanel"));
	}

	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TextMonoBehaviour*> R& _statGroupPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = PlayerStatView*> R& _statViewPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _showZeroToggle() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Il2CppList<PlayerStatView*>*& _views() {
		return *(Il2CppList<PlayerStatView*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& Inited() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _nextTime() {
		return *(R*)((uintptr_t)this + 0x44);
	}

	template <typename R = bool> R get_Inited() {
		return ((R (*)(PlayerStatsPanel*))(Il2CppBase() + 0x1572C58))(this);
	}
	template <typename R = void> R set_Inited(bool value) {
		return ((R (*)(PlayerStatsPanel*, bool))(Il2CppBase() + 0x1572C60))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerStatsPanel*))(Il2CppBase() + 0x1572C6C))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(PlayerStatsPanel*, TooltipView*))(Il2CppBase() + 0x1572CBC))(this, tooltipView);
	}
	template <typename R = void> R UpdateView(GameEntity* avatar) {
		return ((R (*)(PlayerStatsPanel*, GameEntity*))(Il2CppBase() + 0x15735BC))(this, avatar);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(PlayerStatsPanel*))(Il2CppBase() + 0x157372C))(this);
	}

};

