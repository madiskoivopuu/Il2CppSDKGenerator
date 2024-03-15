#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndpointDiscoveryCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndpointDiscoveryCallback"));
	}

	template <typename R = GooglePlayGamesBasicApiNearby::IDiscoveryListener*> R& mListener() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R onEndpointFound(Il2CppString* endpointId, uintptr_t endpointInfo) {
		return ((R (*)(EndpointDiscoveryCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x114308C))(this, endpointId, endpointInfo);
	}
	template <typename R = void> R onEndpointLost(Il2CppString* endpointId) {
		return ((R (*)(EndpointDiscoveryCallback*, Il2CppString*))(Il2CppBase() + 0x114338C))(this, endpointId);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::EndpointDetails*> R CreateEndPointDetails(Il2CppString* endpointId, uintptr_t endpointInfo) {
		return ((R (*)(EndpointDiscoveryCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x114319C))(this, endpointId, endpointInfo);
	}

};

