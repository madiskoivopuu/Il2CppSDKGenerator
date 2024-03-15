#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerEffectComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MinGrade() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(TimerEffectComponent*, Il2CppObject*))(Il2CppBase() + 0x14F15D8))(this, targetObject);
	}

};

