#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrimeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrimeHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& Primes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsPrime(int32_t candidate) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x0))(0, candidate);
	}
	template <typename T = int32_t> static T GetPrime(int32_t min) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x0))(0, min);
	}
	template <typename T = int32_t> static T ExpandPrime(int32_t oldSize) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x0))(0, oldSize);
	}

};

}
