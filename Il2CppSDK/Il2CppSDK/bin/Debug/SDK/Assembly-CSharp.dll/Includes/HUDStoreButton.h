#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseUncustomizable" 

class HUDStoreButton: HUDButtonBaseUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStoreButton"));
	}

	template <typename T = uintptr_t> T& _buttonAnimator() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDStoreButton*, uintptr_t))(Il2CppBase() + 0x127F884))(this, window);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDStoreButton*, bool))(Il2CppBase() + 0x127F9C0))(this, isCustomizationModeOn);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDStoreButton*, float))(Il2CppBase() + 0x127FBA8))(this, deltaTime);
	}
	template <typename T = void> T UpdateCounter() {
		return ((T (*)(HUDStoreButton*))(Il2CppBase() + 0x127FCC8))(this);
	}
	template <typename T = bool> static T UpdateCounterg__isTournamentMessage|4_0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1280078))(0, e);
	}
	template <typename T = bool> static T UpdateCounterg__isExpiredMessage|4_1(uintptr_t e, uintptr_t ) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12800D0))(0, e, );
	}
	template <typename T = bool> static T UpdateCounterg__isWindowMessage|4_2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128012C))(0, e);
	}

};

}
