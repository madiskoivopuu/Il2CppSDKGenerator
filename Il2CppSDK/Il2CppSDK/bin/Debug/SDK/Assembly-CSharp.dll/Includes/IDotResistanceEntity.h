#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDotResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDotResistanceEntity"));
	}


	template <typename T = DotResistanceComponent*> T get_dotResistance() {
		return ((T (*)(IDotResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDotResistance() {
		return ((T (*)(IDotResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDotResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDotResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDotResistance() {
		return ((T (*)(IDotResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

