#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDCustomizable" 

class HUDButtonBaseCustomizable: HUDCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDButtonBaseCustomizable"));
	}

	template <typename T = uintptr_t> T& _notifierRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDButtonBaseCustomizable*, uintptr_t))(Il2CppBase() + 0x144A8F0))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDButtonBaseCustomizable*, float))(Il2CppBase() + 0x144AC5C))(this, deltaTime);
	}

};

}
