#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionConditionComponent"));
	}

	template <typename R = bool> R& Has() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& OffsetX() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& OffsetY() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<float>*& Radius() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x1C);
	}
	 Nullable1<bool>*& OnBorder() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x24);
	}

	template <typename R = Vec2> R GetOffset() {
		return ((R (*)(CollisionConditionComponent*))(Il2CppBase() + 0xE23B14))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CollisionConditionComponent*, Il2CppObject*))(Il2CppBase() + 0xE23B44))(this, target);
	}

};

