#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionConditionComponent"));
	}

	template <typename T = bool> T& Has() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& OffsetX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Radius() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& OnBorder() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T GetOffset() {
		return ((T (*)(CollisionConditionComponent*))(Il2CppBase() + 0xE23B14))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CollisionConditionComponent*, uintptr_t))(Il2CppBase() + 0xE23B44))(this, target);
	}

};

}
