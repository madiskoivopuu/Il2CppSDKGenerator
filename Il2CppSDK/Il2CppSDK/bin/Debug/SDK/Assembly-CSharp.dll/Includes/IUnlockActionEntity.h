#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockActionEntity"));
	}


	template <typename T = uintptr_t> T get_unlockAction() {
		return ((T (*)(IUnlockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUnlockAction() {
		return ((T (*)(IUnlockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUnlockAction(Il2CppString* newName) {
		return ((T (*)(IUnlockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockAction(Il2CppString* newName) {
		return ((T (*)(IUnlockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveUnlockAction() {
		return ((T (*)(IUnlockActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
