#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakDamageResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakDamageResistanceEntity"));
	}


	template <typename R = SneakDamageResistanceComponent*> R get_sneakDamageResistance() {
		return ((R (*)(ISneakDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSneakDamageResistance() {
		return ((R (*)(ISneakDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSneakDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISneakDamageResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSneakDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISneakDamageResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSneakDamageResistance() {
		return ((R (*)(ISneakDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

