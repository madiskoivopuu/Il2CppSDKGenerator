#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiNearby {

class NearbyConnectionConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiNearby", "NearbyConnectionConfiguration"));
	}

	template <typename R = int32_t> static R& MaxUnreliableMessagePayloadLength() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MaxReliableMessagePayloadLength() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Action1GooglePlayGamesBasicApiNearby::InitializationStatus*>*& mInitializationCallback() {
		return *(Action1GooglePlayGamesBasicApiNearby::InitializationStatus*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& mLocalClientId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = int64_t> R get_LocalClientId() {
		return ((R (*)(NearbyConnectionConfiguration*))(Il2CppBase() + 0x13A8A3C))(this);
	}
	 Action1GooglePlayGamesBasicApiNearby::InitializationStatus*>* get_InitializationCallback() {
		return ((Action1GooglePlayGamesBasicApiNearby::InitializationStatus*>* (*)(NearbyConnectionConfiguration*))(Il2CppBase() + 0x13A8A44))(this);
	}

};

}
