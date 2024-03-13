#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoroutineWithIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoroutineWithIndex"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Coroutine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppObject*> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

