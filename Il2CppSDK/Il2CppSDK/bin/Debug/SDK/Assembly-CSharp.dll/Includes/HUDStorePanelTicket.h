#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelTicket : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelTicket"));
	}


	template <typename R = void> R Draw(float deltaTime) {
		return ((R (*)(HUDStorePanelTicket*, float))(Il2CppBase() + 0x1281838))(this, deltaTime);
	}
	template <typename R = void> R OnStoreButtonClicked() {
		return ((R (*)(HUDStorePanelTicket*))(Il2CppBase() + 0x12819AC))(this);
	}

};

