#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRotateToEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRotateToEntity"));
	}


	template <typename T = RotateToComponent*> T get_rotateTo() {
		return ((T (*)(IRotateToEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRotateTo() {
		return ((T (*)(IRotateToEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRotateTo(float newAngle) {
		return ((T (*)(IRotateToEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotateTo(float newAngle) {
		return ((T (*)(IRotateToEntity*, float))(Il2CppBase() + 0x0))(this, newAngle);
	}
	template <typename T = void> T RemoveRotateTo() {
		return ((T (*)(IRotateToEntity*))(Il2CppBase() + 0x0))(this);
	}

};

