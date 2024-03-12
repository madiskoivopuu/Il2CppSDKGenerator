#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageReflectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageReflectEntity"));
	}


	template <typename T = uintptr_t> T get_damageReflect() {
		return ((T (*)(IDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageReflect() {
		return ((T (*)(IDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageReflectEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageReflectEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageReflect() {
		return ((T (*)(IDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
