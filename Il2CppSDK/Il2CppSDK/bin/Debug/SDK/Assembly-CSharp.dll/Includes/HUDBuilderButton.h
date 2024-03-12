#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDSimpleButton" 

class HUDBuilderButton: HUDSimpleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBuilderButton"));
	}


	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDBuilderButton*, uintptr_t))(Il2CppBase() + 0x144DF6C))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDBuilderButton*, float))(Il2CppBase() + 0x144E08C))(this, deltaTime);
	}

};

}
