#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedMovingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedMovingEntity"));
	}


	template <typename T = SpeedMovingComponent*> T get_speedMoving() {
		return ((T (*)(ISpeedMovingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpeedMoving() {
		return ((T (*)(ISpeedMovingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISpeedMovingEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISpeedMovingEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedMoving() {
		return ((T (*)(ISpeedMovingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

