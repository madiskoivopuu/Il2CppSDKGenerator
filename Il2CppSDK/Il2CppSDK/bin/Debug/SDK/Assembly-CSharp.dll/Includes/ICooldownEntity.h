#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICooldownEntity"));
	}


	template <typename T = CooldownComponent*> T get_cooldown() {
		return ((T (*)(ICooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCooldown() {
		return ((T (*)(ICooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCooldown(float newValue, float newInitial) {
		return ((T (*)(ICooldownEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newInitial);
	}
	template <typename T = void> T ReplaceCooldown(float newValue, float newInitial) {
		return ((T (*)(ICooldownEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newInitial);
	}
	template <typename T = void> T RemoveCooldown() {
		return ((T (*)(ICooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

