#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDotResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDotResistanceEntity"));
	}


	template <typename R = DotResistanceComponent*> R get_dotResistance() {
		return ((R (*)(IDotResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDotResistance() {
		return ((R (*)(IDotResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDotResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDotResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDotResistance() {
		return ((R (*)(IDotResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

