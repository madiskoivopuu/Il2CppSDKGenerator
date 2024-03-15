#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractActionEntity"));
	}


	template <typename R = InteractActionComponent*> R get_interactAction() {
		return ((R (*)(IInteractActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInteractAction() {
		return ((R (*)(IInteractActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInteractAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(IInteractActionEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename R = void> R ReplaceInteractAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(IInteractActionEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename R = void> R RemoveInteractAction() {
		return ((R (*)(IInteractActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

