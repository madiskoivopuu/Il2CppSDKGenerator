#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetPositionEntity"));
	}


	template <typename T = uintptr_t> T get_targetPosition() {
		return ((T (*)(ITargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTargetPosition() {
		return ((T (*)(ITargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTargetPosition(float newX, float newY) {
		return ((T (*)(ITargetPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T ReplaceTargetPosition(float newX, float newY) {
		return ((T (*)(ITargetPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T RemoveTargetPosition() {
		return ((T (*)(ITargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
