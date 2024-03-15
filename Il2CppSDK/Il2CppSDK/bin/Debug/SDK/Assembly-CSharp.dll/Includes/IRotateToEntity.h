#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRotateToEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRotateToEntity"));
	}


	template <typename R = RotateToComponent*> R get_rotateTo() {
		return ((R (*)(IRotateToEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRotateTo() {
		return ((R (*)(IRotateToEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRotateTo(float newAngle) {
		return ((R (*)(IRotateToEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotateTo(float newAngle) {
		return ((R (*)(IRotateToEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename R = void> R RemoveRotateTo() {
		return ((R (*)(IRotateToEntity*))(Il2CppBase() + 0x0))(this);
	}

};

