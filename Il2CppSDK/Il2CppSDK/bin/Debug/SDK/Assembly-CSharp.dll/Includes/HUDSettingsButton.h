#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseUncustomizable" 

class HUDSettingsButton: HUDButtonBaseUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSettingsButton"));
	}


	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDSettingsButton*, uintptr_t))(Il2CppBase() + 0x127EA70))(this, window);
	}
	template <typename T = void> T Bind_1(uintptr_t window) {
		return ((T (*)(HUDSettingsButton*, uintptr_t))(Il2CppBase() + 0x127EB90))(this, window);
	}

};

}
