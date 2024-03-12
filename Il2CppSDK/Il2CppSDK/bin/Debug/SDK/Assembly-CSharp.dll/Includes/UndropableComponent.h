#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UndropableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UndropableComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(UndropableComponent*, uintptr_t))(Il2CppBase() + 0x1536C24))(this, target);
	}

};

}
