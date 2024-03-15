#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntString"));
	}

	template <typename R = int32_t> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Item2() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(IntString other) {
		return ((R (*)(IntString*, IntString))(Il2CppBase() + 0x14698E8))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(IntString*, Il2CppObject*))(Il2CppBase() + 0x146990C))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(IntString*))(Il2CppBase() + 0x14699A8))(this);
	}

};

