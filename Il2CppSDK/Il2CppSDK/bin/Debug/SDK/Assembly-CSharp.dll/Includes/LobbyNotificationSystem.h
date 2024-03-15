#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyNotificationSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = UIWindowsManager*> R& _windowsManager() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 IGroup1LobbyEntity*>*& _lobbyEntities() {
		return *(IGroup1LobbyEntity*>**)((uintptr_t)this + 0x28);
	}
	 Il2CppDictionary<Il2CppString*, LobbyNotifState*>*& _lastState() {
		return *(Il2CppDictionary<Il2CppString*, LobbyNotifState*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<bool>*> static R& _processed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _notificationKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(LobbyNotificationSystem*))(Il2CppBase() + 0x1441A4C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(LobbyNotificationSystem*))(Il2CppBase() + 0x1441C00))(this);
	}
	template <typename R = void> R ShowNotification(LobbyType* type, LobbyNotifState* state, LobbyActiveTimeComponent* lobbyActiveTime) {
		return ((R (*)(LobbyNotificationSystem*, LobbyType*, LobbyNotifState*, LobbyActiveTimeComponent*))(Il2CppBase() + 0x1442294))(this, type, state, lobbyActiveTime);
	}

};

