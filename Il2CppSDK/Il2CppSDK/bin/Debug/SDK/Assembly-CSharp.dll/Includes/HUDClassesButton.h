#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDClassesButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDClassesButton"));
	}


	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDClassesButton*, IHUDWindow*))(Il2CppBase() + 0x144F0CC))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDClassesButton*, float))(Il2CppBase() + 0x144F18C))(this, deltaTime);
	}
	template <typename T = void> T UpdateCounter() {
		return ((T (*)(HUDClassesButton*))(Il2CppBase() + 0x144F29C))(this);
	}
	template <typename T = void> T Bindb__0_0() {
		return ((T (*)(HUDClassesButton*))(Il2CppBase() + 0x144F490))(this);
	}

};

