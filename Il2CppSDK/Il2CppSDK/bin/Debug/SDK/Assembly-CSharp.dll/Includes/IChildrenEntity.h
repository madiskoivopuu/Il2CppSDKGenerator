#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChildrenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChildrenEntity"));
	}


	template <typename T = uintptr_t> T get_children() {
		return ((T (*)(IChildrenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChildren() {
		return ((T (*)(IChildrenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IChildrenEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T ReplaceChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IChildrenEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T RemoveChildren() {
		return ((T (*)(IChildrenEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
