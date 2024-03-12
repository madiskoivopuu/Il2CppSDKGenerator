#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICostumeHeadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICostumeHeadEntity"));
	}


	template <typename T = uintptr_t> T get_costumeHead() {
		return ((T (*)(ICostumeHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCostumeHead() {
		return ((T (*)(ICostumeHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCostumeHead(Il2CppString* newName) {
		return ((T (*)(ICostumeHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeHead(Il2CppString* newName) {
		return ((T (*)(ICostumeHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveCostumeHead() {
		return ((T (*)(ICostumeHeadEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
