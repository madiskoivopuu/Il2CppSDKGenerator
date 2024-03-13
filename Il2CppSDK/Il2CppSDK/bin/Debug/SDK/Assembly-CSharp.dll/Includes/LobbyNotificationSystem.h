#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyNotificationSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ITimeManager*> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = UIWindowsManager*> T& _windowsManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = IGroup1LobbyEntity*>*> T& _lobbyEntities() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, LobbyNotifState*>*> T& _lastState() {
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
	template <typename T = void> T ShowNotification(LobbyType* type, LobbyNotifState* state, LobbyActiveTimeComponent* lobbyActiveTime) {
		return ((T (*)(LobbyNotificationSystem*, LobbyType*, LobbyNotifState*, LobbyActiveTimeComponent*))(Il2CppBase() + 0x1442294))(this, type, state, lobbyActiveTime);
	}

};

