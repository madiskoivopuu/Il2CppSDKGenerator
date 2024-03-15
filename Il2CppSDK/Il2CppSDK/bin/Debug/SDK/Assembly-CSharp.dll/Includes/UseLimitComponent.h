#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UseLimitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UseLimitComponent"));
	}

	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& ResetDuration() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(UseLimitComponent*, Il2CppObject*))(Il2CppBase() + 0x1542A44))(this, target);
	}

};

