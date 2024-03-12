#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateIntervalConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateIntervalConfig"));
	}

	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& EventInterval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& UpdateInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Limit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T get_Enabled() {
		return ((T (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EB6C))(this);
	}
	template <typename T = void> T set_Enabled(bool value) {
		return ((T (*)(UpdateIntervalConfig*, bool))(Il2CppBase() + 0x153EB74))(this, value);
	}
	template <typename T = int32_t> T get_EventInterval() {
		return ((T (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EB80))(this);
	}
	template <typename T = void> T set_EventInterval(int32_t value) {
		return ((T (*)(UpdateIntervalConfig*, int32_t))(Il2CppBase() + 0x153EB88))(this, value);
	}
	template <typename T = int32_t> T get_UpdateInterval() {
		return ((T (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EB90))(this);
	}
	template <typename T = void> T set_UpdateInterval(int32_t value) {
		return ((T (*)(UpdateIntervalConfig*, int32_t))(Il2CppBase() + 0x153EB98))(this, value);
	}
	template <typename T = int32_t> T get_Limit() {
		return ((T (*)(UpdateIntervalConfig*))(Il2CppBase() + 0x153EBA0))(this);
	}
	template <typename T = void> T set_Limit(int32_t value) {
		return ((T (*)(UpdateIntervalConfig*, int32_t))(Il2CppBase() + 0x153EBA8))(this, value);
	}

};

}
