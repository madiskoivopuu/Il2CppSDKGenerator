#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringBuilderPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringBuilderPool"));
	}

	template <typename R = int32_t> static R& MAX_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> static R& _sharedBag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _count() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = uintptr_t> static R Get() {
		return ((R (*)(void *))(Il2CppBase() + 0x169E9A4))(0);
	}
	template <typename R = void> static R Release(uintptr_t sb) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x169EBEC))(0, sb);
	}
	template <typename R = Il2CppString*> static R GetStringAndRelease(uintptr_t sb) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x169EE0C))(0, sb);
	}

};

