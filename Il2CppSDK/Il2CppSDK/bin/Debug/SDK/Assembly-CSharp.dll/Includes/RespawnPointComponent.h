#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RespawnPointComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RespawnPointComponent"));
	}

	template <typename T = float> T& Range() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RespawnPointComponent*, uintptr_t))(Il2CppBase() + 0x119D1E8))(this, target);
	}

};

}
