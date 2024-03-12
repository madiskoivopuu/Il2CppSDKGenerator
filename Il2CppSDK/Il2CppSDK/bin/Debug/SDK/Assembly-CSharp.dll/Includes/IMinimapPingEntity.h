#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapPingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapPingEntity"));
	}


	template <typename T = uintptr_t> T get_minimapPing() {
		return ((T (*)(IMinimapPingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMinimapPing() {
		return ((T (*)(IMinimapPingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMinimapPing(float newLifetime, float newRadius) {
		return ((T (*)(IMinimapPingEntity*, float, float))(Il2CppBase() + 0x0))(this, newLifetime, newRadius);
	}
	template <typename T = void> T ReplaceMinimapPing(float newLifetime, float newRadius) {
		return ((T (*)(IMinimapPingEntity*, float, float))(Il2CppBase() + 0x0))(this, newLifetime, newRadius);
	}
	template <typename T = void> T RemoveMinimapPing() {
		return ((T (*)(IMinimapPingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
