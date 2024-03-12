#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel" 

class HUDStorePanelInfluence: HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelInfluence"));
	}


	template <typename T = void> T Draw(float deltaTime) {
		return ((T (*)(HUDStorePanelInfluence*, float))(Il2CppBase() + 0x1281448))(this, deltaTime);
	}
	template <typename T = void> T OnStoreButtonClicked() {
		return ((T (*)(HUDStorePanelInfluence*))(Il2CppBase() + 0x12815BC))(this);
	}

};

}
