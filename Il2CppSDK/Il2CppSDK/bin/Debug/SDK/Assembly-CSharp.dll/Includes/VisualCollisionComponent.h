#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VisualCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VisualCollisionComponent"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(VisualCollisionComponent*, Il2CppObject*))(Il2CppBase() + 0x15D0F40))(this, targetObject);
	}

};

