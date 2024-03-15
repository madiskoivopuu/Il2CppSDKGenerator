#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDismountCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDismountCooldownEntity"));
	}


	template <typename R = DismountCooldownComponent*> R get_dismountCooldown() {
		return ((R (*)(IDismountCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDismountCooldown() {
		return ((R (*)(IDismountCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDismountCooldown(float newValue) {
		return ((R (*)(IDismountCooldownEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDismountCooldown(float newValue) {
		return ((R (*)(IDismountCooldownEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDismountCooldown() {
		return ((R (*)(IDismountCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

