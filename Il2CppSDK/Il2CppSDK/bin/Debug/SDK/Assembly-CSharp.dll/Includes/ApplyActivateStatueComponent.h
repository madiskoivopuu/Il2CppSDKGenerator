#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActivateStatueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActivateStatueComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyActivateStatueComponent*, uintptr_t))(Il2CppBase() + 0x1893280))(this, target);
	}

};

}
