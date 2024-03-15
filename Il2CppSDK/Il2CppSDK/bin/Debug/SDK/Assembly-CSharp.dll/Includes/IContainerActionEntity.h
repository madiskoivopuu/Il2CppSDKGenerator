#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IContainerActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IContainerActionEntity"));
	}


	template <typename R = ContainerActionComponent*> R get_containerAction() {
		return ((R (*)(IContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasContainerAction() {
		return ((R (*)(IContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddContainerAction(Il2CppString* newName) {
		return ((R (*)(IContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceContainerAction(Il2CppString* newName) {
		return ((R (*)(IContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveContainerAction() {
		return ((R (*)(IContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

