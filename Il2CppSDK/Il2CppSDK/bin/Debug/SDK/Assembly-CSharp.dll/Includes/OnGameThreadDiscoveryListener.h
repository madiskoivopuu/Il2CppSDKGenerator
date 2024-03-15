#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGameThreadDiscoveryListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGameThreadDiscoveryListener"));
	}

	template <typename R = GooglePlayGamesBasicApiNearby::IDiscoveryListener*> R& mListener() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R OnEndpointFound(GooglePlayGamesBasicApiNearby::EndpointDetails* discoveredEndpoint) {
		return ((R (*)(OnGameThreadDiscoveryListener*, GooglePlayGamesBasicApiNearby::EndpointDetails*))(Il2CppBase() + 0x1143480))(this, discoveredEndpoint);
	}
	template <typename R = void> R OnEndpointLost(Il2CppString* lostEndpointId) {
		return ((R (*)(OnGameThreadDiscoveryListener*, Il2CppString*))(Il2CppBase() + 0x1143590))(this, lostEndpointId);
	}

};

