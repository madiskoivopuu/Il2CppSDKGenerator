#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItem"));
	}


	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SlotEntity() {
		return ((T (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ParentEntity() {
		return ((T (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}

};

}
