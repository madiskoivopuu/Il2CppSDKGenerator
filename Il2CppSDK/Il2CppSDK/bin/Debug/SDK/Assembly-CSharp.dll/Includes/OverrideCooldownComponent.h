#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OverrideCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OverrideCooldownComponent"));
	}

	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OverrideCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x11E6728))(this, target);
	}
	template <typename T = ModifierGroup*> T GetGroup() {
		return ((T (*)(OverrideCooldownComponent*))(Il2CppBase() + 0x11E67CC))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(OverrideCooldownComponent*))(Il2CppBase() + 0x11E67D4))(this);
	}

};

