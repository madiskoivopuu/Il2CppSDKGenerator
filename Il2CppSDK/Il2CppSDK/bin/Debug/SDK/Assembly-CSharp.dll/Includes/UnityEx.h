#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityEx"));
	}


	template <typename R = uintptr_t> static R AjustX(uintptr_t vector, float x) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1538794))(0, vector, x);
	}
	template <typename R = uintptr_t> static R AjustY(uintptr_t vector, float y) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x153879C))(0, vector, y);
	}
	template <typename R = uintptr_t> static R AjustZ(uintptr_t vector, float z) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15387A4))(0, vector, z);
	}
	template <typename R = uintptr_t> static R WithAlpha(uintptr_t color, float alpha) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15387AC))(0, color, alpha);
	}
	template <typename R = void> static R DestroyAllChildren(uintptr_t parent) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x15387E0))(0, parent);
	}

};

