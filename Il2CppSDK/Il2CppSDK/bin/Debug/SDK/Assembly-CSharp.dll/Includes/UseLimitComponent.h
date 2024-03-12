#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UseLimitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UseLimitComponent"));
	}

	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ResetDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(UseLimitComponent*, uintptr_t))(Il2CppBase() + 0x1542A44))(this, target);
	}

};

}
