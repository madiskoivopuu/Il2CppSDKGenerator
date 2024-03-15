#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class EnergyRefillWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyRefillWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _refillButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _coinsText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _coins() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(EnergyRefillWindow*))(Il2CppBase() + 0x1371914))(this);
	}
	template <typename R = void> R OnRefillClick() {
		return ((R (*)(EnergyRefillWindow*))(Il2CppBase() + 0x13719F0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(EnergyRefillWindow*, float))(Il2CppBase() + 0x1371B78))(this, deltaTime);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(EnergyRefillWindow*))(Il2CppBase() + 0x1371D50))(this);
	}

};

