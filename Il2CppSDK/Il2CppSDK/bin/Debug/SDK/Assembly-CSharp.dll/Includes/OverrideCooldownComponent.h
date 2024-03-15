#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OverrideCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OverrideCooldownComponent"));
	}

	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OverrideCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x11E6728))(this, target);
	}
	template <typename R = ModifierGroup*> R GetGroup() {
		return ((R (*)(OverrideCooldownComponent*))(Il2CppBase() + 0x11E67CC))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(OverrideCooldownComponent*))(Il2CppBase() + 0x11E67D4))(this);
	}

};

