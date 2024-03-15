#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChildsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChildsEntity"));
	}


	template <typename R = ChildsComponent*> R get_childs() {
		return ((R (*)(IChildsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChilds() {
		return ((R (*)(IChildsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChilds(Il2CppArray<Il2CppString*>* newSlots) {
		return ((R (*)(IChildsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename R = void> R ReplaceChilds(Il2CppArray<Il2CppString*>* newSlots) {
		return ((R (*)(IChildsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename R = void> R RemoveChilds() {
		return ((R (*)(IChildsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

