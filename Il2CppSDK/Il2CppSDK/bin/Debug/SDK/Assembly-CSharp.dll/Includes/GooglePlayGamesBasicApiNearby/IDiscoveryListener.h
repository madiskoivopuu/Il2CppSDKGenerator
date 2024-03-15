#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class IDiscoveryListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "IDiscoveryListener"));
	}


	template <typename R = void> R OnEndpointFound(GooglePlayGamesBasicApiNearby::EndpointDetails discoveredEndpoint) {
		return ((R (*)(IDiscoveryListener*, GooglePlayGamesBasicApiNearby::EndpointDetails))(Il2CppBase() + 0x0))(this, discoveredEndpoint);
	}
	template <typename R = void> R OnEndpointLost(Il2CppString* lostEndpointId) {
		return ((R (*)(IDiscoveryListener*, Il2CppString*))(Il2CppBase() + 0x0))(this, lostEndpointId);
	}

};

}
