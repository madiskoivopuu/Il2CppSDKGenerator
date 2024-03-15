#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGroupEntity"));
	}


	template <typename R = GroupComponent*> R get_group() {
		return ((R (*)(IGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGroup() {
		return ((R (*)(IGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGroup(Il2CppArray<Slot>* newSlots) {
		return ((R (*)(IGroupEntity*, Il2CppArray<Slot>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename R = void> R ReplaceGroup(Il2CppArray<Slot>* newSlots) {
		return ((R (*)(IGroupEntity*, Il2CppArray<Slot>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename R = void> R RemoveGroup() {
		return ((R (*)(IGroupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

