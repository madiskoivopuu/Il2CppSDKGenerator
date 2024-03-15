#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INameEntity"));
	}


	template <typename R = NameComponent*> R get_name() {
		return ((R (*)(INameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasName() {
		return ((R (*)(INameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddName(Il2CppString* newValue) {
		return ((R (*)(INameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceName(Il2CppString* newValue) {
		return ((R (*)(INameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveName() {
		return ((R (*)(INameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

