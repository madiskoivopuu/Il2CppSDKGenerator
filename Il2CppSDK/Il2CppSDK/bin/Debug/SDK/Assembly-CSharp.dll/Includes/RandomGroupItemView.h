#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupItemView"));
	}

	template <typename R = uintptr_t> R& iconImage() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& itemNameText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& stackCountText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& itemsCountText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& avgItemsInStackText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& itemChanceText() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Initialize(Data* data) {
		return ((R (*)(RandomGroupItemView*, Data*))(Il2CppBase() + 0x1717034))(this, data);
	}
	template <typename R = void> R Deinitialize() {
		return ((R (*)(RandomGroupItemView*))(Il2CppBase() + 0x1717184))(this);
	}

};

