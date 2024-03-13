#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDAutoModeButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDAutoModeButton"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDAutoModeButton*, IHUDWindow*))(Il2CppBase() + 0x144A844))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDAutoModeButton*, float))(Il2CppBase() + 0x144AA1C))(this, deltaTime);
	}
	template <typename T = void> T EnableAutoMode() {
		return ((T (*)(HUDAutoModeButton*))(Il2CppBase() + 0x144AD74))(this);
	}

};

