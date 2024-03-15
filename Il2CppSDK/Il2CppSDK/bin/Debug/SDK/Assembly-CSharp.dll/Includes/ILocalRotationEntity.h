#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILocalRotationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocalRotationEntity"));
	}


	template <typename R = LocalRotationComponent*> R get_localRotation() {
		return ((R (*)(ILocalRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLocalRotation() {
		return ((R (*)(ILocalRotationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLocalRotation(float newValue) {
		return ((R (*)(ILocalRotationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceLocalRotation(float newValue) {
		return ((R (*)(ILocalRotationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveLocalRotation() {
		return ((R (*)(ILocalRotationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

