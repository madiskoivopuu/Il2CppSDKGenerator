#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransformExtantion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformExtantion"));
	}


	template <typename T = uintptr_t> static T GetComponentInParents(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, transform);
	}

};

}
