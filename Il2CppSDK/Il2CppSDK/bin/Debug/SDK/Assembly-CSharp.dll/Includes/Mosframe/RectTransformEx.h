#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class RectTransformEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "RectTransformEx"));
	}


	template <typename T = uintptr_t> static T setFullSize(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x139D004))(0, self);
	}
	template <typename T = uintptr_t> static T getSize(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x139D078))(0, self);
	}
	template <typename T = void> static T setSize(uintptr_t self, uintptr_t newSize) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x139D0B8))(0, self, newSize);
	}
	template <typename T = uintptr_t> static T setSizeFromLeft(uintptr_t self, float rate) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D194))(0, self, rate);
	}
	template <typename T = uintptr_t> static T setSizeFromRight(uintptr_t self, float rate) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D258))(0, self, rate);
	}
	template <typename T = uintptr_t> static T setSizeFromTop(uintptr_t self, float rate) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D31C))(0, self, rate);
	}
	template <typename T = uintptr_t> static T setSizeFromBottom(uintptr_t self, float rate) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x139D3E0))(0, self, rate);
	}
	template <typename T = void> static T setOffset(uintptr_t self, float left, float top, float right, float bottom) {
		return ((T (*)(void *, uintptr_t, float, float, float, float))(Il2CppBase() + 0x139D498))(0, self, left, top, right, bottom);
	}
	template <typename T = bool> static T inScreenRect(uintptr_t self, uintptr_t screenPos) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x139D4E4))(0, self, screenPos);
	}
	template <typename T = bool> static T inScreenRect_1(uintptr_t self, uintptr_t rectTransform) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x139D658))(0, self, rectTransform);
	}
	template <typename T = uintptr_t> static T getScreenRect(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x139D6A0))(0, self);
	}

};

}
