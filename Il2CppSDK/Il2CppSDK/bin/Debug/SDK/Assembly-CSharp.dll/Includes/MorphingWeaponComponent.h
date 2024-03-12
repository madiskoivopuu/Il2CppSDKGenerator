#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MorphingWeaponComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MorphingWeaponComponent"));
	}

	template <typename T = uintptr_t> T& ItemCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MorphingWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1EAA890))(this, target);
	}
	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(MorphingWeaponComponent*))(Il2CppBase() + 0x1EAA938))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(MorphingWeaponComponent*))(Il2CppBase() + 0x1EAA940))(this);
	}

};

}
