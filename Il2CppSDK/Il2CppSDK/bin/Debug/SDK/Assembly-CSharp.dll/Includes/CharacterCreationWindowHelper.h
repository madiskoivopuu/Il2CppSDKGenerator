#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CharacterCreationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterCreationWindowHelper"));
	}


	template <typename R = CharacterCreationWindow*> static R ShowCharacterCreation(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13EF294))(0, manager);
	}
	template <typename R = CharacterCreationWindow*> static R GetCharacterCreation(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13EF350))(0, manager);
	}
	template <typename R = void> static R CloseCharacterCreation(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13EF3E8))(0, manager);
	}

};

