#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDAutoModeButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDAutoModeButton"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDAutoModeButton*, IHUDWindow*))(Il2CppBase() + 0x144A844))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDAutoModeButton*, float))(Il2CppBase() + 0x144AA1C))(this, deltaTime);
	}
	template <typename R = void> R EnableAutoMode() {
		return ((R (*)(HUDAutoModeButton*))(Il2CppBase() + 0x144AD74))(this);
	}

};

