#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKMoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKMoveComponent"));
	}

	template <typename T = int64_t> T& Tick() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AFKMoveComponent*, uintptr_t))(Il2CppBase() + 0x1D958E8))(this, targetObject);
	}

};

}
