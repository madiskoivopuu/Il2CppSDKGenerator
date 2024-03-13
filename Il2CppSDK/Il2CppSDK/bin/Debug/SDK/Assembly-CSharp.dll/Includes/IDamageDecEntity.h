#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageDecEntity"));
	}


	template <typename T = DamageDecComponent*> T get_damageDec() {
		return ((T (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageDec() {
		return ((T (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageDec() {
		return ((T (*)(IDamageDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

