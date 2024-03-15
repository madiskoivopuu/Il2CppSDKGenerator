#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockContainerActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockContainerActionEntity"));
	}


	template <typename R = UnlockContainerActionComponent*> R get_unlockContainerAction() {
		return ((R (*)(IUnlockContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUnlockContainerAction() {
		return ((R (*)(IUnlockContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(IUnlockContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(IUnlockContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveUnlockContainerAction() {
		return ((R (*)(IUnlockContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

