#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVelocityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVelocityEntity"));
	}


	template <typename T = VelocityComponent*> T get_velocity() {
		return ((T (*)(IVelocityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasVelocity() {
		return ((T (*)(IVelocityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddVelocity(float newX, float newY) {
		return ((T (*)(IVelocityEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T ReplaceVelocity(float newX, float newY) {
		return ((T (*)(IVelocityEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T RemoveVelocity() {
		return ((T (*)(IVelocityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

