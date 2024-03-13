#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockPortalActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockPortalActionEntity"));
	}


	template <typename T = UnlockPortalActionComponent*> T get_unlockPortalAction() {
		return ((T (*)(IUnlockPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUnlockPortalAction() {
		return ((T (*)(IUnlockPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(IUnlockPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(IUnlockPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveUnlockPortalAction() {
		return ((T (*)(IUnlockPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

