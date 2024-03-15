#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiscoveringConnectionLifecycleCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiscoveringConnectionLifecycleCallback"));
	}

	 Action1GooglePlayGamesBasicApiNearby::ConnectionResponse*>*& mResponseCallback() {
		return *(Action1GooglePlayGamesBasicApiNearby::ConnectionResponse*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::IMessageListener*> R& mListener() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& mClient() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R onConnectionInitiated(Il2CppString* endpointId, uintptr_t connectionInfo) {
		return ((R (*)(DiscoveringConnectionLifecycleCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1142680))(this, endpointId, connectionInfo);
	}
	template <typename R = void> R onConnectionResult(Il2CppString* endpointId, uintptr_t connectionResolution) {
		return ((R (*)(DiscoveringConnectionLifecycleCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1142AA4))(this, endpointId, connectionResolution);
	}
	template <typename R = void> R onDisconnected(Il2CppString* endpointId) {
		return ((R (*)(DiscoveringConnectionLifecycleCallback*, Il2CppString*))(Il2CppBase() + 0x1142F34))(this, endpointId);
	}

};

