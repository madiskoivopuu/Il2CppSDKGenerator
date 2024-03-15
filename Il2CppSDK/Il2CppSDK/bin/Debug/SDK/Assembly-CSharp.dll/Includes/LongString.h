#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongString"));
	}

	template <typename R = int64_t> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Item2() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(LongString other) {
		return ((R (*)(LongString*, LongString))(Il2CppBase() + 0x1732FB0))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(LongString*, Il2CppObject*))(Il2CppBase() + 0x1732FD4))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LongString*))(Il2CppBase() + 0x1733070))(this);
	}

};

