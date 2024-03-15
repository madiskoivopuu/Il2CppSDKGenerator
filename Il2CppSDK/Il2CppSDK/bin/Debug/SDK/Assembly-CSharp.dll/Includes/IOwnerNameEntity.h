#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOwnerNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOwnerNameEntity"));
	}


	template <typename R = OwnerNameComponent*> R get_ownerName() {
		return ((R (*)(IOwnerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOwnerName() {
		return ((R (*)(IOwnerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOwnerName(Il2CppString* newValue) {
		return ((R (*)(IOwnerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceOwnerName(Il2CppString* newValue) {
		return ((R (*)(IOwnerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveOwnerName() {
		return ((R (*)(IOwnerNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

