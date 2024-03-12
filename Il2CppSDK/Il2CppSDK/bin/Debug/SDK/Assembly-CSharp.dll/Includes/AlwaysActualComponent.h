#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AlwaysActualComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AlwaysActualComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AlwaysActualComponent*, uintptr_t))(Il2CppBase() + 0x129E50C))(this, target);
	}

};

}
