#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelVIPPoints : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelVIPPoints"));
	}

	template <typename R = uintptr_t> R& CurrentVipLevel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& CurrentVipProgressImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R Draw(float deltaTime) {
		return ((R (*)(HUDStorePanelVIPPoints*, float))(Il2CppBase() + 0x1282378))(this, deltaTime);
	}
	template <typename R = void> R ChangeCurrencyCount(int32_t count) {
		return ((R (*)(HUDStorePanelVIPPoints*, int32_t))(Il2CppBase() + 0x12824C8))(this, count);
	}
	template <typename R = void> R OnStoreButtonClicked() {
		return ((R (*)(HUDStorePanelVIPPoints*))(Il2CppBase() + 0x1282A4C))(this);
	}

};

