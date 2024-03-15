#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipDefaultsConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipDefaultsConfiguration"));
	}

	template <typename R = int32_t> R& DailyChestUncommonBonus() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& DailyChestRareBonus() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& DailyChestEpicBonus() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = int32_t> R get_DailyChestUncommonBonus() {
		return ((R (*)(VipDefaultsConfiguration*))(Il2CppBase() + 0x15CE4AC))(this);
	}
	template <typename R = void> R set_DailyChestUncommonBonus(int32_t value) {
		return ((R (*)(VipDefaultsConfiguration*, int32_t))(Il2CppBase() + 0x15CE4B4))(this, value);
	}
	template <typename R = int32_t> R get_DailyChestRareBonus() {
		return ((R (*)(VipDefaultsConfiguration*))(Il2CppBase() + 0x15CE4BC))(this);
	}
	template <typename R = void> R set_DailyChestRareBonus(int32_t value) {
		return ((R (*)(VipDefaultsConfiguration*, int32_t))(Il2CppBase() + 0x15CE4C4))(this, value);
	}
	template <typename R = int32_t> R get_DailyChestEpicBonus() {
		return ((R (*)(VipDefaultsConfiguration*))(Il2CppBase() + 0x15CE4CC))(this);
	}
	template <typename R = void> R set_DailyChestEpicBonus(int32_t value) {
		return ((R (*)(VipDefaultsConfiguration*, int32_t))(Il2CppBase() + 0x15CE4D4))(this, value);
	}

};

