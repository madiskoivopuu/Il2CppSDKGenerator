#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INameEntity"));
	}


	template <typename T = NameComponent*> T get_name() {
		return ((T (*)(INameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasName() {
		return ((T (*)(INameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddName(Il2CppString* newValue) {
		return ((T (*)(INameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceName(Il2CppString* newValue) {
		return ((T (*)(INameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveName() {
		return ((T (*)(INameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

