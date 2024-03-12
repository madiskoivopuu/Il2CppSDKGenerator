#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PlayerClassComponent*, uintptr_t))(Il2CppBase() + 0x1704740))(this, target);
	}

};

}
