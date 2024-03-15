#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDClassesButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDClassesButton"));
	}


	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDClassesButton*, IHUDWindow*))(Il2CppBase() + 0x144F0CC))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDClassesButton*, float))(Il2CppBase() + 0x144F18C))(this, deltaTime);
	}
	template <typename R = void> R UpdateCounter() {
		return ((R (*)(HUDClassesButton*))(Il2CppBase() + 0x144F29C))(this);
	}
	template <typename R = void> R Bindb__0_0() {
		return ((R (*)(HUDClassesButton*))(Il2CppBase() + 0x144F490))(this);
	}

};

