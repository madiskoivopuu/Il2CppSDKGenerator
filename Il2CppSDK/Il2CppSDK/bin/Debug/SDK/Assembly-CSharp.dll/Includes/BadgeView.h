#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BadgeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BadgeView"));
	}

	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Best() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Hot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Limited() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& New() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Popular() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Sale() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Init(uintptr_t category, int32_t limitCount) {
		return ((T (*)(BadgeView*, uintptr_t, int32_t))(Il2CppBase() + 0xFBB04C))(this, category, limitCount);
	}
	template <typename T = void> T Init_1(Il2CppString* badge, Il2CppString* color, int32_t limitCount) {
		return ((T (*)(BadgeView*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0xFBB05C))(this, badge, color, limitCount);
	}
	template <typename T = void> T UpdateCount(int32_t newCount) {
		return ((T (*)(BadgeView*, int32_t))(Il2CppBase() + 0xFBB604))(this, newCount);
	}

};

}
