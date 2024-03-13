#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class NearbyHelperObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "NearbyHelperObject"));
	}

	template <typename T = NearbyHelperObject*> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& mAdvertisingRemaining() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = double> static T& mDiscoveryRemaining() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = INearbyConnectionClient*> static T& mClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T CreateObject(INearbyConnectionClient* client) {
		return ((T (*)(void *, INearbyConnectionClient*))(Il2CppBase() + 0x13A8A4C))(0, client);
	}
	template <typename T = double> static T ToSeconds(Nullable1uintptr_t>* span) {
		return ((T (*)(void *, Nullable1uintptr_t>*))(Il2CppBase() + 0x13A8C44))(0, span);
	}
	template <typename T = void> static T StartAdvertisingTimer(Nullable1uintptr_t>* span) {
		return ((T (*)(void *, Nullable1uintptr_t>*))(Il2CppBase() + 0x13A8D00))(0, span);
	}
	template <typename T = void> static T StartDiscoveryTimer(Nullable1uintptr_t>* span) {
		return ((T (*)(void *, Nullable1uintptr_t>*))(Il2CppBase() + 0x13A8D80))(0, span);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NearbyHelperObject*))(Il2CppBase() + 0x13A8E00))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(NearbyHelperObject*))(Il2CppBase() + 0x13A8E78))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NearbyHelperObject*))(Il2CppBase() + 0x13A8F64))(this);
	}

};

}
