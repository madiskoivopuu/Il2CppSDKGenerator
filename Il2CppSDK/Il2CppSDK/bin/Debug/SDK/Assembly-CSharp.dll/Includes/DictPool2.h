#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictPool2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DictPool`2"));
	}

	template <typename T = int32_t> static T& MAX_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _sharedBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T Release(Il2CppDictionary<uintptr_t, uintptr_t>* dict) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, dict);
	}

};

