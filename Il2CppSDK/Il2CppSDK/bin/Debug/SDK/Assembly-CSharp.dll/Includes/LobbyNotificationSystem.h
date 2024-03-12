#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyNotificationSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _windowsManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _lobbyEntities() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _lastState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _processed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _notificationKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(LobbyNotificationSystem*))(Il2CppBase() + 0x1441A4C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(LobbyNotificationSystem*))(Il2CppBase() + 0x1441C00))(this);
	}
	template <typename T = void> T ShowNotification(uintptr_t type, uintptr_t state, uintptr_t lobbyActiveTime) {
		return ((T (*)(LobbyNotificationSystem*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1442294))(this, type, state, lobbyActiveTime);
	}

};

}
