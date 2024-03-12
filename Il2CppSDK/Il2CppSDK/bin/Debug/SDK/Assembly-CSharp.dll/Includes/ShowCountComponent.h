#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowCountComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ShowCountComponent*, uintptr_t))(Il2CppBase() + 0x1633208))(this, target);
	}

};

}
