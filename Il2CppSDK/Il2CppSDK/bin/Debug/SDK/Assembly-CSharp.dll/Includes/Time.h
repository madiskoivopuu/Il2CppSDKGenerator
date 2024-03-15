#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Time
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Time"));
	}

	template <typename R = FormatTypes*> R& FormatType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Nullable1int32_t>*& Days() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x4);
	}
	 Nullable1int32_t>*& Hours() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0xC);
	}
	 Nullable1int32_t>*& Minutes() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x14);
	}
	 Nullable1double>*& Seconds() {
		return *(Nullable1double>**)((uintptr_t)this + 0x20);
	}

	template <typename R = Time*> static R get_ZeroZero() {
		return ((R (*)(void *))(Il2CppBase() + 0x115CCFC))(0);
	}
	template <typename R = Time*> static R get_Empty() {
		return ((R (*)(void *))(Il2CppBase() + 0x115CDA0))(0);
	}
	template <typename R = bool> R IsEmpty() {
		return ((R (*)(Time*))(Il2CppBase() + 0x115CDB0))(this);
	}
	template <typename R = bool> R Equals(Time* other) {
		return ((R (*)(Time*, Time*))(Il2CppBase() + 0x115CE24))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(Time*, Il2CppObject*))(Il2CppBase() + 0x115CF5C))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Time*))(Il2CppBase() + 0x115CFF8))(this);
	}
	template <typename R = bool> static R op_Equality(Time* t1, Time* t2) {
		return ((R (*)(void *, Time*, Time*))(Il2CppBase() + 0x115D0A0))(0, t1, t2);
	}
	template <typename R = bool> static R op_Inequality(Time* t1, Time* t2) {
		return ((R (*)(void *, Time*, Time*))(Il2CppBase() + 0x115D0D4))(0, t1, t2);
	}
	template <typename R = Il2CppString*> R GetLocalization() {
		return ((R (*)(Time*))(Il2CppBase() + 0x115D10C))(this);
	}

};

