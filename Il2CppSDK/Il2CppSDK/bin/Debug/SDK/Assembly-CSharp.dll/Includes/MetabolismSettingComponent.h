#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismSettingComponent"));
	}

	template <typename R = float> R& HungerSpeed() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& ThirstSpeed() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& CriticalValue() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& ResurrectValue() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& Damage() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MetabolismSettingComponent*, Il2CppObject*))(Il2CppBase() + 0x12D1CB8))(this, target);
	}

};

