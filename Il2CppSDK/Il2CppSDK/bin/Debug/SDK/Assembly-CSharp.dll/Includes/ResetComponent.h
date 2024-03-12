#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetComponent"));
	}

	template <typename T = int32_t> T& CircleDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ReverseOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& RewardAfterActivity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Manual() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& ResetTo() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ResetComponent*, uintptr_t))(Il2CppBase() + 0x119A584))(this, targetObject);
	}

};

}
