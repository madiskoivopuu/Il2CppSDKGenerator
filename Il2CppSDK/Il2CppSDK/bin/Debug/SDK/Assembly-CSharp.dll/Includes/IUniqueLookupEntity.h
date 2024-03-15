#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUniqueLookupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUniqueLookupEntity"));
	}


	template <typename R = UniqueLookupComponent*> R get_uniqueLookup() {
		return ((R (*)(IUniqueLookupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUniqueLookup() {
		return ((R (*)(IUniqueLookupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUniqueLookup(Il2CppString* newName) {
		return ((R (*)(IUniqueLookupEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceUniqueLookup(Il2CppString* newName) {
		return ((R (*)(IUniqueLookupEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveUniqueLookup() {
		return ((R (*)(IUniqueLookupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

