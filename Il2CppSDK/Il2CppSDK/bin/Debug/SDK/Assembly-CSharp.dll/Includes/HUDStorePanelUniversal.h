#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel" 

class HUDStorePanelUniversal: HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelUniversal"));
	}

	template <typename T = uintptr_t> T& _currencyIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Bind(uintptr_t window, uintptr_t currencyType, Il2CppString* iconPath) {
		return ((T (*)(HUDStorePanelUniversal*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1281BE8))(this, window, currencyType, iconPath);
	}
	template <typename T = void> T Draw(float deltaTime) {
		return ((T (*)(HUDStorePanelUniversal*, float))(Il2CppBase() + 0x1281D3C))(this, deltaTime);
	}
	template <typename T = void> T OnStoreButtonClicked() {
		return ((T (*)(HUDStorePanelUniversal*))(Il2CppBase() + 0x1282130))(this);
	}
	template <typename T = void> T Bind_1(uintptr_t window, Il2CppString* itemName, Il2CppString* iconPath) {
		return ((T (*)(HUDStorePanelUniversal*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12821D4))(this, window, itemName, iconPath);
	}

};

}
