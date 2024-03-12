#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyMoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyMoveComponent"));
	}

	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ToTargetPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyMoveComponent*, uintptr_t))(Il2CppBase() + 0x1894858))(this, targetObject);
	}

};

}
