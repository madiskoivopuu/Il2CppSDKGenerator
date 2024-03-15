#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class VIPWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CurrentVipLevel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& NotEnabledVipLabel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CurrentVipProgressText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& CurrentVipProgressImage() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& AddVipPointsButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& VipLevelsContainer() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = VipLevelView*> R& VipLevelPrefab() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& VIPDailyChestAnimator() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& VIPDailyChestImage() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = StandartButton*> R& OpenVIPDailyChestButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& OpenVIPDailyChestInfoButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& VIPDailyChestBlockPanel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& VIPDailyChestTimerPanel() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& VIPDailyChestTimer() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& AttentionPanel() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = int64_t> R& _resetTime() {
		return *(R*)((uintptr_t)this + 0xF8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(VIPWindow*))(Il2CppBase() + 0x15C17AC))(this);
	}
	template <typename R = void> R OnCloseButtonClick() {
		return ((R (*)(VIPWindow*))(Il2CppBase() + 0x15C1898))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(VIPWindow*))(Il2CppBase() + 0x15C1904))(this);
	}
	template <typename R = void> R ShowStoreCategory(StoreCategory* category) {
		return ((R (*)(VIPWindow*, StoreCategory*))(Il2CppBase() + 0x15C2AB0))(this, category);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(VIPWindow*, float))(Il2CppBase() + 0x15C2AFC))(this, deltaTime);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(VIPWindow*))(Il2CppBase() + 0x15C196C))(this);
	}
	template <typename R = void> R Awakeb__18_0() {
		return ((R (*)(VIPWindow*))(Il2CppBase() + 0x15C38E8))(this);
	}

};

