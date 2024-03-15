#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDUncustomizable.h" 

class HUDButtonBaseUncustomizable : public HUDUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDButtonBaseUncustomizable"));
	}

	template <typename R = uintptr_t> R& _notifierRoot() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = IHUDWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDButtonBaseUncustomizable*, IHUDWindow*))(Il2CppBase() + 0x144EB0C))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDButtonBaseUncustomizable*, float))(Il2CppBase() + 0x144EC3C))(this, deltaTime);
	}

};

