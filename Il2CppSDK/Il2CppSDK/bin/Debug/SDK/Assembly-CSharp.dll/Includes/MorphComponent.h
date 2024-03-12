#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MorphComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MorphComponent"));
	}

	template <typename T = Il2CppString*> T& Base() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Source() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MorphComponent*, uintptr_t))(Il2CppBase() + 0x1EAA7E0))(this, target);
	}

};

}
