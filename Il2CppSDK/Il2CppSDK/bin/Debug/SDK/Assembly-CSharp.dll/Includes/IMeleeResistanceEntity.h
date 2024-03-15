#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMeleeResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMeleeResistanceEntity"));
	}


	template <typename R = MeleeResistanceComponent*> R get_meleeResistance() {
		return ((R (*)(IMeleeResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMeleeResistance() {
		return ((R (*)(IMeleeResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMeleeResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMeleeResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMeleeResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMeleeResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMeleeResistance() {
		return ((R (*)(IMeleeResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

