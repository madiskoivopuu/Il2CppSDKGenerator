#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToLocationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToLocationEntity"));
	}


	template <typename T = uintptr_t> T get_toLocation() {
		return ((T (*)(IToLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasToLocation() {
		return ((T (*)(IToLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddToLocation(Il2CppString* newName) {
		return ((T (*)(IToLocationEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceToLocation(Il2CppString* newName) {
		return ((T (*)(IToLocationEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveToLocation() {
		return ((T (*)(IToLocationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
