#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentNotificationsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentNotificationsSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = UIWindowsManager*> R& _windowsManager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& _lastCachedSecond() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _tournamentAlertShowed() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(TournamentNotificationsSystem*))(Il2CppBase() + 0x1509278))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(TournamentNotificationsSystem*))(Il2CppBase() + 0x150927C))(this);
	}

};

