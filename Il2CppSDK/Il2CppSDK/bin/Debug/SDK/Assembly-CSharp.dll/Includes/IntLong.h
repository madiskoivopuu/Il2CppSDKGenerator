#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntLong
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntLong"));
	}

	template <typename R = int32_t> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Item2() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(IntLong other) {
		return ((R (*)(IntLong*, IntLong))(Il2CppBase() + 0x14697E8))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(IntLong*, Il2CppObject*))(Il2CppBase() + 0x146980C))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(IntLong*))(Il2CppBase() + 0x14698A0))(this);
	}

};

