#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakDamageResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakDamageResistanceEntity"));
	}


	template <typename T = SneakDamageResistanceComponent*> T get_sneakDamageResistance() {
		return ((T (*)(ISneakDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSneakDamageResistance() {
		return ((T (*)(ISneakDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISneakDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISneakDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSneakDamageResistance() {
		return ((T (*)(ISneakDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

