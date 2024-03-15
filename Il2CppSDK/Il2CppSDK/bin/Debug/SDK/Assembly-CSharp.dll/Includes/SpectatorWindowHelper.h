#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpectatorWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorWindowHelper"));
	}


	template <typename R = SpectatorWindow*> static R ShowSpectator(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1488024))(0, manager, targetId);
	}
	template <typename R = void> static R CloseSpectator(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x14881E4))(0, manager);
	}
	template <typename R = bool> static R IsSpectatorOpen(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1488280))(0, manager);
	}
	template <typename R = SpectatorWindow*> static R GetSpectator(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148835C))(0, manager);
	}

};

