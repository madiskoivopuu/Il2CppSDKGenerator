#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChildrenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChildrenEntity"));
	}


	template <typename R = ChildrenComponent*> R get_children() {
		return ((R (*)(IChildrenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChildren() {
		return ((R (*)(IChildrenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IChildrenEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R ReplaceChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IChildrenEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R RemoveChildren() {
		return ((R (*)(IChildrenEntity*))(Il2CppBase() + 0x0))(this);
	}

};

