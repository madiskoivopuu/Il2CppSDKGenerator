#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIExtension"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T GetCorners(uintptr_t rectTransform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x102F524))(0, rectTransform);
	}
	template <typename T = float> static T MaxY(uintptr_t rectTransform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x102F594))(0, rectTransform);
	}
	template <typename T = float> static T MinY(uintptr_t rectTransform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x102F5CC))(0, rectTransform);
	}
	template <typename T = float> static T MaxX(uintptr_t rectTransform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x102F600))(0, rectTransform);
	}
	template <typename T = float> static T MinX(uintptr_t rectTransform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x102F638))(0, rectTransform);
	}

};

}
