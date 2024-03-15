#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToLocationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToLocationEntity"));
	}


	template <typename R = ToLocationComponent*> R get_toLocation() {
		return ((R (*)(IToLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasToLocation() {
		return ((R (*)(IToLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddToLocation(Il2CppString* newName) {
		return ((R (*)(IToLocationEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceToLocation(Il2CppString* newName) {
		return ((R (*)(IToLocationEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveToLocation() {
		return ((R (*)(IToLocationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

