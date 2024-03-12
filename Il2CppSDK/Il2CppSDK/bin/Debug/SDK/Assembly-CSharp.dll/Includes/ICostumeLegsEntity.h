#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICostumeLegsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICostumeLegsEntity"));
	}


	template <typename T = uintptr_t> T get_costumeLegs() {
		return ((T (*)(ICostumeLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCostumeLegs() {
		return ((T (*)(ICostumeLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCostumeLegs(Il2CppString* newName) {
		return ((T (*)(ICostumeLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeLegs(Il2CppString* newName) {
		return ((T (*)(ICostumeLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveCostumeLegs() {
		return ((T (*)(ICostumeLegsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
