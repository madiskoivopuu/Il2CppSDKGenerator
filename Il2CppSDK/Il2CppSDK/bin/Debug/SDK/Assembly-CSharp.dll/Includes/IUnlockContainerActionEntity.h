#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockContainerActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockContainerActionEntity"));
	}


	template <typename T = UnlockContainerActionComponent*> T get_unlockContainerAction() {
		return ((T (*)(IUnlockContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUnlockContainerAction() {
		return ((T (*)(IUnlockContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(IUnlockContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(IUnlockContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveUnlockContainerAction() {
		return ((T (*)(IUnlockContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

