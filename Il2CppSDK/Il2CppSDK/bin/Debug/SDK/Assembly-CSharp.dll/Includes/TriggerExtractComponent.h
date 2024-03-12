#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerExtractComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerExtractComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerExtractComponent*, uintptr_t))(Il2CppBase() + 0x1525814))(this, target);
	}

};

}
