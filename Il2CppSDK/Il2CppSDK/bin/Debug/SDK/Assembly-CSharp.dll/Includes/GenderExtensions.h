#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenderExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderExtensions"));
	}


	template <typename T = Il2CppString*> static T Suffix(Gender* gender) {
		return ((T (*)(void *, Gender*))(Il2CppBase() + 0x176E514))(0, gender);
	}
	template <typename T = Gender*> static T GetGender(IGenderEntity* entity, Gender* defaultGender) {
		return ((T (*)(void *, IGenderEntity*, Gender*))(Il2CppBase() + 0x176E598))(0, entity, defaultGender);
	}
	template <typename T = Gender*> static T GetCurrentGender(GameEntity* entity, Gender* defaultGender) {
		return ((T (*)(void *, GameEntity*, Gender*))(Il2CppBase() + 0x176E6C4))(0, entity, defaultGender);
	}

};

