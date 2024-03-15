#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILockControllerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILockControllerEntity"));
	}


	template <typename R = LockControllerComponent*> R get_lockController() {
		return ((R (*)(ILockControllerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLockController() {
		return ((R (*)(ILockControllerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLockController(Il2CppString* newActivator) {
		return ((R (*)(ILockControllerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newActivator);
	}
	template <typename R = void> R ReplaceLockController(Il2CppString* newActivator) {
		return ((R (*)(ILockControllerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newActivator);
	}
	template <typename R = void> R RemoveLockController() {
		return ((R (*)(ILockControllerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

