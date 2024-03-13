#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChildsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChildsEntity"));
	}


	template <typename T = ChildsComponent*> T get_childs() {
		return ((T (*)(IChildsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChilds() {
		return ((T (*)(IChildsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChilds(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(IChildsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename T = void> T ReplaceChilds(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(IChildsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename T = void> T RemoveChilds() {
		return ((T (*)(IChildsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

