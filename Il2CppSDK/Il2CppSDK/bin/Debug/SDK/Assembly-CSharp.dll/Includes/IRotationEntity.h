#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRotationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRotationEntity"));
	}


	template <typename T = uintptr_t> T get_rotation() {
		return ((T (*)(IRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRotation() {
		return ((T (*)(IRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRotation(float newAngle) {
		return ((T (*)(IRotationEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotation(float newAngle) {
		return ((T (*)(IRotationEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename T = void> T RemoveRotation() {
		return ((T (*)(IRotationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
