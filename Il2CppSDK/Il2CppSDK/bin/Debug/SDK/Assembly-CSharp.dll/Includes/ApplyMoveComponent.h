#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyMoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyMoveComponent"));
	}

	template <typename R = float> R& MaxDistance() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& ToTargetPosition() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyMoveComponent*, Il2CppObject*))(Il2CppBase() + 0x1894858))(this, targetObject);
	}

};

