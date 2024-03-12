#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class VIPWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CurrentVipLevel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NotEnabledVipLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CurrentVipProgressText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CurrentVipProgressImage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AddVipPointsButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& VipLevelsContainer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& VipLevelPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& VIPDailyChestAnimator() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& VIPDailyChestImage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& OpenVIPDailyChestButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& OpenVIPDailyChestInfoButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& VIPDailyChestBlockPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& VIPDailyChestTimerPanel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& VIPDailyChestTimer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& AttentionPanel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int64_t> T& _resetTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VIPWindow*))(Il2CppBase() + 0x15C17AC))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(VIPWindow*))(Il2CppBase() + 0x15C1898))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(VIPWindow*))(Il2CppBase() + 0x15C1904))(this);
	}
	template <typename T = void> T ShowStoreCategory(uintptr_t category) {
		return ((T (*)(VIPWindow*, uintptr_t))(Il2CppBase() + 0x15C2AB0))(this, category);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(VIPWindow*, float))(Il2CppBase() + 0x15C2AFC))(this, deltaTime);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(VIPWindow*))(Il2CppBase() + 0x15C196C))(this);
	}
	template <typename T = void> T Awakeb__18_0() {
		return ((T (*)(VIPWindow*))(Il2CppBase() + 0x15C38E8))(this);
	}

};

}
