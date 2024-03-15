#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetPositionEntity"));
	}


	template <typename R = TargetPositionComponent*> R get_targetPosition() {
		return ((R (*)(ITargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTargetPosition() {
		return ((R (*)(ITargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTargetPosition(float newX, float newY) {
		return ((R (*)(ITargetPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R ReplaceTargetPosition(float newX, float newY) {
		return ((R (*)(ITargetPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R RemoveTargetPosition() {
		return ((R (*)(ITargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

