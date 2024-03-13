#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGameThreadDiscoveryListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGameThreadDiscoveryListener"));
	}

	template <typename T = IDiscoveryListener*> T& mListener() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnEndpointFound(EndpointDetails* discoveredEndpoint) {
		return ((T (*)(OnGameThreadDiscoveryListener*, EndpointDetails*))(Il2CppBase() + 0x1143480))(this, discoveredEndpoint);
	}
	template <typename T = void> T OnEndpointLost(Il2CppString* lostEndpointId) {
		return ((T (*)(OnGameThreadDiscoveryListener*, Il2CppString*))(Il2CppBase() + 0x1143590))(this, lostEndpointId);
	}

};

