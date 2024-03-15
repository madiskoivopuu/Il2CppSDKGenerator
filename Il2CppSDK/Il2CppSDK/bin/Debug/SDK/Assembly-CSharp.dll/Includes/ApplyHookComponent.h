#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyHookComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyHookComponent"));
	}

	template <typename R = Parameters*> R& Param() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = StateParameters*> R& State() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyHookComponent*, Il2CppObject*))(Il2CppBase() + 0x18944D0))(this, targetObject);
	}

};

