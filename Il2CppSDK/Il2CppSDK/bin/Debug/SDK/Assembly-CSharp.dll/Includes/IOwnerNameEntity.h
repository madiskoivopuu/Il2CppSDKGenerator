#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOwnerNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOwnerNameEntity"));
	}


	template <typename T = OwnerNameComponent*> T get_ownerName() {
		return ((T (*)(IOwnerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOwnerName() {
		return ((T (*)(IOwnerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOwnerName(Il2CppString* newValue) {
		return ((T (*)(IOwnerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceOwnerName(Il2CppString* newValue) {
		return ((T (*)(IOwnerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveOwnerName() {
		return ((T (*)(IOwnerNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

