#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityEx"));
	}


	template <typename T = Il2CppVector3> static T AjustX(Il2CppVector3 vector, float x) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x1538794))(0, vector, x);
	}
	template <typename T = Il2CppVector3> static T AjustY(Il2CppVector3 vector, float y) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x153879C))(0, vector, y);
	}
	template <typename T = Il2CppVector3> static T AjustZ(Il2CppVector3 vector, float z) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x15387A4))(0, vector, z);
	}
	template <typename T = uintptr_t> static T WithAlpha(uintptr_t color, float alpha) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15387AC))(0, color, alpha);
	}
	template <typename T = void> static T DestroyAllChildren(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15387E0))(0, parent);
	}

};

}
