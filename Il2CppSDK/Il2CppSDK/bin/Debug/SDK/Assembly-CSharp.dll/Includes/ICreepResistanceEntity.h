#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreepResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreepResistanceEntity"));
	}


	template <typename R = CreepResistanceComponent*> R get_creepResistance() {
		return ((R (*)(ICreepResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCreepResistance() {
		return ((R (*)(ICreepResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ICreepResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ICreepResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveCreepResistance() {
		return ((R (*)(ICreepResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

