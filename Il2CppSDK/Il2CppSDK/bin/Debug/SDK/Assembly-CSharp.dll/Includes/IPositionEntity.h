#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPositionEntity"));
	}


	template <typename R = PositionComponent*> R get_position() {
		return ((R (*)(IPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPosition() {
		return ((R (*)(IPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPosition(float newX, float newY) {
		return ((R (*)(IPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R ReplacePosition(float newX, float newY) {
		return ((R (*)(IPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R RemovePosition() {
		return ((R (*)(IPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

