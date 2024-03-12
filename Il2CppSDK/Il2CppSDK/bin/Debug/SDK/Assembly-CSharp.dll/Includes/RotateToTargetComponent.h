#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateToTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateToTargetComponent"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RotateToTargetComponent*, uintptr_t))(Il2CppBase() + 0x11A4DD8))(this, target);
	}

};

}
