#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedIncEntity"));
	}


	template <typename T = SpeedIncComponent*> T get_speedInc() {
		return ((T (*)(ISpeedIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpeedInc() {
		return ((T (*)(ISpeedIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISpeedIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISpeedIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedInc() {
		return ((T (*)(ISpeedIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

