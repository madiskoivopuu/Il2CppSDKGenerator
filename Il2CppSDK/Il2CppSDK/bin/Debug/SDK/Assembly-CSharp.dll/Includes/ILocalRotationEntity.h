#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILocalRotationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocalRotationEntity"));
	}


	template <typename T = uintptr_t> T get_localRotation() {
		return ((T (*)(ILocalRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLocalRotation() {
		return ((T (*)(ILocalRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLocalRotation(float newValue) {
		return ((T (*)(ILocalRotationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceLocalRotation(float newValue) {
		return ((T (*)(ILocalRotationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveLocalRotation() {
		return ((T (*)(ILocalRotationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
