#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDSimpleButton" 

class HUDTradesButton: HUDSimpleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDTradesButton"));
	}


	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDTradesButton*, uintptr_t))(Il2CppBase() + 0x1285890))(this, window);
	}

};

}
