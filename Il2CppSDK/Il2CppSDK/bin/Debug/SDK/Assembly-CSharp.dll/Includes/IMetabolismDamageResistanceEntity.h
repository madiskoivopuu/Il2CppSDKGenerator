#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMetabolismDamageResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMetabolismDamageResistanceEntity"));
	}


	template <typename T = MetabolismDamageResistanceComponent*> T get_metabolismDamageResistance() {
		return ((T (*)(IMetabolismDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMetabolismDamageResistance() {
		return ((T (*)(IMetabolismDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMetabolismDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMetabolismDamageResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMetabolismDamageResistance() {
		return ((T (*)(IMetabolismDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

