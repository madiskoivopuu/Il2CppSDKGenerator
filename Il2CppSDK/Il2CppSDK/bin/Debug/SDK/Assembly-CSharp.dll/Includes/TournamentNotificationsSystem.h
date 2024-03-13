#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentNotificationsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentNotificationsSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = UIWindowsManager*> T& _windowsManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _lastCachedSecond() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _tournamentAlertShowed() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(TournamentNotificationsSystem*))(Il2CppBase() + 0x1509278))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(TournamentNotificationsSystem*))(Il2CppBase() + 0x150927C))(this);
	}

};

