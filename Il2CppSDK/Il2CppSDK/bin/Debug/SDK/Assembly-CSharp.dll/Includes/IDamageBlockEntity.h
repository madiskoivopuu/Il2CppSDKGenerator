#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageBlockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageBlockEntity"));
	}


	template <typename R = DamageBlockComponent*> R get_damageBlock() {
		return ((R (*)(IDamageBlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageBlock() {
		return ((R (*)(IDamageBlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageBlockEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageBlockEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBlock() {
		return ((R (*)(IDamageBlockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

