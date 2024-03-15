#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClickableItemsContainer"));
	}

	template <typename R = uintptr_t> R& ContentRectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ViewportRectTransform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Grid() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Il2CppDictionary<int32_t, IClickable*>*& ClickableItems() {
		return *(Il2CppDictionary<int32_t, IClickable*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _gridWidth() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& _gridCellHight() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = float> R& _gridCellHightWithSpacing() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = int32_t> R get_GridWidth() {
		return ((R (*)(ClickableItemsContainer*))(Il2CppBase() + 0x18F9A5C))(this);
	}
	 Il2CppDictionary<int32_t, IClickable*>* get_ClickableItems() {
		return ((Il2CppDictionary<int32_t, IClickable*>* (*)(ClickableItemsContainer*))(Il2CppBase() + 0x18F9AF0))(this);
	}
	template <typename R = void> R set_ClickableItems(Il2CppDictionary<int32_t, IClickable*>* value) {
		return ((R (*)(ClickableItemsContainer*, Il2CppDictionary<int32_t, IClickable*>*))(Il2CppBase() + 0x18F9AF8))(this, value);
	}
	template <typename R = void> R ChangeScrollPosition(int32_t index) {
		return ((R (*)(ClickableItemsContainer*, int32_t))(Il2CppBase() + 0x18F9B00))(this, index);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(ClickableItemsContainer*))(Il2CppBase() + 0x18F9CB0))(this);
	}

};

