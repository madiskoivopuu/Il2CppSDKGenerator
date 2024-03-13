#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDStorePanel.h" 

class HUDStorePanelTicket : public HUDStorePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStorePanelTicket"));
	}


	template <typename T = void> T Draw(float deltaTime) {
		return ((T (*)(HUDStorePanelTicket*, float))(Il2CppBase() + 0x1281838))(this, deltaTime);
	}
	template <typename T = void> T OnStoreButtonClicked() {
		return ((T (*)(HUDStorePanelTicket*))(Il2CppBase() + 0x12819AC))(this);
	}

};

