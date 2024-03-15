#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeTriggerComponent"));
	}

	template <typename R = float> R& BeforeEnd() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(TimeTriggerComponent*, Il2CppObject*))(Il2CppBase() + 0x14F112C))(this, targetObject);
	}

};

