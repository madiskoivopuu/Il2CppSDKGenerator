#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CharacterCreationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterCreationWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCharacterCreation(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13EF294))(0, manager);
	}
	template <typename T = uintptr_t> static T GetCharacterCreation(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13EF350))(0, manager);
	}
	template <typename T = void> static T CloseCharacterCreation(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13EF3E8))(0, manager);
	}

};

}
