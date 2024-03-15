#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyLockUnlockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyLockUnlockEntity"));
	}


	template <typename R = ApplyLockUnlockComponent*> R get_applyLockUnlock() {
		return ((R (*)(IApplyLockUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyLockUnlock() {
		return ((R (*)(IApplyLockUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyLockUnlock(bool newUnlock) {
		return ((R (*)(IApplyLockUnlockEntity*, bool))(Il2CppBase() + 0x0))(this, newUnlock);
	}
	template <typename R = void> R ReplaceApplyLockUnlock(bool newUnlock) {
		return ((R (*)(IApplyLockUnlockEntity*, bool))(Il2CppBase() + 0x0))(this, newUnlock);
	}
	template <typename R = void> R RemoveApplyLockUnlock() {
		return ((R (*)(IApplyLockUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

