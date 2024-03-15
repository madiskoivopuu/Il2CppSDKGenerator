#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILockActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILockActionEntity"));
	}


	template <typename R = LockActionComponent*> R get_lockAction() {
		return ((R (*)(ILockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLockAction() {
		return ((R (*)(ILockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLockAction(Il2CppString* newName) {
		return ((R (*)(ILockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceLockAction(Il2CppString* newName) {
		return ((R (*)(ILockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveLockAction() {
		return ((R (*)(ILockActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

