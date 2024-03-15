#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SequenceRandomComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SequenceRandomComponent"));
	}

	template <typename R = float> R& Cooldown() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SequenceRandomComponent*, Il2CppObject*))(Il2CppBase() + 0x1365ED8))(this, targetObject);
	}

};

