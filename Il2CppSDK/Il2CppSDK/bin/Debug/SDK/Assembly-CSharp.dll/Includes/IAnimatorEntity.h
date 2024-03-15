#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnimatorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnimatorEntity"));
	}


	template <typename R = AnimatorComponent*> R get_animator() {
		return ((R (*)(IAnimatorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAnimator() {
		return ((R (*)(IAnimatorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(IAnimatorEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x0))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(IAnimatorEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x0))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R RemoveAnimator() {
		return ((R (*)(IAnimatorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

