#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUniqueLookupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUniqueLookupEntity"));
	}


	template <typename T = uintptr_t> T get_uniqueLookup() {
		return ((T (*)(IUniqueLookupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUniqueLookup() {
		return ((T (*)(IUniqueLookupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUniqueLookup(Il2CppString* newName) {
		return ((T (*)(IUniqueLookupEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceUniqueLookup(Il2CppString* newName) {
		return ((T (*)(IUniqueLookupEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveUniqueLookup() {
		return ((T (*)(IUniqueLookupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
