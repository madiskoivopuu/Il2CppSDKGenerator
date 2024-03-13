#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class DynamicScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicScrollView"));
	}

	template <typename T = int32_t> T& totalItemCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& itemPrototype() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Direction*> T& direction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = LinkedList1uintptr_t>*> T& containers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& prevAnchoredPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& nextInsertItemNo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& prevTotalItemCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& viewportRect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& contentRect() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T scrollToLastPos() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A98D2C))(this);
	}
	template <typename T = void> T scrollByItemIndex(int32_t itemIndex) {
		return ((T (*)(DynamicScrollView*, int32_t))(Il2CppBase() + 0x1A99028))(this, itemIndex);
	}
	template <typename T = void> T scrollByNormalizedY(float y) {
		return ((T (*)(DynamicScrollView*, float))(Il2CppBase() + 0x1A99080))(this, y);
	}
	template <typename T = float> T getCurrentNormalizedY() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A990CC))(this);
	}
	template <typename T = int32_t> T getCurrentIndex() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A99120))(this);
	}
	template <typename T = void> T refresh() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A98D94))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A985F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A98768))(this);
	}
	template <typename T = uintptr_t> T onSeedData() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A992D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A99348))(this);
	}
	template <typename T = void> T resizeContent() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A996D0))(this);
	}
	template <typename T = void> T updateItem(int32_t index, uintptr_t itemObj) {
		return ((T (*)(DynamicScrollView*, int32_t, uintptr_t))(Il2CppBase() + 0x1A9919C))(this, index, itemObj);
	}
	template <typename T = void> T init() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A97B7C))(this);
	}
	template <typename T = void> T resetPrototypeItem(uintptr_t contentRect) {
		return ((T (*)(DynamicScrollView*, uintptr_t))(Il2CppBase() + 0x1A99740))(this, contentRect);
	}
	template <typename T = void> T clear() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x1A99C8C))(this);
	}
	template <typename T = float> T get_contentAnchoredPosition() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_contentAnchoredPosition(float value) {
		return ((T (*)(DynamicScrollView*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_contentSize() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_viewportSize() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_itemSize() {
		return ((T (*)(DynamicScrollView*))(Il2CppBase() + 0x0))(this);
	}

};

}
