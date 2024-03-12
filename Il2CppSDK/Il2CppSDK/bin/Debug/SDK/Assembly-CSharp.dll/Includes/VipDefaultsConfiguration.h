#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipDefaultsConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipDefaultsConfiguration"));
	}

	template <typename T = int32_t> T& DailyChestUncommonBonus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DailyChestRareBonus() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DailyChestEpicBonus() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_DailyChestUncommonBonus() {
		return ((T (*)(VipDefaultsConfiguration*))(Il2CppBase() + 0x15CE4AC))(this);
	}
	template <typename T = void> T set_DailyChestUncommonBonus(int32_t value) {
		return ((T (*)(VipDefaultsConfiguration*, int32_t))(Il2CppBase() + 0x15CE4B4))(this, value);
	}
	template <typename T = int32_t> T get_DailyChestRareBonus() {
		return ((T (*)(VipDefaultsConfiguration*))(Il2CppBase() + 0x15CE4BC))(this);
	}
	template <typename T = void> T set_DailyChestRareBonus(int32_t value) {
		return ((T (*)(VipDefaultsConfiguration*, int32_t))(Il2CppBase() + 0x15CE4C4))(this, value);
	}
	template <typename T = int32_t> T get_DailyChestEpicBonus() {
		return ((T (*)(VipDefaultsConfiguration*))(Il2CppBase() + 0x15CE4CC))(this);
	}
	template <typename T = void> T set_DailyChestEpicBonus(int32_t value) {
		return ((T (*)(VipDefaultsConfiguration*, int32_t))(Il2CppBase() + 0x15CE4D4))(this, value);
	}

};

}
