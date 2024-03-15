#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMetabolismDamageResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMetabolismDamageResistanceEntity"));
	}


	template <typename R = MetabolismDamageResistanceComponent*> R get_metabolismDamageResistance() {
		return ((R (*)(IMetabolismDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMetabolismDamageResistance() {
		return ((R (*)(IMetabolismDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMetabolismDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMetabolismDamageResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMetabolismDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMetabolismDamageResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMetabolismDamageResistance() {
		return ((R (*)(IMetabolismDamageResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

