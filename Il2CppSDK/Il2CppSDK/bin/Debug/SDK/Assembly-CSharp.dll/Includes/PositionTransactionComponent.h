#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionTransactionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionTransactionComponent"));
	}

	template <typename R = Ease*> R& Ease() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Vec2*> R& StartPosition() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Vec2*> R& EndPosition() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PositionTransactionComponent*, Il2CppObject*))(Il2CppBase() + 0x16D5AEC))(this, target);
	}

};

