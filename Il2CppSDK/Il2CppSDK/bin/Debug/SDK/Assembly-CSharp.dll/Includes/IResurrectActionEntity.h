#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IResurrectActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IResurrectActionEntity"));
	}


	template <typename R = ResurrectActionComponent*> R get_resurrectAction() {
		return ((R (*)(IResurrectActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasResurrectAction() {
		return ((R (*)(IResurrectActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddResurrectAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(IResurrectActionEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename R = void> R ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(IResurrectActionEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename R = void> R RemoveResurrectAction() {
		return ((R (*)(IResurrectActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

