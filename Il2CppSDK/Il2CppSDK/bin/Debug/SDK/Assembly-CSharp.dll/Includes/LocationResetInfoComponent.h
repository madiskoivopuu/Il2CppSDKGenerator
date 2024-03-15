#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetInfoComponent"));
	}

	template <typename R = int64_t> R& ResetPriceTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& CooldownTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& ResetCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = CurrencyType*> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LocationResetInfoComponent*, Il2CppObject*))(Il2CppBase() + 0x171E1B8))(this, target);
	}

};

