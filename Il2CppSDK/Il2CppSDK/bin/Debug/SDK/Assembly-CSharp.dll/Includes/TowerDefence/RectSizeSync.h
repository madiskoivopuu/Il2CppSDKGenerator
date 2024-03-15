#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TowerDefence {

class RectSizeSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TowerDefence", "RectSizeSync"));
	}

	template <typename R = uintptr_t> R& _observed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _controlled() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _minWidth() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _maxWidth() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& _minHeight() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _maxHeight() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = uintptr_t> R& _offset() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Start() {
		return ((R (*)(RectSizeSync*))(Il2CppBase() + 0x139CE94))(this);
	}
	template <typename R = void> R OnRectTransformDimensionsChange() {
		return ((R (*)(RectSizeSync*))(Il2CppBase() + 0x139CF04))(this);
	}

};

}
