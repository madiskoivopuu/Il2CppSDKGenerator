#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGroupEntity"));
	}


	template <typename T = uintptr_t> T get_group() {
		return ((T (*)(IGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGroup() {
		return ((T (*)(IGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGroup(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(IGroupEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename T = void> T ReplaceGroup(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(IGroupEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newSlots);
	}
	template <typename T = void> T RemoveGroup() {
		return ((T (*)(IGroupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
