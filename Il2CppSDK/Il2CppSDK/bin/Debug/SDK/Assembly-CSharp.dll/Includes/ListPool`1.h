#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListPool`1"));
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

	template <typename T = Il2CppList<uintptr_t>*> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T Release(Il2CppList<uintptr_t>* list) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(0, list);
	}

};

}
