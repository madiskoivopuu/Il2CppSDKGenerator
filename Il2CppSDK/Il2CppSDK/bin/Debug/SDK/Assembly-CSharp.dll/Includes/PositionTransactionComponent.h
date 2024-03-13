#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionTransactionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionTransactionComponent"));
	}

	template <typename T = Ease*> T& Ease() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Vec2*> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Vec2*> T& EndPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PositionTransactionComponent*, Il2CppObject*))(Il2CppBase() + 0x16D5AEC))(this, target);
	}

};

