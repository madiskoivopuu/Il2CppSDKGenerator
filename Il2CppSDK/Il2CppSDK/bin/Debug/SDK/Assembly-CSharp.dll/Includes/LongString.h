#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongString"));
	}

	template <typename T = int64_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LongString*, uintptr_t))(Il2CppBase() + 0x1732FB0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(LongString*, uintptr_t))(Il2CppBase() + 0x1732FD4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LongString*))(Il2CppBase() + 0x1733070))(this);
	}

};

}
