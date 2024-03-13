#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongLong
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongLong"));
	}

	template <typename T = int64_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(LongLong* other) {
		return ((T (*)(LongLong*, LongLong*))(Il2CppBase() + 0x1732510))(this, other);
	}
	template <typename T = bool> T Equals_1(Il2CppObject* obj) {
		return ((T (*)(LongLong*, Il2CppObject*))(Il2CppBase() + 0x1732534))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LongLong*))(Il2CppBase() + 0x17325C8))(this);
	}

};

