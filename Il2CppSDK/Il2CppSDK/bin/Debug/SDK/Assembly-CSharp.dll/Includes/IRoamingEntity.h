#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoamingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoamingEntity"));
	}


	template <typename T = RoamingComponent*> T get_roaming() {
		return ((T (*)(IRoamingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRoaming() {
		return ((T (*)(IRoamingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((T (*)(IRoamingEntity*, float, float, float))(Il2CppBase() + 0x0))(this, newDistance, newTime, newMaxTime);
	}
	template <typename T = void> T ReplaceRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((T (*)(IRoamingEntity*, float, float, float))(Il2CppBase() + 0x0))(this, newDistance, newTime, newMaxTime);
	}
	template <typename T = void> T RemoveRoaming() {
		return ((T (*)(IRoamingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

