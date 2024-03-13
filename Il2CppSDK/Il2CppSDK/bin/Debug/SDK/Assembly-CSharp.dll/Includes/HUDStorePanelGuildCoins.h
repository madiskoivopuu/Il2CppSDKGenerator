#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelGuildCoins : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelGuildCoins"));
	}


	template <typename T = void> T Draw(float deltaTime) {
		return ((T (*)(HUDStorePanelGuildCoins*, float))(Il2CppBase() + 0x1281250))(this, deltaTime);
	}
	template <typename T = void> T OnStoreButtonClicked() {
		return ((T (*)(HUDStorePanelGuildCoins*))(Il2CppBase() + 0x12813C4))(this);
	}

};

