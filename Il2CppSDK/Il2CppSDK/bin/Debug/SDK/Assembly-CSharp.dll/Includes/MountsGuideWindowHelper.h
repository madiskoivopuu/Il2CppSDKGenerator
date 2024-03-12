#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsGuideWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsGuideWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMountsGuideWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x154CC14))(0, manager);
	}

};

}
