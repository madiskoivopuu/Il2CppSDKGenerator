#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntInt"));
	}

	template <typename R = int32_t> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Item2() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = bool> R Equals(IntInt* other) {
		return ((R (*)(IntInt*, IntInt*))(Il2CppBase() + 0x14695BC))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(IntInt*, Il2CppObject*))(Il2CppBase() + 0x14695E4))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(IntInt*))(Il2CppBase() + 0x1469678))(this);
	}

};

