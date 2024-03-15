#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICostumeLegsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICostumeLegsEntity"));
	}


	template <typename R = CostumeLegsComponent*> R get_costumeLegs() {
		return ((R (*)(ICostumeLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCostumeLegs() {
		return ((R (*)(ICostumeLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCostumeLegs(Il2CppString* newName) {
		return ((R (*)(ICostumeLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeLegs(Il2CppString* newName) {
		return ((R (*)(ICostumeLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveCostumeLegs() {
		return ((R (*)(ICostumeLegsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

