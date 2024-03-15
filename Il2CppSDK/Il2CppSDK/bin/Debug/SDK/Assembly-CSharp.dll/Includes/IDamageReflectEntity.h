#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageReflectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageReflectEntity"));
	}


	template <typename R = DamageReflectComponent*> R get_damageReflect() {
		return ((R (*)(IDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageReflect() {
		return ((R (*)(IDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageReflectEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageReflectEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageReflect() {
		return ((R (*)(IDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

