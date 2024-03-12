#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractActionEntity"));
	}


	template <typename T = uintptr_t> T get_interactAction() {
		return ((T (*)(IInteractActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInteractAction() {
		return ((T (*)(IInteractActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IInteractActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename T = void> T ReplaceInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IInteractActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename T = void> T RemoveInteractAction() {
		return ((T (*)(IInteractActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
