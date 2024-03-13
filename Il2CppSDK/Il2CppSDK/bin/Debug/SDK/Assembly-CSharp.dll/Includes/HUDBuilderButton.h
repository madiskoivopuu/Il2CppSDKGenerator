#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDSimpleButton.h" 

class HUDBuilderButton : public HUDSimpleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBuilderButton"));
	}


	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDBuilderButton*, IHUDWindow*))(Il2CppBase() + 0x144DF6C))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDBuilderButton*, float))(Il2CppBase() + 0x144E08C))(this, deltaTime);
	}

};

