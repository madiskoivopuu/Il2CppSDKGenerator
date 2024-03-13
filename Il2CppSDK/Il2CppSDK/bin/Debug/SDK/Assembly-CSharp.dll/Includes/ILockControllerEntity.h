#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILockControllerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILockControllerEntity"));
	}


	template <typename T = LockControllerComponent*> T get_lockController() {
		return ((T (*)(ILockControllerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLockController() {
		return ((T (*)(ILockControllerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLockController(Il2CppString* newActivator) {
		return ((T (*)(ILockControllerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newActivator);
	}
	template <typename T = void> T ReplaceLockController(Il2CppString* newActivator) {
		return ((T (*)(ILockControllerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newActivator);
	}
	template <typename T = void> T RemoveLockController() {
		return ((T (*)(ILockControllerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

