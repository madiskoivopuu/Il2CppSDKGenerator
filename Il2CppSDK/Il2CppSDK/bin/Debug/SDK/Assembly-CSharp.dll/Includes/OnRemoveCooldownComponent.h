#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnRemoveCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnRemoveCooldownComponent"));
	}

	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Cooldown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& GroupCooldown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(OnRemoveCooldownComponent*, uintptr_t))(Il2CppBase() + 0x11DDD9C))(this, target);
	}

};

}
