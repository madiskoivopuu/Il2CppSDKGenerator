#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntLong
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntLong"));
	}

	template <typename T = int32_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(IntLong* other) {
		return ((T (*)(IntLong*, IntLong*))(Il2CppBase() + 0x14697E8))(this, other);
	}
	template <typename T = bool> T Equals_1(Il2CppObject* obj) {
		return ((T (*)(IntLong*, Il2CppObject*))(Il2CppBase() + 0x146980C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IntLong*))(Il2CppBase() + 0x14698A0))(this);
	}

};

