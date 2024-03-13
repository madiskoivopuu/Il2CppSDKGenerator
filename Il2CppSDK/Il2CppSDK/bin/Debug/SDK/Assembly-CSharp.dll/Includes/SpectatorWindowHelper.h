#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpectatorWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorWindowHelper"));
	}


	template <typename T = SpectatorWindow*> static T ShowSpectator(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1488024))(0, manager, targetId);
	}
	template <typename T = void> static T CloseSpectator(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x14881E4))(0, manager);
	}
	template <typename T = bool> static T IsSpectatorOpen(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1488280))(0, manager);
	}
	template <typename T = SpectatorWindow*> static T GetSpectator(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148835C))(0, manager);
	}

};

