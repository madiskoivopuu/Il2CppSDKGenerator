#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractCollisionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractCollisionEntity"));
	}


	template <typename R = InteractCollisionComponent*> R get_interactCollision() {
		return ((R (*)(IInteractCollisionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInteractCollision() {
		return ((R (*)(IInteractCollisionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInteractCollision(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IInteractCollisionEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceInteractCollision(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IInteractCollisionEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveInteractCollision() {
		return ((R (*)(IInteractCollisionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

