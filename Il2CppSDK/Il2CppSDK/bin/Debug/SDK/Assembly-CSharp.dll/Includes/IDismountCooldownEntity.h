#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDismountCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDismountCooldownEntity"));
	}


	template <typename T = uintptr_t> T get_dismountCooldown() {
		return ((T (*)(IDismountCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDismountCooldown() {
		return ((T (*)(IDismountCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDismountCooldown(float newValue) {
		return ((T (*)(IDismountCooldownEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDismountCooldown(float newValue) {
		return ((T (*)(IDismountCooldownEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDismountCooldown() {
		return ((T (*)(IDismountCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
