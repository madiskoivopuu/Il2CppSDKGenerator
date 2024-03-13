#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageBlockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageBlockEntity"));
	}


	template <typename T = DamageBlockComponent*> T get_damageBlock() {
		return ((T (*)(IDamageBlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageBlock() {
		return ((T (*)(IDamageBlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageBlockEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageBlockEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBlock() {
		return ((T (*)(IDamageBlockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

