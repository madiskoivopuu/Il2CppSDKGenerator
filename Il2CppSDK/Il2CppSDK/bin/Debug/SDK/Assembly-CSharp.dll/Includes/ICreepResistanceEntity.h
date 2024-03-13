#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreepResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreepResistanceEntity"));
	}


	template <typename T = CreepResistanceComponent*> T get_creepResistance() {
		return ((T (*)(ICreepResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCreepResistance() {
		return ((T (*)(ICreepResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ICreepResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ICreepResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveCreepResistance() {
		return ((T (*)(ICreepResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

