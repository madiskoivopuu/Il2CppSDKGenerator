#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LicenseWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LicenseWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLicense(uintptr_t manager, uintptr_t acceptAction) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x142C0AC))(0, manager, acceptAction);
	}

};

}
