#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel" 

class HUDStorePanelVIPPoints: HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelVIPPoints"));
	}

	template <typename T = uintptr_t> T& CurrentVipLevel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CurrentVipProgressImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Draw(float deltaTime) {
		return ((T (*)(HUDStorePanelVIPPoints*, float))(Il2CppBase() + 0x1282378))(this, deltaTime);
	}
	template <typename T = void> T ChangeCurrencyCount(int32_t count) {
		return ((T (*)(HUDStorePanelVIPPoints*, int32_t))(Il2CppBase() + 0x12824C8))(this, count);
	}
	template <typename T = void> T OnStoreButtonClicked() {
		return ((T (*)(HUDStorePanelVIPPoints*))(Il2CppBase() + 0x1282A4C))(this);
	}

};

}
