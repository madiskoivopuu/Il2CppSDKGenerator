#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoryView"));
	}

	template <typename T = uintptr_t> T& LabelCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BadgeParent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BadgeIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SelectOn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SelectOff() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& CategoryAnimator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _cachedCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Init(uintptr_t category) {
		return ((T (*)(StoreCategoryView*, uintptr_t))(Il2CppBase() + 0x141EDDC))(this, category);
	}
	template <typename T = void> T SetCount(int32_t count) {
		return ((T (*)(StoreCategoryView*, int32_t))(Il2CppBase() + 0x141F4C0))(this, count);
	}
	template <typename T = void> T Select() {
		return ((T (*)(StoreCategoryView*))(Il2CppBase() + 0x141F5C0))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(StoreCategoryView*))(Il2CppBase() + 0x141F604))(this);
	}

};

}
