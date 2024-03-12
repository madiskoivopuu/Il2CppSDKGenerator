#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGroupChildEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGroupChildEntity"));
	}


	template <typename T = uintptr_t> T get_groupChild() {
		return ((T (*)(IGroupChildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGroupChild() {
		return ((T (*)(IGroupChildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGroupChild(int32_t newId) {
		return ((T (*)(IGroupChildEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceGroupChild(int32_t newId) {
		return ((T (*)(IGroupChildEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveGroupChild() {
		return ((T (*)(IGroupChildEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
