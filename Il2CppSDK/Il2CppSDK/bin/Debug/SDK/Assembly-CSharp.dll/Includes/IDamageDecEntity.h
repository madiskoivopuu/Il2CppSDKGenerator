#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageDecEntity"));
	}


	template <typename T = uintptr_t> T get_damageDec() {
		return ((T (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageDec() {
		return ((T (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageDec() {
		return ((T (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
