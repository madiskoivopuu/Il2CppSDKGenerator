#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapArrowPingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapArrowPingComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MinimapArrowPingComponent*, uintptr_t))(Il2CppBase() + 0x12D2A14))(this, target);
	}

};

}
