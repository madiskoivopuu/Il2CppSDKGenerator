#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedIncEntity"));
	}


	template <typename R = SpeedIncComponent*> R get_speedInc() {
		return ((R (*)(ISpeedIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpeedInc() {
		return ((R (*)(ISpeedIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpeedInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISpeedIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISpeedIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedInc() {
		return ((R (*)(ISpeedIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

