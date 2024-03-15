#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelUniversal : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelUniversal"));
	}

	template <typename R = uintptr_t> R& _currencyIcon() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Bind(IUIWindow* window, CurrencyType currencyType, Il2CppString* iconPath) {
		return ((R (*)(HUDStorePanelUniversal*, IUIWindow*, CurrencyType, Il2CppString*))(Il2CppBase() + 0x1281BE8))(this, window, currencyType, iconPath);
	}
	template <typename R = void> R Draw(float deltaTime) {
		return ((R (*)(HUDStorePanelUniversal*, float))(Il2CppBase() + 0x1281D3C))(this, deltaTime);
	}
	template <typename R = void> R OnStoreButtonClicked() {
		return ((R (*)(HUDStorePanelUniversal*))(Il2CppBase() + 0x1282130))(this);
	}
	template <typename R = void> R Bind_1(IUIWindow* window, Il2CppString* itemName, Il2CppString* iconPath) {
		return ((R (*)(HUDStorePanelUniversal*, IUIWindow*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12821D4))(this, window, itemName, iconPath);
	}

};

