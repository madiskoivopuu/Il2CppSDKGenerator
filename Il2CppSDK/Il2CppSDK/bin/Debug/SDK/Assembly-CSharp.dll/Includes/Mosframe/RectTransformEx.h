#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class RectTransformEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "RectTransformEx"));
	}


	template <typename R = uintptr_t> static R setFullSize(uintptr_t self) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x139D004))(0, self);
	}
	template <typename R = uintptr_t> static R getSize(uintptr_t self) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x139D078))(0, self);
	}
	template <typename R = void> static R setSize(uintptr_t self, uintptr_t newSize) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x139D0B8))(0, self, newSize);
	}
	template <typename R = uintptr_t> static R setSizeFromLeft(uintptr_t self, float rate) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D194))(0, self, rate);
	}
	template <typename R = uintptr_t> static R setSizeFromRight(uintptr_t self, float rate) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D258))(0, self, rate);
	}
	template <typename R = uintptr_t> static R setSizeFromTop(uintptr_t self, float rate) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D31C))(0, self, rate);
	}
	template <typename R = uintptr_t> static R setSizeFromBottom(uintptr_t self, float rate) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D3E0))(0, self, rate);
	}
	template <typename R = void> static R setOffset(uintptr_t self, float left, float top, float right, float bottom) {
		return ((R (*)(void *, uintptr_t, float, float, float, float))(Il2CppBase() + 0x139D498))(0, self, left, top, right, bottom);
	}
	template <typename R = bool> static R inScreenRect(uintptr_t self, uintptr_t screenPos) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x139D4E4))(0, self, screenPos);
	}
	template <typename R = bool> static R inScreenRect_1(uintptr_t self, uintptr_t rectTransform) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x139D658))(0, self, rectTransform);
	}
	template <typename R = uintptr_t> static R getScreenRect(uintptr_t self) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x139D6A0))(0, self);
	}

};

}
