#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoamingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoamingEntity"));
	}


	template <typename R = RoamingComponent*> R get_roaming() {
		return ((R (*)(IRoamingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRoaming() {
		return ((R (*)(IRoamingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((R (*)(IRoamingEntity*, float, float, float))(Il2CppBase() + 0x0))(this, newDistance, newTime, newMaxTime);
	}
	template <typename R = void> R ReplaceRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((R (*)(IRoamingEntity*, float, float, float))(Il2CppBase() + 0x0))(this, newDistance, newTime, newMaxTime);
	}
	template <typename R = void> R RemoveRoaming() {
		return ((R (*)(IRoamingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

