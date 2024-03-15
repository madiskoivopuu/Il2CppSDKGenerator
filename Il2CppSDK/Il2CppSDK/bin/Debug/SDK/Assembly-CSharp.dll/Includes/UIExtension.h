#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIExtension"));
	}


	template <typename R = Il2CppArray<uintptr_t>*> static R GetCorners(uintptr_t rectTransform) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x102F524))(0, rectTransform);
	}
	template <typename R = float> static R MaxY(uintptr_t rectTransform) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x102F594))(0, rectTransform);
	}
	template <typename R = float> static R MinY(uintptr_t rectTransform) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x102F5CC))(0, rectTransform);
	}
	template <typename R = float> static R MaxX(uintptr_t rectTransform) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x102F600))(0, rectTransform);
	}
	template <typename R = float> static R MinX(uintptr_t rectTransform) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x102F638))(0, rectTransform);
	}

};

