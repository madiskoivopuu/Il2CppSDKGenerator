#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUIExtensions {

class UIInfiniteScroll
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUIExtensions", "UI_InfiniteScroll"));
	}

	template <typename T = bool> T& InitByUser() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _scrollRect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _contentSizeFitter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _verticalLayoutGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _horizontalLayoutGroup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _gridLayoutGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isVertical() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _isHorizontal() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = float> T& _disableMarginX() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& _disableMarginY() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _hasDisabledGridComponents() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _newAnchoredPosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _treshold() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _itemCount() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& _recordOffsetX() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _recordOffsetY() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIInfiniteScroll*))(Il2CppBase() + 0x153535C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIInfiniteScroll*))(Il2CppBase() + 0x153536C))(this);
	}
	template <typename T = void> T DisableGridComponents() {
		return ((T (*)(UIInfiniteScroll*))(Il2CppBase() + 0x1535870))(this);
	}
	template <typename T = void> T OnScroll(uintptr_t pos) {
		return ((T (*)(UIInfiniteScroll*, uintptr_t))(Il2CppBase() + 0x1535B38))(this, pos);
	}

};

}
