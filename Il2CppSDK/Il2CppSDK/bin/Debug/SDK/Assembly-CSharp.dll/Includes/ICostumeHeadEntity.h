#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICostumeHeadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICostumeHeadEntity"));
	}


	template <typename R = CostumeHeadComponent*> R get_costumeHead() {
		return ((R (*)(ICostumeHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCostumeHead() {
		return ((R (*)(ICostumeHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCostumeHead(Il2CppString* newName) {
		return ((R (*)(ICostumeHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeHead(Il2CppString* newName) {
		return ((R (*)(ICostumeHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveCostumeHead() {
		return ((R (*)(ICostumeHeadEntity*))(Il2CppBase() + 0x0))(this);
	}

};

