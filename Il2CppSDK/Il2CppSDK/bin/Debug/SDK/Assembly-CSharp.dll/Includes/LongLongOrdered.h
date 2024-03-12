#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongLongOrdered
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongLongOrdered"));
	}

	template <typename T = int64_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LongLongOrdered*, uintptr_t))(Il2CppBase() + 0x1732614))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(LongLongOrdered*, uintptr_t))(Il2CppBase() + 0x1732638))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LongLongOrdered*))(Il2CppBase() + 0x17326CC))(this);
	}

};

}
