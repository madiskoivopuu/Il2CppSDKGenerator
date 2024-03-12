#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageShieldComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageShieldComponent"));
	}

	template <typename T = uintptr_t> T& Depends() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DamageShieldComponent*, uintptr_t))(Il2CppBase() + 0x164B7D8))(this, target);
	}

};

}
