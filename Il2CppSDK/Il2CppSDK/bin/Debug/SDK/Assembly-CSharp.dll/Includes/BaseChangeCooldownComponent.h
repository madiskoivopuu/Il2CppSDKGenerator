#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseChangeCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseChangeCooldownComponent"));
	}

	template <typename T = bool> T& PerHpDmgPercent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ItemTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BaseChangeCooldownComponent*, uintptr_t))(Il2CppBase() + 0xFBCDF0))(this, target);
	}

};

}
