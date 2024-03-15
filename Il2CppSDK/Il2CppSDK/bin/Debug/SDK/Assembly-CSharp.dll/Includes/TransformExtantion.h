#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransformExtantion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformExtantion"));
	}


	 static uintptr_t GetComponentInParents(uintptr_t transform) {
		return ((uintptr_t (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, transform);
	}

};

