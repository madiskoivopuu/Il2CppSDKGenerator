#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class ListPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListPool`1"));
	}

	template <typename R = int32_t> static R& MAX_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppArray<Il2CppList<T>*>*& _sharedBag() {
		return *(Il2CppArray<Il2CppList<T>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _count() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static Il2CppList<T>* Get() {
		return ((Il2CppList<T>* (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> static R Release(Il2CppList<T>* list) {
		return ((R (*)(void *, Il2CppList<T>*))(Il2CppBase() + 0x0))(0, list);
	}

};

