#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockActionEntity"));
	}


	template <typename R = UnlockActionComponent*> R get_unlockAction() {
		return ((R (*)(IUnlockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUnlockAction() {
		return ((R (*)(IUnlockActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUnlockAction(Il2CppString* newName) {
		return ((R (*)(IUnlockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockAction(Il2CppString* newName) {
		return ((R (*)(IUnlockActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveUnlockAction() {
		return ((R (*)(IUnlockActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

