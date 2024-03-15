#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MorphingWeaponComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MorphingWeaponComponent"));
	}

	template <typename R = ItemConditionComponent*> R& ItemCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MorphingWeaponComponent*, Il2CppObject*))(Il2CppBase() + 0x1EAA890))(this, target);
	}
	template <typename R = ModifierGroup*> R GetGroup() {
		return ((R (*)(MorphingWeaponComponent*))(Il2CppBase() + 0x1EAA938))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(MorphingWeaponComponent*))(Il2CppBase() + 0x1EAA940))(this);
	}

};

