#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Time
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Time"));
	}

	template <typename T = uintptr_t> T& FormatType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& Days() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = void*> T& Hours() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Minutes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Seconds() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> static T get_ZeroZero() {
		return ((T (*)(void *))(Il2CppBase() + 0x115CCFC))(0);
	}
	template <typename T = uintptr_t> static T get_Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x115CDA0))(0);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(Time*))(Il2CppBase() + 0x115CDB0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Time*, uintptr_t))(Il2CppBase() + 0x115CE24))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(Time*, uintptr_t))(Il2CppBase() + 0x115CF5C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Time*))(Il2CppBase() + 0x115CFF8))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x115D0A0))(0, t1, t2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x115D0D4))(0, t1, t2);
	}
	template <typename T = Il2CppString*> T GetLocalization() {
		return ((T (*)(Time*))(Il2CppBase() + 0x115D10C))(this);
	}

};

}
