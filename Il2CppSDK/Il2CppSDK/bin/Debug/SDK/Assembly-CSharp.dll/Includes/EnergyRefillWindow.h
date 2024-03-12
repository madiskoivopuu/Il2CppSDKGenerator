#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class EnergyRefillWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyRefillWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _refillButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _coinsText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _coins() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnergyRefillWindow*))(Il2CppBase() + 0x1371914))(this);
	}
	template <typename T = void> T OnRefillClick() {
		return ((T (*)(EnergyRefillWindow*))(Il2CppBase() + 0x13719F0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(EnergyRefillWindow*, float))(Il2CppBase() + 0x1371B78))(this, deltaTime);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(EnergyRefillWindow*))(Il2CppBase() + 0x1371D50))(this);
	}

};

}
