#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismSettingComponent"));
	}

	template <typename T = float> T& HungerSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ThirstSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& CriticalValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ResurrectValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(MetabolismSettingComponent*, Il2CppObject*))(Il2CppBase() + 0x12D1CB8))(this, target);
	}

};

