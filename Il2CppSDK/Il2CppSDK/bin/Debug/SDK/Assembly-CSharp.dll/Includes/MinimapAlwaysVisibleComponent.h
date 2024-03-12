#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapAlwaysVisibleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapAlwaysVisibleComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MinimapAlwaysVisibleComponent*, uintptr_t))(Il2CppBase() + 0x12D294C))(this, target);
	}

};

}
