#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FreeCraftComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreeCraftComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(FreeCraftComponent*, uintptr_t))(Il2CppBase() + 0x15FCA18))(this, target);
	}

};

}
