#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class DynamicScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicScrollView"));
	}

	template <typename R = int32_t> R& totalItemCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& itemPrototype() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Direction> R& direction() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 LinkedList1<uintptr_t>*& containers() {
		return *(LinkedList1<uintptr_t>**)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& prevAnchoredPosition() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& nextInsertItemNo() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> R& prevTotalItemCount() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& scrollRect() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& viewportRect() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& contentRect() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R scrollToLastPos() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A98D2C))(this);
	}
	template <typename R = void> R scrollByItemIndex(int32_t itemIndex) {
		return ((R (*)(DynamicScrollView*, int32_t))(Il2CppBase() + 0x1A99028))(this, itemIndex);
	}
	template <typename R = void> R scrollByNormalizedY(float y) {
		return ((R (*)(DynamicScrollView*, float))(Il2CppBase() + 0x1A99080))(this, y);
	}
	template <typename R = float> R getCurrentNormalizedY() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A990CC))(this);
	}
	template <typename R = int32_t> R getCurrentIndex() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A99120))(this);
	}
	template <typename R = void> R refresh() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A98D94))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A985F0))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A98768))(this);
	}
	template <typename R = uintptr_t> R onSeedData() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A992D0))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A99348))(this);
	}
	template <typename R = void> R resizeContent() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A996D0))(this);
	}
	template <typename R = void> R updateItem(int32_t index, uintptr_t itemObj) {
		return ((R (*)(DynamicScrollView*, int32_t, uintptr_t))(Il2CppBase() + 0x1A9919C))(this, index, itemObj);
	}
	template <typename R = void> R init() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A97B7C))(this);
	}
	template <typename R = void> R resetPrototypeItem(uintptr_t contentRect) {
		return ((R (*)(DynamicScrollView*, uintptr_t))(Il2CppBase() + 0x1A99740))(this, contentRect);
	}
	template <typename R = void> R clear() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x1A99C8C))(this);
	}
	template <typename R = float> R get_contentAnchoredPosition() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_contentAnchoredPosition(float value) {
		return ((R (*)(DynamicScrollView*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = float> R get_contentSize() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_viewportSize() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_itemSize() {
		return ((R (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}

};

}
