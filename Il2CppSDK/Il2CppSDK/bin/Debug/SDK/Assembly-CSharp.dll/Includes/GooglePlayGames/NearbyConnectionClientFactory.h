#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class NearbyConnectionClientFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "NearbyConnectionClientFactory"));
	}


	template <typename R = void> static R Create(Action1GooglePlayGamesBasicApiNearby::INearbyConnectionClient*>* callback) {
		return ((R (*)(void *, Action1GooglePlayGamesBasicApiNearby::INearbyConnectionClient*>*))(Il2CppBase() + 0x13A88AC))(0, callback);
	}

};

}
