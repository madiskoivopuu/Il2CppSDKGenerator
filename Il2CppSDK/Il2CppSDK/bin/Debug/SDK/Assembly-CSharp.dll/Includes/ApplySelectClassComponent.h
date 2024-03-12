#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySelectClassComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySelectClassComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplySelectClassComponent*, uintptr_t))(Il2CppBase() + 0x1895474))(this, target);
	}

};

}
