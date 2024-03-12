#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FailComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FailComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(FailComponent*, uintptr_t))(Il2CppBase() + 0x169254C))(this, target);
	}

};

}
