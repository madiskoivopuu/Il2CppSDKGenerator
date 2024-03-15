#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CircleCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircleCollisionComponent"));
	}

	template <typename R = float> R& Radius() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Trigger() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CircleCollisionComponent*, Il2CppObject*))(Il2CppBase() + 0x1747AD4))(this, targetObject);
	}

};

