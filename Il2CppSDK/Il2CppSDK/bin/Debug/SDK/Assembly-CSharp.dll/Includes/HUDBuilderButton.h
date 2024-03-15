#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDSimpleButton.h" 

class HUDBuilderButton : public HUDSimpleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBuilderButton"));
	}


	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDBuilderButton*, IHUDWindow*))(Il2CppBase() + 0x144DF6C))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDBuilderButton*, float))(Il2CppBase() + 0x144E08C))(this, deltaTime);
	}

};

