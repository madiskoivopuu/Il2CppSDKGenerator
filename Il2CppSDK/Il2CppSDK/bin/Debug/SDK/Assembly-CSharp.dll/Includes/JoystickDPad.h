#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickDPad
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickDPad"));
	}

	template <typename T = float> T& _axisThreshold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _disableOnFullScreenBlock() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _handler() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _padPressed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isInit() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T Clean() {
		return ((T (*)(JoystickDPad*))(Il2CppBase() + 0x14E4E14))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t handler) {
		return ((T (*)(JoystickDPad*, uintptr_t, uintptr_t))(Il2CppBase() + 0x14E4F50))(this, window, handler);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(JoystickDPad*, float))(Il2CppBase() + 0x14E512C))(this, deltaTime);
	}
	template <typename T = void> static T MoveNext(uintptr_t move, uintptr_t container, uintptr_t selectedItem) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x14E5584))(0, move, container, selectedItem);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(JoystickDPad*))(Il2CppBase() + 0x14E5DAC))(this);
	}

};

}
