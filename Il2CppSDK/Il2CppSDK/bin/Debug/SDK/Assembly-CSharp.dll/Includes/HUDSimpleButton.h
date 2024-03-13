#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDSimpleButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSimpleButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IHUDWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDSimpleButton*, IHUDWindow*))(Il2CppBase() + 0x127F524))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDSimpleButton*, float))(Il2CppBase() + 0x127F644))(this, deltaTime);
	}

};

