#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndpointDiscoveryCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndpointDiscoveryCallback"));
	}

	template <typename T = uintptr_t> T& mListener() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onEndpointFound(Il2CppString* endpointId, uintptr_t endpointInfo) {
		return ((T (*)(EndpointDiscoveryCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x114308C))(this, endpointId, endpointInfo);
	}
	template <typename T = void> T onEndpointLost(Il2CppString* endpointId) {
		return ((T (*)(EndpointDiscoveryCallback*, Il2CppString*))(Il2CppBase() + 0x114338C))(this, endpointId);
	}
	template <typename T = uintptr_t> T CreateEndPointDetails(Il2CppString* endpointId, uintptr_t endpointInfo) {
		return ((T (*)(EndpointDiscoveryCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x114319C))(this, endpointId, endpointInfo);
	}

};

}
