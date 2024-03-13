#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDotEntity"));
	}


	template <typename T = DotComponent*> T get_dot() {
		return ((T (*)(IDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDot() {
		return ((T (*)(IDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDot() {
		return ((T (*)(IDotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

