#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SequenceRandomComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SequenceRandomComponent"));
	}

	template <typename T = float> T& Cooldown() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SequenceRandomComponent*, uintptr_t))(Il2CppBase() + 0x1365ED8))(this, targetObject);
	}

};

}
