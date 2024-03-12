#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDUncustomizable" 

class HUDButtonBaseUncustomizable: HUDUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDButtonBaseUncustomizable"));
	}

	template <typename T = uintptr_t> T& _notifierRoot() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDButtonBaseUncustomizable*, uintptr_t))(Il2CppBase() + 0x144EB0C))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDButtonBaseUncustomizable*, float))(Il2CppBase() + 0x144EC3C))(this, deltaTime);
	}

};

}
