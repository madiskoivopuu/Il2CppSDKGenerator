#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RuneComponent*, uintptr_t))(Il2CppBase() + 0x11A9E00))(this, target);
	}

};

}
