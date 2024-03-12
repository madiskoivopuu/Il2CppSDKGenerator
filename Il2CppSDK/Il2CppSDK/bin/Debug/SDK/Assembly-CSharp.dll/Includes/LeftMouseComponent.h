#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeftMouseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeftMouseComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(LeftMouseComponent*, uintptr_t))(Il2CppBase() + 0x142B218))(this, targetObject);
	}

};

}
