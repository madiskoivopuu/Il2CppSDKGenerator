#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySneakComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySneakComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplySneakComponent*, uintptr_t))(Il2CppBase() + 0x1895534))(this, targetObject);
	}

};

}
