#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildBlockerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildBlockerComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BuildBlockerComponent*, uintptr_t))(Il2CppBase() + 0x15A4188))(this, target);
	}

};

}
