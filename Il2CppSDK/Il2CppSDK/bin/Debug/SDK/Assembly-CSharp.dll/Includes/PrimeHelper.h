#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TKey, typename TValue>
class PrimeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrimeHelper"));
	}

	template <typename R = Il2CppArray<int32_t>*> static R& Primes() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> static R IsPrime(int32_t candidate) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x0))(0, candidate);
	}
	template <typename R = int32_t> static R GetPrime(int32_t min) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x0))(0, min);
	}
	template <typename R = int32_t> static R ExpandPrime(int32_t oldSize) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x0))(0, oldSize);
	}

};

