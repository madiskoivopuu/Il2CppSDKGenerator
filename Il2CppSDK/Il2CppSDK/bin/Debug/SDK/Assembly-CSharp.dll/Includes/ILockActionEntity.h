#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILockActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILockActionEntity"));
	}


	template <typename T = uintptr_t> T get_lockAction() {
		return ((T (*)(ILockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLockAction() {
		return ((T (*)(ILockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLockAction(Il2CppString* newName) {
		return ((T (*)(ILockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceLockAction(Il2CppString* newName) {
		return ((T (*)(ILockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveLockAction() {
		return ((T (*)(ILockActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
