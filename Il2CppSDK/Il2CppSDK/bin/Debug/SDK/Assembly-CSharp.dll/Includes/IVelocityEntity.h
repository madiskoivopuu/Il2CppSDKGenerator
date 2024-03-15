#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVelocityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVelocityEntity"));
	}


	template <typename R = VelocityComponent*> R get_velocity() {
		return ((R (*)(IVelocityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasVelocity() {
		return ((R (*)(IVelocityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddVelocity(float newX, float newY) {
		return ((R (*)(IVelocityEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R ReplaceVelocity(float newX, float newY) {
		return ((R (*)(IVelocityEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R RemoveVelocity() {
		return ((R (*)(IVelocityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

