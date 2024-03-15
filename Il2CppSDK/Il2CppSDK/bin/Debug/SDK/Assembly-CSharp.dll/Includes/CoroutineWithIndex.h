#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoroutineWithIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoroutineWithIndex"));
	}

	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Coroutine() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppObject*> R& data() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

