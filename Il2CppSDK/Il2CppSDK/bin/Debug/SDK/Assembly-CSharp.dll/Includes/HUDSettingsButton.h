#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseUncustomizable.h" 

class HUDSettingsButton : public HUDButtonBaseUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSettingsButton"));
	}


	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDSettingsButton*, IHUDWindow*))(Il2CppBase() + 0x127EA70))(this, window);
	}
	template <typename T = void> T Bind_1(SpectatorWindow* window) {
		return ((T (*)(HUDSettingsButton*, SpectatorWindow*))(Il2CppBase() + 0x127EB90))(this, window);
	}

};

