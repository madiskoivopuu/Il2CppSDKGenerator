#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class GizmoUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "GizmoUtil"));
	}


	template <typename R = void> static R DrawWireCircle(uintptr_t aPos, float aRadius) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x17725B4))(0, aPos, aRadius);
	}
	template <typename R = void> static R DrawWireArc(uintptr_t aPos, float aRadius, float aAngle, float aAngleWidth) {
		return ((R (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x17725C4))(0, aPos, aRadius, aAngle, aAngleWidth);
	}

};

}
