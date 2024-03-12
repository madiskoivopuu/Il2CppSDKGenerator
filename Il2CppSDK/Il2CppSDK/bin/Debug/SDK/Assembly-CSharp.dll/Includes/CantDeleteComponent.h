#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CantDeleteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CantDeleteComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CantDeleteComponent*, uintptr_t))(Il2CppBase() + 0x15B6404))(this, target);
	}

};

}
