#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoxCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoxCollisionComponent"));
	}

	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Hole() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Trigger() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BoxCollisionComponent*, uintptr_t))(Il2CppBase() + 0x15A0A5C))(this, targetObject);
	}

};

}
