#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel" 

class HUDStorePanelSilver: HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelSilver"));
	}


	template <typename T = void> T Draw(float deltaTime) {
		return ((T (*)(HUDStorePanelSilver*, float))(Il2CppBase() + 0x1281640))(this, deltaTime);
	}
	template <typename T = void> T OnStoreButtonClicked() {
		return ((T (*)(HUDStorePanelSilver*))(Il2CppBase() + 0x12817B4))(this);
	}

};

}
