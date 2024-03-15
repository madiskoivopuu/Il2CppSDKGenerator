#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBowResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBowResistanceEntity"));
	}


	template <typename R = BowResistanceComponent*> R get_bowResistance() {
		return ((R (*)(IBowResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBowResistance() {
		return ((R (*)(IBowResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IBowResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IBowResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBowResistance() {
		return ((R (*)(IBowResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

