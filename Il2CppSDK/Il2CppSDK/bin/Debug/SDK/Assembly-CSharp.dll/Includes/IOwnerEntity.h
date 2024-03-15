#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOwnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOwnerEntity"));
	}


	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(IOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(IOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(IOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(IOwnerEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(IOwnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

