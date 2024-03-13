#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRangedResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRangedResistanceEntity"));
	}


	template <typename T = RangedResistanceComponent*> T get_rangedResistance() {
		return ((T (*)(IRangedResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRangedResistance() {
		return ((T (*)(IRangedResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IRangedResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IRangedResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveRangedResistance() {
		return ((T (*)(IRangedResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

