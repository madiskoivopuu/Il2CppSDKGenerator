#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapLabelWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapLabelWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMapLabel(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12BBC98))(0, manager);
	}
	template <typename T = void> static T CloseMapLabel(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12BBD54))(0, manager);
	}

};

}
