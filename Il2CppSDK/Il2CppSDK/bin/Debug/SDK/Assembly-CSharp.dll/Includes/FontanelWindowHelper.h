#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FontanelWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FontanelWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowFontanel(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15FC704))(0, manager, targetId);
	}
	template <typename T = uintptr_t> static T GetFontanel(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15FC7AC))(0, manager);
	}
	template <typename T = void> static T CloseFontanel(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15FC820))(0, manager, targetId);
	}

};

}
