#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class AdvertisingResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "AdvertisingResult"));
	}

	template <typename R = GooglePlayGamesBasicApi::ResponseStatus*> R& mStatus() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& mLocalEndpointName() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R get_Succeeded() {
		return ((R (*)(AdvertisingResult*))(Il2CppBase() + 0x129BC38))(this);
	}
	template <typename R = GooglePlayGamesBasicApi::ResponseStatus*> R get_Status() {
		return ((R (*)(AdvertisingResult*))(Il2CppBase() + 0x129BC48))(this);
	}
	template <typename R = Il2CppString*> R get_LocalEndpointName() {
		return ((R (*)(AdvertisingResult*))(Il2CppBase() + 0x129BC50))(this);
	}

};

}
