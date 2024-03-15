#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapPingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapPingEntity"));
	}


	template <typename R = MinimapPingComponent*> R get_minimapPing() {
		return ((R (*)(IMinimapPingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMinimapPing() {
		return ((R (*)(IMinimapPingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMinimapPing(float newLifetime, float newRadius) {
		return ((R (*)(IMinimapPingEntity*, float, float))(Il2CppBase() + 0x0))(this, newLifetime, newRadius);
	}
	template <typename R = void> R ReplaceMinimapPing(float newLifetime, float newRadius) {
		return ((R (*)(IMinimapPingEntity*, float, float))(Il2CppBase() + 0x0))(this, newLifetime, newRadius);
	}
	template <typename R = void> R RemoveMinimapPing() {
		return ((R (*)(IMinimapPingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

