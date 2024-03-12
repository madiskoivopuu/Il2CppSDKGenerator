#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyLockUnlockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyLockUnlockEntity"));
	}


	template <typename T = uintptr_t> T get_applyLockUnlock() {
		return ((T (*)(IApplyLockUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyLockUnlock() {
		return ((T (*)(IApplyLockUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyLockUnlock(bool newUnlock) {
		return ((T (*)(IApplyLockUnlockEntity*, bool))(Il2CppBase() + 0x0))(this, newUnlock);
	}
	template <typename T = void> T ReplaceApplyLockUnlock(bool newUnlock) {
		return ((T (*)(IApplyLockUnlockEntity*, bool))(Il2CppBase() + 0x0))(this, newUnlock);
	}
	template <typename T = void> T RemoveApplyLockUnlock() {
		return ((T (*)(IApplyLockUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
