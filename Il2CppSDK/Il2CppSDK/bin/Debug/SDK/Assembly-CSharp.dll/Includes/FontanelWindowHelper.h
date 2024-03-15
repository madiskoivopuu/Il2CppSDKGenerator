#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FontanelWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FontanelWindowHelper"));
	}


	template <typename R = FontanelWindow*> static R ShowFontanel(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FC704))(0, manager, targetId);
	}
	template <typename R = FontanelWindow*> static R GetFontanel(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15FC7AC))(0, manager);
	}
	template <typename R = void> static R CloseFontanel(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FC820))(0, manager, targetId);
	}

};

