#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntInt"));
	}

	template <typename T = int32_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Item2() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = bool> T Equals(IntInt* other) {
		return ((T (*)(IntInt*, IntInt*))(Il2CppBase() + 0x14695BC))(this, other);
	}
	template <typename T = bool> T Equals_1(Il2CppObject* obj) {
		return ((T (*)(IntInt*, Il2CppObject*))(Il2CppBase() + 0x14695E4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IntInt*))(Il2CppBase() + 0x1469678))(this);
	}

};

