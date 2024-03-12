#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoverRadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoverRadiusComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CoverRadiusComponent*, uintptr_t))(Il2CppBase() + 0x1341134))(this, targetObject);
	}

};

}
