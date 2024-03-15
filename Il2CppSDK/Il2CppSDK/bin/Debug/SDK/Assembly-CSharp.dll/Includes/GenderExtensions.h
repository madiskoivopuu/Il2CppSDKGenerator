#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenderExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderExtensions"));
	}


	template <typename R = Il2CppString*> static R Suffix(Gender gender) {
		return ((R (*)(void *, Gender))(Il2CppBase() + 0x176E514))(0, gender);
	}
	template <typename R = Gender> static R GetGender(IGenderEntity* entity, Gender defaultGender) {
		return ((R (*)(void *, IGenderEntity*, Gender))(Il2CppBase() + 0x176E598))(0, entity, defaultGender);
	}
	template <typename R = Gender> static R GetCurrentGender(GameEntity* entity, Gender defaultGender) {
		return ((R (*)(void *, GameEntity*, Gender))(Il2CppBase() + 0x176E6C4))(0, entity, defaultGender);
	}

};

