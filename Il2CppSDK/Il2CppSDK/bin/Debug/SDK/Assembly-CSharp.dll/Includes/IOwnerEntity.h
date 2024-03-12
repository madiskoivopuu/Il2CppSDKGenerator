#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOwnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOwnerEntity"));
	}


	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(IOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(IOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(IOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(IOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(IOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
