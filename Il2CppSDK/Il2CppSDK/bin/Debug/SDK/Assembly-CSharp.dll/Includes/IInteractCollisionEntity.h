#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractCollisionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractCollisionEntity"));
	}


	template <typename T = uintptr_t> T get_interactCollision() {
		return ((T (*)(IInteractCollisionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInteractCollision() {
		return ((T (*)(IInteractCollisionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInteractCollision(float newValue, uintptr_t newGroup) {
		return ((T (*)(IInteractCollisionEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceInteractCollision(float newValue, uintptr_t newGroup) {
		return ((T (*)(IInteractCollisionEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveInteractCollision() {
		return ((T (*)(IInteractCollisionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
