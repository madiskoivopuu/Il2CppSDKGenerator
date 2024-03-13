#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClickableItemsContainer"));
	}

	template <typename T = uintptr_t> T& ContentRectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ViewportRectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<int32_t, IClickable*>*> T& ClickableItems() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _gridWidth() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _gridCellHight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& _gridCellHightWithSpacing() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_GridWidth() {
		return ((T (*)(ClickableItemsContainer*))(Il2CppBase() + 0x18F9A5C))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, IClickable*>*> T get_ClickableItems() {
		return ((T (*)(ClickableItemsContainer*))(Il2CppBase() + 0x18F9AF0))(this);
	}
	template <typename T = void> T set_ClickableItems(Il2CppDictionary<int32_t, IClickable*>* value) {
		return ((T (*)(ClickableItemsContainer*, Il2CppDictionary<int32_t, IClickable*>*))(Il2CppBase() + 0x18F9AF8))(this, value);
	}
	template <typename T = void> T ChangeScrollPosition(int32_t index) {
		return ((T (*)(ClickableItemsContainer*, int32_t))(Il2CppBase() + 0x18F9B00))(this, index);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(ClickableItemsContainer*))(Il2CppBase() + 0x18F9CB0))(this);
	}

};

