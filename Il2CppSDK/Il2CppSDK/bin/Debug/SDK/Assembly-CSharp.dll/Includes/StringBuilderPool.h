#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringBuilderPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringBuilderPool"));
	}

	template <typename T = int32_t> static T& MAX_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _sharedBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x169E9A4))(0);
	}
	template <typename T = void> static T Release(uintptr_t sb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x169EBEC))(0, sb);
	}
	template <typename T = Il2CppString*> static T GetStringAndRelease(uintptr_t sb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x169EE0C))(0, sb);
	}

};

