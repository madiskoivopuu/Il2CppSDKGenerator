#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowDebugWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xEB6284))(0, manager);
	}

};

}
