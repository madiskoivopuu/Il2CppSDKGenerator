#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageResistanceEntity"));
	}


	template <typename R = DamageResistanceComponent*> R get_damageResistance() {
		return ((R (*)(IDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageResistance() {
		return ((R (*)(IDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageResistance() {
		return ((R (*)(IDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

