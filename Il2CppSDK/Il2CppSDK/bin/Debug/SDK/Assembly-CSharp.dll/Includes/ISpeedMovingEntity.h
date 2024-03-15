#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedMovingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedMovingEntity"));
	}


	template <typename R = SpeedMovingComponent*> R get_speedMoving() {
		return ((R (*)(ISpeedMovingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpeedMoving() {
		return ((R (*)(ISpeedMovingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISpeedMovingEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISpeedMovingEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedMoving() {
		return ((R (*)(ISpeedMovingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

