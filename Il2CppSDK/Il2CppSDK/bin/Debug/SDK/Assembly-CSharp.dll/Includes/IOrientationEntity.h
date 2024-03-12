#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOrientationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOrientationEntity"));
	}


	template <typename T = uintptr_t> T get_orientation() {
		return ((T (*)(IOrientationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOrientation() {
		return ((T (*)(IOrientationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOrientation(unsigned char newValue) {
		return ((T (*)(IOrientationEntity*, unsigned char))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceOrientation(unsigned char newValue) {
		return ((T (*)(IOrientationEntity*, unsigned char))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveOrientation() {
		return ((T (*)(IOrientationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
