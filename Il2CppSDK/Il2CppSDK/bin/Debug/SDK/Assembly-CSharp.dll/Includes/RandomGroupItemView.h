#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupItemView"));
	}

	template <typename T = uintptr_t> T& iconImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& itemNameText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& stackCountText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& itemsCountText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& avgItemsInStackText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& itemChanceText() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Initialize(uintptr_t data) {
		return ((T (*)(RandomGroupItemView*, uintptr_t))(Il2CppBase() + 0x1717034))(this, data);
	}
	template <typename T = void> T Deinitialize() {
		return ((T (*)(RandomGroupItemView*))(Il2CppBase() + 0x1717184))(this);
	}

};

}
