#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CharacterCreationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterCreationWindowHelper"));
	}


	template <typename T = CharacterCreationWindow*> static T ShowCharacterCreation(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13EF294))(0, manager);
	}
	template <typename T = CharacterCreationWindow*> static T GetCharacterCreation(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13EF350))(0, manager);
	}
	template <typename T = void> static T CloseCharacterCreation(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13EF3E8))(0, manager);
	}

};

