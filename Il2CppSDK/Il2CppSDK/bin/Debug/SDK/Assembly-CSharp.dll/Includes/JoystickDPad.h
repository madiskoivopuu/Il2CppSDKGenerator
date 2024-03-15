#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickDPad
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickDPad"));
	}

	template <typename R = float> R& _axisThreshold() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _disableOnFullScreenBlock() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = IJoystickDPadHandler*> R& _handler() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _padPressed() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _isInit() {
		return *(R*)((uintptr_t)this + 0x31);
	}

	template <typename R = void> R Clean() {
		return ((R (*)(JoystickDPad*))(Il2CppBase() + 0x14E4E14))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, IJoystickDPadHandler* handler) {
		return ((R (*)(JoystickDPad*, IUIWindow*, IJoystickDPadHandler*))(Il2CppBase() + 0x14E4F50))(this, window, handler);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(JoystickDPad*, float))(Il2CppBase() + 0x14E512C))(this, deltaTime);
	}
	template <typename R = void> static R MoveNext(JoystickMove move, IClickableItemsContainer* container, IClickable* selectedItem) {
		return ((R (*)(void *, JoystickMove, IClickableItemsContainer*, IClickable*))(Il2CppBase() + 0x14E5584))(0, move, container, selectedItem);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(JoystickDPad*))(Il2CppBase() + 0x14E5DAC))(this);
	}

};

