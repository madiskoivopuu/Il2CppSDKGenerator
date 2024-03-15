#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDestroyChildrenComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDestroyChildrenComponent"));
	}

	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyDestroyChildrenComponent*, Il2CppObject*))(Il2CppBase() + 0x18940D8))(this, target);
	}

};

