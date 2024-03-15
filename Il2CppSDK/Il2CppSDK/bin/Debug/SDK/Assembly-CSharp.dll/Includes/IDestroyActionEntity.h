#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDestroyActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDestroyActionEntity"));
	}


	template <typename R = DestroyActionComponent*> R get_destroyAction() {
		return ((R (*)(IDestroyActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDestroyAction() {
		return ((R (*)(IDestroyActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDestroyAction(Il2CppString* newName) {
		return ((R (*)(IDestroyActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceDestroyAction(Il2CppString* newName) {
		return ((R (*)(IDestroyActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveDestroyAction() {
		return ((R (*)(IDestroyActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

