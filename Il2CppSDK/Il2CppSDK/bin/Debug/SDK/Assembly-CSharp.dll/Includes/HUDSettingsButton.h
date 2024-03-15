#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseUncustomizable.h" 

class HUDSettingsButton : public HUDButtonBaseUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSettingsButton"));
	}


	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDSettingsButton*, IHUDWindow*))(Il2CppBase() + 0x127EA70))(this, window);
	}
	template <typename R = void> R Bind_1(SpectatorWindow* window) {
		return ((R (*)(HUDSettingsButton*, SpectatorWindow*))(Il2CppBase() + 0x127EB90))(this, window);
	}

};

