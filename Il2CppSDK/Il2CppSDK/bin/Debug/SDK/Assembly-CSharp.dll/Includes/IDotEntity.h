#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDotEntity"));
	}


	template <typename R = DotComponent*> R get_dot() {
		return ((R (*)(IDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDot() {
		return ((R (*)(IDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDot() {
		return ((R (*)(IDotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

