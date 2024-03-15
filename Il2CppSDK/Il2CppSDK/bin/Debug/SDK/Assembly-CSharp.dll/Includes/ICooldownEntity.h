#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICooldownEntity"));
	}


	template <typename R = CooldownComponent*> R get_cooldown() {
		return ((R (*)(ICooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCooldown() {
		return ((R (*)(ICooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCooldown(float newValue, float newInitial) {
		return ((R (*)(ICooldownEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newInitial);
	}
	template <typename R = void> R ReplaceCooldown(float newValue, float newInitial) {
		return ((R (*)(ICooldownEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newInitial);
	}
	template <typename R = void> R RemoveCooldown() {
		return ((R (*)(ICooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

