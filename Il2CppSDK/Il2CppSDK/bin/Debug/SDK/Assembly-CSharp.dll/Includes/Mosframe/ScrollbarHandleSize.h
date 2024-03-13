#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class ScrollbarHandleSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "ScrollbarHandleSize"));
	}

	template <typename T = float> T& maxSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& minSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ScrollbarHandleSize*))(Il2CppBase() + 0x135BD44))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ScrollbarHandleSize*))(Il2CppBase() + 0x135BDAC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ScrollbarHandleSize*))(Il2CppBase() + 0x135BE70))(this);
	}
	template <typename T = void> T onValueChanged(uintptr_t value) {
		return ((T (*)(ScrollbarHandleSize*, uintptr_t))(Il2CppBase() + 0x135BF34))(this, value);
	}

};

}
