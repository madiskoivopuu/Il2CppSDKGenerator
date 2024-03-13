#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Time
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Time"));
	}

	template <typename T = FormatTypes*> T& FormatType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Nullable1int32_t>*> T& Days() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Nullable1int32_t>*> T& Hours() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Nullable1int32_t>*> T& Minutes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Nullable1double>*> T& Seconds() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Time*> static T get_ZeroZero() {
		return ((T (*)(void *))(Il2CppBase() + 0x115CCFC))(0);
	}
	template <typename T = Time*> static T get_Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x115CDA0))(0);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(Time*))(Il2CppBase() + 0x115CDB0))(this);
	}
	template <typename T = bool> T Equals(Time* other) {
		return ((T (*)(Time*, Time*))(Il2CppBase() + 0x115CE24))(this, other);
	}
	template <typename T = bool> T Equals_1(Il2CppObject* obj) {
		return ((T (*)(Time*, Il2CppObject*))(Il2CppBase() + 0x115CF5C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Time*))(Il2CppBase() + 0x115CFF8))(this);
	}
	template <typename T = bool> static T op_Equality(Time* t1, Time* t2) {
		return ((T (*)(void *, Time*, Time*))(Il2CppBase() + 0x115D0A0))(0, t1, t2);
	}
	template <typename T = bool> static T op_Inequality(Time* t1, Time* t2) {
		return ((T (*)(void *, Time*, Time*))(Il2CppBase() + 0x115D0D4))(0, t1, t2);
	}
	template <typename T = Il2CppString*> T GetLocalization() {
		return ((T (*)(Time*))(Il2CppBase() + 0x115D10C))(this);
	}

};

