#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeTriggerComponent"));
	}

	template <typename T = float> T& BeforeEnd() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(TimeTriggerComponent*, Il2CppObject*))(Il2CppBase() + 0x14F112C))(this, targetObject);
	}

};

