#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BadgeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BadgeView"));
	}

	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Best() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Hot() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Limited() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& New() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Popular() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Sale() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Init(Category category, int32_t limitCount) {
		return ((R (*)(BadgeView*, Category, int32_t))(Il2CppBase() + 0xFBB04C))(this, category, limitCount);
	}
	template <typename R = void> R Init_1(Il2CppString* badge, Il2CppString* color, int32_t limitCount) {
		return ((R (*)(BadgeView*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0xFBB05C))(this, badge, color, limitCount);
	}
	template <typename R = void> R UpdateCount(int32_t newCount) {
		return ((R (*)(BadgeView*, int32_t))(Il2CppBase() + 0xFBB604))(this, newCount);
	}

};

