#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDCustomizable.h" 

class HUDButtonBaseCustomizable : public HUDCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDButtonBaseCustomizable"));
	}

	template <typename R = uintptr_t> R& _notifierRoot() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = IHUDWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0xC0);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDButtonBaseCustomizable*, IHUDWindow*))(Il2CppBase() + 0x144A8F0))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDButtonBaseCustomizable*, float))(Il2CppBase() + 0x144AC5C))(this, deltaTime);
	}

};

