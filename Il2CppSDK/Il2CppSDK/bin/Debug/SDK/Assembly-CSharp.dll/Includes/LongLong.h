#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongLong
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongLong"));
	}

	template <typename R = int64_t> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Item2() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(LongLong* other) {
		return ((R (*)(LongLong*, LongLong*))(Il2CppBase() + 0x1732510))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(LongLong*, Il2CppObject*))(Il2CppBase() + 0x1732534))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LongLong*))(Il2CppBase() + 0x17325C8))(this);
	}

};

