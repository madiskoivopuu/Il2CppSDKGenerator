#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDestroyTargetsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDestroyTargetsComponent"));
	}

	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Save() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyDestroyTargetsComponent*, Il2CppObject*))(Il2CppBase() + 0x1894228))(this, target);
	}

};

