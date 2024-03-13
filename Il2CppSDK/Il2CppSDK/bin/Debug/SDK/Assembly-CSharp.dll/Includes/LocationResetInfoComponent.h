#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetInfoComponent"));
	}

	template <typename T = int64_t> T& ResetPriceTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& CooldownTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ResetCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = CurrencyType*> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(LocationResetInfoComponent*, Il2CppObject*))(Il2CppBase() + 0x171E1B8))(this, target);
	}

};

