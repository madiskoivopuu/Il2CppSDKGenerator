#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class SetPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetPool`1"));
	}

	template <typename R = int32_t> static R& MAX_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppArray<HashSet1<T>*>*& _sharedBag() {
		return *(Il2CppArray<HashSet1<T>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _count() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static HashSet1<T>* Get() {
		return ((HashSet1<T>* (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> static R Release(HashSet1<T>* set) {
		return ((R (*)(void *, HashSet1<T>*))(Il2CppBase() + 0x0))(0, set);
	}

};

