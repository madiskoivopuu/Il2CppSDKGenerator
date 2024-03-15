#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDSimpleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSimpleButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IHUDWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDSimpleButton*, IHUDWindow*))(Il2CppBase() + 0x127F524))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDSimpleButton*, float))(Il2CppBase() + 0x127F644))(this, deltaTime);
	}

};

