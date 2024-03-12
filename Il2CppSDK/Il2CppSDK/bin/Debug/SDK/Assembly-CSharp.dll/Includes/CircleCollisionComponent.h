#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CircleCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircleCollisionComponent"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Trigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CircleCollisionComponent*, uintptr_t))(Il2CppBase() + 0x1747AD4))(this, targetObject);
	}

};

}
