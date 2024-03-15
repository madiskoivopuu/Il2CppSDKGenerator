#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseChangeCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseChangeCooldownComponent"));
	}

	template <typename R = bool> R& PerHpDmgPercent() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& ItemTag() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseChangeCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0xFBCDF0))(this, target);
	}

};

