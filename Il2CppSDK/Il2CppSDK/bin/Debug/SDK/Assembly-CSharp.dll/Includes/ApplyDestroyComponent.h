#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDestroyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDestroyComponent"));
	}

	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Instantly() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyDestroyComponent*, Il2CppObject*))(Il2CppBase() + 0x1894184))(this, targetObject);
	}

};

