#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class ScrollbarHandleSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "ScrollbarHandleSize"));
	}

	template <typename R = float> R& maxSize() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& minSize() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& scrollRect() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ScrollbarHandleSize*))(Il2CppBase() + 0x135BD44))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ScrollbarHandleSize*))(Il2CppBase() + 0x135BDAC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ScrollbarHandleSize*))(Il2CppBase() + 0x135BE70))(this);
	}
	template <typename R = void> R onValueChanged(uintptr_t value) {
		return ((R (*)(ScrollbarHandleSize*, uintptr_t))(Il2CppBase() + 0x135BF34))(this, value);
	}

};

}
