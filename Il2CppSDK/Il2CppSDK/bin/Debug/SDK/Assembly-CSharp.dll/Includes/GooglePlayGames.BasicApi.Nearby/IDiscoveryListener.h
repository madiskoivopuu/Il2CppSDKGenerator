#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class IDiscoveryListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "IDiscoveryListener"));
	}


	template <typename T = void> T OnEndpointFound(uintptr_t discoveredEndpoint) {
		return ((T (*)(IDiscoveryListener*, uintptr_t))(Il2CppBase() + 0x0))(this, discoveredEndpoint);
	}
	template <typename T = void> T OnEndpointLost(Il2CppString* lostEndpointId) {
		return ((T (*)(IDiscoveryListener*, Il2CppString*))(Il2CppBase() + 0x0))(this, lostEndpointId);
	}

};

}
