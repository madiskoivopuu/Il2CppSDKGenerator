#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class NearbyHelperObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "NearbyHelperObject"));
	}

	template <typename R = GooglePlayGamesOurUtils::NearbyHelperObject*> static R& instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = double> static R& mAdvertisingRemaining() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = double> static R& mDiscoveryRemaining() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::INearbyConnectionClient*> static R& mClient() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename R = void> static R CreateObject(GooglePlayGamesBasicApiNearby::INearbyConnectionClient* client) {
		return ((R (*)(void *, GooglePlayGamesBasicApiNearby::INearbyConnectionClient*))(Il2CppBase() + 0x13A8A4C))(0, client);
	}
	template <typename R = double> static R ToSeconds(Nullable1uintptr_t>* span) {
		return ((R (*)(void *, Nullable1uintptr_t>*))(Il2CppBase() + 0x13A8C44))(0, span);
	}
	template <typename R = void> static R StartAdvertisingTimer(Nullable1uintptr_t>* span) {
		return ((R (*)(void *, Nullable1uintptr_t>*))(Il2CppBase() + 0x13A8D00))(0, span);
	}
	template <typename R = void> static R StartDiscoveryTimer(Nullable1uintptr_t>* span) {
		return ((R (*)(void *, Nullable1uintptr_t>*))(Il2CppBase() + 0x13A8D80))(0, span);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(NearbyHelperObject*))(Il2CppBase() + 0x13A8E00))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(NearbyHelperObject*))(Il2CppBase() + 0x13A8E78))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(NearbyHelperObject*))(Il2CppBase() + 0x13A8F64))(this);
	}

};

}
