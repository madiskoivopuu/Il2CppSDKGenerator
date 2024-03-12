#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDWindowBase`1" 

class MapHUDWindow: HUDWindowBase1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHUDWindow"));
	}

	template <typename T = uintptr_t> T& HUDEnergyInfo() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& GlobalBuffInfo() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& CurrentLocationButton() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& TradesButton() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& EventWindow() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(MapHUDWindow*))(Il2CppBase() + 0x126F720))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MapHUDWindow*, float))(Il2CppBase() + 0x126F8D4))(this, deltaTime);
	}
	template <typename T = void> T CenterViewAtCurrentLocation() {
		return ((T (*)(MapHUDWindow*))(Il2CppBase() + 0x126FDB0))(this);
	}
	template <typename T = void> T BindButtons() {
		return ((T (*)(MapHUDWindow*))(Il2CppBase() + 0x126F7F0))(this);
	}
	template <typename T = void> T UpdatePanels(int64_t now, uintptr_t account, uintptr_t avatar) {
		return ((T (*)(MapHUDWindow*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x126FC08))(this, now, account, avatar);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MapHUDWindow*))(Il2CppBase() + 0x126FFE8))(this);
	}

};

}
