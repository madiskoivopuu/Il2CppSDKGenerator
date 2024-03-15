#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongByte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongByte"));
	}

	template <typename R = int64_t> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uint8_t> R& Item2() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(LongByte* other) {
		return ((R (*)(LongByte*, LongByte*))(Il2CppBase() + 0x1732128))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(LongByte*, Il2CppObject*))(Il2CppBase() + 0x173214C))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LongByte*))(Il2CppBase() + 0x17321E0))(this);
	}

};

