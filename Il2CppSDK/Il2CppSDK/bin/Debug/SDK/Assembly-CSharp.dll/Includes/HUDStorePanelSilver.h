#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelSilver : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelSilver"));
	}


	template <typename R = void> R Draw(float deltaTime) {
		return ((R (*)(HUDStorePanelSilver*, float))(Il2CppBase() + 0x1281640))(this, deltaTime);
	}
	template <typename R = void> R OnStoreButtonClicked() {
		return ((R (*)(HUDStorePanelSilver*))(Il2CppBase() + 0x12817B4))(this);
	}

};

