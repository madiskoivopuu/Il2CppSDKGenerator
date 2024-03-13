#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FontanelWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FontanelWindowHelper"));
	}


	template <typename T = FontanelWindow*> static T ShowFontanel(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FC704))(0, manager, targetId);
	}
	template <typename T = FontanelWindow*> static T GetFontanel(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15FC7AC))(0, manager);
	}
	template <typename T = void> static T CloseFontanel(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FC820))(0, manager, targetId);
	}

};

