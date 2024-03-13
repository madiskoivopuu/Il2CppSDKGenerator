#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IContainerActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IContainerActionEntity"));
	}


	template <typename T = ContainerActionComponent*> T get_containerAction() {
		return ((T (*)(IContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasContainerAction() {
		return ((T (*)(IContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddContainerAction(Il2CppString* newName) {
		return ((T (*)(IContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceContainerAction(Il2CppString* newName) {
		return ((T (*)(IContainerActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveContainerAction() {
		return ((T (*)(IContainerActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

