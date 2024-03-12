#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyInPvPComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyInPvPComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyInPvPComponent*, uintptr_t))(Il2CppBase() + 0x1894584))(this, target);
	}

};

}
