#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomizationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomizationWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCustomization(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x163E8F8))(0, manager);
	}
	template <typename T = uintptr_t> static T GetCustomization(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x163EA1C))(0, manager);
	}
	template <typename T = void> static T CloseCustomization(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x163EAB4))(0, manager);
	}

};

}
