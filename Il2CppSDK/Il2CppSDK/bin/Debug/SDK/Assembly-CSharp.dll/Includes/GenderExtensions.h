#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenderExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderExtensions"));
	}


	template <typename T = Il2CppString*> static T Suffix(uintptr_t gender) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x176E514))(0, gender);
	}
	template <typename T = uintptr_t> static T GetGender(uintptr_t entity, uintptr_t defaultGender) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x176E598))(0, entity, defaultGender);
	}
	template <typename T = uintptr_t> static T GetCurrentGender(uintptr_t entity, uintptr_t defaultGender) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x176E6C4))(0, entity, defaultGender);
	}

};

}
