#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOrientationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOrientationEntity"));
	}


	template <typename R = OrientationComponent*> R get_orientation() {
		return ((R (*)(IOrientationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOrientation() {
		return ((R (*)(IOrientationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOrientation(uint8_t newValue) {
		return ((R (*)(IOrientationEntity*, uint8_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceOrientation(uint8_t newValue) {
		return ((R (*)(IOrientationEntity*, uint8_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveOrientation() {
		return ((R (*)(IOrientationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

