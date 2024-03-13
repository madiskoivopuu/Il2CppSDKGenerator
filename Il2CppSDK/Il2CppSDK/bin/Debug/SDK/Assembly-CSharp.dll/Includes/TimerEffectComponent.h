#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerEffectComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MinGrade() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(TimerEffectComponent*, Il2CppObject*))(Il2CppBase() + 0x14F15D8))(this, targetObject);
	}

};

