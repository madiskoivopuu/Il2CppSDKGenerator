#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockEntity"));
	}


	template <typename T = UnlockComponent*> T get_unlock() {
		return ((T (*)(IUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUnlock() {
		return ((T (*)(IUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUnlock(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IUnlockEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T ReplaceUnlock(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IUnlockEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T RemoveUnlock() {
		return ((T (*)(IUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

