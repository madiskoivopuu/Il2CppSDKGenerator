#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoryView"));
	}

	template <typename R = uintptr_t> R& LabelCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& BadgeParent() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& BadgeIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& SelectOn() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& SelectOff() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& CategoryAnimator() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& _cachedCount() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R Init(StoreCategory* category) {
		return ((R (*)(StoreCategoryView*, StoreCategory*))(Il2CppBase() + 0x141EDDC))(this, category);
	}
	template <typename R = void> R SetCount(int32_t count) {
		return ((R (*)(StoreCategoryView*, int32_t))(Il2CppBase() + 0x141F4C0))(this, count);
	}
	template <typename R = void> R Select() {
		return ((R (*)(StoreCategoryView*))(Il2CppBase() + 0x141F5C0))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(StoreCategoryView*))(Il2CppBase() + 0x141F604))(this);
	}

};

