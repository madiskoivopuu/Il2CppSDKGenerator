#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotAutoCompleteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotAutoCompleteComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(NotAutoCompleteComponent*, uintptr_t))(Il2CppBase() + 0x13B1E9C))(this, target);
	}

};

}
