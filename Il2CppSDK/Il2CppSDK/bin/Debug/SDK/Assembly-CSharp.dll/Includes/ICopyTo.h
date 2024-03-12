#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICopyTo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICopyTo"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ICopyTo*, uintptr_t))(Il2CppBase() + 0x0))(this, target);
	}

};

}
