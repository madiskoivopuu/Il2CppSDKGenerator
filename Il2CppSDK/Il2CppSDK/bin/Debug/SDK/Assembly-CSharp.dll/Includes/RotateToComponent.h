#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateToComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateToComponent"));
	}

	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(RotateToComponent*, uintptr_t))(Il2CppBase() + 0x11A4D3C))(this, targetObject);
	}

};

}
