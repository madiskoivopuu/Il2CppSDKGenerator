#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUIExtensions {

class UIInfiniteScroll
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUIExtensions", "UI_InfiniteScroll"));
	}

	template <typename R = bool> R& InitByUser() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _scrollRect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _contentSizeFitter() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _verticalLayoutGroup() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _horizontalLayoutGroup() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _gridLayoutGroup() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& _isVertical() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& _isHorizontal() {
		return *(R*)((uintptr_t)this + 0x49);
	}
	template <typename R = float> R& _disableMarginX() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = float> R& _disableMarginY() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _hasDisabledGridComponents() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	 Il2CppList<uintptr_t>*& items() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _newAnchoredPosition() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& _treshold() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _itemCount() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = float> R& _recordOffsetX() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& _recordOffsetY() {
		return *(R*)((uintptr_t)this + 0x74);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(UIInfiniteScroll*))(Il2CppBase() + 0x153535C))(this);
	}
	template <typename R = void> R Init() {
		return ((R (*)(UIInfiniteScroll*))(Il2CppBase() + 0x153536C))(this);
	}
	template <typename R = void> R DisableGridComponents() {
		return ((R (*)(UIInfiniteScroll*))(Il2CppBase() + 0x1535870))(this);
	}
	template <typename R = void> R OnScroll(uintptr_t pos) {
		return ((R (*)(UIInfiniteScroll*, uintptr_t))(Il2CppBase() + 0x1535B38))(this, pos);
	}

};

}
