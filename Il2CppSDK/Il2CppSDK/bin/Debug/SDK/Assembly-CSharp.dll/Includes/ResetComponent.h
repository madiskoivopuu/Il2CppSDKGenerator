#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetComponent"));
	}

	template <typename R = int32_t> R& CircleDuration() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Offset() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& ReverseOffset() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& RewardAfterActivity() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& Manual() {
		return *(R*)((uintptr_t)this + 0x1D);
	}
	template <typename R = ResetType> R& ResetTo() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ResetComponent*, Il2CppObject*))(Il2CppBase() + 0x119A584))(this, targetObject);
	}

};

