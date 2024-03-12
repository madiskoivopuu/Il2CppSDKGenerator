#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWindowsLayerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowsLayerHelper"));
	}


	template <typename T = uintptr_t> static T CreateLayer(uintptr_t type, uintptr_t manager, uintptr_t pivot) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x153351C))(0, type, manager, pivot);
	}

};

}
