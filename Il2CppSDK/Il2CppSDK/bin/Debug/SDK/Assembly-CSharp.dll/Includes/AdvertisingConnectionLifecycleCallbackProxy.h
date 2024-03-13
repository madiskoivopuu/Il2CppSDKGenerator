#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdvertisingConnectionLifecycleCallbackProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvertisingConnectionLifecycleCallbackProxy"));
	}

	template <typename T = Action1AdvertisingResult*>*> T& mResultCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Action1ConnectionRequest*>*> T& mConnectionRequestCallback() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = AndroidNearbyConnectionClient*> T& mClient() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& mLocalEndpointName() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T onConnectionInitiated(Il2CppString* endpointId, uintptr_t connectionInfo) {
		return ((T (*)(AdvertisingConnectionLifecycleCallbackProxy*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1141F80))(this, endpointId, connectionInfo);
	}
	template <typename T = void> T onConnectionResult(Il2CppString* endpointId, uintptr_t connectionResolution) {
		return ((T (*)(AdvertisingConnectionLifecycleCallbackProxy*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1142188))(this, endpointId, connectionResolution);
	}
	template <typename T = void> T onDisconnected(Il2CppString* endpointId) {
		return ((T (*)(AdvertisingConnectionLifecycleCallbackProxy*, Il2CppString*))(Il2CppBase() + 0x11424E0))(this, endpointId);
	}

};

