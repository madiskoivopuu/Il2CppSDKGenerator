#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IResurrectActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IResurrectActionEntity"));
	}


	template <typename T = ResurrectActionComponent*> T get_resurrectAction() {
		return ((T (*)(IResurrectActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasResurrectAction() {
		return ((T (*)(IResurrectActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IResurrectActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename T = void> T ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IResurrectActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename T = void> T RemoveResurrectAction() {
		return ((T (*)(IResurrectActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

