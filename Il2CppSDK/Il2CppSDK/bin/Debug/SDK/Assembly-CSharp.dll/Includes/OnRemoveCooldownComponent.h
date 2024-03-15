#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnRemoveCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnRemoveCooldownComponent"));
	}

	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Cooldown() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& GroupCooldown() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OnRemoveCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x11DDD9C))(this, target);
	}

};

