#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockEntity"));
	}


	template <typename R = UnlockComponent*> R get_unlock() {
		return ((R (*)(IUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUnlock() {
		return ((R (*)(IUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUnlock(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IUnlockEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R ReplaceUnlock(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IUnlockEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R RemoveUnlock() {
		return ((R (*)(IUnlockEntity*))(Il2CppBase() + 0x0))(this);
	}

};

