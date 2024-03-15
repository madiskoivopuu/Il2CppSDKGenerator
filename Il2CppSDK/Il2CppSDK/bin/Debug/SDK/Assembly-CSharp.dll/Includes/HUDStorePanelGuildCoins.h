#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelGuildCoins : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelGuildCoins"));
	}


	template <typename R = void> R Draw(float deltaTime) {
		return ((R (*)(HUDStorePanelGuildCoins*, float))(Il2CppBase() + 0x1281250))(this, deltaTime);
	}
	template <typename R = void> R OnStoreButtonClicked() {
		return ((R (*)(HUDStorePanelGuildCoins*))(Il2CppBase() + 0x12813C4))(this);
	}

};

