#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPositionEntity"));
	}


	template <typename T = uintptr_t> T get_position() {
		return ((T (*)(IPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPosition() {
		return ((T (*)(IPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPosition(float newX, float newY) {
		return ((T (*)(IPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T ReplacePosition(float newX, float newY) {
		return ((T (*)(IPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T RemovePosition() {
		return ((T (*)(IPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
