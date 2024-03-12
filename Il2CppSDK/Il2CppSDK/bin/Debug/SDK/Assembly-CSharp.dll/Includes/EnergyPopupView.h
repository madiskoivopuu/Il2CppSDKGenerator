#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnergyPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyPopupView"));
	}

	template <typename T = uintptr_t> T& TextYouHaveNCoins() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ButtonBuyForCoins() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ButtonWatchAd() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ButtonClose() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(EnergyPopupView*))(Il2CppBase() + 0x1371440))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EnergyPopupView*))(Il2CppBase() + 0x137157C))(this);
	}
	template <typename T = void> T Init(uintptr_t world) {
		return ((T (*)(EnergyPopupView*, uintptr_t))(Il2CppBase() + 0x13715E0))(this, world);
	}
	template <typename T = void> T OnButtonBuyForCoinsClick() {
		return ((T (*)(EnergyPopupView*))(Il2CppBase() + 0x13717D4))(this);
	}
	template <typename T = void> T OnButtonWatchAdClick() {
		return ((T (*)(EnergyPopupView*))(Il2CppBase() + 0x1371888))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(EnergyPopupView*))(Il2CppBase() + 0x137188C))(this);
	}

};

}
