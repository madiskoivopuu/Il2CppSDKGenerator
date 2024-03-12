#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongByte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongByte"));
	}

	template <typename T = int64_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LongByte*, uintptr_t))(Il2CppBase() + 0x1732128))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(LongByte*, uintptr_t))(Il2CppBase() + 0x173214C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LongByte*))(Il2CppBase() + 0x17321E0))(this);
	}

};

}
