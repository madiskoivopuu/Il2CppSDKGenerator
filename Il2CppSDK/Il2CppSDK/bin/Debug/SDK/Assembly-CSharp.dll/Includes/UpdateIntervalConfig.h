#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateIntervalConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateIntervalConfig"));
	}

	template <typename R = bool> R& Enabled() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& EventInterval() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& UpdateInterval() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Limit() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = bool> R get_Enabled() {
		return ((R (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EB6C))(this);
	}
	template <typename R = void> R set_Enabled(bool value) {
		return ((R (*)(UpdateIntervalConfig*, bool))(Il2CppBase() + 0x153EB74))(this, value);
	}
	template <typename R = int32_t> R get_EventInterval() {
		return ((R (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EB80))(this);
	}
	template <typename R = void> R set_EventInterval(int32_t value) {
		return ((R (*)(UpdateIntervalConfig*, int32_t))(Il2CppBase() + 0x153EB88))(this, value);
	}
	template <typename R = int32_t> R get_UpdateInterval() {
		return ((R (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EB90))(this);
	}
	template <typename R = void> R set_UpdateInterval(int32_t value) {
		return ((R (*)(UpdateIntervalConfig*, int32_t))(Il2CppBase() + 0x153EB98))(this, value);
	}
	template <typename R = int32_t> R get_Limit() {
		return ((R (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EBA0))(this);
	}
	template <typename R = void> R set_Limit(int32_t value) {
		return ((R (*)(UpdateIntervalConfig*, int32_t))(Il2CppBase() + 0x153EBA8))(this, value);
	}

};

