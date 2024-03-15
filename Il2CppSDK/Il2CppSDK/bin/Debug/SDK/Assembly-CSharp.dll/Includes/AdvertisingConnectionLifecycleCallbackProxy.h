#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdvertisingConnectionLifecycleCallbackProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvertisingConnectionLifecycleCallbackProxy"));
	}

	 Action1GooglePlayGamesBasicApiNearby::AdvertisingResult*>*& mResultCallback() {
		return *(Action1GooglePlayGamesBasicApiNearby::AdvertisingResult*>**)((uintptr_t)this + 0x20);
	}
	 Action1GooglePlayGamesBasicApiNearby::ConnectionRequest*>*& mConnectionRequestCallback() {
		return *(Action1GooglePlayGamesBasicApiNearby::ConnectionRequest*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidNearbyConnectionClient*> R& mClient() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& mLocalEndpointName() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R onConnectionInitiated(Il2CppString* endpointId, uintptr_t connectionInfo) {
		return ((R (*)(AdvertisingConnectionLifecycleCallbackProxy*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1141F80))(this, endpointId, connectionInfo);
	}
	template <typename R = void> R onConnectionResult(Il2CppString* endpointId, uintptr_t connectionResolution) {
		return ((R (*)(AdvertisingConnectionLifecycleCallbackProxy*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1142188))(this, endpointId, connectionResolution);
	}
	template <typename R = void> R onDisconnected(Il2CppString* endpointId) {
		return ((R (*)(AdvertisingConnectionLifecycleCallbackProxy*, Il2CppString*))(Il2CppBase() + 0x11424E0))(this, endpointId);
	}

};

