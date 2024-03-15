#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRangedResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRangedResistanceEntity"));
	}


	template <typename R = RangedResistanceComponent*> R get_rangedResistance() {
		return ((R (*)(IRangedResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRangedResistance() {
		return ((R (*)(IRangedResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRangedResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IRangedResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceRangedResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IRangedResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveRangedResistance() {
		return ((R (*)(IRangedResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

