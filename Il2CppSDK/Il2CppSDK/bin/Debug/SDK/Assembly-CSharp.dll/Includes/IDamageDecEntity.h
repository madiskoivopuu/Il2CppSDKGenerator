#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageDecEntity"));
	}


	template <typename R = DamageDecComponent*> R get_damageDec() {
		return ((R (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageDec() {
		return ((R (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageDec() {
		return ((R (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

