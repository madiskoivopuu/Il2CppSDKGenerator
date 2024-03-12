#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputButton"));
	}

	template <typename T = bool> T& IsPressed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _fingerId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _lastPressedFrame() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _lastReleasedFrame() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& onPointerDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onPointerUp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& onDrag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T get_IsPressed() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41864))(this);
	}
	template <typename T = void> T set_IsPressed(bool value) {
		return ((T (*)(InputButton*, bool))(Il2CppBase() + 0x1E4186C))(this, value);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41878))(this);
	}
	template <typename T = void> T set_Target(uintptr_t value) {
		return ((T (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41880))(this, value);
	}
	template <typename T = bool> T get_IsGamePad() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41888))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E418F8))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41984))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41A48))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41AD8))(this, eventData);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41B50))(this);
	}
	template <typename T = bool> T get_GetButton() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41B60))(this);
	}
	template <typename T = bool> T get_GetButtonDown() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41C0C))(this);
	}
	template <typename T = bool> T get_GetButtonUp() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41CD0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InputButton*))(Il2CppBase() + 0x1E41D94))(this);
	}

};

}
