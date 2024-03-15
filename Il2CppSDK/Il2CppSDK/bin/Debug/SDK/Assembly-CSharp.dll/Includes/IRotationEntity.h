#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRotationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRotationEntity"));
	}


	template <typename R = RotationComponent*> R get_rotation() {
		return ((R (*)(IRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRotation() {
		return ((R (*)(IRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRotation(float newAngle) {
		return ((R (*)(IRotationEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotation(float newAngle) {
		return ((R (*)(IRotationEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename R = void> R RemoveRotation() {
		return ((R (*)(IRotationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

