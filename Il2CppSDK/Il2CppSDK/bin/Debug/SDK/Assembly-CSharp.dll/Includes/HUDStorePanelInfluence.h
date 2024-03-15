#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelInfluence : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelInfluence"));
	}


	template <typename R = void> R Draw(float deltaTime) {
		return ((R (*)(HUDStorePanelInfluence*, float))(Il2CppBase() + 0x1281448))(this, deltaTime);
	}
	template <typename R = void> R OnStoreButtonClicked() {
		return ((R (*)(HUDStorePanelInfluence*))(Il2CppBase() + 0x12815BC))(this);
	}

};

