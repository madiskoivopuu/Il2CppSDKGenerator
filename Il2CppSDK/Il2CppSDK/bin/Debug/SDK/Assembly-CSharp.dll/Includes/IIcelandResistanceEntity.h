#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIcelandResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIcelandResistanceEntity"));
	}


	template <typename R = IcelandResistanceComponent*> R get_icelandResistance() {
		return ((R (*)(IIcelandResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasIcelandResistance() {
		return ((R (*)(IIcelandResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddIcelandResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IIcelandResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIcelandResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IIcelandResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIcelandResistance() {
		return ((R (*)(IIcelandResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

