#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnergyPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyPopupView"));
	}

	template <typename R = uintptr_t> R& TextYouHaveNCoins() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ButtonBuyForCoins() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ButtonWatchAd() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& ButtonClose() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(EnergyPopupView*))(Il2CppBase() + 0x1371440))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(EnergyPopupView*))(Il2CppBase() + 0x137157C))(this);
	}
	template <typename R = void> R Init(MapUnityWorld* world) {
		return ((R (*)(EnergyPopupView*, MapUnityWorld*))(Il2CppBase() + 0x13715E0))(this, world);
	}
	template <typename R = void> R OnButtonBuyForCoinsClick() {
		return ((R (*)(EnergyPopupView*))(Il2CppBase() + 0x13717D4))(this);
	}
	template <typename R = void> R OnButtonWatchAdClick() {
		return ((R (*)(EnergyPopupView*))(Il2CppBase() + 0x1371888))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(EnergyPopupView*))(Il2CppBase() + 0x137188C))(this);
	}

};

