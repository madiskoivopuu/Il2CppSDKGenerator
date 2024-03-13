#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageResistanceEntity"));
	}


	template <typename T = DamageResistanceComponent*> T get_damageResistance() {
		return ((T (*)(IDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageResistance() {
		return ((T (*)(IDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageResistance() {
		return ((T (*)(IDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

