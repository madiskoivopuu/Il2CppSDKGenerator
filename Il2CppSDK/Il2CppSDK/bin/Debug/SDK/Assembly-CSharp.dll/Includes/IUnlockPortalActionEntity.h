#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockPortalActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockPortalActionEntity"));
	}


	template <typename R = UnlockPortalActionComponent*> R get_unlockPortalAction() {
		return ((R (*)(IUnlockPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUnlockPortalAction() {
		return ((R (*)(IUnlockPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(IUnlockPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(IUnlockPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveUnlockPortalAction() {
		return ((R (*)(IUnlockPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

